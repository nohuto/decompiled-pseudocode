/*
 * XREFs of GreEudcLoadLinkW @ 0x1C028AA00
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C028BA10 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C0001D84 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     bUnloadEudcFont @ 0x1C000E074 (bUnloadEudcFont.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C000EB10 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     vLinkEudcPFEs @ 0x1C000F37C (vLinkEudcPFEs.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0018720 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bAddFlEntry @ 0x1C0019CB8 (bAddFlEntry.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C001A988 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0020CC8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C00215DC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C028B33C (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcLoadLinkW(
        wchar_t *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  unsigned int v8; // edi
  unsigned __int16 *v9; // rbx
  unsigned int appended; // esi
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  wchar_t *Src; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h] BYREF
  struct PFF *v18; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+C8h] [rbp+48h] BYREF

  v21 = a4;
  GreAcquireSemaphore(ghsemEUDC1);
  v8 = 0;
  if ( gcEUDCCount <= 0 )
  {
    if ( a1 )
    {
      v14 = a6;
      if ( a6 > 1 )
        v14 = 1;
      appended = bAddFlEntry(a1, a3, v14, a5, &v17);
      if ( appended && v17 )
        vLinkEudcPFEs(v17);
    }
    else
    {
      MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x20Au);
      v9 = Src;
      if ( Src )
      {
        appended = bAppendSysDirectory(Src, a3);
        if ( appended )
        {
          v17 = ghsemPublicPFT;
          GreAcquireSemaphore(ghsemPublicPFT);
          v11 = -1LL;
          Src = (wchar_t *)gpPFTPublic;
          v12 = -1LL;
          do
            ++v12;
          while ( v9[v12] );
          if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Src, v9, (int)v12 + 1, 1, 0LL, 0, 0LL, 1) )
          {
            appended = 0;
          }
          else
          {
            v20[1] = 0LL;
            v20[0] = &v19;
            appended = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&Src, v9, &v21, 8u, &v18, (struct _EUDCLOAD *)v20);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v17);
          if ( appended )
          {
            if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
            {
              vUnlinkAllEudcRFONTsAndPFEs(v13, 0);
              bUnloadEudcFont((__int64 *)&gappfeSysEUDC);
            }
            *(_OWORD *)&gappfeSysEUDC = v19;
            wcscpy_s(Dst, 0x105uLL, v9);
            ++dword_1C032F208;
            bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, (struct PFE *)v19, 1);
            do
              ++v11;
            while ( Dst[v11] );
            bWriteUserSystemEUDCRegistry(Dst);
          }
        }
        Win32FreePool(v9);
      }
      else
      {
        appended = 0;
      }
    }
    v8 = appended;
  }
  else
  {
    EngSetLastError(0xA7u);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v8;
}
