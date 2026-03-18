/*
 * XREFs of PfpParametersPropagate @ 0x1406B0108
 * Callers:
 *     PfpParametersWatcher @ 0x1406B0294 (PfpParametersWatcher.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PfTCleanup @ 0x14058E034 (PfTCleanup.c)
 *     PfTStart @ 0x1405B6200 (PfTStart.c)
 *     PfTInitialize @ 0x1405B64DC (PfTInitialize.c)
 *     PfpRpShutdown @ 0x1406AFA78 (PfpRpShutdown.c)
 */

void __fastcall PfpParametersPropagate(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rsi
  __int64 v13; // rdx
  void *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&PfTGlobals, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&PfTGlobals, 0LL);
  v12 = v7;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&PfTGlobals, v7, (ULONG_PTR)&PfTGlobals, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( (dword_140350208 & 1) != 0 && a1[20] != dword_14035041C )
    v6 = 1;
  if ( (dword_140350208 & 2) != 0 && a1[19] != dword_140350424 )
    v6 |= 2u;
  if ( (dword_140350208 & 3) != 0 && (a1[17] & 1) == 0 || v6 )
  {
    PfTCleanup((__int64)&PfTGlobals, v8, v9, v10);
    PfTInitialize((__int64)&PfTGlobals, v13, 1);
    PfTStart((__int64)&PfTGlobals, v14, v6, v15);
  }
  v16 = a1[17] & 2;
  if ( ((a1[17] & 2) != 0) != (dword_1403535E0 & 1) )
  {
    if ( (_DWORD)v16 )
    {
      _InterlockedExchange64(&qword_1403535D0, 0LL);
      dword_1403535E0 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_140353548, v16, v9, v10);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
