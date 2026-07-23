/*
 * XREFs of PopEnableIrpWatchdog @ 0x14012B764
 * Callers:
 *     PopQueueQuerySetIrp @ 0x14012B5D8 (PopQueueQuerySetIrp.c)
 *     PopDequeueQuerySetIrp @ 0x14012BD3C (PopDequeueQuerySetIrp.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     PopComputeWatchdogTimeout @ 0x14012B800 (PopComputeWatchdogTimeout.c)
 */

__int64 __fastcall PopEnableIrpWatchdog(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 72LL * (*(char *)(a1 + 66) - 1) + 272);
  result = PopComputeWatchdogTimeout(v1);
  if ( (_DWORD)result )
  {
    *(_BYTE *)(v1 + 196) = 1;
    *(_DWORD *)(v1 + 120) = 275;
    *(_QWORD *)(v1 + 152) = v1;
    *(_QWORD *)(v1 + 144) = PopIrpWatchdog;
    *(_QWORD *)(v1 + 176) = 0LL;
    *(_QWORD *)(v1 + 136) = 0LL;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_BYTE *)(v1 + 56) = 8;
    *(_QWORD *)(v1 + 72) = v1 + 64;
    *(_QWORD *)(v1 + 64) = v1 + 64;
    *(_QWORD *)(v1 + 80) = 0LL;
    *(_QWORD *)(v1 + 112) = 0LL;
    KiSetTimerEx(v1 + 56, -10000000LL * (unsigned int)result, 0, 0, v1 + 120);
    result = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(v1 + 48) = MEMORY[0xFFFFF78000000008];
  }
  return result;
}
