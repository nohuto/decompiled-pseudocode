/*
 * XREFs of PspProcessClose @ 0x1404A3F14
 * Callers:
 *     <none>
 * Callees:
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14002DCFC (PspLockProcessExclusive.c)
 *     PsTerminateProcess @ 0x140452368 (PsTerminateProcess.c)
 *     PspRundownProcess @ 0x1404A3FD8 (PspRundownProcess.c)
 */

__int64 __fastcall PspProcessClose(__int64 a1, ULONG_PTR a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  signed __int32 v7; // edi

  if ( a4 > 1 || *(_DWORD *)(a2 + 1176) )
  {
    result = *(_QWORD *)(a2 + 1008);
    if ( *(_QWORD *)(a1 + 744) == result )
    {
      result = *(unsigned int *)(a1 + 772);
      if ( (result & 0x40000008) != 0 )
        return PsTerminateProcess(a2, 0xC000010A);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0x2000000;
    PspLockProcessExclusive(a2, (__int64)CurrentThread);
    if ( !*(_DWORD *)(a2 + 1176) )
    {
      _m_prefetchw((const void *)(a2 + 772));
      v7 = _InterlockedOr((volatile signed __int32 *)(a2 + 772), 8u);
    }
    result = PspUnlockProcessExclusive(a2, (__int64)CurrentThread);
    if ( (v7 & 0x2000000) == 0 )
      return PspRundownProcess((PVOID)a2);
  }
  return result;
}
