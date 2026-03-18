/*
 * XREFs of TtmCleanupCurrentSession @ 0x1406784FC
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     PoUnregisterPowerSettingCallback @ 0x14052DE48 (PoUnregisterPowerSettingCallback.c)
 *     TtmpAcquireSessionLock @ 0x140678E60 (TtmpAcquireSessionLock.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x140678F98 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogCleanupCurrentSessionStart @ 0x14067A648 (TtmiLogCleanupCurrentSessionStart.c)
 */

__int64 TtmCleanupCurrentSession()
{
  int SessionId; // edi
  __int64 v1; // rbx
  struct _KTHREAD *v2; // rcx
  __int16 v3; // ax
  void *v4; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v6; // ax
  void *v7; // rcx
  void *v8; // rcx

  TtmiLogCleanupCurrentSessionStart();
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  TtmpAcquireSessionLock();
  v1 = TtmpSession;
  if ( !TtmpSession || *(_DWORD *)TtmpSession == SessionId )
  {
    ObfDereferenceObject(*(PVOID *)(TtmpSession + 32));
    v4 = *(void **)(v1 + 24);
    *(_QWORD *)(v1 + 32) = 0LL;
    ObCloseHandle(v4, 0);
    *(_DWORD *)(v1 + 4) |= 4u;
    *(_QWORD *)(v1 + 24) = 0LL;
    TtmpDereferenceSessionMaybeLast(v1);
    TtmpSession = 0LL;
    ExReleaseResourceLite(&TtmpSessionLock);
    CurrentThread = KeGetCurrentThread();
    v6 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v6;
    if ( !v6
      && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)CurrentThread);
    }
    v7 = *(void **)(v1 + 168);
    if ( v7 )
    {
      PoUnregisterPowerSettingCallback(v7);
      *(_QWORD *)(v1 + 168) = 0LL;
      TtmpDereferenceSessionMaybeLast(v1);
    }
    v8 = *(void **)(v1 + 176);
    if ( v8 )
    {
      PoUnregisterPowerSettingCallback(v8);
      *(_QWORD *)(v1 + 176) = 0LL;
      TtmpDereferenceSessionMaybeLast(v1);
    }
  }
  else
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    v2 = KeGetCurrentThread();
    v3 = v2->KernelApcDisable + 1;
    v2->KernelApcDisable = v3;
    if ( !v3
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v2->ApcState.ApcListHead[0].Flink != &v2->152
      && !v2->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v2);
    }
  }
  return TtmiLogCleanupCurrentSessionStop();
}
