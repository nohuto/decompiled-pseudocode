/*
 * XREFs of PopUmpoSendPowerMessage @ 0x140098C28
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400981B4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendReapplyBrightnessSettings @ 0x1401426B0 (PopUmpoSendReapplyBrightnessSettings.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x140455BB4 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopEvaluateGlobalUserStatus @ 0x1404F3198 (PopEvaluateGlobalUserStatus.c)
 *     PopUmpoSendLegacyEvent @ 0x1404FA078 (PopUmpoSendLegacyEvent.c)
 *     PopUserPresencePredictionModeCallback @ 0x14054AC60 (PopUserPresencePredictionModeCallback.c)
 *     PopMonitorProcessBrightnessAction @ 0x14063C294 (PopMonitorProcessBrightnessAction.c)
 * Callees:
 *     PopUmpoSendReapplyBrightnessSettings @ 0x1401426B0 (PopUmpoSendReapplyBrightnessSettings.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140151720 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopReleaseUmpoPushLock @ 0x140455BF4 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x140455C48 (PopAcquireUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(void *Src, size_t Size)
{
  HANDLE v4; // rdi
  NTSTATUS v5; // ebx
  _BYTE SendMessageA[512]; // [rsp+40h] [rbp-218h] BYREF

  PopAcquireUmpoPushLock(0LL);
  v4 = PopAlpcClientPort;
  if ( PopAlpcClientPort )
  {
    if ( Size <= 0x1D8 )
    {
      memset(SendMessageA, 0, sizeof(SendMessageA));
      *(_WORD *)SendMessageA = Size;
      *(_WORD *)&SendMessageA[2] = Size + 40;
      memmove(&SendMessageA[40], Src, Size);
      v5 = ZwAlpcSendWaitReceivePort(v4, 0x10000u, (PPORT_MESSAGE)SendMessageA, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v5 = -2147483643;
    }
  }
  else
  {
    v5 = -1073741758;
  }
  PopReleaseUmpoPushLock();
  if ( PopResendReapplyBrightnessSettings && v5 >= 0 )
  {
    PopResendReapplyBrightnessSettings = 0;
    PopUmpoSendReapplyBrightnessSettings();
  }
  return (unsigned int)v5;
}
