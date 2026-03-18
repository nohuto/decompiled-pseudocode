/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C000E644
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C000DAA8 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C000E980 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     bKillPFFOBJ @ 0x1C000E9AC (bKillPFFOBJ.c)
 *     prfntKillList @ 0x1C000E9D0 (prfntKillList.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0021C38 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C0021D68 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vKillRFONTList @ 0x1C025DBE0 (vKillRFONTList.c)
 */

__int64 __fastcall PFTOBJ::bUnloadAllButPermanentFonts(PFTOBJ *this)
{
  int v2; // r12d
  unsigned int v3; // ebx
  unsigned int v4; // edx
  char *v5; // rsi
  __int64 v6; // rcx
  char *v7; // r14
  __int64 *i; // rdi
  __int64 v9; // rbp
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbp
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r14
  char *v20; // rdi
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v23 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v3 = 1;
  v4 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( !v4 )
    goto LABEL_28;
  if ( v4 > 0x40 )
  {
    v5 = (char *)PALLOCMEM2(48 * v4);
    if ( v5 )
    {
      v2 = 1;
      goto LABEL_5;
    }
    v3 = 0;
LABEL_28:
    SEMOBJ::vUnlock((SEMOBJ *)&v23);
    return v3;
  }
  v5 = (char *)&gFntVict;
LABEL_5:
  v6 = *(_QWORD *)this;
  v7 = v5;
  for ( i = (__int64 *)(*(_QWORD *)this + 32LL);
        (unsigned __int64)i < v6 + 8 * (unsigned __int64)*(unsigned int *)(v6 + 24) + 32;
        ++i )
  {
    v16 = *i;
    if ( *i )
    {
      do
      {
        v9 = *(_QWORD *)(v16 + 8);
        *(_DWORD *)(v16 + 56) = 0;
        *(_DWORD *)(v16 + 60) = 0;
        v22[0] = v16;
        PFFOBJ::vKill((PFFOBJ *)v22);
        if ( *i == v10 )
          *i = *(_QWORD *)(v10 + 8);
        v11 = *(_QWORD *)(v10 + 8);
        if ( v11 )
          *(_QWORD *)(v11 + 16) = *(_QWORD *)(v10 + 16);
        v12 = *(_QWORD *)(v10 + 16);
        if ( v12 )
          *(_QWORD *)(v12 + 8) = *(_QWORD *)(v10 + 8);
        *(_QWORD *)v7 = v10;
        PFFOBJ::vRemoveHash((PFFOBJ *)v22);
        --*(_DWORD *)(*(_QWORD *)this + 28LL);
        v15 = prfntKillList(v22, v13, v14);
        *((_QWORD *)v7 + 1) = v15;
        if ( !v15 )
          *((_DWORD *)v7 + 10) = bKillPFFOBJ(v22, v7 + 16);
        v7 += 48;
        v16 = v9;
      }
      while ( v9 );
    }
    v6 = *(_QWORD *)this;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  v17 = 0LL;
  v18 = (__int64)((unsigned __int128)((v7 - v5) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v19 = (v18 >> 63) + v18;
  if ( (_DWORD)v19 )
  {
    v20 = v5 + 8;
    do
    {
      if ( *(_QWORD *)v20 )
      {
        v22[0] = *((_QWORD *)v20 - 1);
        vKillRFONTList((PFFOBJ *)v22);
      }
      else if ( *((_DWORD *)v20 + 8) )
      {
        vCleanupFontFile((struct PFFCLEANUP *)&v5[48 * v17 + 16]);
      }
      v17 = (unsigned int)(v17 + 1);
      v20 += 48;
    }
    while ( (unsigned int)v17 < (unsigned int)v19 );
  }
  if ( v2 )
    Win32FreePool(v5);
  return v3;
}
