/*
 * XREFs of RegRetrieveValueInfo @ 0x1C0052188
 * Callers:
 *     TelemetryData_pInitWerContext @ 0x1C0051D50 (TelemetryData_pInitWerContext.c)
 * Callees:
 *     RegFreeInfo @ 0x1C005216C (RegFreeInfo.c)
 */

__int64 __fastcall RegRetrieveValueInfo(HANDLE KeyHandle, PUNICODE_STRING ValueName, _QWORD *a3)
{
  PVOID PoolWithTag; // rdi
  ULONG Length; // ebp
  NTSTATUS v8; // eax
  int v9; // ebx
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  PoolWithTag = 0LL;
  *a3 = 0LL;
  Length = 1024;
  do
  {
    RegFreeInfo(PoolWithTag);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x74614454u);
    if ( PoolWithTag )
    {
      ResultLength = 0;
      v8 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
      Length = ResultLength;
      v9 = v8;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  while ( v9 == -2147483643 || v9 == -1073741789 );
  if ( v9 < 0 )
  {
    RegFreeInfo(PoolWithTag);
    *a3 = 0LL;
  }
  else
  {
    *a3 = PoolWithTag;
  }
  return (unsigned int)v9;
}
