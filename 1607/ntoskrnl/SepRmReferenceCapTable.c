/*
 * XREFs of SepRmReferenceCapTable @ 0x14021B5AC
 * Callers:
 *     SepRmReferenceFindCap @ 0x14021B670 (SepRmReferenceFindCap.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

__int64 SepRmReferenceCapTable()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&SepRmCapTableLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&SepRmCapTableLock, v1, (ULONG_PTR)&SepRmCapTableLock);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  v2 = SepRmCapTable;
  if ( SepRmCapTable && _InterlockedIncrement64((volatile signed __int64 *)(SepRmCapTable + 40)) <= 1 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock);
  KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
  KeLeaveCriticalRegion();
  return v2;
}
