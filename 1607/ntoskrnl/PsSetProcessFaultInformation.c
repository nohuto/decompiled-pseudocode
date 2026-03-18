/*
 * XREFs of PsSetProcessFaultInformation @ 0x1404F09D4
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     DbgkForwardException @ 0x1404DBC50 (DbgkForwardException.c)
 * Callees:
 *     PspLockProcessExclusive @ 0x140088FB8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1400F22D8 (PspUnlockProcessExclusive.c)
 *     PsSetProcessTelemetryAppState @ 0x1404A33DC (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v6; // al

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 1740));
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x10u) & 0x10) == 0 )
      PsSetProcessTelemetryAppState((struct _EX_RUNDOWN_REF *)a1, 4);
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
