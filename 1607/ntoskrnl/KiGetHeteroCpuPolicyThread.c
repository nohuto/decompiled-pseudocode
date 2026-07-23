/*
 * XREFs of KiGetHeteroCpuPolicyThread @ 0x1400CCDEC
 * Callers:
 *     KiFindReadyThread @ 0x1400CCDFC (KiFindReadyThread.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400DB160 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x1401D7D70 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetHeteroCpuPolicyThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 125);
  if ( *(unsigned __int8 *)(a1 + 125) >= 5u )
    return KiConvertDynamicHeteroPolicy(a1, a2, a2);
  return result;
}
