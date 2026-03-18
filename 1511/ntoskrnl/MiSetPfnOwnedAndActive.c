/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x1400C0054
 * Callers:
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiFindLargeNodePages @ 0x1401D325C (MiFindLargeNodePages.c)
 *     MiRemoveMdlPages @ 0x14062358C (MiRemoveMdlPages.c)
 *     MiFillPagedPoolLockedDown @ 0x1406251DC (MiFillPagedPoolLockedDown.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int8 v8; // r14
  char v9; // al
  __int64 result; // rax

  v8 = MiLockPageInline(a1);
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFELL )
    *(_QWORD *)(a1 + 40) &= 0xFFFFFFF000000000uLL;
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != a3 )
    MiChangePageAttribute(a1, a3, 1u);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  if ( a4 )
    *(_WORD *)(a1 + 32) = a4;
  v9 = *(_BYTE *)(a1 + 34) & 0xFE;
  *(_QWORD *)(a1 + 8) = a2;
  *(_BYTE *)(a1 + 34) = v9 | 6;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v8;
  __writecr8(v8);
  return result;
}
