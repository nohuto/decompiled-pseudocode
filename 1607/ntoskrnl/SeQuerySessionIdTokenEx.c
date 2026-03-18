/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x1404FA0C4
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x1403F0920 (PiUEventApplyAdditionalFilters.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1404F9E9C (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1404F9F88 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140007F34 (PsGetServerSiloServiceSessionId.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v7 = *((_DWORD *)Token + 30);
  *SessionId = v7;
  *IsServiceSession = !v7
                   || (*((_DWORD *)Token + 50) & 0x20) == 0
                   && *(_QWORD *)(*((_QWORD *)Token + 27) + 160LL)
                   && v7 == (unsigned int)PsGetServerSiloServiceSessionId();
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  return 0;
}
