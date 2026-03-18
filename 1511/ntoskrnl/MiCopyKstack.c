/*
 * XREFs of MiCopyKstack @ 0x1400D8638
 * Callers:
 *     MiJumpStackTarget @ 0x1400D82EC (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 * Callees:
 *     KeCopyPage @ 0x140157550 (KeCopyPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiCopyKstack(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v6; // rbx
  char v7; // cl
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  KeCopyPage(a3 << 25 >> 16, (__int64)(v3 << 25) >> 16);
  v6 = ((((a1 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12) | MI_READ_PTE_LOCK_FREE(v3) & 0xFFFF000000000FFFuLL;
  *(_QWORD *)v3 = v6;
  if ( (unsigned int)MiPteInShadowRange(v3) )
    MiWritePteShadow(v3, v6);
  v7 = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  *(_QWORD *)(a2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  result = (__int64)(v3 << 25) >> 16;
  *(_BYTE *)(a2 + 34) = v7;
  return result;
}
