/*
 * XREFs of PspProcessClose @ 0x1404A3328
 * Callers:
 *     <none>
 * Callees:
 *     PspLockProcessExclusive @ 0x140088FB8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1400F22D8 (PspUnlockProcessExclusive.c)
 *     PsTerminateProcess @ 0x1404EC470 (PsTerminateProcess.c)
 *     PspRundownProcess @ 0x1404F1108 (PspRundownProcess.c)
 */

__int64 __fastcall PspProcessClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
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
        return PsTerminateProcess(a2, 3221225738LL);
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
