/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x14044086C
 * Callers:
 *     PiPnpRtlIsDeviceValidForSession @ 0x140440644 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140440730 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiUEventApplyAdditionalFilters @ 0x1404E14F8 (PiUEventApplyAdditionalFilters.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebp
  _QWORD *v8; // rcx

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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0;
}
