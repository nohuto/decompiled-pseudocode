/*
 * XREFs of PspProcessClose @ 0x14051B728
 * Callers:
 *     <none>
 * Callees:
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14010D1A8 (PspLockProcessExclusive.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 *     PspRundownProcess @ 0x1404D31FC (PspRundownProcess.c)
 */

void __fastcall PspProcessClose(__int64 a1, ULONG_PTR a2, __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int32 v6; // edi

  if ( a4 > 1 || *(_DWORD *)(a2 + 1176) )
  {
    if ( *(_QWORD *)(a1 + 744) == *(_QWORD *)(a2 + 1008) && (*(_DWORD *)(a1 + 772) & 0x40000008) != 0 )
      PsTerminateProcess(a2);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0x2000000;
    PspLockProcessExclusive(a2, (__int64)CurrentThread);
    if ( !*(_DWORD *)(a2 + 1176) )
    {
      _m_prefetchw((const void *)(a2 + 772));
      v6 = _InterlockedOr((volatile signed __int32 *)(a2 + 772), 8u);
    }
    PspUnlockProcessExclusive(a2, (__int64)CurrentThread);
    if ( (v6 & 0x2000000) == 0 )
      PspRundownProcess(a2);
  }
}
