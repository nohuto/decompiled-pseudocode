/*
 * XREFs of IopPassiveInterruptWorker @ 0x1401BF60C
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FF1C8 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FF490 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x140143830 (xHalUnmaskInterrupt.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1401BF474 (IopDereferencePassiveInterruptBlock.c)
 *     KiInterruptDispatchCommon @ 0x1401C9E9C (KiInterruptDispatchCommon.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140602C78 (IopAcquireReleaseDispatcherLock.c)
 */

void __fastcall IopPassiveInterruptWorker(char *P, __int64 a2)
{
  unsigned __int8 CurrentIrql; // si
  KSPIN_LOCK *v4; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-28h] BYREF

  LOBYTE(a2) = 1;
  IopAcquireReleaseDispatcherLock(P, a2);
  if ( !P[24] )
  {
    Affinity = (struct _GROUP_AFFINITY)*((_OWORD *)P + 2);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KxAcquireSpinLock((PKSPIN_LOCK)P + 6);
    v4 = (KSPIN_LOCK *)(P + 48);
    if ( !P[57] )
      break;
    P[57] = 0;
    KxReleaseSpinLock(v4);
    __writecr8(CurrentIrql);
    KiInterruptDispatchCommon(P[24] != 0, *((_DWORD *)P + 4), 1, 0, 0LL);
  }
  P[56] = 0;
  KxReleaseSpinLock(v4);
  __writecr8(CurrentIrql);
  if ( !P[24] )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  IopAcquireReleaseDispatcherLock(P, 0LL);
  if ( !*((_DWORD *)P + 7) )
    off_1402D27E8();
  IopDereferencePassiveInterruptBlock(P);
}
