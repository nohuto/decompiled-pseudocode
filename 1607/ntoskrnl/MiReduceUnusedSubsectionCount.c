/*
 * XREFs of MiReduceUnusedSubsectionCount @ 0x14008FC84
 * Callers:
 *     MiDeleteEmptySubsections @ 0x14008FAE0 (MiDeleteEmptySubsections.c)
 *     MiRemoveUnusedSubsection @ 0x14008FC04 (MiRemoveUnusedSubsection.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400268DC (MiGetControlAreaPartition.c)
 */

signed __int64 __fastcall MiReduceUnusedSubsectionCount(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ControlAreaPartition; // rax
  __int64 v5; // r8
  int v6; // r10d
  __int64 v7; // r9
  int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  signed __int64 result; // rax

  ControlAreaPartition = MiGetControlAreaPartition(*a1, a2, (__int64)a1, a4);
  v6 = *(_DWORD *)(v5 + 44);
  v7 = ControlAreaPartition;
  v8 = *(_DWORD *)(v5 + 52);
  v9 = 8LL * (v6 + (v8 & 0x7FFFFFFFu));
  if ( v9 <= 0xFE0 )
  {
    v10 = v9 + 31;
    goto LABEL_7;
  }
  if ( ((8 * ((_WORD)v6 + (_WORD)v8)) & 0xFFFu) <= 0xFC0 && v9 < 0x10000 )
  {
    v10 = v9 + 15;
LABEL_7:
    v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_8;
  }
  v11 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_8:
  result = _InterlockedExchangeAdd64(&qword_1403265A8, -(__int64)v11);
  *(_QWORD *)(v7 + 1536) -= v11;
  return result;
}
