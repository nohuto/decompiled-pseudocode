/*
 * XREFs of ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0026A50
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0022BB8 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0022D74 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00242E8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025A6C4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025A93C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025AD2C (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?bValid@FHOBJ@@QEAAHXZ @ 0x1C0026DF4 (-bValid@FHOBJ@@QEAAHXZ.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C0027108 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x1C0027964 (-vFree@FHOBJ@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall PFFOBJ::vRemoveHash(PFFOBJ *this)
{
  __int64 v2; // r8
  struct _FONTHASH **v3; // rdx
  __int64 v4; // rdi
  struct PDEV *v5; // rcx
  struct _FONTHASH **v6; // [rsp+20h] [rbp-30h] BYREF
  struct _FONTHASH *v7; // [rsp+28h] [rbp-28h]
  _QWORD v8[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+10h] BYREF

  ++*(_DWORD *)(gpGdiSharedMemory + 1573016LL);
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 80LL) )
  {
    v3 = gpPFTPublic;
    if ( *(struct PFT **const *)(v2 + 128) == gpPFTPrivate )
      v3 = gpPFTPrivate;
    v4 = 0LL;
    v8[0] = v3;
    v6 = v3 + 1;
    v7 = v3[1];
    v8[1] = *v3;
    v9[0] = v3 + 2;
    v9[1] = v3[2];
    if ( *(_DWORD *)(v2 + 144) )
    {
      do
      {
        v10 = *(_QWORD *)(v2 + 8 * v4 + 224);
        if ( (*(_DWORD *)(v10 + 12) & 8) == 0 )
        {
          if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v6) )
            FHOBJ::vDelete((FHOBJ *)&v6, (struct PFEOBJ *)&v10);
          if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v8) )
            FHOBJ::vDelete((FHOBJ *)v8, (struct PFEOBJ *)&v10);
        }
        if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v9) )
          FHOBJ::vDelete((FHOBJ *)v9, (struct PFEOBJ *)&v10);
        v2 = *(_QWORD *)this;
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)this + 144LL) );
    }
    v5 = *(struct PDEV **)(*(_QWORD *)this + 88LL);
    if ( v5 == gppdevTrueType
      || v5 == (struct PDEV *)qword_1C0334780 && !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 8LL) )
    {
      --gcTrueTypeFonts;
    }
  }
  else
  {
    v6 = (struct _FONTHASH **)(v2 + 104);
    v7 = *(struct _FONTHASH **)(v2 + 104);
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v6) )
      FHOBJ::vFree((FHOBJ *)&v6);
    v6 = (struct _FONTHASH **)(*(_QWORD *)this + 112LL);
    v7 = *v6;
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v6) )
      FHOBJ::vFree((FHOBJ *)&v6);
    v6 = (struct _FONTHASH **)(*(_QWORD *)this + 120LL);
    v7 = *v6;
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v6) )
      FHOBJ::vFree((FHOBJ *)&v6);
  }
}
