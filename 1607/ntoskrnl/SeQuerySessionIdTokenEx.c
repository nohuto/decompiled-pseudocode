/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x1404DD050
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x14048AB98 (PiUEventApplyAdditionalFilters.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1404DCE28 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1404DCF14 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400860B0 (PsGetServerSiloServiceSessionId.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebp
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v7 = *((_DWORD *)Token + 30);
  *SessionId = v7;
  *IsServiceSession = !v7
                   || (*((_DWORD *)Token + 50) & 0x20) == 0
                   && (v8 = *(_QWORD *)(*((_QWORD *)Token + 27) + 160LL)) != 0
                   && v7 == (unsigned int)PsGetServerSiloServiceSessionId(v8);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  return 0;
}
