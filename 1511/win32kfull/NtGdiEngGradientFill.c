/*
 * XREFs of NtGdiEngGradientFill @ 0x1C02ABB90
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     EngGradientFill @ 0x1C00DF0D0 (EngGradientFill.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A92C0 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9354 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x1C02A94F0 (-CaptureBits@@YAXPEAX0K@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9554 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9578 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A959C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C02AA1BC (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
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
  unsigned int v11; // ebx
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v14; // rdi
  __int64 result; // rax
  int v16; // r12d
  ULONG nMesh; // esi
  bool v18; // cc
  unsigned int v19; // r12d
  struct _TRIVERTEX *v20; // r15
  void *v21; // rax
  void *pMesh; // r14
  char *v23; // r10
  CLIPOBJ *DDIOBJ; // rbx
  XLATEOBJ *v25; // rax
  SURFOBJ *psoDest[2]; // [rsp+50h] [rbp-D8h] BYREF
  RECTL *prclExtents; // [rsp+60h] [rbp-C8h] BYREF
  ULONG v28; // [rsp+68h] [rbp-C0h]
  unsigned int v29; // [rsp+70h] [rbp-B8h]
  POINTL *pptlDitherOrg; // [rsp+78h] [rbp-B0h] BYREF
  void *v31; // [rsp+80h] [rbp-A8h]
  __int64 v32; // [rsp+88h] [rbp-A0h]
  struct _CLIPOBJ *v33; // [rsp+90h] [rbp-98h]
  __int64 v34; // [rsp+98h] [rbp-90h]
  __int64 v35; // [rsp+A0h] [rbp-88h]
  void *v36; // [rsp+A8h] [rbp-80h]
  struct UMPDOBJ *v37; // [rsp+B0h] [rbp-78h]
  struct _TRIVERTEX *v38; // [rsp+B8h] [rbp-70h]
  struct _CLIPOBJ *v39; // [rsp+C0h] [rbp-68h]
  struct _POINTL v40; // [rsp+C8h] [rbp-60h] BYREF
  struct _RECTL v41; // [rsp+D0h] [rbp-58h] BYREF

  v34 = a4;
  v32 = a3;
  v33 = a2;
  v39 = a2;
  v35 = a3;
  v28 = nVertex;
  v31 = a6;
  prclExtents = a8;
  pptlDitherOrg = a9;
  v11 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v37 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v14 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, v14);
    if ( ulMode <= 1 )
    {
      v16 = 8;
      nMesh = a7;
      v18 = a7 <= 0x4E2000;
    }
    else
    {
      if ( ulMode != 2 )
        goto LABEL_9;
      v16 = 12;
      nMesh = a7;
      v18 = a7 <= 0x341555;
    }
    if ( !v18 )
    {
LABEL_9:
      UMPDSURFOBJ::~UMPDSURFOBJ(psoDest);
      --*((_DWORD *)v14 + 108);
      return 0LL;
    }
    if ( nMesh && nVertex )
    {
      v19 = nMesh * v16;
      if ( nVertex > 0x271000 )
        goto LABEL_9;
      v29 = 16 * nVertex;
      v20 = (struct _TRIVERTEX *)PALLOCMEM2(16 * nVertex, 1886221639LL, 0);
      v38 = v20;
      v21 = PALLOCMEM2(v19, 1886221639LL, 0);
      pMesh = v21;
      v36 = v21;
      if ( psoDest[0]
        && v34
        && v31
        && v20
        && v21
        && prclExtents
        && pptlDitherOrg
        && (CaptureRECTL(&prclExtents, &v41),
            CapturePOINTL(&pptlDitherOrg, &v40),
            CaptureBits(v20, v23, v29),
            CaptureBits(pMesh, (char *)v31, v19),
            (unsigned int)bValidVertexMeshData(v20, (char *)pMesh, nVertex, nMesh, ulMode)) )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, v33, &psoDest[0]->sizlBitmap);
        v25 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, v32);
        v11 = EngGradientFill(psoDest[0], DDIOBJ, v25, v20, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
      }
      else
      {
        v11 = 0;
      }
      if ( v20 )
        Win32FreePool(v20);
      if ( pMesh )
        Win32FreePool(pMesh);
    }
    UMPDSURFOBJ::~UMPDSURFOBJ(psoDest);
    --*((_DWORD *)v14 + 108);
    return v11;
  }
  return result;
}
