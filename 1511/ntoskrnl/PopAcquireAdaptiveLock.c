/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1404C4150
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1403B55B0 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x1404F2D64 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x1404F537C (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14050BA7C (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x14053D648 (PopAdaptivePowerSettingCallback.c)
 *     PopUserPresentOverride @ 0x14063C6E8 (PopUserPresentOverride.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1404C4220 (PoBlockConsoleSwitch.c)
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
    qword_1402DCFB0 = 0LL;
  }
  return result;
}
