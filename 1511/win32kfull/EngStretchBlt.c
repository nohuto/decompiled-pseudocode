/*
 * XREFs of EngStretchBlt @ 0x1C003E600
 * Callers:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C003D804 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BB4A0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngStretchBltROP @ 0x1C00EF920 (EngStretchBltROP.c)
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0147A10 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0281F84 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0288A90 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C028F630 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0296EA0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     NtGdiEngStretchBlt @ 0x1C02AC690 (NtGdiEngStretchBlt.c)
 * Callees:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C003E6F4 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028077C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
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
  RECTL *v12; // rcx
  RECTL *v13; // rax
  POINTL *v14; // rdx
  RECTL v16; // xmm0
  __int64 v17; // r15
  __int64 v18; // rbx
  HSURF Bitmap; // rax
  ULONG v20; // r8d
  SIZEL v21; // rcx
  HSURF v22; // rdi
  HBITMAP v23; // rax
  ULONG v24; // r8d
  SIZEL v25; // rcx
  HSURF v26; // r14
  HSURF v27; // rax
  HSURF v28; // r12
  SURFOBJ *v29; // rdi
  SURFOBJ *v30; // rsi
  SURFOBJ *v31; // rax
  SURFOBJ *v32; // r12
  int v33; // eax
  _BYTE *pvBits; // rdx
  __int64 v35; // r14
  _BYTE *v36; // rax
  int v37; // eax
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h]
  struct _POINTL *v41; // [rsp+70h] [rbp-90h]
  struct _XLATEOBJ *v42; // [rsp+78h] [rbp-88h]
  struct _SURFOBJ *v43; // [rsp+80h] [rbp-80h]
  struct _SURFOBJ *v44; // [rsp+88h] [rbp-78h]
  struct _RECTL *v45; // [rsp+90h] [rbp-70h]
  struct _CLIPOBJ *v46; // [rsp+98h] [rbp-68h]
  struct tagCOLORADJUSTMENT *v47; // [rsp+A0h] [rbp-60h]
  struct _RECTL *v48; // [rsp+A8h] [rbp-58h]
  _BYTE *v49; // [rsp+B0h] [rbp-50h]
  struct _POINTL *v50; // [rsp+B8h] [rbp-48h]
  HSURF v51; // [rsp+C0h] [rbp-40h]
  HSURF hsurf; // [rsp+C8h] [rbp-38h]
  HSURF v53; // [rsp+D0h] [rbp-30h]
  RECTL v54; // [rsp+D8h] [rbp-28h] BYREF
  struct _RECTL v55; // [rsp+E8h] [rbp-18h] BYREF
  struct _RECTL v56; // [rsp+F8h] [rbp-8h] BYREF

  v12 = prclSrc;
  v42 = pxlo;
  v47 = pca;
  v50 = pptlHTOrg;
  v13 = prclDest;
  v44 = psoSrc;
  v14 = pptlMask;
  v48 = prclDest;
  v46 = pco;
  v43 = psoMask;
  v45 = prclSrc;
  v41 = pptlMask;
  if ( dword_1C032F1F0 )
  {
    v16 = *prclDest;
    v55 = *prclSrc;
    v56 = v16;
    *(_QWORD *)&v54.left = 0LL;
    v17 = SURFOBJ_TO_SURFACE_NOT_NULL(psoDest);
    v54.right = *(_DWORD *)(v17 + 56);
    v54.bottom = *(_DWORD *)(v17 + 60);
    v18 = *(_QWORD *)(v17 + 48);
    Bitmap = (HSURF)EngCreateBitmap(*(SIZEL *)(v17 + 56), 0, *(_DWORD *)(v17 + 96), 0, 0LL);
    v20 = *(_DWORD *)(v17 + 96);
    v21 = *(SIZEL *)(v17 + 56);
    v22 = Bitmap;
    hsurf = Bitmap;
    v23 = EngCreateBitmap(v21, 0, v20, 0, 0LL);
    v24 = *(_DWORD *)(v17 + 96);
    v25 = *(SIZEL *)(v17 + 56);
    v26 = (HSURF)v23;
    v51 = (HSURF)v23;
    v27 = (HSURF)EngCreateBitmap(v25, 0, v24, 0, 0LL);
    v53 = v27;
    v28 = v27;
    if ( !v22 || !v26 || !v27 )
      DbgPrint("hsurf1 == 0 || hsurf2 == 0 || hsurf3 == 0\n");
    v29 = EngLockSurface(v22);
    v30 = EngLockSurface(v26);
    v31 = EngLockSurface(v28);
    v40 = 0;
    v32 = v31;
    if ( v29 )
    {
      if ( v30 )
      {
        if ( v31 )
        {
          EngCopyBits(v31, psoDest, 0LL, xloIdent, &v54, &gptlZero);
          memset(v29->pvBits, 0, v29->cjBits);
          memset(v30->pvBits, 0, v29->cjBits);
          v39[0] = 0;
          LODWORD(v49) = EngStretchBltOld(psoDest, v44, v43, v46, v42, v47, v50, v48, v45, v41, iMode, v39);
          if ( v39[0] )
          {
            v48 = &v56;
            v45 = &v55;
LABEL_12:
            EngCopyBits(v29, psoDest, 0LL, 0LL, &v54, &gptlZero);
            if ( (*(_DWORD *)(v17 + 112) & 0x400) != 0 )
              (*(void (__fastcall **)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, POINTL *))(v18 + 2872))(
                psoDest,
                v32,
                0LL,
                xloIdent,
                &v54,
                &gptlZero);
            else
              ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, POINTL *))EngCopyBits)(
                psoDest,
                v32,
                0LL,
                xloIdent,
                &v54,
                &gptlZero);
            v33 = EngStretchBltNew(psoDest, v44, v43, v46, v42, v47, v50, &v56, &v55, v41, iMode);
            if ( (unsigned int)v49 != v33 )
              DbgPrint("bOld ^ bNew\n");
            EngCopyBits(v30, psoDest, 0LL, xloIdent, &v54, &gptlZero);
            pvBits = v29->pvBits;
            v35 = 0LL;
            v36 = v30->pvBits;
            v49 = pvBits;
            *(_QWORD *)v39 = v36;
            while ( (unsigned int)v35 < v29->cjBits )
            {
              if ( pvBits[v35] != v36[v35] )
              {
                DbgPrint("memcmp failed\n");
                v37 = v40 + 1;
                v40 = v37;
                if ( v37 == 1 )
                {
                  __debugbreak();
                  if ( (*(_DWORD *)(v17 + 112) & 0x400) != 0 )
                    v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2872);
                  else
                    v38 = EngCopyBits;
                  ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, POINTL *))v38)(
                    psoDest,
                    v32,
                    0LL,
                    xloIdent,
                    &v54,
                    &gptlZero);
                  memset(v29->pvBits, 0, v29->cjBits);
                  memset(v30->pvBits, 0, v29->cjBits);
                  v39[0] = 0;
                  LODWORD(v49) = EngStretchBltOld(psoDest, v44, v43, v46, v42, v47, v50, &v56, &v55, v41, iMode, v39);
                  if ( v39[0] )
                    goto LABEL_12;
                  break;
                }
                if ( v37 == 2 )
                {
                  __debugbreak();
                  break;
                }
                pvBits = v49;
              }
              v36 = *(_BYTE **)v39;
              v35 = (unsigned int)(v35 + 1);
            }
            v26 = v51;
          }
        }
      }
      EngUnlockSurface(v29);
    }
    if ( v30 )
      EngUnlockSurface(v30);
    if ( v32 )
      EngUnlockSurface(v32);
    if ( hsurf )
      EngDeleteSurface(hsurf);
    if ( v26 )
      EngDeleteSurface(v26);
    if ( v53 )
      EngDeleteSurface(v53);
    v14 = v41;
    v12 = v45;
    v13 = v48;
  }
  return EngStretchBltNew(psoDest, v44, v43, v46, v42, v47, v50, v13, v12, v14, iMode);
}
