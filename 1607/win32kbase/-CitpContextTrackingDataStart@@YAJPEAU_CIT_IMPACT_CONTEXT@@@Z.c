/*
 * XREFs of ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F85C
 * Callers:
 *     ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F7EC (-CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00F6BB4 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C000EC9C (-CitAllocZero@@YAPEAX_K@Z.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ??$CitpBaseUseDataInitializeBitmaps@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEAU_CIT_BITMAP@@@Z @ 0x1C00F557C (--$CitpBaseUseDataInitializeBitmaps@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEAU_CIT_BITMAP@@@Z.c)
 *     ?CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z @ 0x1C00F5F04 (-CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00F6204 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextTrackingDataStart(struct _CIT_IMPACT_CONTEXT *a1, const char *a2)
{
  unsigned int v2; // edi
  char v5; // bp
  unsigned __int64 v6; // rcx
  void *v7; // rax
  int v8; // ecx
  unsigned int v9; // r8d
  unsigned __int64 v10; // rcx
  void *v11; // rax
  unsigned int v12; // r14d
  char *v13; // r15
  __int64 v14; // rbx
  char **v15; // rax
  char *v16; // rbx
  struct _CIT_BITMAP *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // rbx
  unsigned int v21; // eax
  char i; // cl
  __int64 v23; // rax
  __int64 *v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r9
  _QWORD v29[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( !byte_1C011E5C0 )
    return v2;
  v5 = -1;
  v6 = dword_1C011E5C4 * (unsigned __int64)(unsigned int)(dword_1C011E56C + 7);
  if ( v6 > 0xFFFFFFFF )
  {
    *((_DWORD *)a1 + 102) = -1;
    v9 = 666;
    goto LABEL_35;
  }
  *((_DWORD *)a1 + 102) = v6;
  v7 = CitAllocZero((unsigned int)v6);
  *((_QWORD *)a1 + 50) = v7;
  if ( !v7 )
  {
    v8 = -1073741670;
    v9 = 674;
LABEL_36:
    v2 = v8;
    CitpLogFailureWorker(v8, a2, v9);
    return v2;
  }
  v10 = 176LL * (unsigned int)dword_1C011E56C;
  if ( v10 > 0xFFFFFFFF )
  {
    v9 = 685;
LABEL_35:
    v8 = -1073741675;
    goto LABEL_36;
  }
  v11 = CitAllocZero((unsigned int)v10);
  *((_QWORD *)a1 + 38) = v11;
  if ( !v11 )
  {
    v8 = -1073741670;
    v9 = 693;
    goto LABEL_36;
  }
  v12 = 0;
  v29[0] = *((_QWORD *)a1 + 50);
  v29[1] = *((unsigned int *)a1 + 102);
  if ( dword_1C011E56C )
  {
    v13 = (char *)a1 + 312;
    do
    {
      v14 = *((_QWORD *)a1 + 38) + 176LL * v12;
      *(_WORD *)(v14 + 32) = 1;
      *(_QWORD *)v14 = 0LL;
      memset((void *)(v14 + 40), 0, 0x28uLL);
      CitpBaseUseDataInitializeBitmaps<_CIT_USE_DATA>(v14 + 88, v29);
      v15 = (char **)*((_QWORD *)a1 + 40);
      v16 = (char *)(v14 + 16);
      if ( *v15 != v13 )
        __fastfail(3u);
      *(_QWORD *)v16 = v13;
      ++v12;
      *((_QWORD *)v16 + 1) = v15;
      *v15 = v16;
      *((_QWORD *)a1 + 40) = v16;
    }
    while ( v12 < dword_1C011E56C );
  }
  CitpBaseUseDataInitializeBitmaps<_CIT_USE_DATA>((char *)a1 + 216, v29);
  v17 = a1;
  do
  {
    CitpBitmapInitialize(v17, (struct _CIT_BITMAP *)v29, dword_1C011E5C4);
    v17 = (struct _CIT_BITMAP *)(v18 + 16);
  }
  while ( v19 != 1 );
  v20 = (unsigned int)dword_1C011E56C;
  v21 = dword_1C011E56C - ((unsigned int)dword_1C011E56C >> 2);
  *((_DWORD *)a1 + 90) = dword_1C011E56C;
  *((_DWORD *)a1 + 93) = v21;
  if ( (((_DWORD)v20 - 1) & (unsigned int)v20) != 0 )
  {
    for ( i = -1; (_DWORD)v20; LODWORD(v20) = (unsigned int)v20 >> 1 )
      ++i;
    v20 = (unsigned int)(1 << i);
  }
  v23 = Win32AllocPool();
  *((_QWORD *)a1 + 49) = v23;
  v24 = (__int64 *)v23;
  if ( !v23 )
  {
    v8 = -1073741670;
    v9 = 754;
    goto LABEL_36;
  }
  v25 = (unsigned __int64)a1 + 376;
  if ( (((_DWORD)v20 - 1) & (unsigned int)v20) != 0 )
  {
    for ( ; (_DWORD)v20; LODWORD(v20) = (unsigned int)v20 >> 1 )
      ++v5;
    v20 = (unsigned int)(1 << v5);
  }
  *(_DWORD *)v25 = 0;
  *((_QWORD *)a1 + 48) = v24;
  if ( (unsigned int)v20 > 0x4000000 )
    v20 = 0x4000000LL;
  *((_DWORD *)a1 + 95) = 32 * v20;
  v26 = v25 | 1;
  v27 = 0LL;
  v28 = (unsigned __int64)(8 * v20 + 7) >> 3;
  if ( v24 > &v24[v20] )
    v28 = 0LL;
  if ( v28 )
  {
    do
    {
      ++v27;
      *v24++ = v26;
    }
    while ( v27 < v28 );
  }
  return v2;
}
