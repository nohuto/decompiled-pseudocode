/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x140030FBC
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140030C90 (KxFlushNonGlobalTb.c)
 *     KeFreezeExecution @ 0x1400822D0 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x140083960 (KiSendFreeze.c)
 *     KiCheckKeepAlive @ 0x14009F7D8 (KiCheckKeepAlive.c)
 *     KxFlushMultipleTb @ 0x1400B5DC8 (KxFlushMultipleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C892C (KeFlushProcessWriteBuffers.c)
 *     PpmParkUnblockIdle @ 0x1400D520C (PpmParkUnblockIdle.c)
 *     PpmIdleExecuteTransition @ 0x1400DA540 (PpmIdleExecuteTransition.c)
 *     KxFlushSingleTb @ 0x14010A720 (KxFlushSingleTb.c)
 *     PpmPerfApplyProcessorStates @ 0x14012F1C0 (PpmPerfApplyProcessorStates.c)
 *     KxFlushEntireTb @ 0x14013CFFC (KxFlushEntireTb.c)
 *     KeSynchronizeAddressPolicy @ 0x1401D232C (KeSynchronizeAddressPolicy.c)
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     PpmUnlockProcessors @ 0x1402014F8 (PpmUnlockProcessors.c)
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
