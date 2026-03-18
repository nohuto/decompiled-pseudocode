/*
 * XREFs of ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00E4080
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0068118 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpContextNewPeriod@@YAJPEAU_CIT_IMPACT_CONTEXT@@_K@Z @ 0x1C00E401C (-CitpContextNewPeriod@@YAJPEAU_CIT_IMPACT_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C004A1C0 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00E4AAC (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 */

void __fastcall CitpContextReinitialize(struct _CIT_IMPACT_CONTEXT *a1, unsigned int a2)
{
  char *v2; // rsi
  unsigned __int64 v5; // rax
  __int64 *v6; // r8
  __int64 v7; // rdx
  char i; // cl
  __int64 v9; // rax
  __int64 *v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r9
  unsigned int j; // ebp
  __int64 v14; // rcx
  char *v15; // rdi
  char **v16; // rax
  struct _CIT_IMPACT_CONTEXT *v17; // rdi
  __int64 v18; // rsi
  bool v19; // zf
  __int16 v20; // ax

  v2 = (char *)a1 + 312;
  *((_QWORD *)a1 + 40) = (char *)a1 + 312;
  *((_QWORD *)a1 + 39) = (char *)a1 + 312;
  *((_QWORD *)a1 + 42) = (char *)a1 + 328;
  *((_QWORD *)a1 + 41) = (char *)a1 + 328;
  *((_DWORD *)a1 + 91) = 0;
  *((_QWORD *)a1 + 44) = (char *)a1 + 344;
  *((_QWORD *)a1 + 43) = (char *)a1 + 344;
  v5 = (unsigned __int64)a1 + 376;
  v6 = (__int64 *)*((_QWORD *)a1 + 49);
  v7 = *((_DWORD *)a1 + 95) >> 5;
  *((_DWORD *)a1 + 92) = 0;
  if ( (((_DWORD)v7 - 1) & (unsigned int)v7) != 0 )
  {
    for ( i = -1; (_DWORD)v7; LODWORD(v7) = (unsigned int)v7 >> 1 )
      ++i;
    v7 = (unsigned int)(1 << i);
  }
  *(_DWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (unsigned int)v7 > 0x4000000 )
    v7 = 0x4000000LL;
  *(_DWORD *)(v5 + 4) = 32 * v7;
  v9 = v5 | 1;
  v10 = &v6[v7];
  v11 = 0LL;
  v12 = (unsigned __int64)((char *)v10 - (char *)v6 + 7) >> 3;
  if ( v6 > v10 )
    v12 = 0LL;
  if ( v12 )
  {
    do
    {
      ++v11;
      *v6++ = v9;
    }
    while ( v11 < v12 );
  }
  for ( j = 0; j < *((_DWORD *)a1 + 90); *((_QWORD *)v2 + 1) = v15 )
  {
    v14 = *((_QWORD *)a1 + 38) + 176LL * j;
    v15 = (char *)(v14 + 16);
    *(_QWORD *)(v14 + 24) = v14 + 16;
    *(_QWORD *)(v14 + 16) = v14 + 16;
    *(_QWORD *)v14 = 0LL;
    CitpProgDataReinitialize((struct _CIT_PROG_DATA *)v14);
    v16 = (char **)*((_QWORD *)v2 + 1);
    *(_QWORD *)v15 = v2;
    *((_QWORD *)v15 + 1) = v16;
    if ( *v16 != v2 )
      __fastfail(3u);
    *v16 = v15;
    ++j;
  }
  memset(*((void **)a1 + 27), 0, *((_QWORD *)a1 + 28));
  memset((char *)a1 + 232, 0, 0x30uLL);
  v17 = a1;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_QWORD *)a1 + 37) = 0LL;
  v18 = 6LL;
  do
  {
    memset(*(void **)v17, 0, *((_QWORD *)v17 + 1));
    v17 = (struct _CIT_IMPACT_CONTEXT *)((char *)v17 + 16);
    --v18;
  }
  while ( v18 );
  memset((char *)a1 + 96, 0, 0x58uLL);
  *((_QWORD *)a1 + 23) = 0LL;
  *((_QWORD *)a1 + 24) = 0LL;
  *((_QWORD *)a1 + 25) = 0LL;
  *((_DWORD *)a1 + 52) = 0;
  v19 = (*((_BYTE *)a1 + 432) & 0x20) == 0;
  v20 = *((_WORD *)a1 + 218);
  *((_WORD *)a1 + 93) = v20;
  *((_WORD *)a1 + 94) = v20;
  *((_WORD *)a1 + 95) = v20;
  *((_WORD *)a1 + 92) = 1;
  if ( !v19 )
    CitpStatIncrement((unsigned __int16 *)a1 + 98, 1);
  CitpContextResetTrackingValues(a1, a2);
}
