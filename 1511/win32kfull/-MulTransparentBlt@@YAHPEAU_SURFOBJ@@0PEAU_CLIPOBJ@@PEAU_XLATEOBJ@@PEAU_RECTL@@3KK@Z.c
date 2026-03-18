/*
 * XREFs of ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0297F50
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngTransparentBlt @ 0x1C00DEAF0 (EngTransparentBlt.c)
 *     OffTransparentBlt @ 0x1C00E9F40 (OffTransparentBlt.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025DDFC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C026AC70 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026AD98 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294198 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0295304 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299194 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C029946C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02995A4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

__int64 __fastcall MulTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v8; // esi
  struct _RECTL *v9; // rdi
  struct _XLATEOBJ *v11; // r14
  struct _SURFOBJ *v13; // r15
  __int64 v14; // rax
  int v15; // ebx
  int Surface; // r12d
  int v17; // ebx
  BOOL v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 pulXlate; // rbx
  struct PALETTE *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  bool v26; // zf
  int v27; // r8d
  int iUniq; // r13d
  int v29; // r11d
  int flXlate; // r9d
  unsigned int v31; // r10d
  __int64 v32; // rdx
  int inited; // eax
  __int64 v34; // rax
  __int64 v35; // rbx
  unsigned int v36; // eax
  int NearestIndexFromColorref; // ebx
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  BOOL v40; // [rsp+60h] [rbp-A0h]
  struct _XLATEOBJ *v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  char v44; // [rsp+88h] [rbp-78h]
  int v45; // [rsp+8Ch] [rbp-74h]
  struct _SURFOBJ *v46; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v47; // [rsp+98h] [rbp-68h]
  _BYTE v48[64]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DISPSURF *v49; // [rsp+E0h] [rbp-20h]
  int v50[2]; // [rsp+E8h] [rbp-18h]
  struct _CLIPOBJ *v51; // [rsp+F0h] [rbp-10h]
  int v52[2]; // [rsp+F8h] [rbp-8h]
  _BYTE v53[96]; // [rsp+110h] [rbp+10h] BYREF
  SURFOBJ *psoSrc; // [rsp+170h] [rbp+70h]
  RECTL *prclSrc; // [rsp+178h] [rbp+78h]
  _BYTE v56[96]; // [rsp+180h] [rbp+80h] BYREF
  SURFOBJ *psoDst; // [rsp+1E0h] [rbp+E0h]
  RECTL *prclDst; // [rsp+1E8h] [rbp+E8h]
  struct _RECTL v59; // [rsp+1F0h] [rbp+F0h] BYREF

  v8 = 0;
  v9 = a6;
  v46 = a1;
  v11 = a4;
  v43 = 0LL;
  v44 = 0;
  v13 = a2;
  v45 = 0;
  v47 = a4;
  v14 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 48);
  v59 = *a6;
  if ( v13->iType != 1 || !v14 || (*(_DWORD *)(v14 + 56) & 0x20000) == 0 )
  {
LABEL_8:
    v40 = 1;
    v15 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v48, a1, a3, a5);
    MULTISURF::MULTISURF((MULTISURF *)v53, v13, v9);
    if ( v15 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v56, v46, a5);
      v40 = EngTransparentBlt(psoDst, psoSrc, a3, v11, prclDst, prclSrc, iTransColor, ulReserved);
      v17 = v40;
      MULTISURF::~MULTISURF((MULTISURF *)v56);
    }
    else
    {
      v17 = 1;
    }
    if ( !Surface )
    {
LABEL_63:
      v8 = v17;
      MULTISURF::~MULTISURF((MULTISURF *)v53);
      goto LABEL_64;
    }
    while ( 1 )
    {
      v41 = 0LL;
      v18 = MULTISURF::bLoadSource((MULTISURF *)v53, v49) == 0;
      *(_QWORD *)&v59.left = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v50);
      if ( v18 )
        goto LABEL_61;
      v20 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
      v19 = (__int64)v49;
      v21 = v20;
      v42 = v20;
      if ( *((_DWORD *)v49 + 6) )
      {
        pulXlate = *(_QWORD *)(v20 + 120);
        v23 = ppalDefault;
        v24 = *((_QWORD *)v49 + 6);
        if ( (*(_DWORD *)(v24 + 2196) & 0x100) != 0 )
          v23 = DrvRealizeHalftonePalette((_QWORD *)v24, 0);
        if ( !pulXlate )
        {
          if ( v11 && v11[1].pulXlate )
          {
            pulXlate = (__int64)v11[1].pulXlate;
          }
          else
          {
            v25 = SURFOBJ_TO_SURFACE_NOT_NULL(v46);
            if ( !v11 || (v19 = 1LL, (v11->flXlate & 1) != 0) )
            {
              v26 = psoSrc == v13;
            }
            else
            {
              v23 = *(struct PALETTE **)&v11[2].iSrcType;
              if ( !v23 )
              {
                v18 = 1;
                goto LABEL_50;
              }
              v26 = *(_DWORD *)(v21 + 96) == *(_DWORD *)(v25 + 96);
            }
            if ( v26 )
              pulXlate = *(_QWORD *)(v25 + 120);
          }
        }
        v27 = 0;
        if ( pulXlate )
        {
          if ( (*(_DWORD *)(pulXlate + 24) & 0x800) != 0 )
          {
            v27 = 0x4000;
            if ( v23 == ppalDefault )
              v27 = 0x2000;
          }
        }
        if ( v11 )
          iUniq = v11[1].iUniq;
        else
          iUniq = 0;
        if ( v11 )
          v29 = *(_DWORD *)&v11[1].iSrcType;
        else
          v29 = 0;
        if ( v11 )
          flXlate = v11[1].flXlate;
        else
          flXlate = 0;
        if ( v11 )
          v31 = v11[3].iUniq;
        else
          v31 = 0;
        if ( v11 )
          v32 = (__int64)v11[2].pulXlate;
        else
          v32 = 0LL;
        inited = EXLATEOBJ::bInitXlateObj(
                   (__int64 *)&v41,
                   v32,
                   v31,
                   pulXlate,
                   *(_QWORD *)(*(_QWORD *)&v59.left + 120LL),
                   (__int64)ppalDefault,
                   (__int64)v23,
                   flXlate,
                   v29,
                   iUniq,
                   v27);
        v21 = v42;
        if ( inited )
          v11 = v41;
        else
          v18 = 1;
      }
LABEL_50:
      if ( psoSrc == v13 )
      {
        NearestIndexFromColorref = iTransColor;
      }
      else
      {
        v34 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
        v35 = *(_QWORD *)(v21 + 120);
        v36 = ulIndexToRGB(*(_QWORD *)(v34 + 120), ppalDefault, iTransColor);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v35, ppalDefault, v36, 1LL);
      }
      if ( !v18 )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v50) + 112) & 0x8000) != 0 )
          v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v49 + 7) + 3312LL);
        else
          v38 = EngTransparentBlt;
        if ( psoSrc->iType == 1 && *(_QWORD *)(v21 + 48) != *(_QWORD *)(*(_QWORD *)&v59.left + 48LL) )
          v38 = EngTransparentBlt;
        v17 = OffTransparentBlt(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, int, int))v38,
                *(int **)v52,
                *(__int64 *)v50,
                (int *)&gptlZero,
                (__int64)psoSrc,
                v51,
                (__int64)v11,
                a5,
                prclSrc,
                NearestIndexFromColorref,
                ulReserved) & v40;
        goto LABEL_62;
      }
LABEL_61:
      v17 = 0;
LABEL_62:
      v11 = v47;
      v40 = v17;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v41, v19);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v48) )
        goto LABEL_63;
    }
  }
  if ( (unsigned int)MulCopyDeviceToDIB(v13, (struct SURFMEM *)&v43, &v59) )
  {
    if ( !v43 )
    {
      v8 = 1;
      goto LABEL_64;
    }
    v13 = (struct _SURFOBJ *)(v43 + 24);
    v9 = &v59;
    SURFOBJ_TO_SURFACE_NOT_NULL(v43 + 24);
    goto LABEL_8;
  }
LABEL_64:
  SURFMEM::~SURFMEM((SURFMEM *)&v43);
  return v8;
}
