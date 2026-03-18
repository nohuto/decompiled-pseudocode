/*
 * XREFs of MiGetSystemPage @ 0x140011A30
 * Callers:
 *     MiGetPageForHeader @ 0x140011920 (MiGetPageForHeader.c)
 *     MiSessionInitializeWorkingSetList @ 0x1404FF630 (MiSessionInitializeWorkingSetList.c)
 *     MiMapNewSession @ 0x1404FFD90 (MiMapNewSession.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetSystemPage(__int64 a1, __int64 a2)
{
  _WORD *v2; // rax
  __int16 v3; // bx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 Page; // rax
  __int64 v7; // rbx
  unsigned __int8 v8; // al

  v2 = *(_WORD **)a2;
  v3 = *(_WORD *)(a2 + 8);
  v4 = a1;
  v5 = *(unsigned __int16 *)(a2 + 10) | (unsigned __int16)(++*v2 & v3);
  while ( 1 )
  {
    Page = MiGetPage(a1, v5, 194LL);
    if ( Page != -1 )
    {
      v7 = 48 * Page - 0x58000000000LL;
      MiFinalizePageAttribute(v7, 1LL, 0LL);
      v8 = MiLockPageInline(v7);
      *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v8);
      return v7;
    }
    if ( KeGetCurrentIrql() == 2 )
      break;
    MiWaitForFreePage(v4);
    a1 = v4;
  }
  return 0LL;
}
