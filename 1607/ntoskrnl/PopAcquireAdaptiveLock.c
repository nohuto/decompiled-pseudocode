/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1404D1254
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1403E2A1C (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x14052E6DC (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x140534810 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x140546628 (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x14056D950 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x1406749F4 (PopActiveLockScreenPowerRequest.c)
 *     PopUserPresentOverride @ 0x140674DE8 (PopUserPresentOverride.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1404D1324 (PoBlockConsoleSwitch.c)
 */

struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[4]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+2Ch] [rbp-2Ch]
  __int64 v8; // [rsp+34h] [rbp-24h]
  int v9; // [rsp+3Ch] [rbp-1Ch]

  v6[0] = 0;
  v1 = -1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( !a1 )
  {
    v1 = PoBlockConsoleSwitch(v6);
    Interval.QuadPart = -100000LL;
    while ( v1 != PopConsoleContext )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  result = KeGetCurrentThread();
  PopAdpmLockThread = (__int64)result;
  if ( !a1 )
  {
    result = 0LL;
    PopLazyContext = 1uLL;
    DWORD1(PopLazyContext) = v1;
    qword_140302430 = 0LL;
  }
  return result;
}
