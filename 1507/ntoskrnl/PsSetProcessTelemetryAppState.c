/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x140507404
 * Callers:
 *     PspExitProcess @ 0x14042257C (PspExitProcess.c)
 *     PsFreezeProcess @ 0x1404EB390 (PsFreezeProcess.c)
 *     PsThawProcess @ 0x1404EBD04 (PsThawProcess.c)
 *     PsSetProcessFaultInformation @ 0x140547A48 (PsSetProcessFaultInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406E94E0 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     EtwTraceAppStateChange @ 0x1405075DC (EtwTraceAppStateChange.c)
 *     PsGetProcessDeepFreezeStats @ 0x14050CE38 (PsGetProcessDeepFreezeStats.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(_QWORD *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 *v3; // rdi
  unsigned int v6; // r15d
  __int64 v7; // r12
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  unsigned __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+28h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-50h]
  unsigned __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 91;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  while ( 1 )
  {
    PsGetProcessDeepFreezeStats(a1, &v16);
    v6 = 0;
    v7 = v17 - v18 - a1[234];
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0LL, v8);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v9, (ULONG_PTR)v3, v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v12 = a1[237];
    v13 = v12 >> 61;
    if ( v12 >> 61 != 3 && a1[236] <= v16 )
    {
      v21 = a1[236];
      LODWORD(v25) = v13 & 7;
      v22 = v12 & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && v13 == 1 )
        a2 = 6;
      a1[236] = v16;
      a1[237] = v7 & 0x1FFFFFFFFFFFFFFFLL ^ ((__int64)a2 << 61);
      v6 = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    v14 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( a1[237] >> 61 == 3 )
      break;
    if ( v6 )
      goto LABEL_16;
  }
  if ( !v6 )
    return v6;
LABEL_16:
  v19 = v16;
  v20 = v17;
  v24 = v18;
  v23 = v7;
  HIDWORD(v25) = a2;
  EtwTraceAppStateChange(a1, &v19);
  return v6;
}
