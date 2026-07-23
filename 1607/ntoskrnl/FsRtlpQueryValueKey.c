/*
 * XREFs of FsRtlpQueryValueKey @ 0x14061FB84
 * Callers:
 *     FsRtlHeatInit @ 0x14061F6FC (FsRtlHeatInit.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall FsRtlpQueryValueKey(UNICODE_STRING *a1, UNICODE_STRING *a2, ULONG *a3, PVOID *a4, _BYTE *a5)
{
  NTSTATUS result; // eax
  ULONG Length; // edi
  _BYTE *i; // r15
  NTSTATUS v11; // eax
  int v12; // ebx
  PVOID PoolWithTag; // rbx
  HANDLE KeyHandle; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+30h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a2 )
    {
      Length = *a3;
      for ( i = a5; ; *i = 1 )
      {
        v11 = ZwQueryValueKey(KeyHandle, a2, KeyValueFullInformation, *a4, Length, &ResultLength);
        v12 = v11;
        if ( v11 != -1073741789 && v11 != -2147483643 )
          break;
        if ( Length != *a3 )
          break;
        Length = ResultLength;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x68745346u);
        if ( !PoolWithTag )
        {
          v12 = -1073741670;
          break;
        }
        if ( *i )
          ExFreePoolWithTag(*a4, 0);
        *a4 = PoolWithTag;
        *a3 = Length;
      }
      ZwClose(KeyHandle);
      if ( v12 >= 0 && !*((_DWORD *)*a4 + 3) )
        return -1073741772;
      return v12;
    }
    else
    {
      ZwClose(KeyHandle);
      return 0;
    }
  }
  return result;
}
