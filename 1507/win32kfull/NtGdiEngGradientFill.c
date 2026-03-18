/*
 * XREFs of NtGdiEngGradientFill @ 0x1C02AC5A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     EngGradientFill @ 0x1C00D2AF0 (EngGradientFill.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C025AF60 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A9AC8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02A9C1C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x1C02A9D74 (-CaptureBits@@YAXPEAX0K@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9DD8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9DFC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AAB18 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C02AAB34 (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
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
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v14; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  ULONG nMesh; // r14d
  bool v21; // cc
  unsigned int v22; // ebx
  struct _TRIVERTEX *v23; // r12
  void *v24; // rax
  void *pMesh; // r15
  char *v26; // r10
  struct _CLIPOBJ *DDIOBJ; // rax
  CLIPOBJ *v28; // rbx
  XLATEOBJ *v29; // rax
  SURFOBJ *psoDest; // [rsp+60h] [rbp-1C8h]
  POINTL *pptlDitherOrg; // [rsp+68h] [rbp-1C0h] BYREF
  unsigned int v32; // [rsp+70h] [rbp-1B8h]
  RECTL *prclExtents; // [rsp+78h] [rbp-1B0h] BYREF
  void *v34; // [rsp+80h] [rbp-1A8h]
  struct _CLIPOBJ *v35; // [rsp+88h] [rbp-1A0h]
  __int64 v36; // [rsp+90h] [rbp-198h]
  __int64 v37; // [rsp+98h] [rbp-190h]
  __int64 v38; // [rsp+A0h] [rbp-188h]
  struct _TRIVERTEX *v39; // [rsp+A8h] [rbp-180h]
  struct _CLIPOBJ *v40; // [rsp+B0h] [rbp-178h]
  struct UMPDOBJ *v41; // [rsp+B8h] [rbp-170h]
  void *v42; // [rsp+C0h] [rbp-168h]
  struct _POINTL v43; // [rsp+C8h] [rbp-160h] BYREF
  _QWORD v44[8]; // [rsp+D0h] [rbp-158h] BYREF
  struct _RECTL v45; // [rsp+110h] [rbp-118h] BYREF
  _BYTE v46[168]; // [rsp+120h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1C8h] [rbp-60h]

  v37 = a4;
  v36 = a3;
  v35 = a2;
  v40 = a2;
  v38 = a3;
  v34 = a6;
  prclExtents = a8;
  pptlDitherOrg = a9;
  v11 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v41 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v44, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  psoDest = (SURFOBJ *)v44[0];
  if ( ulMode <= 1 )
  {
    v19 = 8;
    nMesh = a7;
    v21 = a7 <= 0x4E2000;
  }
  else
  {
    if ( ulMode != 2 )
      goto LABEL_9;
    v19 = 12;
    nMesh = a7;
    v21 = a7 <= 0x341555;
  }
  if ( !v21 )
  {
LABEL_9:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v44, v16, v17, v18);
    if ( v14 )
      --*((_DWORD *)v14 + 108);
    return 0LL;
  }
  if ( nMesh && nVertex )
  {
    v22 = nMesh * v19;
    if ( nVertex > 0x271000 )
      goto LABEL_9;
    v32 = 16 * nVertex;
    v23 = (struct _TRIVERTEX *)PALLOCMEM2(16 * nVertex, 1886221639LL, 0);
    v39 = v23;
    v24 = PALLOCMEM2(v22, 1886221639LL, 0);
    pMesh = v24;
    v42 = v24;
    if ( psoDest
      && v37
      && v34
      && v23
      && v24
      && prclExtents
      && pptlDitherOrg
      && (CaptureRECTL(&prclExtents, &v45),
          CapturePOINTL(&pptlDitherOrg, &v43),
          CaptureBits(v23, v26, v32),
          CaptureBits(pMesh, (char *)v34, v22),
          (unsigned int)bValidVertexMeshData(v23, (char *)pMesh, nVertex, nMesh, ulMode)) )
    {
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, v35, &psoDest->sizlBitmap);
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v46, psoDest, DDIOBJ, 0LL);
      if ( !(unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v46)
        || (v28 = pco,
            v29 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, v36),
            !EngGradientFill(psoDest, v28, v29, v23, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode)) )
      {
        v11 = 0;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v46);
    }
    else
    {
      v11 = 0;
    }
    if ( v23 )
      Win32FreePool(v23);
    if ( pMesh )
      Win32FreePool(pMesh);
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v44, v16, v17, v18);
  if ( v14 )
    --*((_DWORD *)v14 + 108);
  return v11;
}
