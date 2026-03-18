/*
 * XREFs of HUBMUX_QueuePowerUpEventToPSMs @ 0x1C000C430
 * Callers:
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResume @ 0x1C00077A0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResume.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeInS0 @ 0x1C00077C0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeInS0.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x1C00077E0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnStart @ 0x1C0007830 (HUBHSM_WaitingForPortsToAcquireReferenceOnStart.c)
 *     HUBHSM_WaitingForPortsToAcquireReferencePostReset @ 0x1C0007890 (HUBHSM_WaitingForPortsToAcquireReferencePostReset.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueuePowerUpEventToPSMs(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  KIRQL v5; // al
  int v6; // eax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *i; // rdi

  v2 = a1 + 2240;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2240));
  _InterlockedAnd((volatile signed __int32 *)(v2 + 32), 0xFFFFFFF7);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 2272), 0xFFFFFFFD);
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  v6 = *(_DWORD *)(v2 + 36);
  if ( v6 )
  {
    v7 = (_QWORD *)(a1 + 2280);
    *(_DWORD *)(v2 + 12) = v6;
    v8 = *v7 - 248LL;
    for ( i = (_QWORD *)*v7; v7 != i; i = (_QWORD *)*i )
    {
      _InterlockedOr((volatile signed __int32 *)(v8 + 264), 4u);
      (*(void (__fastcall **)(__int64, _QWORD))(v8 + 1240))(v8, a2);
      v8 = *i - 248LL;
    }
  }
  else
  {
    HUBSM_AddEvent(a1 + 1184, 0x806u);
  }
}
