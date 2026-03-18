/*
 * XREFs of EngStrokeAndFillPath @ 0x140084A20
 * Callers:
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1400622A0 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     OffStrokeAndFillPath @ 0x140062EC4 (OffStrokeAndFillPath.c)
 *     ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400845B8 (-EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXF.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x14030C120 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x14030E630 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1403221B0 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14032E7E0 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     EngPaint @ 0x140083090 (EngPaint.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngStrokePath @ 0x1401160D0 (EngStrokePath.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x140116358 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1401183C8 (-bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     EngFillPath @ 0x140118840 (EngFillPath.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140119278 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x14022E68C (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

BOOL __stdcall EngStrokeAndFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  MIX v10; // r13d
  BOOL v13; // esi
  MIX mix; // r10d
  int v16; // ecx
  bool v17; // zf
  BOOL v18; // ebx
  struct _RECTFX *v19; // rdx
  PATHOBJ *v20; // rdx
  FLONG fl; // eax
  PATHOBJ v22; // rax
  BRUSHOBJ *v24; // r8
  __int64 p_iUniq; // rax
  POINTL *v26; // r9
  __int128 v27; // xmm0
  BRUSHOBJ *v28; // r8
  __int64 v29; // rax
  struct _CLIPOBJ *v30; // rdi
  __int128 v31; // xmm0
  BOOL v32; // eax
  POINTL *v33; // r12
  const struct _LINEATTRS *v34; // [rsp+20h] [rbp-E0h]
  const struct _LINEATTRS *v35; // [rsp+20h] [rbp-E0h]
  struct REGION *v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  BRUSHOBJ *v38; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *v39; // [rsp+58h] [rbp-A8h] BYREF
  int v40; // [rsp+60h] [rbp-A0h]
  CLIPOBJ *v41; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+70h] [rbp-90h]
  MIX v43; // [rsp+78h] [rbp-88h]
  CLIPOBJ *pcoa[2]; // [rsp+80h] [rbp-80h] BYREF
  POINTL *v45; // [rsp+90h] [rbp-70h]
  struct _CLIPOBJ *v46; // [rsp+98h] [rbp-68h] BYREF
  BRUSHOBJ *pbo; // [rsp+A0h] [rbp-60h]
  _BYTE v48[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-48h]
  __int128 v50; // [rsp+130h] [rbp+30h] BYREF
  CLIPOBJ v51; // [rsp+140h] [rbp+40h] BYREF
  __int64 v52; // [rsp+178h] [rbp+78h]
  __int64 v53; // [rsp+190h] [rbp+90h]
  int v54; // [rsp+198h] [rbp+98h]
  int v55; // [rsp+1C0h] [rbp+C0h]
  __int64 v56; // [rsp+1D0h] [rbp+D0h]
  _BYTE v57[152]; // [rsp+1E0h] [rbp+E0h] BYREF
  BRUSHOBJ *v58; // [rsp+278h] [rbp+178h]
  int v59; // [rsp+280h] [rbp+180h]

  v10 = mixFill;
  v13 = 0;
  mix = mixFill;
  pcoa[0] = pco;
  v16 = (unsigned __int8)mixFill << 8;
  v17 = (pboFill[5].iSolidColor & 0x8000) == 0;
  v46 = pco;
  v38 = pboStroke;
  pbo = pboFill;
  v45 = pptlBrushOrg;
  LODWORD(v36) = flOptions;
  v43 = mixFill;
  if ( v17 )
  {
    mix = v16 | (unsigned __int8)mixFill;
    v43 = mix;
  }
  if ( (pboStroke[5].iSolidColor & 0x8000) == 0 )
    v10 = v16 | (unsigned __int8)mixFill;
  v18 = 1;
  if ( (plineattrs->fl & 1) != 0 && (unsigned __int8)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v48);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( !pxo )
        goto LABEL_32;
      if ( !v49
        || (v19 = (struct _RECTFX *)(*(_QWORD *)&ppo[1] + 48LL),
            *(_OWORD *)pcoa = 0LL,
            !pathwide::bComputeWidenedBounds(
               (pathwide *)pcoa,
               v19,
               (const struct _RECTFX *)pxo,
               (const struct EXFORMOBJ *)plineattrs,
               v34))
        || (*(_OWORD *)(v49 + 48) = *(_OWORD *)pcoa,
            !pathwide::bWiden(
               (pathwide *)v48,
               (struct EPATHOBJ *)ppo,
               (struct EPATHOBJ *)pxo,
               (const struct EXFORMOBJ *)plineattrs,
               v35)) )
      {
        EngSetLastError(8u);
        goto LABEL_32;
      }
    }
    if ( (ppo->fl & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
    {
      v17 = *(_QWORD *)&ppo[5] == 0LL;
      v20 = (PATHOBJ *)v48;
      v42 = 0;
      if ( !v17 )
        v20 = ppo;
      v41 = (CLIPOBJ *)v20[5];
      if ( !v41 )
      {
        v42 = 1;
        pcoa[0] = 0LL;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)pcoa, (struct EPATHOBJ *)v20, 2u, 0LL);
        v41 = pcoa[0];
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v41);
      }
      fl = ppo->fl;
      v40 = 0;
      if ( (fl & 0x10) != 0 )
      {
        if ( (_DWORD)v36 == 2 )
          v22 = ppo[4];
        else
          v22 = ppo[3];
      }
      else
      {
        v22 = ppo[2];
      }
      v39 = (CLIPOBJ *)v22;
      if ( !*(_QWORD *)&v22 )
      {
        v40 = 1;
        pcoa[0] = 0LL;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)pcoa, (struct EPATHOBJ *)ppo, (unsigned int)v36, 0LL);
        v39 = pcoa[0];
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v39);
      }
      v37 = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v37, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v37);
      if ( !v39 || !v41 || !v37 || !RGNOBJ::bMerge((RGNOBJ *)&v37, (struct RGNOBJ *)&v39, (struct RGNOBJ *)&v41, 4u) )
        goto LABEL_23;
      BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v57, pso, &v46);
      if ( v59 )
      {
        v36 = 0LL;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v36, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v36);
        if ( !v36 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v41) == 1 )
          goto LABEL_38;
        v30 = v46;
        if ( RGNOBJ::bMerge((RGNOBJ *)&v36, (struct RGNOBJ *)&v41, (struct RGNOBJ *)&v46[2].rclBounds.top, 8u) )
        {
          v31 = *(_OWORD *)((char *)v36 + 52);
          v52 = 0LL;
          v53 = 0LL;
          v50 = v31;
          v54 = 0;
          v55 = 1;
          v56 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&v51, v36, (const struct ERECTL *)&v50, 0);
          v32 = ERECTL::bEmpty((ERECTL *)&v51.rclBounds);
          v33 = v45;
          if ( v32 )
          {
            v13 = 1;
          }
          else
          {
            v24 = v38;
            p_iUniq = (__int64)&pso->iUniq;
            v26 = v45;
            if ( !pso )
              p_iUniq = 92LL;
            ++*(_DWORD *)p_iUniq;
            v13 = EngPaint(pso, &v51, v24, v26, v10);
            if ( !v13 )
              goto LABEL_38;
          }
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v37) == 1 )
          {
LABEL_38:
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v36);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
            v38 = v58;
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
LABEL_23:
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v37);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
            if ( v40 )
            {
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v39);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
            }
            if ( v42 )
            {
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v41);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
            }
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v48);
            return v13;
          }
          if ( RGNOBJ::bMerge((RGNOBJ *)&v36, (struct RGNOBJ *)&v37, (struct RGNOBJ *)&v30[2].rclBounds.top, 8u) )
          {
            v27 = *(_OWORD *)((char *)v36 + 52);
            v52 = 0LL;
            v53 = 0LL;
            v50 = v27;
            v54 = 0;
            v55 = 1;
            v56 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v51, v36, (const struct ERECTL *)&v50, 0);
            if ( ERECTL::bEmpty((ERECTL *)&v51.rclBounds) )
            {
              v13 = 1;
            }
            else
            {
              v28 = pbo;
              v29 = (__int64)&pso->iUniq;
              if ( !pso )
                v29 = 92LL;
              ++*(_DWORD *)v29;
              v13 = EngPaint(pso, &v51, v28, v33, v43);
            }
            goto LABEL_38;
          }
        }
        v13 = 0;
        goto LABEL_38;
      }
      v38 = v58;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v37);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)&v39);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)&v41);
    }
LABEL_32:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v48);
    return 0;
  }
  if ( !EngFillPath(pso, ppo, pco, pbo, pptlBrushOrg, mix, flOptions)
    || !EngStrokePath(pso, ppo, pcoa[0], pxo, v38, v45, plineattrs, v10) )
  {
    return 0;
  }
  return v18;
}
