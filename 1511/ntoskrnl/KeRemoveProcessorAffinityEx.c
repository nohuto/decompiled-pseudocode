/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x14007C640
 * Callers:
 *     KxFlushSingleTb @ 0x1400077D0 (KxFlushSingleTb.c)
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     PpmParkUnblockIdle @ 0x140075678 (PpmParkUnblockIdle.c)
 *     KxFlushNonGlobalTb @ 0x14007C310 (KxFlushNonGlobalTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140095EE8 (KeFlushProcessWriteBuffers.c)
 *     KiCheckKeepAlive @ 0x1400E255C (KiCheckKeepAlive.c)
 *     KxFlushMultipleTb @ 0x140102D90 (KxFlushMultipleTb.c)
 *     PpmPerfApplyProcessorStates @ 0x140123FFC (PpmPerfApplyProcessorStates.c)
 *     KeSynchronizeAddressPolicy @ 0x1401C39B0 (KeSynchronizeAddressPolicy.c)
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1401C8B48 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1401C9324 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x1401E8AD0 (PpmUnlockProcessors.c)
 *     PnprQuiesceProcessors @ 0x1403B079C (PnprQuiesceProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = KiProcessorIndexToNumberMappingTable[a2];
  result = v3 >> 6;
  if ( *a1 > (unsigned int)result )
  {
    v5 = (unsigned int)result;
    result = *(_QWORD *)&a1[4 * result + 4] & ~(1LL << (v3 & 0x3F));
    *(_QWORD *)&a1[4 * v5 + 4] = result;
  }
  return result;
}
