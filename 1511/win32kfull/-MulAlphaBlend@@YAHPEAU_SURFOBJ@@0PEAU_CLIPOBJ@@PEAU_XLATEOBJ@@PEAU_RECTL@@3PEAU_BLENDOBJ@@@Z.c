/*
 * XREFs of ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02943F0
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x1C003CDC0 (EngAlphaBlend.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffAlphaBlend @ 0x1C00EA310 (OffAlphaBlend.c)
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
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 pulXlate; // rdi
  struct PALETTE *v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rax
  bool v28; // zf
  int v29; // r10d
  int flXlate; // r9d
  int v31; // r13d
  int iUniq; // r12d
  unsigned int v33; // r8d
  __int64 v34; // rdx
  int inited; // eax
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  BOOL v41; // [rsp+60h] [rbp-A0h]
  int v42; // [rsp+64h] [rbp-9Ch]
  __int64 v43; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h] BYREF
  struct _RECTL *v49; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h] BYREF
  char v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+BCh] [rbp-44h]
  struct _XLATEOBJ *v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h]
  __int64 v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  _BYTE v58[64]; // [rsp+E0h] [rbp-20h] BYREF
  struct _DISPSURF *v59; // [rsp+120h] [rbp+20h]
  int v60[2]; // [rsp+128h] [rbp+28h]
  struct _CLIPOBJ *v61; // [rsp+130h] [rbp+30h]
  int v62[2]; // [rsp+138h] [rbp+38h]
  _BYTE v63[96]; // [rsp+150h] [rbp+50h] BYREF
  SURFOBJ *psoSrc; // [rsp+1B0h] [rbp+B0h]
  RECTL *prclSrc; // [rsp+1B8h] [rbp+B8h]
  _BYTE v66[96]; // [rsp+1C0h] [rbp+C0h] BYREF
  SURFOBJ *psoDest; // [rsp+220h] [rbp+120h]
  RECTL *prclDest; // [rsp+228h] [rbp+128h]
  struct _RECTL v69; // [rsp+230h] [rbp+130h] BYREF

  v7 = pBlendObj;
  v8 = 0;
  v10 = a6;
  v11 = a4;
  v49 = a5;
  v56 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v57 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v14 = *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp;
  v50 = a1;
  v55 = v14;
  v44 = a2;
  v54 = a4;
  v51 = 0LL;
  v52 = 0;
  v53 = 0;
  v15 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 48);
  v69 = *a6;
  if ( a2->iType != 1 || !v15 || (*(_DWORD *)(v15 + 56) & 0x20000) == 0 )
  {
LABEL_8:
    v41 = 1;
    v16 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v58, a1, a3, v49);
    MULTISURF::MULTISURF((MULTISURF *)v63, v44, v10);
    if ( v16 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v66, v50, v49);
      v41 = EngAlphaBlend(psoDest, psoSrc, a3, v11, prclDest, prclSrc, pBlendObj);
      v18 = v41;
      MULTISURF::~MULTISURF((MULTISURF *)v66);
    }
    else
    {
      v18 = 1;
    }
    if ( !Surface )
    {
LABEL_65:
      v8 = v18;
      MULTISURF::~MULTISURF((MULTISURF *)v63);
      goto LABEL_66;
    }
    while ( 1 )
    {
      *(_QWORD *)&v69.left = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v48 = 0LL;
      v19 = MULTISURF::bLoadSource((MULTISURF *)v63, v59) == 0;
      v43 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v60);
      v21 = v43;
      if ( !v19 )
      {
        v22 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
        v23 = v22;
        v47 = v22;
        if ( !*((_DWORD *)v59 + 6) )
          goto LABEL_54;
        pulXlate = *(_QWORD *)(v22 + 120);
        v25 = ppalDefault;
        v26 = *((_QWORD *)v59 + 6);
        if ( (*(_DWORD *)(v26 + 2196) & 0x100) != 0 )
          v25 = DrvRealizeHalftonePalette((_QWORD *)v26, 0);
        if ( !pulXlate )
        {
          if ( v11 && v11[1].pulXlate )
          {
            pulXlate = (__int64)v11[1].pulXlate;
          }
          else
          {
            v27 = SURFOBJ_TO_SURFACE_NOT_NULL(v50);
            if ( !v11 || (v20 = 1LL, (v11->flXlate & 1) != 0) )
            {
              v28 = psoSrc == v44;
            }
            else
            {
              v25 = *(struct PALETTE **)&v11[2].iSrcType;
              if ( !v25 )
                goto LABEL_63;
              v28 = *(_DWORD *)(v23 + 96) == *(_DWORD *)(v27 + 96);
            }
            if ( v28 )
              pulXlate = *(_QWORD *)(v27 + 120);
          }
        }
        v29 = 0;
        if ( pulXlate )
        {
          if ( (*(_DWORD *)(pulXlate + 24) & 0x800) != 0 )
          {
            v29 = 0x4000;
            if ( v25 == ppalDefault )
              v29 = 0x2000;
          }
        }
        if ( v11 )
          flXlate = v11[1].flXlate;
        else
          flXlate = 0;
        v42 = flXlate;
        if ( v11 )
          v31 = *(_DWORD *)&v11[1].iSrcType;
        else
          v31 = 0;
        if ( v11 )
          iUniq = v11[1].iUniq;
        else
          iUniq = 0;
        if ( v11 )
          v33 = v11[3].iUniq;
        else
          v33 = 0;
        if ( v11 )
          v34 = (__int64)v11[2].pulXlate;
        else
          v34 = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v69.left,
                             v34,
                             v33,
                             pulXlate,
                             *(_QWORD *)(v43 + 120),
                             (__int64)ppalDefault,
                             (__int64)v25,
                             flXlate,
                             v31,
                             iUniq,
                             v29)
          && (v11 = *(struct _XLATEOBJ **)&v69.left,
              (unsigned int)EXLATEOBJ::bInitXlateObj(
                              &v45,
                              0LL,
                              0,
                              *(_QWORD *)(v43 + 120),
                              (__int64)gppalRGB,
                              (__int64)v25,
                              (__int64)v25,
                              v42,
                              v31,
                              iUniq,
                              0)) )
        {
          *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v45;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               &v46,
                               0LL,
                               0,
                               (__int64)gppalRGB,
                               *(_QWORD *)(v43 + 120),
                               (__int64)v25,
                               (__int64)v25,
                               v42,
                               v31,
                               iUniq,
                               0) )
          {
            *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v46;
            if ( psoSrc == v44 )
            {
              v7 = pBlendObj;
              goto LABEL_53;
            }
            inited = EXLATEOBJ::bInitXlateObj(
                       &v48,
                       0LL,
                       0,
                       *(_QWORD *)(v47 + 120),
                       (__int64)gppalRGB,
                       (__int64)ppalDefault,
                       (__int64)v25,
                       v42,
                       v31,
                       iUniq,
                       0);
            v7 = pBlendObj;
            if ( inited )
            {
              *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v48;
LABEL_53:
              v21 = v43;
              v23 = v47;
LABEL_54:
              if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v60) + 112) & 0x10000) != 0 )
                v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)v59 + 7) + 3288LL);
              else
                v36 = EngAlphaBlend;
              if ( psoSrc->iType == 1 && *(_QWORD *)(v23 + 48) != *(_QWORD *)(v21 + 48) )
                v36 = EngAlphaBlend;
              v18 = OffAlphaBlend(
                      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64))v36,
                      *(int **)v62,
                      *(__int64 *)v60,
                      (int *)&gptlZero,
                      (__int64)psoSrc,
                      v61,
                      (__int64)v11,
                      v49,
                      prclSrc,
                      (__int64)v7) & v41;
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
      v11 = v54;
      *(_QWORD *)&v7[4].BlendFunction.BlendOp = v56;
      *(_QWORD *)&v7[6].BlendFunction.BlendOp = v57;
      *(_QWORD *)&v7[2].BlendFunction.BlendOp = v55;
      v41 = v18;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v48, v20);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v46, v37);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v45, v38);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v69, v39);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v58) )
        goto LABEL_65;
    }
  }
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v51, &v69) )
  {
    if ( !v51 )
    {
      v8 = 1;
      goto LABEL_66;
    }
    v10 = &v69;
    v44 = (struct _SURFOBJ *)(v51 + 24);
    SURFOBJ_TO_SURFACE_NOT_NULL(v51 + 24);
    goto LABEL_8;
  }
LABEL_66:
  SURFMEM::~SURFMEM((SURFMEM *)&v51);
  return v8;
}
