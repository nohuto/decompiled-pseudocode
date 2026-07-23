/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x140030B3C
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140030810 (KxFlushNonGlobalTb.c)
 *     KeFreezeExecution @ 0x140082F4C (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1400845E0 (KiSendFreeze.c)
 *     KiCheckKeepAlive @ 0x14009E100 (KiCheckKeepAlive.c)
 *     KxFlushMultipleTb @ 0x1400B3BF0 (KxFlushMultipleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C67CC (KeFlushProcessWriteBuffers.c)
 *     PpmParkUnblockIdle @ 0x1400D30AC (PpmParkUnblockIdle.c)
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 *     KxFlushSingleTb @ 0x1401084A0 (KxFlushSingleTb.c)
 *     PpmPerfApplyProcessorStates @ 0x14012F730 (PpmPerfApplyProcessorStates.c)
 *     KxFlushEntireTb @ 0x14013D56C (KxFlushEntireTb.c)
 *     KeSynchronizeAddressPolicy @ 0x1401D2158 (KeSynchronizeAddressPolicy.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     PpmUnlockProcessors @ 0x140201324 (PpmUnlockProcessors.c)
 *     PnprQuiesceProcessors @ 0x1403DC8B8 (PnprQuiesceProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  unsigned int v4; // edx

  v2 = KiProcessorIndexToNumberMappingTable[a2];
  result = *a1;
  v4 = v2 >> 6;
  if ( (unsigned int)result > v2 >> 6 )
  {
    result = *(_QWORD *)&a1[4 * v4 + 4] & ~(1LL << (v2 & 0x3F));
    *(_QWORD *)&a1[4 * v4 + 4] = result;
  }
  return result;
}
