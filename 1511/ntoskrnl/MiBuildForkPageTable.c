/*
 * XREFs of MiBuildForkPageTable @ 0x1400EE1AC
 * Callers:
 *     MiUpdateForkMaps @ 0x1400FE6FC (MiUpdateForkMaps.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiBuildForkPageTable(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v7; // rbp
  __int64 v11; // rdi
  unsigned __int8 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 result; // rax
  __int64 v19; // rbx

  v7 = 48 * a2 - 0x58000000000LL;
  *(_BYTE *)(v7 + 34) |= 0x10u;
  *(_QWORD *)(v7 + 16) = 128LL;
  v11 = 48 * a5 - 0x58000000000LL;
  *(_QWORD *)(v7 + 40) ^= (a5 ^ *(_QWORD *)(v7 + 40)) & 0xFFFFFFFFFLL;
  v12 = MiLockPageInline(v11);
  v13 = *(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v11 + 24) = v13;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockPageAtDpcInline(v7, v13, v14);
  if ( (*(_BYTE *)(v7 + 34) & 0xC0) != 0x40 )
    MiChangePageAttribute(v7, 1, 1u);
  v15 = *(_QWORD *)(v7 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v7 + 32) = 1;
  *(_QWORD *)(v7 + 8) = a3;
  *(_QWORD *)(v7 + 24) = v15 | 1;
  *(_BYTE *)(v7 + 34) = *(_BYTE *)(v7 + 34) & 0xF8 | 6;
  MiAddLockedPageCharge(v7, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v12);
  if ( a6 == 1 )
  {
    v19 = ((a2 & 0xFFFFFFFFFLL) << 12) | 0x880;
    *a4 = v19;
    result = MiPteInShadowRange(a4);
    if ( (_DWORD)result )
      return MiWritePteShadow(a4, v19);
  }
  else
  {
    v16 = qword_140381320 ^ (qword_140381320 ^ (a2 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( a3 + 0x904C0000000LL <= 0x3FFFFFFF )
      v16 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
    if ( a3 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && a3 >= 0xFFFFF68000000000uLL
      || a3 >= 0xFFFFF6FB40000000uLL
      && a3 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || a3 >= 0xFFFFF6FB7DA00000uLL
      && a3 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || a3 >= 0xFFFFF6FB7DBED000uLL
      && a3 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v16 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a3) )
      v16 |= 0x100uLL;
    v17 = v16 | 0x46;
    *a4 = v17;
    result = MiPteInShadowRange(a4);
    if ( (_DWORD)result )
      result = MiWritePteShadow(a4, v17);
    if ( a6 == 3 && (MiFlags & 0x600000) != 0 )
    {
      result = *(_QWORD *)(a1 + 1528);
      *(_QWORD *)((a3 & 0xFFF) + result) = v17;
    }
  }
  return result;
}
