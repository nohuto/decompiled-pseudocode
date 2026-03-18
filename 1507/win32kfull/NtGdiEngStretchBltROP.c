/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C02AD610
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     EngStretchBltROP @ 0x1C00A10F0 (EngStretchBltROP.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C025AF60 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A982C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A9AC8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02A9C1C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02A9C5C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02A9DAC (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9DD8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9DFC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02AA07C (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02AA584 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02AA5FC (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02AA7C4 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA994 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02AA9F0 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AAB18 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AAC0C (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        DWORD rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v18; // rbx
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  SURFOBJ *v23; // r13
  struct _SURFOBJ *v24; // r12
  SURFOBJ *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _CLIPOBJ *v35; // r11
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _XLATEOBJ *v42; // r9
  unsigned int v43; // edi
  struct _RECTL *v44; // rax
  BRUSHOBJ *pbo; // r12
  RECTL *v46; // r9
  RECTL *prclDest; // rdi
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  RECTL *prclSrc; // [rsp+70h] [rbp-2B8h] BYREF
  POINTL *pptlMask; // [rsp+78h] [rbp-2B0h] BYREF
  RECTL *v56; // [rsp+80h] [rbp-2A8h] BYREF
  struct _BRUSHOBJ *v57; // [rsp+88h] [rbp-2A0h]
  POINTL *pptlHTOrg; // [rsp+90h] [rbp-298h] BYREF
  unsigned int v59; // [rsp+98h] [rbp-290h] BYREF
  XLATEOBJ *pxlo; // [rsp+A0h] [rbp-288h]
  unsigned int v61; // [rsp+A8h] [rbp-280h] BYREF
  struct _CLIPOBJ *DDIOBJ; // [rsp+B0h] [rbp-278h]
  DWORD v63; // [rsp+B8h] [rbp-270h]
  __int64 v64; // [rsp+C0h] [rbp-268h]
  COLORADJUSTMENT *pca; // [rsp+C8h] [rbp-260h] BYREF
  SURFOBJ *psoSrc; // [rsp+D0h] [rbp-258h]
  SURFOBJ *v67; // [rsp+D8h] [rbp-250h]
  struct UMPDOBJ *v68; // [rsp+E0h] [rbp-248h]
  struct _CLIPOBJ *v69; // [rsp+E8h] [rbp-240h]
  struct _POINTL v70; // [rsp+F0h] [rbp-238h] BYREF
  struct _POINTL v71; // [rsp+F8h] [rbp-230h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+100h] [rbp-228h] BYREF
  struct _SURFOBJ *v73[8]; // [rsp+140h] [rbp-1E8h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+180h] [rbp-1A8h] BYREF
  struct _BRUSHOBJ v75; // [rsp+1C0h] [rbp-168h] BYREF
  struct _RECTL v76; // [rsp+1D8h] [rbp-150h] BYREF
  struct _RECTL v77; // [rsp+1E8h] [rbp-140h] BYREF
  struct _RECTL v78; // [rsp+1F8h] [rbp-130h] BYREF
  struct tagCOLORADJUSTMENT v79; // [rsp+208h] [rbp-120h] BYREF
  _BYTE v80[168]; // [rsp+220h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+2C8h] [rbp-60h]

  v69 = a4;
  DDIOBJ = a4;
  v64 = a5;
  pca = a6;
  pptlHTOrg = a7;
  v56 = a8;
  prclSrc = a9;
  pptlMask = a10;
  v57 = a12;
  v63 = rop4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v18 = (__int64)ThreadCurrentObj;
  v68 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v18 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)v18);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v73, a2, (struct _SURFOBJ **)v18);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, (struct _SURFOBJ **)v18);
    v23 = psoDest[0];
    v67 = psoDest[0];
    v24 = v73[0];
    psoSrc = v73[0];
    v25 = psoMask[0];
    pxlo = (XLATEOBJ *)psoMask[0];
    if ( !pptlHTOrg && iMode == 4 )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, v20, v21, v22);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v73, v26, v27, v28);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, v29, v30, v31);
      --*(_DWORD *)(v18 + 432);
      return 0LL;
    }
    if ( psoDest[0] && v73[0] && v56 && prclSrc )
    {
      CaptureRECTL(&v56, &v78);
      CaptureRECTL(&prclSrc, &v77);
      CapturePOINTL(&pptlMask, &v71);
      CapturePOINTL(&pptlHTOrg, &v70);
      CaptureCOLORADJUSTMENT(&pca, &v79);
      if ( !(unsigned int)bCheckDestSurfaceOverlap(v23, v56) )
      {
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, v32, v33, v34);
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v73, v36, v37, v38);
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, v39, v40, v41);
        --*(_DWORD *)(v18 + 432);
        return 1LL;
      }
      DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v18, v35, &v23->sizlBitmap);
      v42 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v18, v64);
      pxlo = v42;
      v43 = (((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) == 0 || bOrder(prclSrc))
         && (unsigned int)bCheckXlate(v24, v42)
         && ((unsigned __int8)rop4 == BYTE1(rop4) || v25 || (unsigned int)PROBEDISPATBRUSH(v57));
      if ( (unsigned __int8)rop4 != BYTE1(rop4) && (!v25 || !pptlMask) )
        v43 = 0;
      if ( v43 )
      {
        if ( rop4 == 43724 )
        {
          if ( v25 )
          {
            v43 = bCheckSurfaceRectSize(v24, prclSrc, 0LL, &v59, &v61);
            if ( v43 )
            {
              v44 = pRect(pptlMask, &v76, v59, v61);
              v43 = bCheckMask(v25, v44);
            }
          }
        }
      }
      pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v18, (__int64)v57);
      if ( !pbo )
        pbo = CaptureAndFakeBRUSHOBJ(v57, &v75);
      if ( v43 )
      {
        v46 = 0LL;
        prclDest = v56;
        if ( iMode == 4 )
          v46 = v56;
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v80, v23, DDIOBJ, v46);
        v43 = (unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v80)
           && EngStretchBltROP(
                v23,
                psoSrc,
                v25,
                pco,
                pxlo,
                pca,
                pptlHTOrg,
                prclDest,
                prclSrc,
                pptlMask,
                iMode,
                pbo,
                rop4);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v80);
      }
    }
    else
    {
      v43 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, v20, v21, v22);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v73, v48, v49, v50);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, v51, v52, v53);
    --*(_DWORD *)(v18 + 432);
    return v43;
  }
  return result;
}
