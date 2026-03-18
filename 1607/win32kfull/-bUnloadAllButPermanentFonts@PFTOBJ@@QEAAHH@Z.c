/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0022D74
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C0107C0C (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     prfntKillList @ 0x1C0021534 (prfntKillList.c)
 *     bKillPFFOBJ @ 0x1C0021758 (bKillPFFOBJ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C002177C (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0026A50 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C0026B80 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01BF4C8 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025A35C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vKillRFONTList @ 0x1C025B08C (vKillRFONTList.c)
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
  struct PFF *v10; // r13
  bool v11; // zf
  bool v12; // bp
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  struct PFF *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // r14
  char *v23; // rdi
  __int64 v25[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v26 = ghsemPublicPFT;
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
    v5 = (char *)PALLOCMEM2(48 * v4);
    if ( !v5 )
    {
      v3 = 0;
LABEL_5:
      SEMOBJ::~SEMOBJ((SEMOBJ *)&v26);
      return v3;
    }
    v2 = 1;
  }
  v6 = *(_QWORD *)this;
  v7 = v5;
  for ( i = (struct PFF **)(*(_QWORD *)this + 40LL);
        (unsigned __int64)i < v6 + 8 * (unsigned __int64)*(unsigned int *)(v6 + 24) + 40;
        ++i )
  {
    for ( j = *i; ; j = v10 )
    {
      v18 = SkipInvalidPff(j);
      if ( !v18 )
        break;
      v10 = (struct PFF *)*((_QWORD *)v18 + 1);
      v11 = *((_QWORD *)v18 + 11) == qword_1C0334780;
      v25[0] = (__int64)v18;
      v12 = v11;
      *((_DWORD *)v18 + 14) = 0;
      *((_DWORD *)v18 + 15) = 0;
      PFFOBJ::vKill((PFFOBJ *)v25);
      if ( *i == (struct PFF *)v13 )
        *i = *(struct PFF **)(v13 + 8);
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
        *(_QWORD *)(v14 + 16) = *(_QWORD *)(v13 + 16);
      v15 = *(_QWORD *)(v13 + 16);
      if ( v15 )
        *(_QWORD *)(v15 + 8) = *(_QWORD *)(v13 + 8);
      *(_QWORD *)v7 = v13;
      PFFOBJ::vRemoveHash((PFFOBJ *)v25);
      v16 = *(_QWORD *)this;
      if ( v12 )
        ++*(_DWORD *)(v16 + 32);
      --*(_DWORD *)(v16 + 28);
      v17 = prfntKillList(v25);
      *((_QWORD *)v7 + 1) = v17;
      if ( !v17 )
        *((_DWORD *)v7 + 10) = bKillPFFOBJ((PFFOBJ *)v25, (struct PFFCLEANUP *)(v7 + 16));
      v7 += 48;
    }
    v6 = *(_QWORD *)this;
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v26);
  v20 = (unsigned __int128)((v7 - v5) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v21 = 0LL;
  v22 = (v7 - v5) / 48;
  if ( (_DWORD)v22 )
  {
    v23 = v5 + 8;
    do
    {
      v20 = *(_QWORD *)v23;
      if ( *(_QWORD *)v23 )
      {
        v25[0] = *((_QWORD *)v23 - 1);
        vKillRFONTList((PFFOBJ *)v25);
      }
      else if ( *((_DWORD *)v23 + 8) )
      {
        vCleanupFontFile((struct PFFCLEANUP *)&v5[48 * v21 + 16]);
      }
      v21 = (unsigned int)(v21 + 1);
      v23 += 48;
    }
    while ( (unsigned int)v21 < (unsigned int)v22 );
  }
  if ( v2 )
    Win32FreePool(v5, v20, v19);
  return v3;
}
