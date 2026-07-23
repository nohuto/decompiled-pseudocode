/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x14010FD90
 * Callers:
 *     MiFindPagesForMdl @ 0x140101DCC (MiFindPagesForMdl.c)
 * Callees:
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiPfnZeroingNeeded @ 0x140104F58 (MiPfnZeroingNeeded.c)
 */

__int64 __fastcall MiAllocateMdlPagesByLists(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int16 a7)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // r12
  char v10; // r11
  _WORD *v11; // r8
  __int16 v12; // ax
  unsigned int v13; // ebx
  int v14; // r13d
  unsigned int v15; // r14d
  __int64 v16; // r10
  unsigned __int64 v17; // rcx
  int v18; // edi
  unsigned __int64 Page; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // r10
  char v24; // cl
  unsigned __int64 v25; // rdx
  __int64 result; // rax
  _BYTE v27[80]; // [rsp+60h] [rbp+60h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  MiInitializePageColorBase(0LL, a7 + 1, ((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0uLL) + 16);
  v11 = *(_WORD **)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
  v12 = *(_WORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  v13 = 8;
  *(_DWORD *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0uLL) = 1;
  v14 = 1;
  v15 = *(unsigned __int16 *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1A) | (unsigned __int16)(v12 & ++*v11);
  v17 = ((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12) + 6;
  *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = KiProcessorBlock[*(unsigned int *)(v16 + 588)];
  v18 = -1;
  *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = a2 + 8 * v17;
  while ( 1 )
  {
    if ( v14 == 1 )
    {
      v13 = 8;
      if ( (v10 & 1) == 0 )
        v13 = 10;
      v14 = 0;
    }
    Page = MiGetPage(a1, v15, v13);
    if ( Page == -1LL )
    {
LABEL_20:
      result = *(unsigned int *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0uLL);
      goto LABEL_21;
    }
    v20 = 48 * Page - 0x58000000000LL;
    if ( Page > a5 )
      break;
    if ( MiPfnZeroingNeeded(v20) )
      ++v9;
    if ( v18 == -1 )
      v18 = (unsigned __int8)HIBYTE(*(_QWORD *)(v21 + 40)) >> 2;
    v10 = a3;
    if ( (unsigned __int8)HIBYTE(*(_QWORD *)(v21 + 40)) >> 2 == v18 )
    {
      if ( *(_QWORD *)(v21 + 16) )
      {
        if ( (a3 & 1) == 0 )
          v13 &= ~2u;
      }
      else if ( (a3 & 1) != 0 )
      {
        v13 |= 2u;
      }
    }
    else
    {
      v14 = 1;
    }
    v23 = *(_QWORD **)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    v18 = (unsigned __int8)HIBYTE(*(_QWORD *)(v21 + 40)) >> 2;
    ++v8;
    *v23 = v22;
    v24 = byte_140326A09;
    v25 = *(_QWORD *)(v21 + 40);
    *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v23 + 1;
    LODWORD(v25) = v22 & dword_140326A38 | (((v25 >> 36) & 3) << byte_140326A18) | (((v25 >> 58) & 0x3F) << v24);
    v15 = v25 & ~dword_1403269E0 | dword_1403269E0 & (v25 + 1);
    if ( v8 >= a6 )
      goto LABEL_20;
  }
  MiReleaseFreshPage(v20);
  result = 0LL;
LABEL_21:
  if ( v8 )
    *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) + 23520LL) = v15;
  *(_DWORD *)(a2 + 40) += (_DWORD)v8 << 12;
  if ( v9 )
    *(_QWORD *)(a2 + 24) = 1LL;
  return result;
}
