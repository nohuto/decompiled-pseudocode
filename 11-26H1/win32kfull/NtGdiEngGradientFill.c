/*
 * XREFs of NtGdiEngGradientFill @ 0x14032D080
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x140061280 (EngGradientFill.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x140185094 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1402280A0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140236F5C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14030AB40 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14032C0F4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x14032C110 (-CaptureBits@@YAXPEAX0K@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14032C558 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x14032C578 (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        __int64 a3,
        void *a4,
        ULONG nVertex,
        void *a6,
        ULONG a7,
        RECTL *a8,
        POINTL *a9,
        ULONG ulMode)
{
  unsigned int v11; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v13; // r8
  SURFOBJ *v14; // r13
  int v15; // r15d
  ULONG nMesh; // edi
  bool v17; // cc
  unsigned int v18; // r15d
  struct _TRIVERTEX *v19; // r14
  __int64 v20; // r8
  __int64 v21; // rax
  void *pMesh; // rsi
  struct _CLIPOBJ *DDIOBJ; // rax
  XLATEOBJ *v24; // rax
  UMPDOBJ *v26; // [rsp+60h] [rbp-228h]
  POINTL *pptlDitherOrg; // [rsp+88h] [rbp-200h] BYREF
  RECTL *prclExtents; // [rsp+90h] [rbp-1F8h] BYREF
  RECTL *v32; // [rsp+98h] [rbp-1F0h]
  POINTL *v33; // [rsp+A0h] [rbp-1E8h]
  struct _POINTL v34; // [rsp+A8h] [rbp-1E0h] BYREF
  unsigned int v35[2]; // [rsp+B0h] [rbp-1D8h]
  struct _TRIVERTEX *v36; // [rsp+B8h] [rbp-1D0h]
  __int64 v37; // [rsp+C0h] [rbp-1C8h]
  SURFOBJ *v38; // [rsp+C8h] [rbp-1C0h]
  struct _CLIPOBJ *v39; // [rsp+D0h] [rbp-1B8h]
  __int64 v40; // [rsp+D8h] [rbp-1B0h]
  SURFOBJ *psoDest[8]; // [rsp+E0h] [rbp-1A8h] BYREF
  UMPDOBJ *v42[4]; // [rsp+120h] [rbp-168h] BYREF
  struct UMPDOBJ *v43; // [rsp+140h] [rbp-148h]
  struct _RECTL v44; // [rsp+180h] [rbp-108h] BYREF
  _BYTE v45[160]; // [rsp+190h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+230h] [rbp-58h]

  v39 = a2;
  v40 = a3;
  v32 = a8;
  prclExtents = a8;
  v33 = a9;
  pptlDitherOrg = a9;
  v11 = 1;
  v44 = 0LL;
  v34 = 0LL;
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v42, CurrentThread);
  v26 = v43;
  if ( !v43 )
    goto LABEL_29;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, v43);
  v14 = psoDest[0];
  v38 = psoDest[0];
  if ( ulMode < 2 )
  {
    v15 = 8;
    nMesh = a7;
    v17 = a7 <= 0x4E2000;
LABEL_6:
    if ( v17 )
    {
      if ( !nMesh || !nVertex )
      {
LABEL_27:
        UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
        UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v42);
        return v11;
      }
      v18 = nMesh * v15;
      if ( nVertex <= 0x271000 )
      {
        *(_QWORD *)v35 = 16 * nVertex;
        v19 = (struct _TRIVERTEX *)PALLOCNOZ(16 * nVertex, 1886221639LL, v13);
        v36 = v19;
        v21 = PALLOCNOZ(v18, 1886221639LL, v20);
        pMesh = (void *)v21;
        v37 = v21;
        if ( v14
          && a4
          && a6
          && v19
          && v21
          && v32
          && v33
          && (CaptureRECTL(&prclExtents, &v44),
              CapturePOINTL(&pptlDitherOrg, &v34),
              CaptureBits(v19, a4, v35[0]),
              CaptureBits(pMesh, a6, v18),
              (unsigned int)bValidVertexMeshData(v19, (unsigned int *)pMesh, nVertex, nMesh, ulMode)) )
        {
          DDIOBJ = UMPDOBJ::GetDDIOBJ(v26, a2, &v14->sizlBitmap);
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45, v14, DDIOBJ, 0LL);
          if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v45)
            || (v24 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v26, a3),
                !EngGradientFill(v14, pco, v24, v19, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode)) )
          {
            v11 = 0;
          }
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45);
        }
        else
        {
          v11 = 0;
        }
        if ( v19 )
          Win32FreePool(v19);
        if ( pMesh )
          Win32FreePool(pMesh);
        goto LABEL_27;
      }
    }
    goto LABEL_28;
  }
  if ( ulMode == 2 )
  {
    v15 = 12;
    nMesh = a7;
    v17 = a7 <= 0x341555;
    goto LABEL_6;
  }
LABEL_28:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
LABEL_29:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v42);
  return 0LL;
}
