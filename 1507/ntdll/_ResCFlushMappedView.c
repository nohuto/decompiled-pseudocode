/*
 * XREFs of _ResCFlushMappedView @ 0x1800F9610
 * Callers:
 *     ResCHitsFree @ 0x1800F83AC (ResCHitsFree.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     ZwFlushVirtualMemory @ 0x1800946C0 (ZwFlushVirtualMemory.c)
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
