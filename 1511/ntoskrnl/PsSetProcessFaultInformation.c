/*
 * XREFs of PsSetProcessFaultInformation @ 0x1404C5CE0
 * Callers:
 *     DbgkForwardException @ 0x1403ED944 (DbgkForwardException.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14002DCFC (PspLockProcessExclusive.c)
 *     PsSetProcessTelemetryAppState @ 0x14044B0E4 (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v6; // al

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 1724));
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 1724), 0x10u) & 0x10) == 0 )
      PsSetProcessTelemetryAppState((_QWORD *)a1, 4);
  }
  if ( (*a2 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessExclusive(a1, (__int64)CurrentThread);
    v6 = *(_BYTE *)(a1 + 1723);
    if ( v6 != -1 )
      *(_BYTE *)(a1 + 1723) = v6 + 1;
    PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
  }
  return 0LL;
}
