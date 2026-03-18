/*
 * XREFs of ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025D4C4
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0269720 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C027E800 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     KmfdLoadFontFileView @ 0x1C0011294 (KmfdLoadFontFileView.c)
 *     ?UseUmfd@@YAHPEBG@Z @ 0x1C0011868 (-UseUmfd@@YAHPEBG@Z.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C001D00C (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0020CC8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0021AE0 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0021C38 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0119FD8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011A36C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C011A3D0 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?ScrutinizeRemoteFontLoad@@YAJXZ @ 0x1C025CFE8 (-ScrutinizeRemoteFontLoad@@YAJXZ.c)
 *     UmfdLoadFontFileView @ 0x1C025CFF4 (UmfdLoadFontFileView.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C02A43E8 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C02B3808 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadRemoteFonts(
        PUBLIC_PFTOBJ *this,
        struct XDCOBJ *a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Src,
        struct _UNIVERSAL_FONT_ID *a6,
        int *a7)
{
  unsigned int v8; // edi
  __int64 v9; // r14
  unsigned int v10; // r12d
  char *v11; // rax
  void **v12; // rbx
  unsigned int *v13; // r15
  unsigned int *v14; // r9
  struct _FONTFILEVIEW **v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rax
  const unsigned __int16 *v18; // rcx
  __int64 v19; // rdx
  unsigned int FontFile; // r12d
  __int64 v21; // r15
  struct PFF *v22; // rbx
  struct _UNIVERSAL_FONT_ID *v23; // r9
  int v24; // r9d
  PUBLIC_PFTOBJ *v25; // r14
  struct PFF **v26; // rcx
  size_t Size; // [rsp+30h] [rbp-D0h]
  unsigned int v29; // [rsp+80h] [rbp-80h]
  unsigned __int64 v30; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v31[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v32; // [rsp+98h] [rbp-68h] BYREF
  struct _UNIVERSAL_FONT_ID *v33; // [rsp+A0h] [rbp-60h]
  PUBLIC_PFTOBJ *v34; // [rsp+A8h] [rbp-58h]
  HDEV v35; // [rsp+B0h] [rbp-50h] BYREF
  struct PFF *v36[3]; // [rsp+B8h] [rbp-48h] BYREF
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h] BYREF
  XDCOBJ *v39; // [rsp+E0h] [rbp-20h]
  struct PFF **v40; // [rsp+E8h] [rbp-18h] BYREF
  char v41; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v42[32]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t Dst[32]; // [rsp+120h] [rbp+20h] BYREF

  v33 = a6;
  v8 = 0;
  v37 = a7;
  v9 = a4;
  v39 = a2;
  v34 = this;
  v30 = 0LL;
  if ( Src )
    v10 = 4 * *((_DWORD *)Src + 1) + 8;
  else
    v10 = 0;
  v29 = v10;
  if ( ScrutinizeRemoteFontLoad() >= 0 )
  {
    if ( (unsigned int)v9 <= 4 )
    {
      v12 = (void **)v42;
      v13 = (unsigned int *)&v41;
    }
    else
    {
      v11 = (char *)PALLOCMEM2((unsigned int)(16 * v9), 1986422343LL, 1);
      v12 = (void **)v11;
      if ( !v11 )
        goto LABEL_33;
      v13 = (unsigned int *)(v11 + 32);
    }
    if ( (_DWORD)v9 )
    {
      v14 = v13;
      v15 = a3;
      v16 = v9;
      do
      {
        *(struct _FONTFILEVIEW **)((char *)v15 + (char *)v12 - (char *)a3) = (struct _FONTFILEVIEW *)*((_QWORD *)*v15 + 2);
        v17 = (__int64)*v15++;
        *v14++ = *(_DWORD *)(v17 + 24);
        --v16;
      }
      while ( v16 );
    }
    GreAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    v31[1] = 0;
    v31[0] = 0;
    if ( UseUmfd(v18) )
      UmfdLoadFontFileView(0LL, v19, a3, v9, v12, v13, Src, (__int64 *)&v30, &v32);
    else
      KmfdLoadFontFileView(0LL, 0, a3, v9, v12, v13, Src, v10, &v30, (struct PDEV **)&v32, v31);
    v35 = (HDEV)v32;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    if ( v12 != (void **)v42 )
      Win32FreePool(v12);
    if ( v30 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v35, v30, 2u, 0, 0LL);
      if ( FontFile - 1 <= 0xFFFFFFFD )
      {
        swprintf_s(
          Dst,
          0x1EuLL,
          L"REMOTE-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulRemoteUnique));
        v21 = -1LL;
        do
          ++v21;
        while ( Dst[v21] );
        LODWORD(Size) = v29;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v36,
          FontFile,
          Dst,
          v21 + 1,
          v9,
          Src,
          Size,
          v30,
          v35,
          0LL,
          *(struct PFT **)v34,
          0x20u,
          0x20u,
          (struct _FNTCHECKSUM *)v31,
          a3,
          v33);
        v22 = v36[0];
        if ( v36[0] )
        {
          v23 = v33;
          a3 = 0LL;
          *v37 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v36, Dst, FontFile, v23, 0LL) )
          {
            v38 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v8 = PFFOBJ::bAddHash((PFFOBJ *)v36, 0);
            if ( v8 )
            {
              v24 = v9;
              v25 = v34;
              if ( PUBLIC_PFTOBJ::pPFFGet(v34, Dst, (int)v21 + 1, v24, Src, v29, &v40, 0) )
              {
                v8 = 0;
              }
              else
              {
                v8 = XDCOBJ::bAddRemoteFont(v39, v22);
                if ( v8 )
                {
                  v26 = v40;
                  ++*(_DWORD *)(*(_QWORD *)v25 + 28LL);
                  if ( *v26 )
                    *((_QWORD *)*v26 + 2) = v22;
                  *((_QWORD *)v22 + 1) = *v26;
                  *((_QWORD *)v22 + 2) = 0LL;
                  *v26 = v22;
                  PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v36);
                }
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v36);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v38);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v36);
      }
    }
  }
LABEL_33:
  if ( a3 )
    Win32FreePool(a3);
  return v8;
}
