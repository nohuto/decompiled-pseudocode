/*
 * XREFs of PopAcquireAdaptiveLock @ 0x14055DCE8
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14040A0DC (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x14055DA90 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x140569878 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x140582E9C (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140598BF8 (PopAdaptivePowerSettingCallback.c)
 *     PopUserPresentOverride @ 0x1406BCD58 (PopUserPresentOverride.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x14055E220 (PoBlockConsoleSwitch.c)
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
    qword_14032D390 = 0LL;
  }
  return result;
}
