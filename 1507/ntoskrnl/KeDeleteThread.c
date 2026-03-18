/*
 * XREFs of KeDeleteThread @ 0x1400210A8
 * Callers:
 *     PspReaper @ 0x140021168 (PspReaper.c)
 * Callees:
 *     KiWaitForContextSwap @ 0x140021070 (KiWaitForContextSwap.c)
 *     KiDecrementProcessStackCount @ 0x14009AA60 (KiDecrementProcessStackCount.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KeDeleteThread(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // rcx
  _QWORD *v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  KiWaitForContextSwap((__int64)a1);
  result = KiDecrementProcessStackCount(a1[23]);
  v3 = a1 + 178;
  if ( a1[178] != 1LL )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&qword_140338F98);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140338F98, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(&qword_140338F98);
    }
    if ( *v3 != 1LL && a1[179] )
    {
      v5 = *v3;
      v6 = (_QWORD *)a1[179];
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v6 != v3 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&qword_140338F98, retaddr);
    else
      _InterlockedAnd64(&qword_140338F98, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
