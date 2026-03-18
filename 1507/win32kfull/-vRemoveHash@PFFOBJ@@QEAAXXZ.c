/*
 * XREFs of ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0129E2C
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0129894 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0129BFC (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C013FB2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025D6B4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025D918 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025DCE4 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?bValid@FHOBJ@@QEAAHXZ @ 0x1C0031648 (-bValid@FHOBJ@@QEAAHXZ.c)
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x1C012A1A0 (-vFree@FHOBJ@@QEAAXXZ.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C012A21C (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
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
        v10 = *(_QWORD *)(v2 + 8 * v4 + 216);
        if ( (*(_DWORD *)(v10 + 12) & 8) == 0 )
        {
          if ( FHOBJ::bValid((FHOBJ *)&v6) )
            FHOBJ::vDelete((FHOBJ *)&v6, (struct PFEOBJ *)&v10);
          if ( FHOBJ::bValid((FHOBJ *)v8) )
            FHOBJ::vDelete((FHOBJ *)v8, (struct PFEOBJ *)&v10);
        }
        if ( FHOBJ::bValid((FHOBJ *)v9) )
          FHOBJ::vDelete((FHOBJ *)v9, (struct PFEOBJ *)&v10);
        v2 = *(_QWORD *)this;
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)this + 144LL) );
    }
    v5 = *(struct PDEV **)(*(_QWORD *)this + 88LL);
    if ( v5 == gppdevTrueType
      || v5 == (struct PDEV *)qword_1C032F1C8 && !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 8LL) )
    {
      --gcTrueTypeFonts;
    }
  }
  else
  {
    v6 = (struct _FONTHASH **)(v2 + 104);
    v7 = *(struct _FONTHASH **)(v2 + 104);
    if ( FHOBJ::bValid((FHOBJ *)&v6) )
      FHOBJ::vFree((FHOBJ *)&v6);
    v6 = (struct _FONTHASH **)(*(_QWORD *)this + 112LL);
    v7 = *v6;
    if ( FHOBJ::bValid((FHOBJ *)&v6) )
      FHOBJ::vFree((FHOBJ *)&v6);
    v6 = (struct _FONTHASH **)(*(_QWORD *)this + 120LL);
    v7 = *v6;
    if ( FHOBJ::bValid((FHOBJ *)&v6) )
      FHOBJ::vFree((FHOBJ *)&v6);
  }
}
