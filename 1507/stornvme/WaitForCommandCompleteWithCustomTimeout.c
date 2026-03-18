/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C000CD2C
 * Callers:
 *     IoQueuesCreation @ 0x1C00039EC (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C0003C44 (IoQueuesDeletion.c)
 *     NVMeControllerIdentify @ 0x1C000AFA0 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000B104 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000B448 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000B6F8 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000B874 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000B974 (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000BAD8 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000BC64 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000BDA4 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000BE78 (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000BF40 (NVMeConfigAsyncEvent.c)
 * Callees:
 *     RequestPendingCompletion @ 0x1C0001148 (RequestPendingCompletion.c)
 *     NVMeRequestComplete @ 0x1C00023B8 (NVMeRequestComplete.c)
 *     ProcessCompletionQueues @ 0x1C000CAFC (ProcessCompletionQueues.c)
 */

char __fastcall WaitForCommandCompleteWithCustomTimeout(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v8; // rbx
  char v9; // r15
  unsigned int v10; // ebp
  char result; // al
  unsigned int v12; // edx
  _DWORD *v13; // rax
  unsigned int v14; // edx

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  v9 = 0;
  v10 = 0;
  result = 1;
  if ( !a4 )
    goto LABEL_25;
  do
  {
    if ( !result )
      break;
    if ( a3 && !v9 && RequestPendingCompletion(a1, 0) )
    {
      ProcessCompletionQueues(a1, 0, a3);
      v9 = 1;
    }
    StorPortStallExecution(1000LL);
    if ( a2 == a1 + 560 )
      goto LABEL_18;
    v12 = 0;
    while ( a2 != 104LL * v12 + a1 + 664 )
    {
      if ( ++v12 >= 4 )
      {
        result = *(_BYTE *)(v8 + 4186) == 0;
        goto LABEL_23;
      }
    }
    if ( a2 == a1 + 560 )
    {
LABEL_18:
      v13 = (_DWORD *)(a1 + 552);
    }
    else
    {
      v14 = 0;
      while ( a2 != 104LL * v14 + a1 + 664 )
      {
        if ( ++v14 >= 4 )
          goto LABEL_22;
      }
      v13 = (_DWORD *)(104LL * v14 + a1 + 656);
    }
    if ( v13 && *v13 == 1 )
      result = 1;
    else
LABEL_22:
      result = 0;
LABEL_23:
    ++v10;
  }
  while ( v10 < a4 );
  if ( v10 >= a4 )
  {
LABEL_25:
    *(_BYTE *)(a2 + 3) = 9;
    return NVMeRequestComplete(a1, a2);
  }
  return result;
}
