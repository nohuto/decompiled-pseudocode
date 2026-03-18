/*
 * XREFs of KiGetHeteroCpuPolicyThread @ 0x1400CEF4C
 * Callers:
 *     KiFindReadyThread @ 0x1400CEF5C (KiFindReadyThread.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400DD2C0 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x1401D7F44 (KiHeteroChooseTargetProcessor.c)
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
