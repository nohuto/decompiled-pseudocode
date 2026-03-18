/*
 * XREFs of prfntKillList @ 0x1C000E9D0
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C000E3D8 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C000E644 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C001D09C (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C001D0B4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C001D0CC (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0027200 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0027294 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall prfntKillList(__int64 *a1)
{
  __int64 v2; // rdi
  struct PDEV *v3; // rbx
  struct RFONT *v5; // rsi
  __int64 v6; // rcx
  struct RFONT *v7; // rax
  __int64 v8; // rdx
  struct RFONT *v9; // rsi
  __int64 v10; // rcx
  struct RFONT *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  struct RFONT *v17; // [rsp+78h] [rbp+38h] BYREF
  struct PDEV *v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0LL;
  v19 = 0LL;
  v16 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v15 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  GreAcquireHmgrSemaphore();
  v3 = gppdevList;
  if ( gppdevList )
  {
    do
    {
      if ( (*((_DWORD *)v3 + 14) & 1) != 0 )
      {
        v18 = v3;
        v5 = PDEVOBJ::prfntActive((PDEVOBJ *)&v18);
        while ( v5 )
        {
          v6 = *a1;
          v7 = v5;
          v5 = (struct RFONT *)*((_QWORD *)v5 + 63);
          v17 = v7;
          if ( *((_QWORD *)v7 + 15) == v6 && !*((_DWORD *)v7 + 123) )
          {
            v14 = *(_QWORD *)(v6 + 72);
            RFONTOBJ::vRemove(&v17, &v14, 0LL);
            *(_QWORD *)(*a1 + 72) = v14;
            if ( (*((_DWORD *)v3 + 14) & 0x800000) != 0 )
              v8 = *((_QWORD *)v3 + 443) + 1552LL;
            else
              v8 = (__int64)v3 + 1552;
            RFONTOBJ::vRemove(&v17, v8, 1LL);
            RFONTOBJ::vInsert(&v17, &v19, 1LL);
          }
          v17 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
        }
        v9 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v18);
        while ( v9 )
        {
          v10 = *a1;
          v11 = v9;
          v9 = (struct RFONT *)*((_QWORD *)v9 + 63);
          v17 = v11;
          if ( *((_QWORD *)v11 + 15) == v10 )
          {
            v14 = *(_QWORD *)(v10 + 72);
            RFONTOBJ::vRemove(&v17, &v14, 0LL);
            *(_QWORD *)(*a1 + 72) = v14;
            if ( (*((_DWORD *)v3 + 14) & 0x800000) != 0 )
              v12 = *((_QWORD *)v3 + 443) + 1560LL;
            else
              v12 = (__int64)v3 + 1560;
            RFONTOBJ::vRemove(&v17, v12, 1LL);
            RFONTOBJ::vInsert(&v17, &v19, 1LL);
            v13 = PDEVOBJ::cInactive((PDEVOBJ *)&v18) - 1;
            if ( (*((_DWORD *)v3 + 14) & 0x800000) != 0 )
              *(_DWORD *)(*((_QWORD *)v3 + 443) + 1568LL) = v13;
            else
              *((_DWORD *)v3 + 392) = v13;
          }
          v17 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
        }
      }
      v3 = (struct PDEV *)*((_QWORD *)v3 + 3);
    }
    while ( v3 );
    v2 = v19;
  }
  GreReleaseHmgrSemaphore();
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  return v2;
}
