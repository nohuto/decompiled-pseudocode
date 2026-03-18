/*
 * XREFs of PopCallPowerSettingCallback @ 0x140456E2C
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x140456D10 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
 *     PopUnreferencePowerSetting @ 0x14045705C (PopUnreferencePowerSetting.c)
 *     PopDiagTracePowerSettingStop @ 0x14045706C (PopDiagTracePowerSettingStop.c)
 *     PopDiagTracePowerSettingStart @ 0x140457118 (PopDiagTracePowerSettingStart.c)
 */

void __fastcall PopCallPowerSettingCallback(_QWORD *a1, __int64 a2)
{
  char *v3; // rbp
  _DWORD *v4; // rsi
  _DWORD *v5; // rax
  bool v6; // bl

  if ( a2 )
  {
    if ( a1 )
    {
      a1[7] = a2;
      if ( !a1[3] )
      {
        v3 = (char *)a1 + 36;
        a1[3] = KeGetCurrentThread();
        do
        {
          v4 = (_DWORD *)a1[7];
          ++*v4;
          KeReleaseGuardedMutex(&PopSettingLock);
          PopDiagTracePowerSettingStart(a1[8], v3, (unsigned int)v4[1], v4 + 3);
          ((void (__fastcall *)(char *, _DWORD *, _QWORD, _QWORD))a1[8])(v3, v4 + 3, (unsigned int)v4[1], a1[9]);
          PopDiagTracePowerSettingStop(a1[8], v3);
          if ( KeAreApcsDisabled() )
            __fastfail(0x20u);
          ExAcquireFastMutex(&PopSettingLock);
          v5 = (_DWORD *)a1[7];
          v6 = v5 && v4 != v5;
          PopUnreferencePowerSetting(v4);
        }
        while ( v6 );
        a1[3] = 0LL;
      }
    }
  }
}
