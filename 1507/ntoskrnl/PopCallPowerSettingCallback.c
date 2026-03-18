/*
 * XREFs of PopCallPowerSettingCallback @ 0x1404E52C0
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x1404E5148 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopUnreferencePowerSetting @ 0x1404E55B0 (PopUnreferencePowerSetting.c)
 *     PopDiagTracePowerSettingStop @ 0x1404E55C0 (PopDiagTracePowerSettingStop.c)
 *     PopDiagTracePowerSettingStart @ 0x1404E566C (PopDiagTracePowerSettingStart.c)
 */

void __fastcall PopCallPowerSettingCallback(_QWORD *a1, __int64 a2)
{
  char *v3; // r14
  _DWORD *v4; // rsi
  unsigned __int8 v5; // bl
  signed __int32 v6; // eax
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // bp
  _DWORD *v11; // rax
  bool v12; // bl

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
          qword_14032EFE8 = 0LL;
          v5 = dword_14032F010;
          v6 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
          if ( v6 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v6);
          __writecr8(v5);
          KeAbPostRelease((ULONG_PTR)&PopSettingLock);
          PopDiagTracePowerSettingStart(a1[8], v3, (unsigned int)v4[1], v4 + 3);
          ((void (__fastcall *)(char *, _DWORD *, _QWORD, _QWORD))a1[8])(v3, v4 + 3, (unsigned int)v4[1], a1[9]);
          PopDiagTracePowerSettingStop(a1[8], v3);
          if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
            __fastfail(0x20u);
          v8 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, v7);
          v9 = v8;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v8);
          if ( v9 )
            *(_BYTE *)(v9 + 26) |= 1u;
          qword_14032EFE8 = (__int64)KeGetCurrentThread();
          dword_14032F010 = CurrentIrql;
          v11 = (_DWORD *)a1[7];
          v12 = v11 && v4 != v11;
          PopUnreferencePowerSetting(v4);
        }
        while ( v12 );
        a1[3] = 0LL;
      }
    }
  }
}
