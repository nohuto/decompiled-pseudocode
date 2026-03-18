/*
 * XREFs of GreEudcLoadLinkW @ 0x1C028937C
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C028A660 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C0006FA8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     bUnloadEudcFont @ 0x1C0021F90 (bUnloadEudcFont.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0024220 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C0024B94 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C005F980 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00604D0 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     bAddFlEntry @ 0x1C00608E8 (bAddFlEntry.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vLinkEudcPFEs @ 0x1C010841C (vLinkEudcPFEs.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C011FB10 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?EUDCEnsureUmfdHost@@YAHXZ @ 0x1C02892A0 (-EUDCEnsureUmfdHost@@YAHXZ.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0289D54 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcLoadLinkW(
        unsigned __int16 *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  __int64 result; // rax
  unsigned int v9; // edi
  unsigned __int16 *v10; // rbx
  unsigned int appended; // esi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r8d
  wchar_t *Src; // [rsp+40h] [rbp-40h] BYREF
  struct _FLENTRY *v18; // [rsp+48h] [rbp-38h] BYREF
  struct PFF *v19; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp+48h] BYREF

  v22 = a4;
  result = EUDCEnsureUmfdHost(a1);
  v9 = 0;
  if ( (_DWORD)result )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    if ( gcEUDCCount <= 0 )
    {
      if ( a1 )
      {
        v16 = a6;
        if ( a6 > 1 )
          v16 = 1;
        appended = bAddFlEntry(a1, a3, v16, a5, &v18);
        if ( appended && v18 )
          vLinkEudcPFEs((__int64)v18);
      }
      else
      {
        MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x20Au);
        v10 = Src;
        if ( Src )
        {
          appended = bAppendSysDirectory(Src, a3);
          if ( appended )
          {
            v18 = (struct _FLENTRY *)ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v13 = -1LL;
            Src = (wchar_t *)gpPFTPublic;
            v14 = -1LL;
            do
              ++v14;
            while ( v10[v14] );
            if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Src, v10, (int)v14 + 1, 1, 0LL, 0, 0LL, 1) )
            {
              appended = 0;
            }
            else
            {
              v21[1] = 0LL;
              v21[0] = &v20;
              appended = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&Src, v10, &v22, 8u, &v19, (struct _EUDCLOAD *)v21);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v18);
            if ( appended )
            {
              if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
              {
                vUnlinkAllEudcRFONTsAndPFEs(v15, 0);
                bUnloadEudcFont((__int64 *)&gappfeSysEUDC);
              }
              *(_OWORD *)&gappfeSysEUDC = v20;
              wcscpy_s(Dst, 0x105uLL, v10);
              ++dword_1C032929C;
              bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, (struct PFE *)v20, 1);
              do
                ++v13;
              while ( Dst[v13] );
              bWriteUserSystemEUDCRegistry(Dst);
            }
          }
          Win32FreePool(v10, v12);
        }
        else
        {
          appended = 0;
        }
      }
      v9 = appended;
    }
    else
    {
      EngSetLastError(0xA7u);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    return v9;
  }
  return result;
}
