/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04
 * Callers:
 *     NVMeConfigAsyncEvent @ 0x1C000CA58 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C000CB24 (NVMeControllerIdentify.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CC78 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000CE34 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000D06C (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C000D18C (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C000D2C0 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C000D384 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C000D4B0 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeSetArbitration @ 0x1C000DE10 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000DF1C (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000DFF0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000E190 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C000E290 (NVMeSetIoQueueCount.c)
 *     NVMeSetPowerState @ 0x1C000E534 (NVMeSetPowerState.c)
 *     WaitForCommandComplete @ 0x1C000ECF8 (WaitForCommandComplete.c)
 * Callees:
 *     RequestPendingCompletion @ 0x1C00029B0 (RequestPendingCompletion.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     IsInternalSrb @ 0x1C00047E8 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C000561C (GetLocalCommand.c)
 *     NVMeRequestComplete @ 0x1C0008530 (NVMeRequestComplete.c)
 *     ProcessCompletionQueues @ 0x1C000E914 (ProcessCompletionQueues.c)
 */

char __fastcall WaitForCommandCompleteWithCustomTimeout(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  _DWORD *SrbExtension; // rax
  char v9; // r15
  unsigned int v10; // esi
  _DWORD *v11; // r13
  bool v12; // r10
  int v13; // r9d

  SrbExtension = (_DWORD *)GetSrbExtension(a2);
  v9 = 0;
  v10 = 0;
  v11 = SrbExtension;
  v12 = 1;
  if ( !v13 )
    goto LABEL_15;
  do
  {
    if ( !v12 )
      break;
    if ( a3 && !v9 && (unsigned __int8)RequestPendingCompletion(a1, 0) )
    {
      ProcessCompletionQueues(a1, 0, a3);
      v9 = 1;
    }
    StorPortExtendedFunction(81LL, a1, 1000LL);
    LOBYTE(SrbExtension) = IsInternalSrb(a1, a2);
    if ( (_BYTE)SrbExtension )
    {
      SrbExtension = (_DWORD *)GetLocalCommand(a1, a2);
      v12 = SrbExtension && *SrbExtension == 1;
    }
    else
    {
      v12 = (*((_BYTE *)v11 + 4245) & 8) == 0;
    }
    ++v10;
  }
  while ( v10 < a4 );
  if ( v10 >= a4 )
  {
LABEL_15:
    *(_BYTE *)(a2 + 3) = 9;
    LOBYTE(SrbExtension) = (unsigned __int8)NVMeRequestComplete(a1, a2);
  }
  return (char)SrbExtension;
}
