/*
 * XREFs of ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025D918
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C026AB90 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C027EE10 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0129E2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C013E6BC (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C013EA0C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C013EA70 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C013FA64 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0140780 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C0140E30 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     KmfdLoadFontFileView @ 0x1C01415E4 (KmfdLoadFontFileView.c)
 *     ?UseUmfd@@YAHPEBG@Z @ 0x1C0141BB8 (-UseUmfd@@YAHPEBG@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?ScrutinizeRemoteFontLoad@@YAJXZ @ 0x1C025D30C (-ScrutinizeRemoteFontLoad@@YAJXZ.c)
 *     UmfdLoadFontFileView @ 0x1C025D370 (UmfdLoadFontFileView.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C02A4B88 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C02B4834 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct PFF *v25; // rbx
  struct _UNIVERSAL_FONT_ID *v26; // r9
  int v27; // r9d
  PUBLIC_PFTOBJ *v28; // r14
  struct PFF **v29; // rcx
  size_t Size; // [rsp+30h] [rbp-D0h]
  unsigned int v32; // [rsp+80h] [rbp-80h]
  unsigned __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v34[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h] BYREF
  struct _UNIVERSAL_FONT_ID *v36; // [rsp+A0h] [rbp-60h]
  PUBLIC_PFTOBJ *v37; // [rsp+A8h] [rbp-58h]
  HDEV v38; // [rsp+B0h] [rbp-50h] BYREF
  struct PFF *v39[3]; // [rsp+B8h] [rbp-48h] BYREF
  int *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h] BYREF
  XDCOBJ *v42; // [rsp+E0h] [rbp-20h]
  struct PFF **v43; // [rsp+E8h] [rbp-18h] BYREF
  char v44; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v45[32]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t Dst[32]; // [rsp+120h] [rbp+20h] BYREF

  v36 = a6;
  v8 = 0;
  v40 = a7;
  v9 = a4;
  v42 = a2;
  v37 = this;
  v33 = 0LL;
  if ( Src )
    v10 = 4 * *((_DWORD *)Src + 1) + 8;
  else
    v10 = 0;
  v32 = v10;
  if ( ScrutinizeRemoteFontLoad() >= 0 )
  {
    if ( (unsigned int)v9 <= 4 )
    {
      v12 = (void **)v45;
      v13 = (unsigned int *)&v44;
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
    v34[1] = 0;
    v34[0] = 0;
    if ( UseUmfd(v18) )
      UmfdLoadFontFileView(0LL, v19, a3, v9, v12, v13, Src, (__int64 *)&v33, &v35);
    else
      KmfdLoadFontFileView(0LL, 0, a3, v9, v12, v13, Src, v10, (__int64 *)&v33, (struct PDEV **)&v35, v34);
    v38 = (HDEV)v35;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    if ( v12 != (void **)v45 )
      Win32FreePool(v12);
    if ( v33 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v38, v33, 2u, 0, 0LL);
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
        LODWORD(Size) = v32;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v39,
          FontFile,
          Dst,
          v21 + 1,
          v9,
          Src,
          Size,
          v33,
          v38,
          0LL,
          *(struct PFT **)v37,
          0x20u,
          0x20u,
          (struct _FNTCHECKSUM *)v34,
          a3,
          v36);
        v25 = v39[0];
        if ( v39[0] )
        {
          v26 = v36;
          a3 = 0LL;
          *v40 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v39, Dst, FontFile, v26, 0LL) )
          {
            v41 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v8 = PFFOBJ::bAddHash((PFFOBJ *)v39, 0);
            if ( v8 )
            {
              v27 = v9;
              v28 = v37;
              if ( PUBLIC_PFTOBJ::pPFFGet(v37, Dst, (int)v21 + 1, v27, Src, v32, &v43, 0) )
              {
                v8 = 0;
              }
              else
              {
                v8 = XDCOBJ::bAddRemoteFont(v42, v25);
                if ( v8 )
                {
                  v29 = v43;
                  ++*(_DWORD *)(*(_QWORD *)v28 + 28LL);
                  if ( *v29 )
                    *((_QWORD *)*v29 + 2) = v25;
                  *((_QWORD *)v25 + 1) = *v29;
                  *((_QWORD *)v25 + 2) = 0LL;
                  *v29 = v25;
                  PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v39);
                }
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v39);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v41);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v39, v22, v23, v24);
      }
    }
  }
LABEL_33:
  if ( a3 )
    Win32FreePool(a3);
  return v8;
}
