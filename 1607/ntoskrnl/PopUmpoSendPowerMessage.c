/*
 * XREFs of PopUmpoSendPowerMessage @ 0x1400F94C4
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400F9088 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140126DF8 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoSendReapplyBrightnessSettings @ 0x14014C344 (PopUmpoSendReapplyBrightnessSettings.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x140503034 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopEvaluateGlobalUserStatus @ 0x14052EC84 (PopEvaluateGlobalUserStatus.c)
 *     PopUmpoSendLegacyEvent @ 0x140548C70 (PopUmpoSendLegacyEvent.c)
 *     PopUserPresencePredictionModeCallback @ 0x140580990 (PopUserPresencePredictionModeCallback.c)
 *     PopMonitorProcessBrightnessAction @ 0x1406738EC (PopMonitorProcessBrightnessAction.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140009A34 (AlpcGetMessageAttribute.c)
 *     PopUmpoSendReapplyBrightnessSettings @ 0x14014C344 (PopUmpoSendReapplyBrightnessSettings.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14015B2F0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopUmpoProcessMessage @ 0x1403F69E8 (PopUmpoProcessMessage.c)
 *     PopReleaseUmpoPushLock @ 0x1405034FC (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x140503550 (PopAcquireUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(void *Src, size_t Size, char a3)
{
  HANDLE v6; // rdi
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  ULONG_PTR BufferLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE SendMessageA[512]; // [rsp+F0h] [rbp-10h] BYREF

  PopAcquireUmpoPushLock(0LL);
  v6 = PopAlpcClientPort;
  if ( PopAlpcClientPort )
  {
    if ( Size > 0x1D8 )
    {
      v8 = -2147483643;
      goto LABEL_6;
    }
    memset(SendMessageA, 0, sizeof(SendMessageA));
    *(_WORD *)SendMessageA = Size;
    *(_WORD *)&SendMessageA[2] = Size + 40;
    memmove(&SendMessageA[40], Src, Size);
    if ( a3 )
    {
      memset(Buffer, 0, sizeof(Buffer));
      BufferLength[0] = 512LL;
      v8 = ZwAlpcSendWaitReceivePort(
             v6,
             0x20000u,
             (PPORT_MESSAGE)SendMessageA,
             0LL,
             (PPORT_MESSAGE)SendMessageA,
             BufferLength,
             Buffer,
             0LL);
      if ( v8 < 0 )
        goto LABEL_6;
      MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(Buffer, 0x20000000u);
      v7 = PopUmpoProcessMessage((PPORT_MESSAGE)SendMessageA, MessageAttribute);
    }
    else
    {
      v7 = ZwAlpcSendWaitReceivePort(v6, 0x10000u, (PPORT_MESSAGE)SendMessageA, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    v8 = v7;
  }
  else
  {
    v8 = -1073741758;
  }
LABEL_6:
  PopReleaseUmpoPushLock();
  if ( PopResendReapplyBrightnessSettings && v8 >= 0 )
  {
    PopResendReapplyBrightnessSettings = 0;
    PopUmpoSendReapplyBrightnessSettings();
  }
  return (unsigned int)v8;
}
