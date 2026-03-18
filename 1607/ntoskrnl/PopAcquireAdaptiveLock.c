/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1404EF160
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1403E2A1C (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x14052E19C (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x1405342D0 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x1405460E8 (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x14056D410 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x140674910 (PopActiveLockScreenPowerRequest.c)
 *     PopUserPresentOverride @ 0x140674D04 (PopUserPresentOverride.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1404EF230 (PoBlockConsoleSwitch.c)
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
    qword_140302410 = 0LL;
  }
  return result;
}
