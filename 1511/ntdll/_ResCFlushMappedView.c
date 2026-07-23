/*
 * XREFs of _ResCFlushMappedView @ 0x1800F8F28
 * Callers:
 *     ResCHitsFree @ 0x1800F7EC8 (ResCHitsFree.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     ZwFlushVirtualMemory @ 0x1800A6C50 (ZwFlushVirtualMemory.c)
 */

__int64 __fastcall ResCFlushMappedView(void *a1)
{
  int v1; // eax
  LONG v2; // eax
  _IO_STATUS_BLOCK v4; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR v5; // [rsp+40h] [rbp+8h] BYREF
  PVOID v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = a1;
  v1 = ZwFlushVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v6, &v5, &v4);
  if ( v1 >= 0 )
    return 1LL;
  v2 = RtlNtStatusToDosError(v1);
  RtlSetLastWin32Error(v2);
  return 0LL;
}
