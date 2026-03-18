/*
 * XREFs of KmfdLoadFontFileView @ 0x1C0011294
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C0020D78 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025D4C4 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025D890 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?PutFntCacheDrv@@YAXKPEAVPDEV@@@Z @ 0x1C0010290 (-PutFntCacheDrv@@YAXKPEAVPDEV@@@Z.c)
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAU_FONTFILEVIEW@@KPEAPEAVPDEV@@PEAUtagDESIGNVECTOR@@K@Z @ 0x1C001175C (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAU_FONTFILEVIEW@@KPEAPEAVPDEV@@PEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C0011AB4 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C001D0E4 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 */

unsigned __int64 *__fastcall KmfdLoadFontFileView(
        unsigned __int16 *a1,
        unsigned int a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        void **a5,
        unsigned int *a6,
        struct tagDESIGNVECTOR *a7,
        unsigned int a8,
        unsigned __int64 *a9,
        struct PDEV **a10,
        unsigned int *a11)
{
  unsigned int *v11; // r13
  __int64 v13; // r14
  unsigned __int64 FontFile; // r15
  int v16; // esi
  int v17; // eax
  struct PDEV *v18; // rdi
  struct _FONTFILEVIEW **v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  bool v22; // bl
  unsigned __int64 *result; // rax
  int v24; // r13d
  struct _FONTFILEVIEW **v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  unsigned int v30; // ebx
  struct PDEV *v31; // rsi
  int v32; // [rsp+50h] [rbp-10h]
  int v33; // [rsp+54h] [rbp-Ch]
  struct PDEV *v34; // [rsp+58h] [rbp-8h] BYREF

  v11 = a11;
  v13 = a4;
  v33 = 1;
  FontFile = 0LL;
  v16 = 0;
  v34 = gppdevList;
  v17 = LookUpFNTCacheTable(a2, a1, a11, a11 + 1, a3, a4, &v34, a7, a8);
  v18 = v34;
  v32 = v17;
  if ( !v17 || v34 != gppdevTrueType )
    goto LABEL_46;
  v34 = gppdevTrueType;
  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v34);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  FontFile = PDEVOBJ::LoadFontFile((PDEVOBJ *)&v34, v13, (unsigned __int64 *)a3, a5, a6, a7, gusLanguageID, *v11);
  if ( FontFile )
  {
    v16 = 1;
    if ( (_DWORD)v13 )
    {
      v19 = a3;
      v20 = (unsigned int)v13;
      do
      {
        v21 = (__int64)*v19++;
        *(_DWORD *)(v21 + 40) |= 8u;
        --v20;
      }
      while ( v20 );
    }
  }
  else
  {
    PDEVOBJ::vUnreferencePdev(&v34, 0LL);
  }
  GreAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  if ( !v16 )
  {
LABEL_46:
    if ( a1 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      v22 = MapFontFiles(v13, a3, a5, a6);
      GreAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      if ( !v22 )
      {
        *a10 = 0LL;
        result = a9;
        *a9 = 0LL;
        return result;
      }
    }
  }
  if ( (_DWORD)v13 )
  {
    v24 = 1;
    v25 = a3;
    v26 = v13;
    do
    {
      v27 = (__int64)*v25++;
      v28 = (*(_BYTE *)(v27 + 40) & 0x18) != 0 ? v24 : 0;
      v24 = v28;
      --v26;
    }
    while ( v26 );
    v11 = a11;
    v33 = v28;
  }
  if ( !v16 )
  {
    v29 = v32;
    if ( !v32 )
      goto LABEL_29;
    if ( !v18 )
      goto LABEL_29;
    a11 = (unsigned int *)v18;
    if ( (*((_DWORD *)v18 + 14) & 0x2000) == 0 )
      goto LABEL_29;
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&a11);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    if ( v18 != gppdevTrueType )
      FontFile = PDEVOBJ::LoadFontFile((PDEVOBJ *)&a11, v13, (unsigned __int64 *)a3, a5, a6, a7, gusLanguageID, *v11);
    if ( FontFile
      || (FontFile = PDEVOBJ::LoadFontFile((PDEVOBJ *)&a11, v13, (unsigned __int64 *)a3, a5, a6, a7, gusLanguageID, 0)) != 0 )
    {
      v16 = 1;
    }
    else
    {
      PDEVOBJ::vUnreferencePdev(&a11, 0LL);
    }
    GreAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    if ( !v16 )
    {
      v29 = v32;
LABEL_29:
      v30 = *v11;
      if ( !v33 || v29 && !v11[1] )
        v30 = 0;
      v18 = gppdevList;
      do
      {
        a11 = (unsigned int *)v18;
        if ( (*((_DWORD *)v18 + 14) & 0x2000) == 0 || v18 == (struct PDEV *)qword_1C032F218 )
          goto LABEL_39;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&a11);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        FontFile = PDEVOBJ::LoadFontFile((PDEVOBJ *)&a11, v13, (unsigned __int64 *)a3, a5, a6, a7, gusLanguageID, v30);
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        if ( FontFile )
        {
          PutFntCacheDrv(v30, v18);
          break;
        }
        v31 = (struct PDEV *)*((_QWORD *)v18 + 3);
        PDEVOBJ::vUnreferencePdev(&a11, 0LL);
        if ( v31 )
          v18 = v31;
        else
LABEL_39:
          v18 = (struct PDEV *)*((_QWORD *)v18 + 3);
      }
      while ( v18 );
    }
  }
  *a10 = v18;
  result = a9;
  *a9 = FontFile;
  return result;
}
