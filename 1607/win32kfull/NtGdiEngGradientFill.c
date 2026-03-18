/*
 * XREFs of NtGdiEngGradientFill @ 0x1C02ADD60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     EngGradientFill @ 0x1C0061580 (EngGradientFill.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02580A0 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02AAF18 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02AB0B4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x1C02AB274 (-CaptureBits@@YAXPEAX0K@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02AB2D8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02AB2FC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02AB35C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AC06C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C02AC088 (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
 */

__int64 __fastcall NtGdiEngGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        __int64 a3,
        __int64 a4,
        ULONG nVertex,
        void *a6,
        ULONG a7,
        RECTL *a8,
        POINTL *a9,
        ULONG ulMode)
{
  unsigned int v11; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  UMPDOBJ *ThreadCurrentObj; // rbx
  unsigned int v14; // edi
  int v16; // ebx
  ULONG nMesh; // r14d
  unsigned int v18; // ebx
  struct _TRIVERTEX *v19; // r12
  void *v20; // rax
  __int64 v21; // rdx
  void *pMesh; // r15
  char *v23; // r10
  SURFOBJ *v24; // rbx
  struct _CLIPOBJ *DDIOBJ; // rax
  CLIPOBJ *v26; // rbx
  XLATEOBJ *v27; // rax
  UMPDOBJ *v28; // [rsp+50h] [rbp-1D8h] BYREF
  SURFOBJ *psoDest; // [rsp+58h] [rbp-1D0h]
  unsigned int v30; // [rsp+60h] [rbp-1C8h]
  int v31; // [rsp+64h] [rbp-1C4h]
  ULONG v32; // [rsp+68h] [rbp-1C0h]
  POINTL *pptlDitherOrg; // [rsp+70h] [rbp-1B8h] BYREF
  RECTL *prclExtents; // [rsp+78h] [rbp-1B0h] BYREF
  void *v35; // [rsp+80h] [rbp-1A8h]
  struct _CLIPOBJ *v36; // [rsp+88h] [rbp-1A0h]
  __int64 v37; // [rsp+90h] [rbp-198h]
  UMPDOBJ *v38; // [rsp+98h] [rbp-190h]
  __int64 v39; // [rsp+A0h] [rbp-188h]
  struct _TRIVERTEX *v40; // [rsp+A8h] [rbp-180h]
  void *v41; // [rsp+B0h] [rbp-178h]
  struct _CLIPOBJ *v42; // [rsp+B8h] [rbp-170h]
  __int64 v43; // [rsp+C0h] [rbp-168h]
  struct _POINTL v44; // [rsp+C8h] [rbp-160h] BYREF
  _QWORD v45[8]; // [rsp+D0h] [rbp-158h] BYREF
  struct _RECTL v46; // [rsp+110h] [rbp-118h] BYREF
  _BYTE v47[168]; // [rsp+120h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1C8h] [rbp-60h]

  v39 = a4;
  v37 = a3;
  v36 = a2;
  v42 = a2;
  v43 = a3;
  v32 = nVertex;
  v35 = a6;
  prclExtents = a8;
  pptlDitherOrg = a9;
  v11 = 1;
  v31 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v38 = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v28, ThreadCurrentObj);
  v14 = 0;
  if ( !v28 )
    goto LABEL_2;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v45, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  psoDest = (SURFOBJ *)v45[0];
  if ( ulMode <= 1 )
  {
    v16 = 8;
    nMesh = a7;
    if ( a7 <= 0x4E2000 )
      goto LABEL_9;
LABEL_8:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v45);
LABEL_2:
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v28);
    return 0LL;
  }
  if ( ulMode != 2 )
    goto LABEL_8;
  v16 = 12;
  nMesh = a7;
  if ( a7 > 0x341555 )
    goto LABEL_32;
LABEL_9:
  if ( !nMesh || !nVertex )
  {
    v14 = 1;
    goto LABEL_32;
  }
  v18 = nMesh * v16;
  if ( nVertex > 0x271000 )
  {
LABEL_32:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v45);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v28);
    return v14;
  }
  v30 = 16 * nVertex;
  v19 = (struct _TRIVERTEX *)PALLOCMEM2(16 * nVertex, 1886221639LL, 0);
  v40 = v19;
  v20 = PALLOCMEM2(v18, 1886221639LL, 0);
  pMesh = v20;
  v41 = v20;
  if ( psoDest
    && v39
    && v35
    && v19
    && v20
    && prclExtents
    && pptlDitherOrg
    && (CaptureRECTL(&prclExtents, &v46),
        CapturePOINTL(&pptlDitherOrg, &v44),
        CaptureBits(v19, v23, v30),
        CaptureBits(pMesh, (char *)v35, v18),
        v24 = psoDest,
        v31)
    && (unsigned int)bValidVertexMeshData(v19, (char *)pMesh, nVertex, nMesh, ulMode) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v38, v36, &v24->sizlBitmap);
    ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v47, v24, DDIOBJ, 0LL);
    if ( !(unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v47)
      || (v26 = pco,
          v27 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v38, v37),
          !EngGradientFill(psoDest, v26, v27, v19, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode)) )
    {
      v11 = 0;
    }
    ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v47);
  }
  else
  {
    v11 = 0;
  }
  if ( v19 )
    Win32FreePool(v19, v21);
  if ( pMesh )
    Win32FreePool(pMesh, v21);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v45);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v28);
  return v11;
}
