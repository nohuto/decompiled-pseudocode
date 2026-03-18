/*
 * XREFs of ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C000E3D8
 * Callers:
 *     vCleanupPrivateFonts @ 0x1C000E120 (vCleanupPrivateFonts.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C000E2DC (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     PFTOBJ_bUnloadWorkhorseWrap @ 0x1C025DCA0 (PFTOBJ_bUnloadWorkhorseWrap.c)
 *     GreRemoveFontMemResourceEx @ 0x1C027F828 (GreRemoveFontMemResourceEx.c)
 *     GreRemoveFontResourceW @ 0x1C027F8DC (GreRemoveFontResourceW.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A4450 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C000E980 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     bKillPFFOBJ @ 0x1C000E9AC (bKillPFFOBJ.c)
 *     prfntKillList @ 0x1C000E9D0 (prfntKillList.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0020CC8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0021C38 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1C0021DA8 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     vKillRFONTList @ 0x1C025DBE0 (vKillRFONTList.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B37C4 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall PFTOBJ::bUnloadWorkhorse(PFTOBJ *this, struct PFF *a2, struct PFF **a3, unsigned int a4)
{
  struct PFF *v8; // rsi
  unsigned int v9; // edi
  int v10; // eax
  struct tagPvtData *v11; // r8
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp-20h] BYREF
  struct PFF **v18; // [rsp+A8h] [rbp+38h] BYREF

  v8 = 0LL;
  v9 = 0;
  if ( !a2 )
    goto LABEL_32;
  v10 = *((_DWORD *)a2 + 13);
  v11 = 0LL;
  v16[0] = a2;
  if ( (v10 & 1) != 0 )
  {
    v9 = 1;
    if ( *((_DWORD *)a2 + 14) || *((_DWORD *)a2 + 15) || *((_QWORD *)a2 + 20) || *((_DWORD *)a2 + 16) )
      goto LABEL_32;
    v8 = a2;
  }
  else
  {
    if ( *(struct PFT **const *)this == gpPFTPrivate )
    {
      v11 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v16);
      if ( !v11 )
        goto LABEL_32;
    }
    LODWORD(v18) = 0;
    v9 = 1;
    if ( (unsigned int)PFFOBJ::bDeleteLoadRef((PFFOBJ *)v16, a4, v11, (int *)&v18) )
    {
      PFFOBJ::vRemoveHash((PFFOBJ *)v16);
      v12 = *((_DWORD *)a2 + 16) == 0;
      v8 = a2;
      v18 = a3;
      if ( !v12 )
        v8 = 0LL;
      if ( !a3 )
      {
        PUBLIC_PFTOBJ::pPFFGet(
          this,
          *((unsigned __int16 **)a2 + 3),
          *((_DWORD *)a2 + 8),
          *((_DWORD *)a2 + 9),
          *((struct tagDESIGNVECTOR **)a2 + 5),
          *((_DWORD *)a2 + 12),
          &v18,
          0);
        a3 = v18;
      }
      if ( *a3 == a2 )
        *a3 = (struct PFF *)*((_QWORD *)a2 + 1);
      v13 = *((_QWORD *)a2 + 1);
      if ( v13 )
        *(_QWORD *)(v13 + 16) = *((_QWORD *)a2 + 2);
      v14 = *((_QWORD *)a2 + 2);
      if ( v14 )
        *(_QWORD *)(v14 + 8) = *((_QWORD *)a2 + 1);
      --*(_DWORD *)(*(_QWORD *)this + 28LL);
    }
    else
    {
      if ( *(struct PFT **const *)this != gpPFTPrivate || !(_DWORD)v18 )
        goto LABEL_32;
      v9 = 0;
    }
  }
  if ( !v8 )
  {
LABEL_32:
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    return v9;
  }
  v16[0] = v8;
  if ( prfntKillList(v16, a2, v11) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    vKillRFONTList((PFFOBJ *)v16);
  }
  else if ( (unsigned int)bKillPFFOBJ(v16, v17) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    vCleanupFontFile((struct PFFCLEANUP *)v17);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  return 1;
}
