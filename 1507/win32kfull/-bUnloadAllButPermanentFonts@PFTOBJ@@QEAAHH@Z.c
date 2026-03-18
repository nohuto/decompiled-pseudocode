/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0129BFC
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C01292BC (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C0129388 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     bKillPFFOBJ @ 0x1C01293B4 (bKillPFFOBJ.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C0129DEC (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0129E2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     prfntKillList @ 0x1C012A6E0 (prfntKillList.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01C1324 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025D318 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vKillRFONTList @ 0x1C025E034 (vKillRFONTList.c)
 */

__int64 __fastcall PFTOBJ::bUnloadAllButPermanentFonts(PFTOBJ *this)
{
  int v2; // r12d
  unsigned int v3; // ebx
  unsigned int v4; // edx
  char *v5; // rsi
  __int64 v6; // rcx
  char *v7; // r14
  struct PFF **i; // rdi
  struct PFF *j; // rcx
  struct PFF *v10; // rbp
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  struct PFF *v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r14
  char *v21; // rdi
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v24 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v3 = 1;
  v4 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( !v4 )
    goto LABEL_5;
  if ( v4 <= 0x40 )
  {
    v5 = (char *)&gFntVict;
  }
  else
  {
    v5 = (char *)PALLOCMEM2(48 * v4, 1769367111LL, 0);
    if ( !v5 )
    {
      v3 = 0;
LABEL_5:
      SEMOBJ::~SEMOBJ((SEMOBJ *)&v24);
      return v3;
    }
    v2 = 1;
  }
  v6 = *(_QWORD *)this;
  v7 = v5;
  for ( i = (struct PFF **)(*(_QWORD *)this + 32LL);
        (unsigned __int64)i < v6 + 8 * (unsigned __int64)*(unsigned int *)(v6 + 24) + 32;
        ++i )
  {
    for ( j = *i; ; j = v10 )
    {
      v17 = SkipInvalidPff(j);
      if ( !v17 )
        break;
      v10 = (struct PFF *)*((_QWORD *)v17 + 1);
      *((_DWORD *)v17 + 14) = 0;
      *((_DWORD *)v17 + 15) = 0;
      v23[0] = v17;
      PFFOBJ::vKill((PFFOBJ *)v23);
      if ( *i == (struct PFF *)v11 )
        *i = *(struct PFF **)(v11 + 8);
      v12 = *(_QWORD *)(v11 + 8);
      if ( v12 )
        *(_QWORD *)(v12 + 16) = *(_QWORD *)(v11 + 16);
      v13 = *(_QWORD *)(v11 + 16);
      if ( v13 )
        *(_QWORD *)(v13 + 8) = *(_QWORD *)(v11 + 8);
      *(_QWORD *)v7 = v11;
      PFFOBJ::vRemoveHash((PFFOBJ *)v23);
      --*(_DWORD *)(*(_QWORD *)this + 28LL);
      v16 = prfntKillList(v23, v14, v15);
      *((_QWORD *)v7 + 1) = v16;
      if ( !v16 )
        *((_DWORD *)v7 + 10) = bKillPFFOBJ((PFFOBJ *)v23, (struct PFFCLEANUP *)(v7 + 16));
      v7 += 48;
    }
    v6 = *(_QWORD *)this;
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v24);
  v18 = 0LL;
  v19 = (__int64)((unsigned __int128)((v7 - v5) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v20 = (v19 >> 63) + v19;
  if ( (_DWORD)v20 )
  {
    v21 = v5 + 8;
    do
    {
      if ( *(_QWORD *)v21 )
      {
        v23[0] = *((_QWORD *)v21 - 1);
        vKillRFONTList((PFFOBJ *)v23);
      }
      else if ( *((_DWORD *)v21 + 8) )
      {
        vCleanupFontFile((struct PFFCLEANUP *)&v5[48 * v18 + 16]);
      }
      v18 = (unsigned int)(v18 + 1);
      v21 += 48;
    }
    while ( (unsigned int)v18 < (unsigned int)v20 );
  }
  if ( v2 )
    Win32FreePool(v5);
  return v3;
}
