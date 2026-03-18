/*
 * XREFs of SepRmReferenceCapTable @ 0x140201A60
 * Callers:
 *     SepRmReferenceFindCap @ 0x140201B24 (SepRmReferenceFindCap.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 SepRmReferenceCapTable()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&SepRmCapTableLock, 0LL, 0LL);
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
