/*
 * XREFs of MiTerminateWsle @ 0x1400AE090
 * Callers:
 *     MiDeletePagablePteRange @ 0x140008890 (MiDeletePagablePteRange.c)
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 * Callees:
 *     MiRemoveLockedPageFromWorkingSet @ 0x14007CAB4 (MiRemoveLockedPageFromWorkingSet.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiReleaseWsle @ 0x1400AE200 (MiReleaseWsle.c)
 *     MiRemoveWsle @ 0x1400AFB10 (MiRemoveWsle.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiTerminateWsle(ULONG_PTR a1, _QWORD *a2, ULONG_PTR a3)
{
  __int64 v3; // rbp
  unsigned __int64 Wsle; // rsi
  unsigned __int64 *v7; // rcx
  unsigned __int64 PteShadow; // rax
  __int64 result; // rax
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // rax

  v3 = a2[23];
  Wsle = MiLocateWsle(a1, (__int64)a2, a3);
  if ( (*(_BYTE *)(Wsle * *(unsigned int *)(v3 + 64) + *(_QWORD *)(v3 + 496)) & 8) != 0 )
  {
    v7 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v7;
    if ( (unsigned __int64)(v7 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v7, *v7);
    if ( (*(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x200000000000000LL) == 0 )
    {
      --a2[16];
      if ( a1 + 0x98000000000LL > 0x7FFFFFFFFFLL )
        --a2[14];
    }
  }
  MiRemoveWsle(Wsle);
  result = MiReleaseWsle(Wsle, a2, a1, 1LL);
  if ( Wsle < *(_QWORD *)(v3 + 8) )
  {
    v10 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v11 = *v10;
    if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8 )
      v11 = MiReadPteShadow(v10, *v10);
    return MiRemoveLockedPageFromWorkingSet((__int64)a2, a1, Wsle, 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  return result;
}
