/*
 * XREFs of PopCallPowerSettingCallback @ 0x1403F25C0
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x1403F4EB0 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KeAreApcsDisabled @ 0x140009710 (KeAreApcsDisabled.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PopDiagTracePowerSettingStart @ 0x1403F2430 (PopDiagTracePowerSettingStart.c)
 *     PopDiagTracePowerSettingStop @ 0x1403F2514 (PopDiagTracePowerSettingStop.c)
 *     PopUnreferencePowerSetting @ 0x1403F4B18 (PopUnreferencePowerSetting.c)
 */

void __fastcall PopCallPowerSettingCallback(_QWORD *a1, __int64 a2)
{
  _DWORD *v3; // rsi
  _DWORD *v4; // rax
  bool v5; // bl

  if ( a2 )
  {
    if ( a1 )
    {
      a1[9] = a2;
      if ( !a1[3] )
      {
        a1[3] = KeGetCurrentThread();
        do
        {
          v3 = (_DWORD *)a1[9];
          ++*v3;
          KeReleaseGuardedMutex(&PopSettingLock);
          PopDiagTracePowerSettingStart(a1[10], (__int64)a1 + 36, v3[1], (__int64)(v3 + 3));
          ((void (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD))a1[10])(
            (__int64)a1 + 52,
            v3 + 3,
            (unsigned int)v3[1],
            a1[11]);
          PopDiagTracePowerSettingStop(a1[10], (__int64)a1 + 36);
          if ( KeAreApcsDisabled() )
            __fastfail(0x20u);
          ExAcquireFastMutex(&PopSettingLock);
          v4 = (_DWORD *)a1[9];
          v5 = v4 && v3 != v4;
          PopUnreferencePowerSetting(v3);
        }
        while ( v5 );
        a1[3] = 0LL;
      }
    }
  }
}
