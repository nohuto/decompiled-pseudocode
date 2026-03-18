/*
 * XREFs of prfntKillList @ 0x1C012A6E0
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0129894 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0129BFC (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F444 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F4D4 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0030FB4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0126358 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0126524 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 */

__int64 __fastcall prfntKillList(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct PDEV *v7; // rbx
  struct RFONT *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdx
  struct RFONT *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  int v16; // ecx
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF
  struct PDEV *v22; // [rsp+80h] [rbp+40h] BYREF
  __int64 v23; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0LL;
  v23 = 0LL;
  v20 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v19 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  GreAcquireHmgrSemaphore(v4, v3, v5, v6);
  v7 = gppdevList;
  if ( gppdevList )
  {
    do
    {
      if ( (*((_DWORD *)v7 + 14) & 1) != 0 )
      {
        v22 = v7;
        v8 = PDEVOBJ::prfntActive((PDEVOBJ *)&v22);
        while ( v8 )
        {
          v9 = *a1;
          v10 = (__int64)v8;
          v8 = (struct RFONT *)*((_QWORD *)v8 + 63);
          v21 = v10;
          if ( *(_QWORD *)(v10 + 120) == v9 && *(int *)(v10 + 492) <= 0 )
          {
            v18 = *(_QWORD *)(v9 + 72);
            RFONTOBJ::vRemove((__int64)&v21, &v18, 0);
            *(_QWORD *)(*a1 + 72) = v18;
            if ( (*((_DWORD *)v7 + 14) & 0x800000) != 0 )
              v11 = (_QWORD *)(*((_QWORD *)v7 + 443) + 1552LL);
            else
              v11 = (_QWORD *)((char *)v7 + 1552);
            RFONTOBJ::vRemove((__int64)&v21, v11, 1);
            RFONTOBJ::vInsert(&v21, &v23, 1);
          }
          v21 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
        }
        v12 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v22);
        while ( v12 )
        {
          v13 = *a1;
          v14 = (__int64)v12;
          v12 = (struct RFONT *)*((_QWORD *)v12 + 63);
          v21 = v14;
          if ( *(_QWORD *)(v14 + 120) == v13 )
          {
            v18 = *(_QWORD *)(v13 + 72);
            RFONTOBJ::vRemove((__int64)&v21, &v18, 0);
            *(_QWORD *)(*a1 + 72) = v18;
            if ( (*((_DWORD *)v7 + 14) & 0x800000) != 0 )
              v15 = (_QWORD *)(*((_QWORD *)v7 + 443) + 1560LL);
            else
              v15 = (_QWORD *)((char *)v7 + 1560);
            RFONTOBJ::vRemove((__int64)&v21, v15, 1);
            RFONTOBJ::vInsert(&v21, &v23, 1);
            v16 = PDEVOBJ::cInactive((PDEVOBJ *)&v22) - 1;
            if ( (*((_DWORD *)v7 + 14) & 0x800000) != 0 )
              *(_DWORD *)(*((_QWORD *)v7 + 443) + 1568LL) = v16;
            else
              *((_DWORD *)v7 + 392) = v16;
          }
          v21 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
        }
      }
      v7 = (struct PDEV *)*((_QWORD *)v7 + 3);
    }
    while ( v7 );
    v2 = v23;
  }
  GreReleaseHmgrSemaphore();
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  SEMOBJ::vUnlock((SEMOBJ *)&v20);
  return v2;
}
