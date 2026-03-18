/*
 * XREFs of ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAU_BLENDINFO@@KK@Z @ 0x1C00B9DB0
 * Callers:
 *     vSrcOpaqCopyS8D32 @ 0x1C00B9620 (vSrcOpaqCopyS8D32.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00B9AF4 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vClearTypeLookupTableLoop(unsigned int a1, void **a2, struct _BLENDINFO *a3, int a4, unsigned int a5)
{
  _WORD *v5; // r11
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // ebp
  unsigned int v11; // eax
  int v12; // r14d
  int v13; // r15d
  int v14; // ecx
  __int64 v15; // rax
  int v16; // r12d
  int v17; // ebp
  int v18; // r13d
  int v19; // r14d
  int v20; // r15d
  unsigned __int8 *v21; // r9
  unsigned int *v22; // rax
  __int64 v23; // r8
  unsigned int v24; // r10d
  int v25; // [rsp+38h] [rbp+8h]

  v5 = (_WORD *)&aulCacheCT + 1;
  uGammaCacheCT = gulGamma;
  v8 = 113LL;
  hCacheCT = *a2;
  v9 = *((_QWORD *)a3 + 6);
  v10 = *((_DWORD *)a3 + 9);
  v11 = a5 & *((_DWORD *)a3 + 6);
  v12 = *((_DWORD *)a3 + 10);
  v13 = *((_DWORD *)a3 + 11);
  sizeCacheCT = a1;
  v14 = *((_DWORD *)a3 + 2);
  v15 = (unsigned __int8)((unsigned __int64)(v11 << *(_DWORD *)a3) >> *((_BYTE *)a3 + 4));
  uFCacheCT = a4;
  uBCacheCT = a5;
  v16 = *(unsigned __int8 *)(v15 + v9);
  v17 = v10 - v16;
  v18 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 7)) << v14) >> *((_BYTE *)a3 + 12))
                           + v9);
  v19 = v12 - v18;
  v20 = v13
      - *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 8)) << *((_DWORD *)a3 + 4)) >> *((_BYTE *)a3 + 20))
                           + v9);
  v25 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 8)) << *((_DWORD *)a3 + 4)) >> *((_BYTE *)a3 + 20))
                           + v9);
  v21 = (unsigned __int8 *)off_1C031B228 + 4;
  v22 = (unsigned int *)&unk_1C0327584;
  do
  {
    v23 = *((_QWORD *)a3 + 7);
    v24 = *((_DWORD *)a3 + 6) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v16
                                                                                  + ((v17 * alAlpha[*v21] + 0x80000) >> 20))
                                                                   + v23) << *((_DWORD *)a3 + 1)) >> *(_DWORD *)a3) | *((_DWORD *)a3 + 8) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v25 + ((v20 * alAlpha[v21[2]] + 0x80000) >> 20)) + v23) << *((_DWORD *)a3 + 5)) >> *((_DWORD *)a3 + 4)) | *((_DWORD *)a3 + 7) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v18 + ((v19 * alAlpha[v21[1]] + 0x80000) >> 20)) + v23) << *((_DWORD *)a3 + 3)) >> *((_DWORD *)a3 + 2));
    if ( a1 == 2 )
      *v5 = v24;
    else
      *v22 = v24;
    ++v5;
    ++v22;
    v21 += 4;
    --v8;
  }
  while ( v8 );
  if ( a1 == 2 )
  {
    LOWORD(aulCacheCT) = a5;
    word_1C0327664 = a4;
  }
  else
  {
    LODWORD(aulCacheCT) = a5;
    dword_1C0327748 = a4;
  }
}
