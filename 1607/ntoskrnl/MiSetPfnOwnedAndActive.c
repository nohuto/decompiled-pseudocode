/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x14001B1C0
 * Callers:
 *     MiAssignNonPagedPoolPtes @ 0x14001AF80 (MiAssignNonPagedPoolPtes.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiFindLargeNodePage @ 0x1401E314C (MiFindLargeNodePage.c)
 *     MiRemoveMdlPages @ 0x140658ACC (MiRemoveMdlPages.c)
 *     MiFillPagedPoolLockedDown @ 0x14065A100 (MiFillPagedPoolLockedDown.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14001B6C0 (MiFreeZeroPageSizeIndex.c)
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(__int64 a1, char a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // al
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  MiLockPageAtDpcInline(a1);
  if ( (unsigned int)MiFreeZeroPageSizeIndex(a1) != -1 )
    *(_QWORD *)(a1 + 40) &= 0xFFFFFFF000000000uLL;
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != a4 )
    MiChangePageAttribute(a1, a4, 1LL);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  if ( a5 )
    *(_WORD *)(a1 + 32) = a5;
  v13 = *(_BYTE *)(a1 + 34);
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 34) = v13 & 0xF8 | 6;
  if ( (a2 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    *(_QWORD *)(a1 + 16) = MiMakeDemandZeroPte(4LL, v10, v11, v12);
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
