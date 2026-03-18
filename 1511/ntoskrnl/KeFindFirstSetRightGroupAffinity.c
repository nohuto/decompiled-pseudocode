/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x1400F6988
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x1400F6730 (KiCallInterruptServiceRoutine.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140122F3C (KiIntSteerChooseInitialTargetProcessors.c)
 *     ExProcessorCounterSetCallback @ 0x1404D07B8 (ExProcessorCounterSetCallback.c)
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanForward64(&v2, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(a1 + 8) + (unsigned int)v2];
}
