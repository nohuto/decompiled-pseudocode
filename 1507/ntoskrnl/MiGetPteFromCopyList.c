/*
 * XREFs of MiGetPteFromCopyList @ 0x140059330
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MiScrubPage @ 0x140232D48 (MiScrubPage.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

unsigned __int64 *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ecx
  int v5; // esi
  int v6; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rcx
  char v14; // dl
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // ecx
  unsigned __int64 v18; // rdx
  char v19; // cl
  __int64 v20; // rax
  int v21; // ecx
  unsigned __int64 v22; // rdx
  int v24; // [rsp+20h] [rbp-108h] BYREF
  __int16 v25; // [rsp+24h] [rbp-104h]
  __int64 v26; // [rsp+28h] [rbp-100h]
  __int64 v27; // [rsp+30h] [rbp-F8h]
  __int64 v28; // [rsp+38h] [rbp-F0h]

  v4 = *a1;
  v5 = 2;
  v6 = 1;
  if ( a3 == -1 )
    v5 = 1;
  if ( v4 + v5 > a1[1] )
  {
    v9 = (__int64)(*((_QWORD *)a1 + 2) << 25) >> 16;
    v26 = 20LL;
    v24 = 0;
    v25 = 0;
    v27 = 0LL;
    v28 = 0LL;
    MiInsertTbFlushEntry(&v24, v9, v4, 0LL);
    MiFlushTbList(&v24);
    *a1 = 0;
  }
  v10 = *a1;
  v11 = (unsigned __int64 *)(*((_QWORD *)a1 + 2) + 8 * v10);
  v12 = v10 + v5;
  v13 = 4LL;
  *a1 = v12;
  v14 = *(_BYTE *)(48 * a2 - 0x58000000000LL + 34) >> 6;
  if ( v14 )
  {
    if ( v14 == 2 )
      v13 = 28LL;
  }
  else
  {
    v13 = 12LL;
  }
  v15 = qword_1403D0220;
  v16 = MmProtectToPteMask[v13] ^ ((a2 << 12) ^ MmProtectToPteMask[v13]) & 0xFFFFFFFFF000LL | 0x21;
  if ( (unsigned __int64)(v11 + 0x12098000000LL) <= 0x3FFFFFFF )
    v16 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)v11 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && (unsigned __int64)v11 >= 0xFFFFF68000000000uLL
    || (unsigned __int64)v11 >= 0xFFFFF6FB40000000uLL
    && (unsigned __int64)v11 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || (unsigned __int64)v11 >= 0xFFFFF6FB7DA00000uLL
    && (unsigned __int64)v11 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v11 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v16 |= 4uLL;
  }
  if ( (unsigned __int64)v11 >= 0xFFFFF6C000000000uLL )
  {
    if ( (unsigned __int64)(v11 + 0x12070000000LL) <= 0x3FFFFFFF
      || (unsigned __int64)(v11 + 0x12098000000LL) <= 0x3FFFFFF8 )
    {
      goto LABEL_28;
    }
    v17 = HIBYTE(word_14034EC18);
    if ( (unsigned __int64)(v11 + 0x120A8000000LL) > 0xBFFFFFF8 )
      v17 = (unsigned __int8)word_14034EC18;
  }
  else
  {
    v17 = HIBYTE(word_14034EC18);
  }
  if ( v17 )
    v16 |= 0x100uLL;
LABEL_28:
  v18 = v16 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
  *v11 = v18;
  if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8 )
  {
    MiWritePteShadow(v11, v18);
    v15 = qword_1403D0220;
  }
  if ( a3 != -1 )
  {
    v19 = *(_BYTE *)(48 * a3 - 0x58000000000LL + 34) >> 6;
    if ( v19 )
    {
      if ( v19 == 2 )
        v6 = 25;
    }
    else
    {
      v6 = 9;
    }
    v20 = MmProtectToPteMask[v6] ^ ((a3 << 12) ^ MmProtectToPteMask[v6]) & 0xFFFFFFFFF000LL | 0x21;
    if ( (unsigned __int64)(v11 + 0x12098000000LL) <= 0x3FFFFFFF )
      v20 &= ~v15 & 0x7FFFFFFFFFFFFFFFLL;
    if ( (unsigned __int64)v11 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && (unsigned __int64)v11 >= 0xFFFFF68000000000uLL
      || (unsigned __int64)v11 >= 0xFFFFF6FB40000000uLL
      && (unsigned __int64)v11 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || (unsigned __int64)v11 >= 0xFFFFF6FB7DA00000uLL
      && (unsigned __int64)v11 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v11 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v20 |= 4uLL;
    }
    if ( (unsigned __int64)v11 >= 0xFFFFF6C000000000uLL )
    {
      if ( (unsigned __int64)(v11 + 0x12070000000LL) <= 0x3FFFFFFF
        || (unsigned __int64)(v11 + 0x12098000000LL) <= 0x3FFFFFF8 )
      {
LABEL_54:
        v22 = v20 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
        v11[1] = v22;
        if ( (unsigned __int64)(v11 + 0x12090482601LL) <= 0x7F8 )
          MiWritePteShadow(v11 + 1, v22);
        return v11;
      }
      v21 = HIBYTE(word_14034EC18);
      if ( (unsigned __int64)(v11 + 0x120A8000000LL) > 0xBFFFFFF8 )
        v21 = (unsigned __int8)word_14034EC18;
    }
    else
    {
      v21 = HIBYTE(word_14034EC18);
    }
    if ( v21 )
      v20 |= 0x100uLL;
    goto LABEL_54;
  }
  return v11;
}
