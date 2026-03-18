/*
 * XREFs of UmfdLoadFontFileView @ 0x1C025D370
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C013FB2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025D918 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025DCE4 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C0141528 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C0141C24 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C02A4580 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C02B9644 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 *__fastcall UmfdLoadFontFileView(
        __int64 a1,
        __int64 a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        void **a5,
        unsigned int *a6,
        struct tagDESIGNVECTOR *a7,
        __int64 *a8,
        _QWORD *a9)
{
  __int64 FontFile; // rsi
  int v13; // r14d
  struct _FONTFILEVIEW **v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *result; // rax
  _QWORD v18[2]; // [rsp+40h] [rbp-28h] BYREF

  FontFile = 0LL;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  v13 = UmfdHostLifeTimeManager::EnsureUmfdHost();
  GreAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  if ( v13 )
  {
    v18[0] = qword_1C032F1C8;
    if ( a4 )
    {
      v14 = a3;
      v15 = a4;
      do
      {
        *((_DWORD *)*v14 + 10) |= 0x20u;
        v16 = (__int64)*v14++;
        *(_DWORD *)(v16 + 64) = 0;
        --v15;
      }
      while ( v15 );
    }
    PDEVOBJ::vReferencePdev((PDEVOBJ *)v18);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    if ( a1 )
      v13 = (unsigned __int8)MapFontFiles(a4, a3, a5, a6);
    if ( v13 && (unsigned int)UmfdInsertFontFileViewForLookup(a3, a4) )
      FontFile = PDEVOBJ::LoadFontFile((PDEVOBJ *)v18, a4, (unsigned __int64 *)a3, a5, a6, a7, gusLanguageID, 0);
    GreAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    if ( FontFile )
    {
      *a9 = qword_1C032F1C8;
    }
    else
    {
      PDEVOBJ::vUnreferencePdev(v18, 0LL);
      *a9 = 0LL;
    }
  }
  result = a8;
  *a8 = FontFile;
  return result;
}
