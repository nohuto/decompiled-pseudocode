/*
 * XREFs of ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C007EC7C
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C0016F8C (-CitpStart@@YAJXZ.c)
 * Callees:
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C0058854 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     ??$CitpBaseUseDataInitializeBitmaps@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEAU_CIT_BITMAP@@@Z @ 0x1C007EEE0 (--$CitpBaseUseDataInitializeBitmaps@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEAU_CIT_BITMAP@@@Z.c)
 *     ?CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z @ 0x1C007EEF8 (-CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     UIntMult @ 0x1C00B1274 (UIntMult.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextStart(UINT *a1)
{
  unsigned int *v2; // rbx
  const char *v3; // rdx
  unsigned int v4; // edi
  void *v5; // rax
  void *v6; // rax
  UINT v7; // ebp
  char *v8; // r14
  __int64 v9; // rbx
  char **v10; // rax
  char *v11; // rbx
  struct _CIT_BITMAP *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rbx
  char v16; // bp
  __int64 v17; // rax
  __int64 *v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r9
  __int16 v23; // ax
  int v25; // ecx
  unsigned int v26; // r8d
  char i; // cl
  _QWORD v28[5]; // [rsp+30h] [rbp-28h] BYREF
  UINT puResult; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1 + 102;
  v4 = 0;
  if ( UIntMult(dword_1C0101F8C + 7, uMultiplier, a1 + 102) < 0 )
  {
    v25 = -1073741675;
    v26 = 566;
LABEL_34:
    v4 = v25;
    CitpLogFailureWorker(v25, v3, v26);
    return v4;
  }
  v5 = CitAllocZero(*v2);
  *((_QWORD *)a1 + 50) = v5;
  if ( !v5 )
  {
    v26 = 574;
LABEL_33:
    v25 = -1073741670;
    goto LABEL_34;
  }
  puResult = 0;
  if ( UIntMult(0xA8u, dword_1C0101F8C, &puResult) < 0 )
  {
    v25 = -1073741675;
    v26 = 585;
    goto LABEL_34;
  }
  v6 = CitAllocZero(puResult);
  *((_QWORD *)a1 + 38) = v6;
  if ( !v6 )
  {
    v26 = 593;
    goto LABEL_33;
  }
  v7 = 0;
  v28[0] = *((_QWORD *)a1 + 50);
  v28[1] = *v2;
  if ( dword_1C0101F8C )
  {
    v8 = (char *)(a1 + 78);
    do
    {
      v9 = *((_QWORD *)a1 + 38) + 168LL * v7;
      *(_WORD *)(v9 + 32) = 1;
      *(_QWORD *)v9 = 0LL;
      memset((void *)(v9 + 40), 0, 0x28uLL);
      CitpBaseUseDataInitializeBitmaps<_CIT_USE_DATA>(v9 + 80, v28);
      v10 = (char **)*((_QWORD *)a1 + 40);
      v11 = (char *)(v9 + 16);
      *(_QWORD *)v11 = v8;
      *((_QWORD *)v11 + 1) = v10;
      if ( *v10 != v8 )
        __fastfail(3u);
      *v10 = v11;
      ++v7;
      *((_QWORD *)a1 + 40) = v11;
    }
    while ( v7 < dword_1C0101F8C );
  }
  CitpBaseUseDataInitializeBitmaps<_CIT_USE_DATA>(a1 + 54, v28);
  v12 = (struct _CIT_BITMAP *)a1;
  do
  {
    CitpBitmapInitialize(v12, (struct _CIT_BITMAP *)v28, uMultiplier);
    v12 = (struct _CIT_BITMAP *)(v13 + 16);
  }
  while ( v14 != 1 );
  v15 = dword_1C0101F8C;
  v16 = -1;
  a1[90] = dword_1C0101F8C;
  a1[93] = v15 - ((unsigned int)v15 >> 2);
  if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
  {
    for ( i = -1; (_DWORD)v15; LODWORD(v15) = (unsigned int)v15 >> 1 )
      ++i;
    v15 = (unsigned int)(1 << i);
  }
  v17 = Win32AllocPool();
  *((_QWORD *)a1 + 49) = v17;
  v18 = (__int64 *)v17;
  if ( !v17 )
  {
    v26 = 654;
    goto LABEL_33;
  }
  v19 = (unsigned __int64)(a1 + 94);
  if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
  {
    for ( ; (_DWORD)v15; LODWORD(v15) = (unsigned int)v15 >> 1 )
      ++v16;
    v15 = (unsigned int)(1 << v16);
  }
  *(_DWORD *)v19 = 0;
  *((_QWORD *)a1 + 48) = v18;
  if ( (unsigned int)v15 > 0x4000000 )
    v15 = 0x4000000LL;
  a1[95] = 32 * v15;
  v20 = v19 | 1;
  v21 = 0LL;
  v22 = (unsigned __int64)(8 * v15 + 7) >> 3;
  if ( v18 > &v18[v15] )
    v22 = 0LL;
  if ( v22 )
  {
    do
    {
      ++v21;
      *v18++ = v20;
    }
    while ( v21 < v22 );
  }
  LOBYTE(puResult) = 0;
  ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &puResult, 1u);
  *((_BYTE *)a1 + 432) ^= (((_BYTE)puResult != 0) ^ *((_BYTE *)a1 + 432)) & 1;
  v23 = MEMORY[0xFFFFF780000002C4];
  if ( MEMORY[0xFFFFF780000002C4] > 0xFFFFu )
    v23 = -1;
  *((_WORD *)a1 + 218) = v23;
  return v4;
}
