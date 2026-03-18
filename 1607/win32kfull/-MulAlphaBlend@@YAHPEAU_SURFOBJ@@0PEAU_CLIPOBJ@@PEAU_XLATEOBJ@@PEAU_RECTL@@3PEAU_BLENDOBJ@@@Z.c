/*
 * XREFs of ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0293B90
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngAlphaBlend @ 0x1C003F5B0 (EngAlphaBlend.c)
 *     OffAlphaBlend @ 0x1C0102670 (OffAlphaBlend.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025B574 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0269130 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0269258 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0293928 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0294AA4 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0298934 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C0298C0C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0298D44 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

__int64 __fastcall MulAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *pBlendObj)
{
  struct _BLENDOBJ *v7; // r13
  unsigned int v8; // esi
  struct _RECTL *v10; // rdi
  struct _XLATEOBJ *v11; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ebx
  int Surface; // r15d
  int v18; // r12d
  BOOL v19; // edi
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 pulXlate; // rdi
  struct PALETTE *v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rax
  bool v27; // zf
  int v28; // r10d
  int flXlate; // r9d
  int v30; // r13d
  int iUniq; // r12d
  unsigned int v32; // r8d
  __int64 v33; // rdx
  int inited; // eax
  BOOL (__stdcall *v35)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  BOOL v37; // [rsp+60h] [rbp-A0h]
  int v38; // [rsp+64h] [rbp-9Ch]
  __int64 v39; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-60h] BYREF
  struct _SURFOBJ *v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h] BYREF
  char v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  struct _XLATEOBJ *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  _BYTE v53[64]; // [rsp+E0h] [rbp-20h] BYREF
  struct _DISPSURF *v54; // [rsp+120h] [rbp+20h]
  int v55[2]; // [rsp+128h] [rbp+28h]
  struct _CLIPOBJ *v56; // [rsp+130h] [rbp+30h]
  int v57[2]; // [rsp+138h] [rbp+38h]
  _BYTE v58[96]; // [rsp+150h] [rbp+50h] BYREF
  SURFOBJ *psoSrc; // [rsp+1B0h] [rbp+B0h]
  RECTL *prclSrc; // [rsp+1B8h] [rbp+B8h]
  _BYTE v61[96]; // [rsp+1C0h] [rbp+C0h] BYREF
  SURFOBJ *psoDest; // [rsp+220h] [rbp+120h]
  RECTL *prclDest; // [rsp+228h] [rbp+128h]
  struct _RECTL v64; // [rsp+230h] [rbp+130h] BYREF

  v7 = pBlendObj;
  v8 = 0;
  v10 = a6;
  v11 = a4;
  v50 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v51 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v14 = *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp;
  v45 = a1;
  v52 = v14;
  v40 = a2;
  v49 = a4;
  v46 = 0LL;
  v47 = 0;
  v48 = 0;
  v15 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 48);
  v64 = *a6;
  if ( a2->iType != 1 || !v15 || (*(_DWORD *)(v15 + 56) & 0x20000) == 0 )
  {
LABEL_8:
    v37 = 1;
    v16 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v53, a1, a3, a5);
    MULTISURF::MULTISURF((MULTISURF *)v58, v40, v10);
    if ( v16 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v61, v45, a5);
      v37 = EngAlphaBlend(psoDest, psoSrc, a3, v11, prclDest, prclSrc, pBlendObj);
      v18 = v37;
      MULTISURF::~MULTISURF((MULTISURF *)v61);
    }
    else
    {
      v18 = 1;
    }
    if ( !Surface )
    {
LABEL_65:
      v8 = v18;
      MULTISURF::~MULTISURF((MULTISURF *)v58);
      goto LABEL_66;
    }
    while ( 1 )
    {
      *(_QWORD *)&v64.left = 0LL;
      v44 = 0LL;
      v43 = 0LL;
      v42 = 0LL;
      v19 = MULTISURF::bLoadSource((MULTISURF *)v58, v54) == 0;
      v39 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v55);
      v20 = v39;
      if ( !v19 )
      {
        v21 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
        v22 = v21;
        v41 = v21;
        if ( !*((_DWORD *)v54 + 6) )
          goto LABEL_54;
        pulXlate = *(_QWORD *)(v21 + 120);
        v24 = ppalDefault;
        v25 = *((_QWORD *)v54 + 6);
        if ( (*(_DWORD *)(v25 + 2196) & 0x100) != 0 )
          v24 = DrvRealizeHalftonePalette((_QWORD *)v25, 0);
        if ( !pulXlate )
        {
          if ( v11 && v11[1].pulXlate )
          {
            pulXlate = (__int64)v11[1].pulXlate;
          }
          else
          {
            v26 = SURFOBJ_TO_SURFACE_NOT_NULL(v45);
            if ( !v11 || (v11->flXlate & 1) != 0 )
            {
              v27 = psoSrc == v40;
            }
            else
            {
              v24 = *(struct PALETTE **)&v11[2].iSrcType;
              if ( !v24 )
                goto LABEL_63;
              v27 = *(_DWORD *)(v22 + 96) == *(_DWORD *)(v26 + 96);
            }
            if ( v27 )
              pulXlate = *(_QWORD *)(v26 + 120);
          }
        }
        v28 = 0;
        if ( pulXlate )
        {
          if ( (*(_DWORD *)(pulXlate + 24) & 0x800) != 0 )
          {
            v28 = 0x4000;
            if ( v24 == ppalDefault )
              v28 = 0x2000;
          }
        }
        if ( v11 )
          flXlate = v11[1].flXlate;
        else
          flXlate = 0;
        v38 = flXlate;
        if ( v11 )
          v30 = *(_DWORD *)&v11[1].iSrcType;
        else
          v30 = 0;
        if ( v11 )
          iUniq = v11[1].iUniq;
        else
          iUniq = 0;
        if ( v11 )
          v32 = v11[3].iUniq;
        else
          v32 = 0;
        if ( v11 )
          v33 = (__int64)v11[2].pulXlate;
        else
          v33 = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v64.left,
                             v33,
                             v32,
                             pulXlate,
                             *(_QWORD *)(v39 + 120),
                             (__int64)ppalDefault,
                             (__int64)v24,
                             flXlate,
                             v30,
                             iUniq,
                             v28)
          && (v11 = *(struct _XLATEOBJ **)&v64.left,
              (unsigned int)EXLATEOBJ::bInitXlateObj(
                              &v44,
                              0LL,
                              0,
                              *(_QWORD *)(v39 + 120),
                              (__int64)gppalRGB,
                              (__int64)v24,
                              (__int64)v24,
                              v38,
                              v30,
                              iUniq,
                              0)) )
        {
          *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v44;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               &v43,
                               0LL,
                               0,
                               (__int64)gppalRGB,
                               *(_QWORD *)(v39 + 120),
                               (__int64)v24,
                               (__int64)v24,
                               v38,
                               v30,
                               iUniq,
                               0) )
          {
            *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v43;
            if ( psoSrc == v40 )
            {
              v7 = pBlendObj;
              goto LABEL_53;
            }
            inited = EXLATEOBJ::bInitXlateObj(
                       &v42,
                       0LL,
                       0,
                       *(_QWORD *)(v41 + 120),
                       (__int64)gppalRGB,
                       (__int64)ppalDefault,
                       (__int64)v24,
                       v38,
                       v30,
                       iUniq,
                       0);
            v7 = pBlendObj;
            if ( inited )
            {
              *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v42;
LABEL_53:
              v20 = v39;
              v22 = v41;
LABEL_54:
              if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v55) + 112) & 0x10000) != 0 )
                v35 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)v54 + 7) + 3280LL);
              else
                v35 = EngAlphaBlend;
              if ( psoSrc->iType == 1 && *(_QWORD *)(v22 + 48) != *(_QWORD *)(v20 + 48) )
                v35 = EngAlphaBlend;
              v18 = OffAlphaBlend(
                      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64))v35,
                      *(int **)v57,
                      *(__int64 *)v55,
                      (int *)&gptlZero,
                      (__int64)psoSrc,
                      v56,
                      (__int64)v11,
                      a5,
                      prclSrc,
                      (__int64)v7) & v37;
              goto LABEL_64;
            }
          }
          else
          {
            v7 = pBlendObj;
          }
        }
        else
        {
          v7 = pBlendObj;
        }
      }
LABEL_63:
      v18 = 0;
LABEL_64:
      v11 = v49;
      *(_QWORD *)&v7[4].BlendFunction.BlendOp = v50;
      *(_QWORD *)&v7[6].BlendFunction.BlendOp = v51;
      *(_QWORD *)&v7[2].BlendFunction.BlendOp = v52;
      v37 = v18;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v42);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v43);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v44);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v64);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v53) )
        goto LABEL_65;
    }
  }
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v46, &v64) )
  {
    if ( !v46 )
    {
      v8 = 1;
      goto LABEL_66;
    }
    v10 = &v64;
    v40 = (struct _SURFOBJ *)(v46 + 24);
    SURFOBJ_TO_SURFACE_NOT_NULL(v46 + 24);
    goto LABEL_8;
  }
LABEL_66:
  SURFMEM::~SURFMEM((SURFMEM *)&v46);
  return v8;
}
