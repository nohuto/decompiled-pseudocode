/*
 * XREFs of MmGetPageBadStatus @ 0x1401D1FFC
 * Callers:
 *     WheapPfaMemoryCheck @ 0x140678D94 (WheapPfaMemoryCheck.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 */

__int64 __fastcall MmGetPageBadStatus(__int64 *a1)
{
  __int64 v1; // r9
  unsigned int v2; // edi
  __int64 v4; // rbx
  unsigned __int8 v5; // al

  v2 = 0;
  if ( !MI_IS_PFN(*a1 >> 12) )
    return 3221225711LL;
  v4 = 48 * v1 - 0x58000000000LL;
  v5 = MiLockPageInline(v4);
  if ( (*(_BYTE *)(v4 + 35) & 0x40) != 0 )
  {
    if ( (*(_QWORD *)(v4 + 8) | 0x8000000000000000uLL) != 0xFFFFFFFFFFFFFFFCuLL
      || (v2 = -1073740023, (*(_BYTE *)(v4 + 34) & 7) != 5) )
    {
      v2 = 259;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v5);
  return v2;
}
