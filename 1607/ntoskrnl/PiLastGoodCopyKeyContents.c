/*
 * XREFs of PiLastGoodCopyKeyContents @ 0x1407B90B4
 * Callers:
 *     PpLastGoodDoBootProcessing @ 0x1407B901C (PpLastGoodDoBootProcessing.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14015A450 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x14015BAF0 (ZwDeleteKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiLastGoodCopyKeyContents(UNICODE_STRING *a1, UNICODE_STRING *a2, char a3)
{
  char *PoolWithTag; // rdi
  NTSTATUS v6; // ebx
  NTSTATUS v8; // eax
  HANDLE v9; // rcx
  ULONG v10; // esi
  NTSTATUS v11; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES v16; // [rsp+90h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+100h] [rbp+77h] BYREF
  ULONG Disposition; // [rsp+108h] [rbp+7Fh] BYREF

  LOBYTE(ResultLength) = a3;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x418uLL, 0x674C7050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    v16.Length = 48;
    v16.RootDirectory = 0LL;
    v16.Attributes = 576;
    v16.ObjectName = a2;
    *(_OWORD *)&v16.SecurityDescriptor = 0LL;
    v8 = ZwCreateKey(&Handle, 0xF003Fu, &v16, 0, 0LL, 0, &Disposition);
    v9 = KeyHandle;
    v6 = v8;
    if ( v8 >= 0 )
    {
      v6 = ZwEnumerateValueKey(KeyHandle, 0, KeyValueFullInformation, PoolWithTag, 0x418u, &ResultLength);
      v10 = 1;
      if ( v6 < 0 )
      {
LABEL_9:
        if ( v6 == -2147483622 )
          v6 = 0;
        if ( v6 >= 0 )
          ZwDeleteKey(KeyHandle);
      }
      else
      {
        while ( 1 )
        {
          ValueName.Buffer = (wchar_t *)(PoolWithTag + 20);
          ValueName.Length = *((_WORD *)PoolWithTag + 8);
          ValueName.MaximumLength = ValueName.Length;
          v6 = ZwSetValueKey(
                 Handle,
                 &ValueName,
                 0,
                 *((_DWORD *)PoolWithTag + 1),
                 &PoolWithTag[*((unsigned int *)PoolWithTag + 2)],
                 *((_DWORD *)PoolWithTag + 3));
          if ( v6 < 0 )
            break;
          v11 = ZwEnumerateValueKey(KeyHandle, v10++, KeyValueFullInformation, PoolWithTag, 0x418u, &ResultLength);
          v6 = v11;
          if ( v11 < 0 )
            goto LABEL_9;
        }
      }
      ZwClose(KeyHandle);
      v9 = Handle;
    }
    ZwClose(v9);
  }
  ExFreePoolWithTag(PoolWithTag, 0x674C7050u);
  return (unsigned int)v6;
}
