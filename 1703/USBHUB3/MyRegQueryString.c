/*
 * XREFs of MyRegQueryString @ 0x1C0035E0C
 * Callers:
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C00358D8 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     memmove @ 0x1C0038200 (memmove.c)
 */

__int64 __fastcall MyRegQueryString(HANDLE KeyHandle, const WCHAR *a2, PVOID *a3)
{
  _DWORD *PoolWithTag; // rdi
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  _DWORD *v8; // rax
  PVOID v9; // rcx
  unsigned int v10; // ebp
  PVOID v11; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x55445246u);
  if ( PoolWithTag )
  {
    v6 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, 0x10u, &ResultLength);
    v7 = v6;
    if ( v6 == -2147483643 || v6 == -1073741789 )
    {
      while ( 1 )
      {
        v10 = PoolWithTag[2];
        v11 = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x55445246u);
        *a3 = v11;
        if ( !v11 )
        {
          v7 = -1073741670;
          goto LABEL_11;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        v8 = ExAllocatePoolWithTag(NonPagedPoolNx, ResultLength, 0x55445246u);
        PoolWithTag = v8;
        if ( !v8 )
          goto LABEL_15;
        v7 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v8, ResultLength, &ResultLength);
        if ( v7 < 0 )
          goto LABEL_11;
        v9 = *a3;
        if ( v10 == PoolWithTag[2] )
          break;
        ExFreePoolWithTag(v9, 0);
        *a3 = 0LL;
      }
      memmove(v9, PoolWithTag + 3, v10);
    }
  }
  else
  {
LABEL_15:
    v7 = -1073741670;
    ExFreePoolWithTag(0LL, 0);
  }
  if ( v7 < 0 )
  {
LABEL_11:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
    }
  }
  return (unsigned int)v7;
}
