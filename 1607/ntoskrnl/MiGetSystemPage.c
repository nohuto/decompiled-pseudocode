/*
 * XREFs of MiGetSystemPage @ 0x1400FB9D4
 * Callers:
 *     MiGetPageForHeader @ 0x1400FB8C8 (MiGetPageForHeader.c)
 *     MiMapNewSession @ 0x140536ED4 (MiMapNewSession.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetSystemPage(__int64 a1, __int64 a2)
{
  _WORD *v2; // rax
  __int64 v3; // rdi
  __int16 v4; // bx
  unsigned int v5; // ebx
  __int64 Page; // rax
  __int64 v7; // rbx
  unsigned __int8 v8; // al

  v2 = *(_WORD **)a2;
  v3 = a1;
  v4 = *(_WORD *)(a2 + 8);
  v5 = *(unsigned __int16 *)(a2 + 10) | (unsigned __int16)(++*v2 & v4);
  while ( 1 )
  {
    Page = MiGetPage(a1, v5, 0xC2u);
    if ( Page != -1 )
    {
      v7 = 48 * Page - 0x58000000000LL;
      v8 = MiLockPageInline(v7);
      *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v8);
      return v7;
    }
    if ( KeGetCurrentIrql() == 2 )
      break;
    MiWaitForFreePage(v3);
    a1 = v3;
  }
  return 0LL;
}
