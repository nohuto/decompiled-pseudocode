/*
 * XREFs of PsSetProcessFaultInformation @ 0x1404D2AC8
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     DbgkForwardException @ 0x1404BF254 (DbgkForwardException.c)
 * Callees:
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14010D1A8 (PspLockProcessExclusive.c)
 *     PsSetProcessTelemetryAppState @ 0x14051B7DC (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(ULONG_PTR a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v6; // al

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 1740));
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x10u) & 0x10) == 0 )
      PsSetProcessTelemetryAppState(a1);
  }
  if ( (*a2 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessExclusive(a1, (__int64)CurrentThread);
    v6 = *(_BYTE *)(a1 + 1739);
    if ( v6 != -1 )
      *(_BYTE *)(a1 + 1739) = v6 + 1;
    PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
  }
  return 0LL;
}
