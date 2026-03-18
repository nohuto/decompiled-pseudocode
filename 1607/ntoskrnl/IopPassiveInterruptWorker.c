/*
 * XREFs of IopPassiveInterruptWorker @ 0x1401CDB94
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C9044 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400CB014 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14014CC60 (xHalUnmaskInterrupt.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1401CD9FC (IopDereferencePassiveInterruptBlock.c)
 *     KiInterruptDispatchCommon @ 0x1401D8668 (KiInterruptDispatchCommon.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14062CFF4 (IopAcquireReleaseDispatcherLock.c)
 */

void __fastcall IopPassiveInterruptWorker(char *P, __int64 a2)
{
  unsigned __int8 CurrentIrql; // si
  KSPIN_LOCK *v4; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-28h] BYREF

  LOBYTE(a2) = 1;
  IopAcquireReleaseDispatcherLock(P, a2);
  if ( !P[28] )
  {
    Affinity = *(struct _GROUP_AFFINITY *)(P + 40);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KxAcquireSpinLock((PKSPIN_LOCK)P + 7);
    v4 = (KSPIN_LOCK *)(P + 56);
    if ( !P[65] )
      break;
    P[65] = 0;
    KxReleaseSpinLock(v4);
    __writecr8(CurrentIrql);
    KiInterruptDispatchCommon(P[28] != 0, *((_DWORD *)P + 5), 1, 0, 0LL);
  }
  P[64] = 0;
  KxReleaseSpinLock(v4);
  __writecr8(CurrentIrql);
  if ( !P[28] )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  IopAcquireReleaseDispatcherLock(P, 0LL);
  if ( !*((_DWORD *)P + 8) )
    off_1402F2488();
  IopDereferencePassiveInterruptBlock(P);
}
