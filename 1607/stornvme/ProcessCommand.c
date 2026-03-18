/*
 * XREFs of ProcessCommand @ 0x1C0002690
 * Callers:
 *     NVMeSplitIoCommandCompletion @ 0x1C0002350 (NVMeSplitIoCommandCompletion.c)
 *     NVMeHwStartIo @ 0x1C0002530 (NVMeHwStartIo.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C000A820 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C000ABE0 (ProtocolCommandCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C000B620 (QueryTemperatureInfoHealthLogCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C870 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeConfigAsyncEvent @ 0x1C000CA58 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C000CB24 (NVMeControllerIdentify.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CC78 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000CE34 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000D06C (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C000D18C (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C000D2C0 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C000D384 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C000D4B0 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000D574 (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C000DA70 (NVMeNameSpaceIdentify.c)
 *     NVMeSetArbitration @ 0x1C000DE10 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000DF1C (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000DFF0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000E190 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C000E290 (NVMeSetIoQueueCount.c)
 *     NVMeSetPowerState @ 0x1C000E534 (NVMeSetPowerState.c)
 * Callees:
 *     NVMeRequestComplete @ 0x1C0008530 (NVMeRequestComplete.c)
 *     ProcessCommandInSpecificQueue @ 0x1C000E6E8 (ProcessCommandInSpecificQueue.c)
 */

__int64 __fastcall ProcessCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // r12
  __int64 v7; // rbp
  __int64 result; // rax
  unsigned int v9; // eax
  int v10; // r14d
  unsigned int v11; // r15d
  int v12; // edx

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = *(_WORD *)(v4 + 4236);
  if ( v5 )
  {
    v6 = *(_WORD *)(a1 + 230);
    v7 = *(_QWORD *)(a1 + 544) + 136LL * (v5 - 1);
  }
  else
  {
    v6 = *(_WORD *)(a1 + 228);
    v7 = a1 + 240;
  }
  result = ProcessCommandInSpecificQueue(a1, a2, v7, v6);
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a2 + 3) == 5
      && *(_WORD *)(v7 + 40)
      && (v9 = *(unsigned __int16 *)(a1 + 232), v10 = 0, *(_BYTE *)(v4 + 4245) |= 0x10u, (v11 = v9) != 0) )
    {
      while ( 1 )
      {
        v12 = (*(unsigned __int16 *)(v7 + 40) + 1) % *(unsigned __int16 *)(a1 + 232);
        if ( !(_WORD)v12 )
          LOWORD(v12) = 1;
        *(_WORD *)(v4 + 4236) = v12;
        v7 = *(_QWORD *)(a1 + 544) + 136LL * ((unsigned __int16)v12 - 1);
        result = ProcessCommandInSpecificQueue(a1, a2, v7, v6);
        if ( (_BYTE)result )
          break;
        if ( *(_BYTE *)(a2 + 3) == 5 && ++v10 < v11 )
          continue;
        return NVMeRequestComplete(a1, a2);
      }
    }
    else
    {
      return NVMeRequestComplete(a1, a2);
    }
  }
  return result;
}
