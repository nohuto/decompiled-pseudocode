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
  int v5; // ebx
  _WORD v7[256]; // [rsp+40h] [rbp-218h] BYREF

  PopAcquireUmpoPushLock(0LL);
  v4 = PopAlpcClientPort;
  if ( PopAlpcClientPort )
  {
    if ( Size <= 0x1D8 )
    {
      memset(v7, 0, sizeof(v7));
      v7[0] = Size;
      v7[1] = Size + 40;
      memmove(&v7[20], Src, Size);
      v5 = ((__int64 (__fastcall *)(HANDLE, __int64, _WORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))ZwAlpcSendWaitReceivePort)(
             v4,
             0x10000LL,
             v7,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
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
