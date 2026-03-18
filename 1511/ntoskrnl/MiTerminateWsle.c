/*
 * XREFs of MiTerminateWsle @ 0x1400B7650
 * Callers:
 *     MiDeletePageTableHierarchy @ 0x14006D570 (MiDeletePageTableHierarchy.c)
 *     MiDeleteValidSystemPte @ 0x1400A1760 (MiDeleteValidSystemPte.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiDeletePagablePteRange @ 0x1400BACF0 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiRemoveLockedPageFromWorkingSet @ 0x140021840 (MiRemoveLockedPageFromWorkingSet.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiVolunteerForTrimFirst @ 0x14006DCF0 (MiVolunteerForTrimFirst.c)
 *     MiRemoveEntryWsle @ 0x1400B7840 (MiRemoveEntryWsle.c)
 *     MiRemoveWsle @ 0x1400B79C0 (MiRemoveWsle.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiTerminateWsle(ULONG_PTR a1, _QWORD *a2, ULONG_PTR a3)
{
  __int64 v3; // rbp
  unsigned __int64 Wsle; // r14
  ULONG_PTR v7; // rsi
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // rbx
  int v10; // ebx
  ULONG_PTR v11; // r8
  _QWORD *v12; // rdx
  __int64 result; // rax
  __int64 v14; // rax

  v3 = a2[23];
  Wsle = MiLocateWsle(a1, (__int64)a2, a3);
  if ( (*(_BYTE *)(Wsle * *(unsigned int *)(v3 + 64) + *(_QWORD *)(v3 + 496)) & 8) != 0
    && (*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x57FFFFFFFD8LL) & 0x200000000000000LL) == 0 )
  {
    --a2[16];
    if ( a1 + 0x98000000000LL > 0x7FFFFFFFFFLL )
      --a2[14];
  }
  MiRemoveWsle(Wsle);
  v7 = a2[23];
  if ( Wsle >= *(_QWORD *)(v7 + 8) )
  {
    v8 = (unsigned __int64 *)(*(_QWORD *)(v7 + 496) + Wsle * *(unsigned int *)(v7 + 64));
    v9 = *v8;
    MiRemoveEntryWsle(a2[23], v8);
    v10 = (v9 >> 9) & 7;
    if ( v10 )
    {
      --a2[(unsigned int)(v10 - 1) + 5];
      if ( v10 == 7 )
        MiVolunteerForTrimFirst((__int64)a2, -1LL);
    }
  }
  v11 = *(_QWORD *)v7;
  if ( *(_QWORD *)v7 != 0xFFFFFFFFFLL )
  {
    if ( v11 < *(_QWORD *)(v7 + 8) || v11 > *(_QWORD *)(v7 + 32) )
      KeBugCheckEx(0x1Au, 0x5004uLL, v7, *(_QWORD *)v7, *(_QWORD *)(v7 + 32));
    v12 = (_QWORD *)(*(_QWORD *)(v7 + 496) + v11 * *(unsigned int *)(v7 + 64));
    *v12 ^= (*(_DWORD *)v12 ^ (2 * (_DWORD)Wsle)) & 0xFFFFFFE;
  }
  *(_QWORD *)(Wsle * *(unsigned int *)(v7 + 64) + *(_QWORD *)(v7 + 496)) = (v11 << 28) | 0xFFFFFFE;
  result = a1 + 0x98000000000LL;
  *(_QWORD *)v7 = Wsle;
  --a2[15];
  if ( a1 + 0x98000000000LL > 0x7FFFFFFFFFLL )
    --a2[13];
  if ( Wsle < *(_QWORD *)(v3 + 8) )
  {
    v14 = MI_GET_PFN_FROM_PTE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    return MiRemoveLockedPageFromWorkingSet((__int64)a2, a1, Wsle, v14);
  }
  return result;
}
