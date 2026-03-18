/*
 * XREFs of ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0298450
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngTransparentBlt @ 0x1C0126F30 (EngTransparentBlt.c)
 *     OffTransparentBlt @ 0x1C0127F90 (OffTransparentBlt.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025E60C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C026C100 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026C228 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294690 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02957E0 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299694 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C029996C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0299AA4 (-bNextSurface@MSURF@@QEAAHXZ.c)
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
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 pulXlate; // rbx
  struct PALETTE *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  bool v25; // zf
  int v26; // r8d
  int iUniq; // r13d
  int v28; // r11d
  int flXlate; // r9d
  int v30; // r10d
  ULONG *v31; // rdx
  int inited; // eax
  __int64 v33; // rax
  __int64 v34; // rbx
  unsigned int v35; // eax
  int NearestIndexFromColorref; // ebx
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  BOOL v39; // [rsp+60h] [rbp-A0h]
  struct _XLATEOBJ *v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h] BYREF
  char v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  struct _SURFOBJ *v45; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v46; // [rsp+98h] [rbp-68h]
  _BYTE v47[64]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DISPSURF *v48; // [rsp+E0h] [rbp-20h]
  int v49[2]; // [rsp+E8h] [rbp-18h]
  struct _CLIPOBJ *v50; // [rsp+F0h] [rbp-10h]
  int v51[2]; // [rsp+F8h] [rbp-8h]
  _BYTE v52[96]; // [rsp+110h] [rbp+10h] BYREF
  SURFOBJ *psoSrc; // [rsp+170h] [rbp+70h]
  RECTL *prclSrc; // [rsp+178h] [rbp+78h]
  _BYTE v55[96]; // [rsp+180h] [rbp+80h] BYREF
  SURFOBJ *psoDst; // [rsp+1E0h] [rbp+E0h]
  RECTL *prclDst; // [rsp+1E8h] [rbp+E8h]
  struct _RECTL v58; // [rsp+1F0h] [rbp+F0h] BYREF

  v8 = 0;
  v9 = a6;
  v45 = a1;
  v11 = a4;
  v42 = 0LL;
  v43 = 0;
  v13 = a2;
  v44 = 0;
  v46 = a4;
  v14 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 48);
  v58 = *a6;
  if ( v13->iType != 1 || !v14 || (*(_DWORD *)(v14 + 56) & 0x20000) == 0 )
  {
LABEL_8:
    v39 = 1;
    v15 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v47, a1, a3, a5);
    MULTISURF::MULTISURF((MULTISURF *)v52, v13, v9);
    if ( v15 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v55, v45, a5);
      v39 = EngTransparentBlt(psoDst, psoSrc, a3, v11, prclDst, prclSrc, iTransColor, ulReserved);
      v17 = v39;
      MULTISURF::~MULTISURF((MULTISURF *)v55);
    }
    else
    {
      v17 = 1;
    }
    if ( !Surface )
    {
LABEL_63:
      v8 = v17;
      MULTISURF::~MULTISURF((MULTISURF *)v52);
      goto LABEL_64;
    }
    while ( 1 )
    {
      v40 = 0LL;
      v18 = MULTISURF::bLoadSource((MULTISURF *)v52, v48) == 0;
      *(_QWORD *)&v58.left = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v49);
      if ( v18 )
        goto LABEL_61;
      v19 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
      v20 = v19;
      v41 = v19;
      if ( *((_DWORD *)v48 + 6) )
      {
        pulXlate = *(_QWORD *)(v19 + 120);
        v22 = ppalDefault;
        v23 = *((_QWORD *)v48 + 6);
        if ( (*(_DWORD *)(v23 + 2196) & 0x100) != 0 )
          v22 = DrvRealizeHalftonePalette((_QWORD *)v23, 0);
        if ( !pulXlate )
        {
          if ( v11 && v11[1].pulXlate )
          {
            pulXlate = (__int64)v11[1].pulXlate;
          }
          else
          {
            v24 = SURFOBJ_TO_SURFACE_NOT_NULL(v45);
            if ( !v11 || (v11->flXlate & 1) != 0 )
            {
              v25 = psoSrc == v13;
            }
            else
            {
              v22 = *(struct PALETTE **)&v11[2].iSrcType;
              if ( !v22 )
              {
                v18 = 1;
                goto LABEL_50;
              }
              v25 = *(_DWORD *)(v20 + 96) == *(_DWORD *)(v24 + 96);
            }
            if ( v25 )
              pulXlate = *(_QWORD *)(v24 + 120);
          }
        }
        v26 = 0;
        if ( pulXlate )
        {
          if ( (*(_DWORD *)(pulXlate + 24) & 0x800) != 0 )
          {
            v26 = 0x4000;
            if ( v22 == ppalDefault )
              v26 = 0x2000;
          }
        }
        if ( v11 )
          iUniq = v11[1].iUniq;
        else
          iUniq = 0;
        if ( v11 )
          v28 = *(_DWORD *)&v11[1].iSrcType;
        else
          v28 = 0;
        if ( v11 )
          flXlate = v11[1].flXlate;
        else
          flXlate = 0;
        if ( v11 )
          v30 = v11[3].iUniq;
        else
          v30 = 0;
        if ( v11 )
          v31 = v11[2].pulXlate;
        else
          v31 = 0LL;
        inited = EXLATEOBJ::bInitXlateObj(
                   (__int64 *)&v40,
                   v31,
                   v30,
                   pulXlate,
                   *(_QWORD *)(*(_QWORD *)&v58.left + 120LL),
                   (__int64)ppalDefault,
                   (__int64)v22,
                   flXlate,
                   v28,
                   iUniq,
                   v26);
        v20 = v41;
        if ( inited )
          v11 = v40;
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
        v33 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
        v34 = *(_QWORD *)(v20 + 120);
        v35 = ulIndexToRGB(*(_QWORD *)(v33 + 120), ppalDefault, iTransColor);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v34, ppalDefault, v35, 1LL);
      }
      if ( !v18 )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v49) + 112) & 0x8000) != 0 )
          v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v48 + 7) + 3312LL);
        else
          v37 = EngTransparentBlt;
        if ( psoSrc->iType == 1 && *(_QWORD *)(v20 + 48) != *(_QWORD *)(*(_QWORD *)&v58.left + 48LL) )
          v37 = EngTransparentBlt;
        v17 = OffTransparentBlt(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, int, int))v37,
                *(LONG **)v51,
                *(__int64 *)v49,
                (int *)&gptlZero,
                (__int64)psoSrc,
                v50,
                (__int64)v11,
                a5,
                prclSrc,
                NearestIndexFromColorref,
                ulReserved) & v39;
        goto LABEL_62;
      }
LABEL_61:
      v17 = 0;
LABEL_62:
      v11 = v46;
      v39 = v17;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v40);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v47) )
        goto LABEL_63;
    }
  }
  if ( (unsigned int)MulCopyDeviceToDIB(v13, (struct SURFMEM *)&v42, &v58) )
  {
    if ( !v42 )
    {
      v8 = 1;
      goto LABEL_64;
    }
    v13 = (struct _SURFOBJ *)(v42 + 24);
    v9 = &v58;
    SURFOBJ_TO_SURFACE_NOT_NULL(v42 + 24);
    goto LABEL_8;
  }
LABEL_64:
  SURFMEM::~SURFMEM((SURFMEM *)&v42);
  return v8;
}
