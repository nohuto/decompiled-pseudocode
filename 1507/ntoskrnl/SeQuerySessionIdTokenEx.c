/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x14043ED78
 * Callers:
 *     PiPnpRtlIsDeviceValidForSession @ 0x14043EB50 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14043EC3C (PiPnpRtlApplyMandatoryFilters.c)
 *     PiUEventApplyAdditionalFilters @ 0x14045FB50 (PiUEventApplyAdditionalFilters.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebp
  _QWORD *v8; // rcx
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v7 = *((_DWORD *)Token + 30);
  *SessionId = v7;
  *IsServiceSession = !v7
                   || (*((_DWORD *)Token + 50) & 0x20) == 0
                   && (v8 = *(_QWORD **)(*((_QWORD *)Token + 27) + 160LL)) != 0LL
                   && v7 == *(_DWORD *)PsGetServerSiloGlobals(v8);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  v9 = KeGetCurrentThread();
  v10 = v9->KernelApcDisable + 1;
  v9->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
    && !v9->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0;
}
