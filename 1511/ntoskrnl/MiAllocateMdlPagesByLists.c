/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x140104DC8
 * Callers:
 *     MiFindPagesForMdl @ 0x1400BCF40 (MiFindPagesForMdl.c)
 * Callees:
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 */

unsigned __int64 __fastcall MiAllocateMdlPagesByLists(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int16 a4,
        unsigned __int8 a5)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  int v8; // r11d
  _WORD *v9; // r8
  __int16 v10; // ax
  unsigned int v11; // ebx
  int v12; // r12d
  unsigned int v13; // esi
  __int64 v14; // r10
  unsigned __int64 v15; // rcx
  int v16; // edi
  __int64 Page; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // edx
  __int64 *v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+28h] [rbp-50h] BYREF
  __int16 v25; // [rsp+30h] [rbp-48h]
  unsigned __int16 v26; // [rsp+32h] [rbp-46h]

  v6 = 0LL;
  v7 = 0LL;
  MI_INITIALIZE_COLOR_BASE(0LL, a4 + 1, (__int64)&v24);
  v9 = (_WORD *)v24;
  v10 = v25;
  v11 = 8;
  v12 = v8;
  *(_WORD *)v24 += v8;
  v13 = v26 | (unsigned __int16)(v10 & *v9);
  v15 = *(unsigned int *)(a2 + 40);
  v24 = KiProcessorBlock[*(unsigned int *)(v14 + 588)];
  v16 = -1;
  v23 = (__int64 *)(a2 + 48 + 8 * (v15 >> 12));
  do
  {
    if ( v12 == v8 )
    {
      v11 = 8;
      if ( ((unsigned __int8)v8 & a5) == 0 )
        v11 = 10;
      v12 = 0;
    }
    Page = MiGetPage(a1, v13, v11);
    v18 = Page;
    v8 = 1;
    if ( Page == -1 )
      break;
    v19 = 48 * Page - 0x58000000000LL;
    v20 = *(_QWORD *)(v19 + 16);
    if ( v20 )
      ++v7;
    if ( v16 == -1 )
      v16 = (unsigned __int8)HIBYTE(*(_QWORD *)(v19 + 40)) >> 2;
    if ( (unsigned __int8)HIBYTE(*(_QWORD *)(v19 + 40)) >> 2 == v16 )
    {
      if ( v20 )
      {
        if ( (a5 & 1) == 0 )
          v11 &= ~2u;
      }
      else if ( (a5 & 1) != 0 )
      {
        v11 |= 2u;
      }
    }
    else
    {
      v12 = 1;
    }
    v16 = (unsigned __int8)HIBYTE(*(_QWORD *)(v19 + 40)) >> 2;
    ++v6;
    *v23++ = v18;
    v21 = v18 & dword_1402FE708 | (((*(_QWORD *)(v19 + 40) >> 36) & 3) << byte_1402FE6E8) | (((*(_QWORD *)(v19 + 40) >> 58) & 0x3F) << byte_1402FE6D9);
    v13 = v21 & ~dword_1402FE6B0 | dword_1402FE6B0 & (v21 + 1);
  }
  while ( v6 < a3 );
  if ( v6 )
    *(_DWORD *)(v24 + 23520) = v13;
  *(_DWORD *)(a2 + 40) += (_DWORD)v6 << 12;
  if ( v7 )
    *(_QWORD *)(a2 + 24) = 1LL;
  return v6;
}
