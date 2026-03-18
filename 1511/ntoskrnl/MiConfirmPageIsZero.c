/*
 * XREFs of MiConfirmPageIsZero @ 0x1400AD8D0
 * Callers:
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 * Callees:
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_SET_PAGING_FILE_INFO @ 0x1400F5214 (MI_SET_PAGING_FILE_INFO.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiConfirmPageIsZero(__int64 a1, char a2)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  unsigned __int64 v7; // r10
  __int64 v8; // rbx
  int *v9; // rax
  unsigned __int64 v10; // r10
  int v11; // r9d
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned int v18; // edi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  if ( (a2 & 2) != 0 )
    goto LABEL_10;
  v3 = MiMapPageInHyperSpaceWorker((a1 + 0x58000000000LL) / 48, 0LL, 0x80000000);
  v4 = (_QWORD *)v3;
  v5 = (_QWORD *)(v3 + 4088);
  do
  {
    if ( *v4 | *v5 )
      break;
    ++v4;
    --v5;
  }
  while ( v4 <= v5 );
  MiUnmapPageInHyperSpaceWorker(v3, 0x11u);
  if ( v4 <= v5 )
    return 0LL;
LABEL_10:
  v7 = *(_QWORD *)(a1 + 16);
  if ( (v7 & 0x1000) != 0 )
  {
    v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
    MI_SET_PAGING_FILE_INFO((unsigned int)&v22, a1 + 16, *(_QWORD *)&v9[2 * ((v10 >> 1) & 0xF) + 1432], v11, 2);
    v8 = v22;
  }
  else
  {
    v8 = 32 * ((v7 >> 5) & 0x1F);
    v22 = v8;
    if ( (v7 & 1) == 0 && (v7 & 0xC00) == 0 && (v7 & 0x3000) == 0 && HIDWORD(v7) == 1 )
    {
      v8 = (unsigned int)v8 | 0x100000000LL;
      v22 = v8;
    }
  }
  if ( (v7 & 0x1000000) != 0 )
  {
    v8 |= 0x1000000uLL;
    v22 = v8;
  }
  v12 = *(_QWORD *)(a1 + 40);
  v13 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( (v12 & 0x200000000000000LL) != 0 )
  {
    v15 = v12 & 0xFFFFFFFFFLL;
    v16 = 48 * v15 - 0x58000000000LL;
    v17 = MiMapPageInHyperSpaceWorker(v15, 0LL, 0x80000000);
    v18 = (v13 >> 3) & 0x1FF;
    *(_QWORD *)(v17 + 8LL * v18) = v8;
    v19 = v17 + 8LL * v18;
    if ( (unsigned int)MiPteInShadowRange(v19) )
      MiWritePteShadow(v19, v8);
    MiUnmapPageInHyperSpaceWorker(v19, 0x11u);
    MiLockNestedPageAtDpcInline(v16, v20, v21);
    MiDecrementShareCount(v16);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    *(_QWORD *)v13 = v8;
    if ( (unsigned int)MiPteInShadowRange(v14) )
    {
      MiWritePteShadow(v13, v8);
      return 1LL;
    }
  }
  return 1LL;
}
