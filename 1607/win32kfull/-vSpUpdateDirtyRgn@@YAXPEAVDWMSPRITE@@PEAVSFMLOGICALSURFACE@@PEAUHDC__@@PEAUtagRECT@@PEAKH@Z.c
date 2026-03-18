/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0050EE0
 * Callers:
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C00518AC (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C01324D8 (GreTransferSpriteStateToDwmState.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025D778 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C025D9EC (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C025E3E4 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0048F10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C0051714 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C005176C (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x1C0051FE8 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0065F2C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C025CEBC (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02BC838 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02BCAC4 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct _POINTL *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  struct _POINTL *v6; // rsi
  int v7; // r15d
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rax
  struct _POINTL v15; // rcx
  LONG v16; // ecx
  __int64 v17; // rcx
  struct REGION *v18; // rbx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct REGION *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // ecx
  struct REGION *v26[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h]
  struct _POINTL v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  _QWORD v33[2]; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+80h] [rbp-80h]
  struct REGION *v35; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h] BYREF
  int v37; // [rsp+98h] [rbp-68h]
  _QWORD v38[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v39[32]; // [rsp+B0h] [rbp-50h] BYREF
  struct _RECTL v40; // [rsp+D0h] [rbp-30h] BYREF
  struct REGION *v41[2]; // [rsp+E0h] [rbp-20h] BYREF

  v6 = (struct _POINTL *)((char *)a2 + 136);
  v7 = 0;
  v34 = 0;
  if ( !*((_QWORD *)a2 + 17) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v41);
    v12 = LODWORD(v41[1]) == 1;
    *v6 = (struct _POINTL)v41[0];
    if ( v12 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v41);
  }
  if ( !*((_QWORD *)a2 + 11) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v41);
    SFMLOGICALSURFACE::vDirtyRegionAccum(a2, v41[0]);
    v34 = 1;
    if ( LODWORD(v41[1]) == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v41);
  }
  if ( !*((_QWORD *)a2 + 24) )
  {
    v26[0] = (struct REGION *)*v6;
    RGNOBJ::vSet((RGNOBJ *)v26);
    if ( *((_QWORD *)a2 + 11) )
    {
      v29 = (struct _POINTL)*((_QWORD *)a2 + 11);
      RGNOBJ::vSet((RGNOBJ *)&v29);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL, *((_QWORD *)a2 + 11));
    }
  }
  v35 = (struct REGION *)*v6;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v27);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v27);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v36);
  if ( v35 && v27 && v31 && v36 )
  {
    RGNOBJ::vSet((RGNOBJ *)&v27, a4);
    if ( (*((_DWORD *)a2 + 64) & 1) == 0 || !a3 )
      goto LABEL_34;
    v38[0] = 0LL;
    v38[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v39);
    LOBYTE(v13) = 1;
    v14 = HmgShareLock(a3, v13);
    v38[0] = v14;
    if ( v14 )
    {
      if ( (*(_DWORD *)(v14 + 36) & 1) != 0 )
      {
        v15 = *(struct _POINTL *)(v14 + 1552);
        if ( !*(_QWORD *)&v15 )
          v15 = *(struct _POINTL *)(v14 + 1544);
        v29 = v15;
        if ( v15 )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)&v31, (struct RGNOBJ *)&v29, (struct RGNOBJ *)&v27, BYTE1(gafjRgnOp)) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v31, (struct RGNOBJ *)&v27);
            v7 = 1;
          }
          else
          {
            RGNOBJ::vSet((RGNOBJ *)&v31);
          }
          v14 = v38[0];
        }
      }
      if ( v14 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)v38);
        DEC_SHARE_REF_CNT(v38[0]);
      }
    }
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v39);
    if ( !v7 )
    {
LABEL_34:
      if ( !a1 )
        goto LABEL_35;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v29);
      v16 = a1[8].x - a1[7].x;
      *(_QWORD *)&v40.left = 0LL;
      v40.right = v16;
      v40.bottom = a1[8].y - a1[7].y;
      if ( v29 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v29, &v40);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v31, (struct RGNOBJ *)&v27, (struct RGNOBJ *)&v29, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v31, (struct RGNOBJ *)&v27);
          v7 = 1;
        }
      }
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v29);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
      if ( v30 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
      if ( !v7 )
LABEL_35:
        RGNOBJ::vSet((RGNOBJ *)&v27);
    }
    if ( a1 && v27 && *(_QWORD *)&a1[11] )
    {
      v26[0] = (struct REGION *)a1[11];
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v33);
      if ( v26[0] && v33[0] )
      {
        if ( RGNOBJ::bMerge((RGNOBJ *)v33, (struct RGNOBJ *)v26, (struct RGNOBJ *)&v27, BYTE4(gafjRgnOp))
          && !RGNOBJ::bEqual((RGNOBJ *)v33, (struct RGNOBJ *)v26) )
        {
          RGNOBJ::vSwap((RGNOBJ *)v33, (struct RGNOBJ *)v26);
          a1[11] = (struct _POINTL)v26[0];
          a1[12].x = -1;
        }
        if ( a1[13] )
        {
          v29 = a1[13];
          if ( RGNOBJ::bMerge((RGNOBJ *)v33, (struct RGNOBJ *)v26, (struct RGNOBJ *)&v29, BYTE2(gafjRgnOp)) )
          {
            RGNOBJ::vSwap((RGNOBJ *)v33, (struct RGNOBJ *)v26);
            a1[11] = (struct _POINTL)v26[0];
            a1[12].x = -1;
          }
          REGION::vDeleteREGION(*(REGION **)&a1[13]);
          a1[13] = 0LL;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v33);
    }
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v31, (struct RGNOBJ *)&v35, (struct RGNOBJ *)&v27, BYTE2(gafjRgnOp)) )
      goto LABEL_69;
    RGNOBJ::vSwap((RGNOBJ *)&v31, (struct RGNOBJ *)&v35);
    v17 = *(_QWORD *)a2;
    if ( a6 )
    {
      EtwTranslationUpdateOffset(v17, *((unsigned int *)a2 + 40), HIDWORD(*((_QWORD *)a2 + 20)));
      EtwTranslationUpdate(
        *(_QWORD *)a2,
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      v18 = v35;
      v19 = METAREGION::vApplyMoveData(
              (METAREGION *)v6,
              (struct _RECTL *)((char *)a2 + 120),
              (struct _POINTL *)a2 + 14,
              *((struct REGION **)a2 + 13));
      *v6 = (struct _POINTL)v18;
      if ( !v19 )
        goto LABEL_67;
      goto LABEL_66;
    }
    EtwDirtyRectUpdate(v17, (unsigned int)a4->left, (unsigned int)a4->top, (unsigned int)a4->right, a4->bottom);
    *v6 = (struct _POINTL)v35;
    if ( !v6[5].x )
    {
LABEL_66:
      METAREGION::vCalculateNoMoveDirty((METAREGION *)v6);
LABEL_67:
      v20 = *((_DWORD *)a2 + 64);
      if ( (v20 & 2) == 0 )
      {
        *((_DWORD *)a2 + 64) = v20 | 2;
        *a5 |= 1u;
      }
LABEL_69:
      if ( *((_QWORD *)a2 + 11) )
      {
        v26[0] = *((struct REGION **)a2 + 11);
        if ( !RGNOBJ::bMerge((RGNOBJ *)&v31, (struct RGNOBJ *)&v27, (struct RGNOBJ *)v26, BYTE4(gafjRgnOp))
          || *(_DWORD *)(v31 + 84) != 1 )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)&v36, (struct RGNOBJ *)v26, (struct RGNOBJ *)&v27, BYTE2(gafjRgnOp)) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v36, (struct RGNOBJ *)v26);
            SFMLOGICALSURFACE::vDirtyRegionAccum(a2, v26[0]);
            v21 = *((_DWORD *)a2 + 64);
            if ( (v21 & 8) != 0 && (v21 & 4) == 0 )
            {
              *((_DWORD *)a2 + 64) = v21 | 4;
              *a5 |= 2u;
            }
          }
        }
        if ( !v34 && *((_DWORD *)v26[0] + 21) != 1 && *((_DWORD *)v26[0] + 20) <= 0xA0u )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
          if ( *(_QWORD *)&v40.left )
          {
            v22 = (struct REGION *)*((_QWORD *)a2 + 11);
            *(_OWORD *)v41 = *(_OWORD *)((char *)v26[0] + 88);
            if ( v22 && v22 != prgnDefault )
              FreeObject(v22, 4LL);
            RGNOBJ::vSet((RGNOBJ *)&v40, (struct _RECTL *)v41);
            v23 = *(_QWORD *)&v40.left;
            v24 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 11) = *(_QWORD *)&v40.left;
            EtwTraceLifetimeAccum(v24, 1LL, v23);
          }
          if ( v40.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v40);
        }
      }
      goto LABEL_86;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v26);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v33);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v40);
    v29 = v6[4];
    if ( RGNOBJ::bCopy((RGNOBJ *)v33, (struct RGNOBJ *)&v29) && RGNOBJ::bOffset((RGNOBJ *)v33, v6 + 3) )
    {
      RGNOBJ::vSet((RGNOBJ *)v26, a4);
      if ( !v26[0] )
        goto LABEL_65;
      if ( !v33[0] )
        goto LABEL_65;
      if ( !*(_QWORD *)&v40.left )
        goto LABEL_65;
      if ( !RGNOBJ::iCombine((RGNOBJ *)&v40, (struct RGNOBJ *)v26, (struct RGNOBJ *)v33, 1) )
        goto LABEL_65;
      v41[0] = *(struct REGION **)(*(_QWORD *)&v40.left + 88LL);
      v41[1] = *(struct REGION **)(*(_QWORD *)&v40.left + 96LL);
      if ( ERECTL::bEmpty((ERECTL *)v41) || (unsigned int)METAREGION::bTrimMoveWithRegion((METAREGION *)v6, v26[0], 1) )
        goto LABEL_65;
      EtwLogicalSurfRemovedTranslationFromDirtyEvent(
        *(_QWORD *)&v6[6],
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      EtwTraceMoveRegion(*(_QWORD *)&v6[4], 0LL, 0LL, *(_QWORD *)&v6[4]);
    }
    METAREGION::vClearMoveData((METAREGION *)v6, 1);
LABEL_65:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v40);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v33);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v26);
    goto LABEL_66;
  }
LABEL_86:
  if ( (*a5 & 1) != 0 && (*((_DWORD *)a2 + 64) & 4) != 0 )
    *a5 |= 2u;
  if ( (*((_BYTE *)a2 + 256) & 0x82) == 0x82 )
  {
    v25 = *((_DWORD *)a2 + 64) & 0xFFFFFF7F;
    *((_DWORD *)a2 + 64) = v25;
    if ( (v25 & 4) == 0 )
    {
      *((_DWORD *)a2 + 64) = v25 | 4;
      *a5 |= 2u;
    }
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v36);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
  if ( v37 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v31);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
  if ( v32 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v27);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
  if ( v28 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
}
