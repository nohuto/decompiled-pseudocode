/*
 * XREFs of ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0022BB8
 * Callers:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0022ABC (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     vCleanupPrivateFonts @ 0x1C0022F90 (vCleanupPrivateFonts.c)
 *     PFTOBJ_bUnloadWorkhorseWrap @ 0x1C025B150 (PFTOBJ_bUnloadWorkhorseWrap.c)
 *     GreRemoveFontMemResourceEx @ 0x1C027DCCC (GreRemoveFontMemResourceEx.c)
 *     GreRemoveFontResourceW @ 0x1C027DD80 (GreRemoveFontResourceW.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A55B0 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     prfntKillList @ 0x1C0021534 (prfntKillList.c)
 *     bKillPFFOBJ @ 0x1C0021758 (bKillPFFOBJ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C002177C (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0024220 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0026A50 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1C0026BC0 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     vKillRFONTList @ 0x1C025B08C (vKillRFONTList.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B68F8 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall PFTOBJ::bUnloadWorkhorse(PFTOBJ *this, struct PFF *a2, struct PFF **a3, unsigned int a4)
{
  struct PFF *v8; // rsi
  unsigned int v9; // edi
  int v10; // eax
  struct tagPvtData *v11; // r8
  bool v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v18[32]; // [rsp+50h] [rbp-20h] BYREF
  struct PFF **v19; // [rsp+A8h] [rbp+38h] BYREF

  v8 = 0LL;
  v9 = 0;
  if ( !a2 )
    goto LABEL_6;
  v10 = *((_DWORD *)a2 + 13);
  v11 = 0LL;
  v17[0] = (__int64)a2;
  if ( (v10 & 1) != 0 )
  {
    v9 = 1;
    if ( *((_DWORD *)a2 + 14) || *((_DWORD *)a2 + 15) || *((_QWORD *)a2 + 20) || *((_DWORD *)a2 + 16) )
      goto LABEL_6;
    v8 = a2;
  }
  else
  {
    if ( *(struct PFT **const *)this == gpPFTPrivate )
    {
      v11 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v17);
      if ( !v11 )
        goto LABEL_6;
    }
    LODWORD(v19) = 0;
    v9 = 1;
    if ( (unsigned int)PFFOBJ::bDeleteLoadRef((PFFOBJ *)v17, a4, v11, (int *)&v19) )
    {
      PFFOBJ::vRemoveHash((PFFOBJ *)v17);
      v8 = a2;
      if ( *((_DWORD *)a2 + 16) )
        v8 = 0LL;
      v19 = a3;
      v13 = *((_QWORD *)a2 + 11) == qword_1C0334780;
      if ( !a3 )
      {
        PUBLIC_PFTOBJ::pPFFGet(
          this,
          *((unsigned __int16 **)a2 + 3),
          *((_DWORD *)a2 + 8),
          *((_DWORD *)a2 + 9),
          *((struct tagDESIGNVECTOR **)a2 + 5),
          *((_DWORD *)a2 + 12),
          &v19,
          0);
        a3 = v19;
      }
      if ( *a3 == a2 )
        *a3 = (struct PFF *)*((_QWORD *)a2 + 1);
      v14 = *((_QWORD *)a2 + 1);
      if ( v14 )
        *(_QWORD *)(v14 + 16) = *((_QWORD *)a2 + 2);
      v15 = *((_QWORD *)a2 + 2);
      if ( v15 )
        *(_QWORD *)(v15 + 8) = *((_QWORD *)a2 + 1);
      v16 = *(_QWORD *)this;
      if ( v13 )
        ++*(_DWORD *)(v16 + 32);
      --*(_DWORD *)(v16 + 28);
    }
    else
    {
      if ( *(struct PFT **const *)this != gpPFTPrivate || !(_DWORD)v19 )
        goto LABEL_6;
      v9 = 0;
    }
  }
  if ( !v8 )
  {
LABEL_6:
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    return v9;
  }
  v17[0] = (__int64)v8;
  if ( prfntKillList(v17) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    vKillRFONTList((PFFOBJ *)v17);
  }
  else if ( (unsigned int)bKillPFFOBJ((PFFOBJ *)v17, (struct PFFCLEANUP *)v18) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    vCleanupFontFile((struct PFFCLEANUP *)v18);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  return 1;
}
