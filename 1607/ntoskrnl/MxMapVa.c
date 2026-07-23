/*
 * XREFs of MxMapVa @ 0x14079747C
 * Callers:
 *     MxMapPfnRange @ 0x14079720C (MxMapPfnRange.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1401623C0 (KeZeroPages.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MxGetNextPage @ 0x1407976E8 (MxGetNextPage.c)
 *     MxFillPhysicalPage @ 0x140798170 (MxFillPhysicalPage.c)
 */

__int64 __fastcall MxMapVa(__int64 a1)
{
  unsigned __int64 *v1; // rdx
  __int64 v2; // r8
  unsigned __int64 v4; // rcx
  BOOL v5; // r14d
  unsigned __int64 ValidKernelPte; // rax
  int v7; // r8d
  int v8; // ebp
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  ULONG_PTR NextPage; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  _QWORD v20[4]; // [rsp+20h] [rbp-58h] BYREF

  v1 = v20;
  v2 = 4LL;
  v4 = *(_QWORD *)a1;
  v5 = qword_140324E10 > 0x20000;
  do
  {
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *v1++ = v4;
    --v2;
  }
  while ( v2 );
  ValidKernelPte = MiMakeValidKernelPte(-1LL, 6, 0LL);
  v8 = v7 + 3;
  v9 = ~qword_1403A9350 & (ValidKernelPte & 0xFFFFFFFFFFFFFEBDuLL | 0x42);
  while ( 1 )
  {
    v10 = v20[v8];
    if ( (*(_QWORD *)v10 & 1) == 0 )
    {
      if ( v8 != 1 || !v5 || (v11 = MxGetNextPage(*(unsigned int *)(a1 + 8), 1LL), v11 == -1) )
      {
        NextPage = MxGetNextPage(*(unsigned int *)(a1 + 8), 0LL);
        v13 = NextPage;
        if ( NextPage == -1LL )
          return 0LL;
        if ( v8 || *(_DWORD *)(a1 + 12) == 1 )
          MxFillPhysicalPage(NextPage);
        v14 = MiMakeValidKernelPte(v13, 4, v10);
        v9 = v14 | 0x42;
        if ( v8 )
          v9 = v14 & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
        *(_QWORD *)v10 = v9;
        if ( MiPteInShadowRange(v10) )
          MiWritePteShadow(v15, v9);
        goto LABEL_18;
      }
      *(_QWORD *)v10 = (~qword_1403A9350 ^ (v11 << 12)) & 0xFFFFFFFFF000LL ^ ~qword_1403A9350 & (v9 & 0xFFFFFFFFFFFFFEFFuLL | ((unsigned __int64)(word_140326AE8 & 1) << 8) | 0x8000FFFFFFFFF080uLL) | 0x80;
      if ( MiPteInShadowRange(v10) )
        MiWritePteShadow(v17, v16);
      v18 = *(_DWORD *)(a1 + 12);
      if ( !v18 )
      {
        if ( v10 != ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v10 != ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
LABEL_28:
          *(_DWORD *)(a1 + 32) = 1;
          return 1LL;
        }
        v18 = 1;
      }
      if ( v18 == 1 )
        KeZeroPages((int *)((__int64)(v10 << 25) >> 16 << 25 >> 16), 0x200000uLL);
      goto LABEL_28;
    }
    if ( !v8 )
      return 1LL;
    if ( (*(_QWORD *)v10 & 0x80u) != 0LL )
      break;
LABEL_18:
    if ( !v8 )
      return 1LL;
    --v8;
  }
  *(_DWORD *)(a1 + 32) = v8;
  return 1LL;
}
