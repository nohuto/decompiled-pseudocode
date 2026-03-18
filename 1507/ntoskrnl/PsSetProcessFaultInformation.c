/*
 * XREFs of PsSetProcessFaultInformation @ 0x140547A48
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     DbgkForwardException @ 0x1405478A4 (DbgkForwardException.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PsSetProcessTelemetryAppState @ 0x140507404 (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r14
  char v11; // al
  __int16 v12; // ax

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 1716));
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 1716), 0x10u) & 0x10) == 0 )
      PsSetProcessTelemetryAppState((_QWORD *)a1, 4);
  }
  if ( (*a2 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire(a1 + 728, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 728), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 728), v8, a1 + 728, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = *(_BYTE *)(a1 + 1715);
    if ( v11 != -1 )
      *(_BYTE *)(a1 + 1715) = v11 + 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
    KeAbPostRelease(a1 + 728);
    v12 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return 0LL;
}
