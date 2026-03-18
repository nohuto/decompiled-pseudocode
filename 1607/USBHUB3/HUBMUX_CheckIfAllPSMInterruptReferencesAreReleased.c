/*
 * XREFs of HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased @ 0x1C000CDEC
 * Callers:
 *     HUBHSM_CheckingPSMInterruptReferencesOnReset @ 0x1C0007240 (HUBHSM_CheckingPSMInterruptReferencesOnReset.c)
 *     HUBHSM_CheckingPSMInterruptReferencesOnResetInNoInterrupt @ 0x1C0007270 (HUBHSM_CheckingPSMInterruptReferencesOnResetInNoInterrupt.c)
 *     HUBHSM_CheckingPSMInterruptReferencesOnStop @ 0x1C00072A0 (HUBHSM_CheckingPSMInterruptReferencesOnStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  KIRQL v3; // al

  v1 = a1 + 2264;
  v2 = 2057;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2264));
  if ( *(_DWORD *)(v1 + 20) )
  {
    v2 = 2041;
    _InterlockedOr((volatile signed __int32 *)(v1 + 32), 1u);
  }
  _InterlockedOr((volatile signed __int32 *)(v1 + 32), 2u);
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v3);
  return v2;
}
