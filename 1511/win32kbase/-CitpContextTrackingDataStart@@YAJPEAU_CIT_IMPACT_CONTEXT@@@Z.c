/*
 * XREFs of ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C007EAB4
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00050F4 (-CitpResetTracking@@YAJXZ.c)
 *     ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C007EA44 (-CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C0077504 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     UIntMult @ 0x1C00B49EC (UIntMult.c)
 *     ??$CitpBaseUseDataInitializeBitmaps@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEAU_CIT_BITMAP@@@Z @ 0x1C00E375C (--$CitpBaseUseDataInitializeBitmaps@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEAU_CIT_BITMAP@@@Z.c)
 *     ?CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z @ 0x1C00E3F7C (-CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E42A8 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextTrackingDataStart(UINT *a1)
{
  unsigned int v1; // edi
  unsigned int *v4; // rbx
  const char *v5; // rdx
  int v6; // ecx
  unsigned int v7; // r8d
  void *v8; // rax
  void *v9; // rax
  UINT v10; // ebp
  char *v11; // r14
  __int64 v12; // rbx
  char **v13; // rax
  char *v14; // rbx
  struct _CIT_BITMAP *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // rbx
  char v19; // bp
  char i; // cl
  __int64 v21; // rax
  __int64 *v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r9
  _QWORD v27[5]; // [rsp+20h] [rbp-28h] BYREF
  UINT puResult; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( !byte_1C0107171 )
    return v1;
  v4 = a1 + 102;
  if ( UIntMult(dword_1C010711C + 7, uMultiplier, a1 + 102) < 0 )
  {
    v6 = -1073741675;
    v7 = 666;
LABEL_24:
    v1 = v6;
    CitpLogFailureWorker(v6, v5, v7);
    return v1;
  }
  v8 = CitAllocZero(*v4);
  *((_QWORD *)a1 + 50) = v8;
  if ( !v8 )
  {
    v7 = 674;
LABEL_23:
    v6 = -1073741670;
    goto LABEL_24;
  }
  puResult = 0;
  if ( UIntMult(0xB0u, dword_1C010711C, &puResult) < 0 )
  {
    v6 = -1073741675;
    v7 = 685;
    goto LABEL_24;
  }
  v9 = CitAllocZero(puResult);
  *((_QWORD *)a1 + 38) = v9;
  if ( !v9 )
  {
    v7 = 693;
    goto LABEL_23;
  }
  v10 = 0;
  v27[0] = *((_QWORD *)a1 + 50);
  v27[1] = *v4;
  if ( dword_1C010711C )
  {
    v11 = (char *)(a1 + 78);
    do
    {
      v12 = *((_QWORD *)a1 + 38) + 176LL * v10;
      *(_WORD *)(v12 + 32) = 1;
      *(_QWORD *)v12 = 0LL;
      memset((void *)(v12 + 40), 0, 0x28uLL);
      CitpBaseUseDataInitializeBitmaps<_CIT_USE_DATA>(v12 + 88, v27);
      v13 = (char **)*((_QWORD *)a1 + 40);
      v14 = (char *)(v12 + 16);
      *(_QWORD *)v14 = v11;
      *((_QWORD *)v14 + 1) = v13;
      if ( *v13 != v11 )
        __fastfail(3u);
      *v13 = v14;
      ++v10;
      *((_QWORD *)a1 + 40) = v14;
    }
    while ( v10 < dword_1C010711C );
  }
  CitpBaseUseDataInitializeBitmaps<_CIT_USE_DATA>(a1 + 54, v27);
  v15 = (struct _CIT_BITMAP *)a1;
  do
  {
    CitpBitmapInitialize(v15, (struct _CIT_BITMAP *)v27, uMultiplier);
    v15 = (struct _CIT_BITMAP *)(v16 + 16);
  }
  while ( v17 != 1 );
  v18 = dword_1C010711C;
  v19 = -1;
  a1[90] = dword_1C010711C;
  a1[93] = v18 - ((unsigned int)v18 >> 2);
  if ( (((_DWORD)v18 - 1) & (unsigned int)v18) != 0 )
  {
    for ( i = -1; (_DWORD)v18; LODWORD(v18) = (unsigned int)v18 >> 1 )
      ++i;
    v18 = (unsigned int)(1 << i);
  }
  v21 = Win32AllocPool();
  *((_QWORD *)a1 + 49) = v21;
  v22 = (__int64 *)v21;
  if ( !v21 )
  {
    v7 = 754;
    goto LABEL_23;
  }
  v23 = (unsigned __int64)(a1 + 94);
  if ( (((_DWORD)v18 - 1) & (unsigned int)v18) != 0 )
  {
    for ( ; (_DWORD)v18; LODWORD(v18) = (unsigned int)v18 >> 1 )
      ++v19;
    v18 = (unsigned int)(1 << v19);
  }
  *(_DWORD *)v23 = 0;
  *((_QWORD *)a1 + 48) = v21;
  if ( (unsigned int)v18 > 0x4000000 )
    v18 = 0x4000000LL;
  a1[95] = 32 * v18;
  v24 = v23 | 1;
  v25 = 0LL;
  v26 = (unsigned __int64)(8 * v18 + 7) >> 3;
  if ( v22 > &v22[v18] )
    v26 = 0LL;
  if ( v26 )
  {
    do
    {
      ++v25;
      *v22++ = v24;
    }
    while ( v25 < v26 );
  }
  return v1;
}
