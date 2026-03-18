/*
 * XREFs of EngStretchBlt @ 0x1400E65F0
 * Callers:
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400632A0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1400E5094 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140180DF0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngStretchBltROP @ 0x1401B5900 (EngStretchBltROP.c)
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1401F2F90 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x14030E110 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x14031E808 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140322050 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     NtGdiEngStretchBlt @ 0x14032DD50 (NtGdiEngStretchBlt.c)
 * Callees:
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x140266E6C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

BOOL __stdcall EngStretchBlt(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode)
{
  CLIPOBJ *v11; // r12
  XLATEOBJ *v12; // r13
  SURFOBJ *v13; // r15
  RECTL *v14; // rbx
  SURFOBJ *v15; // r14
  RECTL *v16; // rsi
  __int64 v18; // rax
  RECTL v20; // xmm0
  RECTL v21; // xmm1
  SIZEL sizlBitmap; // rcx
  ULONG iBitmapFormat; // r8d
  HDEV hdev; // rbx
  LONG cy; // eax
  HSURF Bitmap; // rax
  SIZEL v27; // rcx
  ULONG v28; // r8d
  HSURF v29; // rsi
  HBITMAP v30; // r13
  HBITMAP v31; // rax
  HSURF v32; // r12
  SURFOBJ *v33; // rsi
  SURFOBJ *v34; // r14
  SURFOBJ *v35; // rax
  Gre::Base *v36; // rcx
  SURFOBJ *v37; // r15
  int v38; // r12d
  _BYTE *pvBits; // rdx
  __int64 v40; // r12
  _BYTE *v41; // rax
  int v42; // eax
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+64h] [rbp-9Ch] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  struct _RECTL *v46; // [rsp+70h] [rbp-90h]
  struct _RECTL *v47; // [rsp+78h] [rbp-88h]
  struct _SURFOBJ *v48; // [rsp+80h] [rbp-80h]
  struct _SURFOBJ *v49; // [rsp+88h] [rbp-78h]
  struct _CLIPOBJ *v50; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v51; // [rsp+98h] [rbp-68h]
  struct _POINTL *v52; // [rsp+A0h] [rbp-60h]
  struct _POINTL *v53; // [rsp+A8h] [rbp-58h]
  struct tagCOLORADJUSTMENT *v54; // [rsp+B0h] [rbp-50h]
  XLATEOBJ *v55; // [rsp+B8h] [rbp-48h]
  HSURF v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  _BYTE *v58; // [rsp+D0h] [rbp-30h]
  _BYTE *v59; // [rsp+D8h] [rbp-28h]
  HSURF hsurf; // [rsp+E0h] [rbp-20h]
  RECTL v61; // [rsp+E8h] [rbp-18h] BYREF
  struct _RECTL v62; // [rsp+F8h] [rbp-8h] BYREF
  struct _RECTL v63; // [rsp+108h] [rbp+8h] BYREF

  v11 = pco;
  v12 = pxlo;
  v13 = psoMask;
  v14 = prclDest;
  v15 = psoSrc;
  v16 = prclSrc;
  v54 = pca;
  v53 = pptlHTOrg;
  v52 = pptlMask;
  v50 = pco;
  v49 = psoMask;
  v48 = psoSrc;
  v51 = pxlo;
  v46 = prclDest;
  v47 = prclSrc;
  v18 = *(_QWORD *)(W32GetSessionState(psoDest, psoSrc, psoMask) + 96);
  v57 = v18;
  if ( *(_DWORD *)(v18 + 4744) )
  {
    v20 = *prclDest;
    v21 = *prclSrc;
    sizlBitmap = psoDest->sizlBitmap;
    iBitmapFormat = psoDest->iBitmapFormat;
    hdev = psoDest->hdev;
    v61.right = psoDest->sizlBitmap.cx;
    cy = psoDest->sizlBitmap.cy;
    v63 = v20;
    *(_QWORD *)&v61.left = 0LL;
    v62 = v21;
    v61.bottom = cy;
    Bitmap = (HSURF)EngCreateBitmap(sizlBitmap, 0, iBitmapFormat, 0, 0LL);
    v27 = psoDest->sizlBitmap;
    v28 = psoDest->iBitmapFormat;
    v29 = Bitmap;
    hsurf = Bitmap;
    v30 = EngCreateBitmap(v27, 0, v28, 0, 0LL);
    v31 = EngCreateBitmap(psoDest->sizlBitmap, 0, psoDest->iBitmapFormat, 0, 0LL);
    v56 = (HSURF)v31;
    v32 = (HSURF)v31;
    if ( !v29 || !v30 || !v31 )
      DbgPrint("hsurf1 == 0 || hsurf2 == 0 || hsurf3 == 0\n");
    v33 = EngLockSurface(v29);
    v34 = EngLockSurface((HSURF)v30);
    v35 = EngLockSurface(v32);
    v43 = 0;
    v37 = v35;
    if ( v33 )
    {
      if ( v34 && v35 )
      {
        pptlSrc = 0LL;
        v55 = (XLATEOBJ *)((char *)Gre::Base::Globals(v36) + 4664);
        EngCopyBits(v37, psoDest, 0LL, v55, &v61, &pptlSrc);
LABEL_13:
        memset_0(v33->pvBits, 0, v33->cjBits);
        memset_0(v34->pvBits, 0, v33->cjBits);
        v44 = 0;
        v38 = EngStretchBltOld(psoDest, v48, v49, v50, v51, v54, v53, v46, v47, v52, iMode, &v44);
        if ( v44 )
        {
          EngCopyBits(v33, psoDest, 0LL, 0LL, &v61, &pptlSrc);
          if ( ((__int64)psoDest[1].hsurf & 0x400) != 0 )
            (*((void (__fastcall **)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))hdev + 354))(
              psoDest,
              v37,
              0LL,
              v55,
              &v61,
              &pptlSrc);
          else
            ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
              psoDest,
              v37,
              0LL,
              v55,
              &v61,
              &pptlSrc);
          v46 = &v63;
          v47 = &v62;
          if ( EngStretchBltNew(psoDest, v48, v49, v50, v51, v54, v53, &v63, &v62, v52, iMode) != v38 )
            DbgPrint("bOld ^ bNew\n");
          EngCopyBits(v34, psoDest, 0LL, v55, &v61, &pptlSrc);
          pvBits = v33->pvBits;
          v40 = 0LL;
          v41 = v34->pvBits;
          v58 = pvBits;
          v59 = v41;
          while ( (unsigned int)v40 < v33->cjBits )
          {
            if ( pvBits[v40] != v41[v40] )
            {
              DbgPrint("memcmp failed\n");
              v42 = v43 + 1;
              v43 = v42;
              if ( v42 == 1 )
              {
                __debugbreak();
                if ( ((__int64)psoDest[1].hsurf & 0x400) != 0 )
                  (*((void (__fastcall **)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))hdev + 354))(
                    psoDest,
                    v37,
                    0LL,
                    v55,
                    &v61,
                    &pptlSrc);
                else
                  ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                    psoDest,
                    v37,
                    0LL,
                    v55,
                    &v61,
                    &pptlSrc);
                goto LABEL_13;
              }
              if ( v42 == 2 )
              {
                __debugbreak();
                break;
              }
              pvBits = v58;
            }
            v41 = v59;
            v40 = (unsigned int)(v40 + 1);
          }
        }
        v32 = v56;
      }
      EngUnlockSurface(v33);
    }
    if ( v34 )
      EngUnlockSurface(v34);
    if ( v37 )
      EngUnlockSurface(v37);
    if ( hsurf )
      EngDeleteSurface(hsurf);
    if ( v30 )
      EngDeleteSurface((HSURF)v30);
    if ( v32 )
      EngDeleteSurface(v32);
    v18 = v57;
    v12 = v51;
    v11 = v50;
    v13 = v49;
    v15 = v48;
    v16 = v47;
    v14 = v46;
  }
  if ( *(_DWORD *)(v18 + 4740) )
    return EngStretchBltNew(psoDest, v15, v13, v11, v12, v54, v53, v14, v16, v52, iMode);
  v43 = 0;
  return EngStretchBltOld(psoDest, v15, v13, v11, v12, v54, v53, v14, v16, v52, iMode, &v43);
}
