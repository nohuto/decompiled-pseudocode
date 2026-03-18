/*
 * XREFs of KmfdLoadFontFileView @ 0x1C0022388
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00242E8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025A93C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025AD2C (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C0021AD8 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAU_FONTFILEVIEW@@KPEAPEAVPDEV@@PEAUtagDESIGNVECTOR@@K@Z @ 0x1C0022810 (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAU_FONTFILEVIEW@@KPEAPEAVPDEV@@PEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C00294D0 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ?PutFntCacheDrv@@YAXKPEAVPDEV@@@Z @ 0x1C015745C (-PutFntCacheDrv@@YAXKPEAVPDEV@@@Z.c)
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
  char v19; // bl
  unsigned __int64 *result; // rax
  struct _FONTFILEVIEW **v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
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
      v21 = a3;
      v22 = v13;
      do
      {
        v23 = (__int64)*v21++;
        *(_DWORD *)(v23 + 40) |= 8u;
        --v22;
      }
      while ( v22 );
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
      v19 = MapFontFiles(v13, a3, a5, a6);
      GreAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      if ( !v19 )
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
    if ( v32 )
    {
      if ( v18 )
      {
        a11 = (unsigned int *)v18;
        if ( (*((_DWORD *)v18 + 14) & 0x2000) != 0 )
        {
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&a11);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          if ( v18 != gppdevTrueType )
            FontFile = PDEVOBJ::LoadFontFile(
                         (PDEVOBJ *)&a11,
                         v13,
                         (unsigned __int64 *)a3,
                         a5,
                         a6,
                         a7,
                         gusLanguageID,
                         *v11);
          if ( FontFile
            || (FontFile = PDEVOBJ::LoadFontFile(
                             (PDEVOBJ *)&a11,
                             v13,
                             (unsigned __int64 *)a3,
                             a5,
                             a6,
                             a7,
                             gusLanguageID,
                             0)) != 0 )
          {
            v16 = 1;
          }
          else
          {
            PDEVOBJ::vUnreferencePdev(&a11, 0LL);
          }
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          if ( v16 )
            goto LABEL_16;
          v29 = v32;
        }
      }
    }
    v30 = *v11;
    if ( !v33 || v29 && !v11[1] )
      v30 = 0;
    v18 = gppdevList;
    do
    {
      a11 = (unsigned int *)v18;
      if ( (*((_DWORD *)v18 + 14) & 0x2000) == 0 || v18 == (struct PDEV *)qword_1C0334780 )
        goto LABEL_25;
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
LABEL_25:
        v18 = (struct PDEV *)*((_QWORD *)v18 + 3);
    }
    while ( v18 );
  }
LABEL_16:
  *a10 = v18;
  result = a9;
  *a9 = FontFile;
  return result;
}
