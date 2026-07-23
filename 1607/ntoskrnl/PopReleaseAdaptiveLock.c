/*
 * XREFs of PopReleaseAdaptiveLock @ 0x1404D2038
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1403E2A1C (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x14052E6DC (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x140534810 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x140546628 (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x14056D950 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x1406749F4 (PopActiveLockScreenPowerRequest.c)
 *     PopUserPresentOverride @ 0x140674DE8 (PopUserPresentOverride.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x1404D136C (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x1404D25CC (PopNotifyConsoleUserPresent.c)
 *     PopSetWin32kDisplayTimeout @ 0x140674D1C (PopSetWin32kDisplayTimeout.c)
 *     PopSetWin32kInputTimeout @ 0x140674D78 (PopSetWin32kInputTimeout.c)
 */

__int64 PopReleaseAdaptiveLock()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 result; // rax
  __int64 v4; // rdx
  __int128 v5; // xmm0
  unsigned int v6; // edi
  int v7; // ebx
  _BYTE v8[24]; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+44h] [rbp-1Ch]
  __int64 v12; // [rsp+4Ch] [rbp-14h]
  int v13; // [rsp+54h] [rbp-Ch]

  LOBYTE(v10) = 0;
  PopAdpmLockThread = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v8[0] = 0;
  memset(&v8[4], 0, 20);
  if ( (_BYTE)PopLazyContext )
  {
    v5 = PopLazyContext;
    LOBYTE(PopLazyContext) = 0;
    *(_OWORD *)v8 = v5;
    *(_QWORD *)&v8[16] = qword_140302430;
  }
  ExReleaseResourceLite(&PopAdpmLock);
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v0, v1, v2);
  if ( v8[0] )
  {
    if ( v8[18] )
    {
      PopNotifyConsoleUserPresent(0LL, v4, *(unsigned int *)&v8[20]);
      v7 = *(_DWORD *)&v8[4];
      PopSetWin32kDisplayTimeout(*(unsigned int *)&v8[4], *(unsigned int *)&v8[12]);
      v6 = *(_DWORD *)&v8[8];
      PopSetWin32kInputTimeout(*(unsigned int *)&v8[4], *(unsigned int *)&v8[8]);
    }
    else
    {
      v6 = *(_DWORD *)&v8[8];
      v7 = *(_DWORD *)&v8[4];
      if ( v8[16] )
        PopSetWin32kInputTimeout(*(unsigned int *)&v8[4], *(unsigned int *)&v8[8]);
      if ( v8[17] )
        PopSetWin32kDisplayTimeout(*(unsigned int *)&v8[4], *(unsigned int *)&v8[12]);
    }
    v9 = v7;
    HIDWORD(v12) = 7;
    result = PopDispatchStateCallout(&v10, (__int64)&v9);
    if ( v8[19] )
      return PopSetWin32kInputTimeout(0xFFFFFFFFLL, v6);
  }
  return result;
}
