/*
 * XREFs of MiReadyStandbyPageForActive @ 0x140053F00
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiUnlinkStandbyBatch @ 0x140053B30 (MiUnlinkStandbyBatch.c)
 * Callees:
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

unsigned __int64 __fastcall MiReadyStandbyPageForActive(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  int v5; // eax
  unsigned __int64 v6; // r9
  unsigned int v7; // r11d
  unsigned int v8; // r11d
  __int64 v9; // r10
  __int64 v10; // rax
  int v11; // ecx
  unsigned __int64 v12; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  ++*(_WORD *)(a1 + 32);
  v3 = (a1 + 0x58000000000LL) / 48;
  v4 = (_QWORD *)(v1 | 0x8000000000000000uLL);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  v5 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
  v8 = v7 >> 6;
  v9 = v5 & 0xFFFFFFE7;
  if ( v8 != 1 )
  {
    if ( v8 )
    {
      if ( v8 == 2 )
        v9 = (unsigned int)v9 | 0x18;
    }
    else
    {
      v9 = (unsigned int)v9 | 8;
    }
  }
  v10 = MmProtectToPteMask[v9] ^ ((v3 << 12) ^ MmProtectToPteMask[v9]) & 0xFFFFFFFFF000LL | 0x21;
  if ( v6 + 0x904C0000000LL <= 0x3FFFFFFF )
    v10 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v6 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v6 >= 0xFFFFF68000000000uLL
    || v6 >= 0xFFFFF6FB40000000uLL
    && v6 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v6 >= 0xFFFFF6FB7DA00000uLL
    && v6 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v6 >= 0xFFFFF6FB7DBED000uLL
    && v6 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v10 |= 4uLL;
  }
  if ( v6 >= 0xFFFFF6C000000000uLL )
  {
    if ( v6 + 0x90380000000LL <= 0x3FFFFFFF || v6 + 0x904C0000000LL <= 0x3FFFFFF8 )
      goto LABEL_25;
    v11 = HIBYTE(word_14034EC18);
    if ( v6 + 0x90540000000LL > 0xBFFFFFF8 )
      v11 = (unsigned __int8)word_14034EC18;
  }
  else
  {
    v11 = HIBYTE(word_14034EC18);
  }
  if ( v11 )
    v10 |= 0x100uLL;
LABEL_25:
  v12 = v10 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  *v4 = v12;
  if ( (unsigned __int64)(v4 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v4, v12);
  result = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
