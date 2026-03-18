/*
 * XREFs of HUBMUX_QueueSurpriseRemovalToAllPSMs @ 0x1C000CCDC
 * Callers:
 *     HUBHSM_CheckingPSMInterruptReferencesOnReset @ 0x1C0007240 (HUBHSM_CheckingPSMInterruptReferencesOnReset.c)
 *     HUBHSM_CheckingPSMInterruptReferencesOnResetInNoInterrupt @ 0x1C0007270 (HUBHSM_CheckingPSMInterruptReferencesOnResetInNoInterrupt.c)
 *     HUBFDO_EvtDeviceSurpriseRemoval @ 0x1C00647D0 (HUBFDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueueSurpriseRemovalToAllPSMs(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 i; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rsi
  KIRQL v6; // al

  v1 = a1 + 2264;
  v2 = a1 + 2304;
  for ( i = *(_QWORD *)(a1 + 2304); ; i = *v5 )
  {
    v4 = i - 248;
    v5 = (__int64 *)(v4 + 248);
    if ( v2 == v4 + 248 )
      break;
    (*(void (__fastcall **)(__int64, __int64))(v4 + 1240))(v4, 3038LL);
  }
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1);
  _InterlockedOr((volatile signed __int32 *)(v1 + 32), 8u);
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v6);
}
