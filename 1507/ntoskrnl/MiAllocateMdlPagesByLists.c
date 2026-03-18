/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x140133FF0
 * Callers:
 *     MiFindPagesForMdl @ 0x1400778A4 (MiFindPagesForMdl.c)
 * Callees:
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 */

unsigned __int64 __fastcall MiAllocateMdlPagesByLists(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int16 a4,
        char a5)
{
  __int64 **v5; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  _WORD *v9; // r8
  __int16 v10; // ax
  unsigned int v11; // ebx
  int v12; // r13d
  unsigned int v13; // esi
  __int64 v14; // r11
  int v15; // edi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 Page; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // r9
  char v23; // cl
  unsigned __int64 v24; // rdx
  _BYTE v26[80]; // [rsp+60h] [rbp+60h] BYREF

  v5 = (__int64 **)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0uLL);
  v7 = 0LL;
  v8 = 0LL;
  MI_INITIALIZE_COLOR_BASE(0LL, a4 + 1, ((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0uLL) + 16);
  v9 = *(_WORD **)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
  v10 = *(_WORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  v11 = 8;
  v12 = 1;
  v13 = *(unsigned __int16 *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1A) | (unsigned __int16)(v10 & ++*v9);
  v15 = -1;
  v16 = a2 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12);
  *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = KiProcessorBlock[*(unsigned int *)(v14 + 588)];
  *(_QWORD *)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0uLL) = v16;
  do
  {
    v17 = *(_QWORD *)(a1 + 5504);
    if ( v17 < 0x80
      && (((__int64)KeGetCurrentThread()[1].Queue & 2) == 0 || v17 < 2)
      && ((__int16 *)a1 == MiSystemPartition || v17 < 2) )
    {
      break;
    }
    if ( v12 == 1 )
    {
      v11 = 8;
      if ( (a5 & 1) == 0 )
        v11 = 10;
      v12 = 0;
    }
    Page = MiGetPage(a1, v13, v11);
    v19 = Page;
    if ( Page == -1 )
      break;
    v20 = 48 * Page - 0x58000000000LL;
    v21 = *(_QWORD *)(v20 + 16);
    if ( v21 )
      ++v8;
    if ( v15 == -1 )
      v15 = (unsigned __int8)HIBYTE(*(_QWORD *)(v20 + 40)) >> 2;
    if ( (unsigned __int8)HIBYTE(*(_QWORD *)(v20 + 40)) >> 2 == v15 )
    {
      if ( v21 )
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
    v22 = *v5;
    v15 = (unsigned __int8)HIBYTE(*(_QWORD *)(v20 + 40)) >> 2;
    ++v7;
    *v22 = v19;
    v23 = byte_14034EB89;
    v24 = *(_QWORD *)(v20 + 40);
    *v5 = v22 + 1;
    LODWORD(v24) = v19 & dword_14034EBB8 | (((v24 >> 36) & 3) << byte_14034EB98) | (((v24 >> 58) & 0x3F) << v23);
    v13 = v24 & ~dword_14034EB60 | dword_14034EB60 & (v24 + 1);
  }
  while ( v7 < a3 );
  if ( v7 )
    *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFE0uLL) + 8) + 23520LL) = v13;
  *(_DWORD *)(a2 + 40) += (_DWORD)v7 << 12;
  if ( v8 )
    *(_QWORD *)(a2 + 24) = 1LL;
  return v7;
}
