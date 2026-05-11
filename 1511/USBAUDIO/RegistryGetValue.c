/*
 * XREFs of RegistryGetValue @ 0x1C0019F74
 * Callers:
 *     RegistryReadPnPKeyValue @ 0x1C001A08C (RegistryReadPnPKeyValue.c)
 * Callees:
 *     memmove @ 0x1C0007CC0 (memmove.c)
 */

__int64 __fastcall RegistryGetValue(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, _QWORD *a4)
{
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  _DWORD *PoolWithTag; // rdi
  PVOID v9; // rax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  ResultLength = a3;
  RtlInitUnicodeString(&ValueName, a2);
  v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, 0LL, 0, &ResultLength);
  v7 = v6;
  if ( v6 == -2147483643 || v6 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x41627845u);
    if ( PoolWithTag )
    {
      v7 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, PoolWithTag, ResultLength, &ResultLength);
      if ( v7 >= 0 )
      {
        if ( PoolWithTag[1] == 4 )
        {
          v9 = ExAllocatePoolWithTag(PagedPool, (unsigned int)PoolWithTag[3], 0x41627845u);
          *a4 = v9;
          if ( v9 )
            memmove(v9, (char *)PoolWithTag + (unsigned int)PoolWithTag[2], (unsigned int)PoolWithTag[3]);
          else
            v7 = -1073741670;
        }
        else
        {
          v7 = -1073741811;
        }
      }
      ExFreePool(PoolWithTag);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v7;
}
