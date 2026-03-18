/*
 * XREFs of NtGdiEngBitBlt @ 0x1C02AB4F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     EngBitBlt @ 0x1C009CF40 (EngBitBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A982C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A9AC8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02A9C5C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9DD8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9DFC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02AA5FC (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA6CC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02AA7C4 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA994 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AAC0C (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *a5,
        RECTL *a6,
        POINTL *a7,
        POINTL *a8,
        struct _BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v16; // rbx
  __int64 result; // rax
  SURFOBJ *v18; // r14
  SURFOBJ *v19; // r12
  struct _RECTL *pbo; // rsi
  __int64 v21; // rdx
  _BYTE *v22; // r8
  __int64 v23; // r9
  struct _XLATEOBJ *v24; // r13
  char v25; // al
  unsigned int v26; // r9d
  unsigned int v27; // r8d
  POINTL *pptlSrc; // r13
  struct _RECTL *v29; // r11
  POINTL *pptlMask; // rdi
  unsigned int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // [rsp+60h] [rbp-1D8h] BYREF
  SURFOBJ *psoTrg; // [rsp+68h] [rbp-1D0h]
  unsigned int v46; // [rsp+70h] [rbp-1C8h] BYREF
  struct _RECTL *v47; // [rsp+78h] [rbp-1C0h]
  RECTL *prclTrg; // [rsp+80h] [rbp-1B8h] BYREF
  POINTL *v49; // [rsp+88h] [rbp-1B0h] BYREF
  XLATEOBJ *pxlo; // [rsp+90h] [rbp-1A8h]
  POINTL *pptlBrush; // [rsp+98h] [rbp-1A0h] BYREF
  POINTL *v52; // [rsp+A0h] [rbp-198h] BYREF
  ROP4 v53; // [rsp+A8h] [rbp-190h]
  CLIPOBJ *pco; // [rsp+B0h] [rbp-188h]
  SURFOBJ *v55; // [rsp+B8h] [rbp-180h]
  SURFOBJ *v56; // [rsp+C0h] [rbp-178h]
  struct _CLIPOBJ *v57; // [rsp+C8h] [rbp-170h]
  struct UMPDOBJ *v58; // [rsp+D0h] [rbp-168h]
  struct _POINTL v59; // [rsp+D8h] [rbp-160h] BYREF
  struct _POINTL v60; // [rsp+E0h] [rbp-158h] BYREF
  struct _POINTL v61; // [rsp+E8h] [rbp-150h] BYREF
  _QWORD v62[8]; // [rsp+F0h] [rbp-148h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+130h] [rbp-108h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+170h] [rbp-C8h] BYREF
  struct _BRUSHOBJ v65; // [rsp+1B0h] [rbp-88h] BYREF
  struct _RECTL v66; // [rsp+1C8h] [rbp-70h] BYREF
  struct _RECTL v67; // [rsp+1D8h] [rbp-60h] BYREF
  struct _RECTL v68; // [rsp+1E8h] [rbp-50h] BYREF

  v57 = a4;
  pco = a4;
  pxlo = a5;
  prclTrg = a6;
  v49 = a7;
  v52 = a8;
  pptlBrush = a10;
  v53 = rop4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v16 = (__int64)ThreadCurrentObj;
  v58 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v16 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v62, a1, (struct _SURFOBJ **)v16);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)v16);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, (struct _SURFOBJ **)v16);
    psoTrg = (SURFOBJ *)v62[0];
    v18 = psoSrc[0];
    v55 = psoSrc[0];
    v19 = psoMask[0];
    v56 = psoMask[0];
    pbo = (struct _RECTL *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v16, (__int64)a9);
    if ( !pbo )
      pbo = (struct _RECTL *)CaptureAndFakeBRUSHOBJ(a9, &v65);
    v47 = pbo;
    v24 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v16, (__int64)pxlo);
    pxlo = v24;
    if ( (rop4 & 0xFFFF0000) == 0
      && prclTrg
      && ((v21 = BYTE1(rop4),
           v22 = gajRop3,
           v25 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)],
           (v25 & 0xE8) == 0)
       || pbo && (pbo->left != -1 || pptlBrush))
      && ((v25 & 0xD4) == 0 || v49 && v18)
      && ((unsigned __int8)rop4 == BYTE1(rop4) || v19 || pbo && pbo->left == -1) )
    {
      if ( !psoTrg )
        goto LABEL_31;
      CaptureRECTL(&prclTrg, &v66);
      CapturePOINTL(&v49, &v60);
      CapturePOINTL(&v52, &v59);
      CapturePOINTL(&pptlBrush, &v61);
      pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v16, v57, &psoTrg->sizlBitmap);
      if ( !(unsigned int)bCheckSurfaceRectSize(psoTrg, prclTrg, pco, &v44, &v46)
        || !(unsigned int)bCheckXlate(v18, v24) )
      {
        goto LABEL_31;
      }
      v26 = v46;
      v27 = v44;
      pptlSrc = v49;
      v29 = v18 ? pRect(v49, &v67, v44, v46) : 0LL;
      pptlMask = v52;
      v47 = v19 ? pRect(v52, &v68, v27, v26) : 0LL;
      if ( (unsigned int)bCheckSurfaceRect(v18, v29, 0LL) && (unsigned int)bCheckMask(v19, v47) )
        v31 = EngBitBlt(psoTrg, v18, v19, pco, pxlo, prclTrg, pptlSrc, pptlMask, (BRUSHOBJ *)pbo, pptlBrush, rop4);
      else
LABEL_31:
        v31 = 0;
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, v21, (__int64)v22, v23);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, v32, v33, v34);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v62, v35, v36, v37);
      --*(_DWORD *)(v16 + 432);
      return v31;
    }
    else
    {
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, v21, (__int64)v22, v23);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, v38, v39, v40);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v62, v41, v42, v43);
      --*(_DWORD *)(v16 + 432);
      return 0LL;
    }
  }
  return result;
}
