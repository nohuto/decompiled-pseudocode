/*
 * XREFs of ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02965F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngGradientFill @ 0x1C00DF0D0 (EngGradientFill.c)
 *     OffGradientFill @ 0x1C0141694 (OffGradientFill.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025DDFC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C026AC70 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026AD98 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294198 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299194 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02995A4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

__int64 __fastcall MulGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        struct _RECTL *a8,
        struct _POINTL *a9,
        ULONG ulMode)
{
  XLATEOBJ *v10; // rbx
  unsigned int v14; // r14d
  int i; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  struct PALETTE *v19; // r11
  int iUniq; // r10d
  int v21; // r9d
  int flXlate; // ecx
  unsigned int v23; // r8d
  __int64 pulXlate; // rdx
  BOOL (__stdcall *v25)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  int v26; // eax
  __int64 v27; // rdx
  XLATEOBJ *v29; // [rsp+60h] [rbp-A0h] BYREF
  POINTL *pptlDitherOrg; // [rsp+68h] [rbp-98h]
  XLATEOBJ *v31; // [rsp+70h] [rbp-90h]
  _BYTE v32[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  struct _CLIPOBJ *v35; // [rsp+D0h] [rbp-30h]
  LONG *v36; // [rsp+D8h] [rbp-28h]
  _BYTE v37[96]; // [rsp+F0h] [rbp-10h] BYREF
  SURFOBJ *psoDest; // [rsp+150h] [rbp+50h]
  RECTL *prclExtents; // [rsp+158h] [rbp+58h]

  v10 = pxlo;
  pptlDitherOrg = a9;
  v31 = pxlo;
  v14 = 1;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v37, a1, a8);
    v14 = EngGradientFill(psoDest, a2, v10, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    MULTISURF::~MULTISURF((MULTISURF *)v37);
  }
  for ( i = MSURF::bFindSurface((MSURF *)v32, a1, a2, a8); i; i = MSURF::bNextSurface((MSURF *)v32) )
  {
    v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v34);
    v29 = 0LL;
    v17 = v16;
    if ( *(_DWORD *)(v16 + 96) <= 3u )
    {
      if ( *(_DWORD *)(v33 + 24) )
      {
        v18 = *(_QWORD *)(v33 + 48);
        v19 = ppalDefault;
        if ( (*(_DWORD *)(v18 + 2196) & 0x100) != 0 )
          v19 = DrvRealizeHalftonePalette((_QWORD *)v18, 0);
        if ( v10 )
          iUniq = v10[1].iUniq;
        else
          iUniq = 0;
        if ( v10 )
          v21 = *(_DWORD *)&v10[1].iSrcType;
        else
          v21 = 0;
        if ( v10 )
          flXlate = v10[1].flXlate;
        else
          flXlate = 0;
        if ( v10 )
          v23 = v10[3].iUniq;
        else
          v23 = 0;
        if ( v10 )
          pulXlate = (__int64)v10[2].pulXlate;
        else
          pulXlate = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v29,
                             pulXlate,
                             v23,
                             (__int64)gppalRGB,
                             *(_QWORD *)(v17 + 120),
                             (__int64)v19,
                             (__int64)v19,
                             flXlate,
                             v21,
                             iUniq,
                             0) )
          v10 = v29;
      }
    }
    else
    {
      v10 = 0LL;
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v34) + 112) & 0x20000) != 0 )
      v25 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v33 + 56) + 3264LL);
    else
      v25 = EngGradientFill;
    v26 = OffGradientFill(
            (__int64 (__fastcall *)(__int64, struct _CLIPOBJ *, __int64, _DWORD *, unsigned int, __int64, int, _DWORD *, _DWORD *, int))v25,
            v36,
            v34,
            v35,
            (__int64)v10,
            pVertex,
            nVertex,
            (__int64)pMesh,
            nMesh,
            a8,
            pptlDitherOrg,
            ulMode);
    v10 = v31;
    v14 &= v26;
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v29, v27);
  }
  return v14;
}
