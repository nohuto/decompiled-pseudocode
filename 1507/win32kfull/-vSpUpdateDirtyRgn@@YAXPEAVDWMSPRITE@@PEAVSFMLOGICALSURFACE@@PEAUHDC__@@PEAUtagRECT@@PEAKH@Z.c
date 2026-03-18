/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C001A6C0
 * Callers:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0010F0C (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02611B8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026166C (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0262294 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C000EAA4 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0010EEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x1C00117CC (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0019FD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C01C139C (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C025FF4C (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02B9FA8 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02BA234 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  char *v7; // rsi
  bool v8; // zf
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  LONG v16; // ecx
  __int64 v17; // rcx
  struct REGION *v18; // rbx
  int v19; // eax
  REGION *v20; // rcx
  int v21; // eax
  int v22; // eax
  struct REGION *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // ecx
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h]
  struct REGION *v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h]
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  int v34; // [rsp+78h] [rbp-90h]
  int v35; // [rsp+80h] [rbp-88h]
  struct REGION *v36; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+90h] [rbp-78h] BYREF
  int v38; // [rsp+98h] [rbp-70h]
  _QWORD v39[2]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v40[32]; // [rsp+B0h] [rbp-58h] BYREF
  struct _RECTL v41; // [rsp+D0h] [rbp-38h] BYREF
  struct REGION *v42[2]; // [rsp+E0h] [rbp-28h] BYREF

  v7 = (char *)a2 + 136;
  v8 = *((_QWORD *)a2 + 17) == 0LL;
  v35 = 0;
  if ( v8 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v42);
    v8 = LODWORD(v42[1]) == 1;
    *(struct REGION **)v7 = v42[0];
    if ( v8 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v42);
  }
  if ( !*((_QWORD *)a2 + 11) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v42);
    SFMLOGICALSURFACE::vDirtyRegionAccum(a2, v42[0]);
    v35 = 1;
    if ( LODWORD(v42[1]) == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v42);
  }
  if ( !*((_QWORD *)a2 + 24) )
  {
    v29 = *(struct REGION **)v7;
    RGNOBJ::vSet((RGNOBJ *)&v29);
    if ( *((_QWORD *)a2 + 11) )
    {
      v30 = *((_QWORD *)a2 + 11);
      RGNOBJ::vSet((RGNOBJ *)&v30);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL, *((_QWORD *)a2 + 11));
    }
  }
  v36 = *(struct REGION **)v7;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v33);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v33);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v37);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v37);
  if ( v36 && v31 && v33 && v37 )
  {
    v12 = 0;
    RGNOBJ::vSet((RGNOBJ *)&v31, a4);
    if ( (*((_DWORD *)a2 + 64) & 1) == 0 || !a3 )
      goto LABEL_28;
    v39[0] = 0LL;
    v39[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v40);
    LOBYTE(v13) = 1;
    v14 = HmgShareLock(a3, v13);
    v39[0] = v14;
    if ( v14 )
    {
      if ( (*(_DWORD *)(v14 + 36) & 1) != 0 )
      {
        v15 = *(_QWORD *)(v14 + 1552);
        if ( !v15 )
          v15 = *(_QWORD *)(v14 + 1544);
        v30 = v15;
        if ( v15 )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)&v33, (struct RGNOBJ *)&v30, (struct RGNOBJ *)&v31, BYTE1(gafjRgnOp)) )
          {
            RGNOBJ::bSwap((RGNOBJ *)&v33, (struct RGNOBJ *)&v31);
            v12 = 1;
          }
          else
          {
            RGNOBJ::vSet((RGNOBJ *)&v33);
          }
          v14 = v39[0];
        }
      }
      if ( v14 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)v39);
        DEC_SHARE_REF_CNT(v39[0]);
      }
    }
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v40);
    if ( !v12 )
    {
LABEL_28:
      if ( a1 )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v27);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v27);
        v41.right = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
        v16 = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
        *(_QWORD *)&v41.left = 0LL;
        v41.bottom = v16;
        if ( v27 )
        {
          RGNOBJ::vSet((RGNOBJ *)&v27, &v41);
          if ( RGNOBJ::bMerge((RGNOBJ *)&v33, (struct RGNOBJ *)&v31, (struct RGNOBJ *)&v27, BYTE1(gafjRgnOp)) )
          {
            RGNOBJ::bSwap((RGNOBJ *)&v33, (struct RGNOBJ *)&v31);
            v12 = 1;
          }
        }
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v27);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
        if ( (_DWORD)v28 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
        if ( !v12 )
          RGNOBJ::vSet((RGNOBJ *)&v31);
      }
      else
      {
        RGNOBJ::vSet((RGNOBJ *)&v31);
      }
    }
    if ( a1 && v31 && *((_QWORD *)a1 + 11) )
    {
      v29 = (struct REGION *)*((_QWORD *)a1 + 11);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
      if ( v29 && v27 )
      {
        if ( RGNOBJ::bMerge((RGNOBJ *)&v27, (struct RGNOBJ *)&v29, (struct RGNOBJ *)&v31, BYTE4(gafjRgnOp))
          && !RGNOBJ::bEqual((RGNOBJ *)&v27, (struct RGNOBJ *)&v29)
          && RGNOBJ::bSwap((RGNOBJ *)&v27, (struct RGNOBJ *)&v29) )
        {
          *((_QWORD *)a1 + 11) = v29;
          *((_DWORD *)a1 + 24) = -1;
        }
        if ( *((_QWORD *)a1 + 13) )
        {
          v30 = *((_QWORD *)a1 + 13);
          if ( RGNOBJ::bMerge((RGNOBJ *)&v27, (struct RGNOBJ *)&v29, (struct RGNOBJ *)&v30, BYTE2(gafjRgnOp))
            && RGNOBJ::bSwap((RGNOBJ *)&v27, (struct RGNOBJ *)&v29) )
          {
            *((_QWORD *)a1 + 11) = v29;
            *((_DWORD *)a1 + 24) = -1;
          }
          REGION::vDeleteREGION(*((REGION **)a1 + 13));
          *((_QWORD *)a1 + 13) = 0LL;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
    }
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v33, (struct RGNOBJ *)&v36, (struct RGNOBJ *)&v31, BYTE2(gafjRgnOp))
      || !RGNOBJ::bSwap((RGNOBJ *)&v33, (struct RGNOBJ *)&v36) )
    {
      goto LABEL_84;
    }
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
      v18 = v36;
      v19 = METAREGION::vApplyMoveData(
              (METAREGION *)v7,
              (struct _RECTL *)((char *)a2 + 120),
              (struct _POINTL *)a2 + 14,
              *((struct REGION **)a2 + 13));
      *(_QWORD *)v7 = v18;
      if ( v19 )
        METAREGION::vCalculateNoMoveDirty((METAREGION *)v7);
      goto LABEL_82;
    }
    EtwDirtyRectUpdate(v17, (unsigned int)a4->left, (unsigned int)a4->top, (unsigned int)a4->right, a4->bottom);
    v8 = *((_DWORD *)v7 + 10) == 0;
    *(_QWORD *)v7 = v36;
    if ( v8 )
    {
LABEL_82:
      v21 = *((_DWORD *)a2 + 64);
      if ( (v21 & 2) == 0 )
      {
        *((_DWORD *)a2 + 64) = v21 | 2;
        *a5 |= 1u;
      }
LABEL_84:
      if ( *((_QWORD *)a2 + 11) )
      {
        v29 = (struct REGION *)*((_QWORD *)a2 + 11);
        if ( !RGNOBJ::bMerge((RGNOBJ *)&v33, (struct RGNOBJ *)&v31, (struct RGNOBJ *)&v29, BYTE4(gafjRgnOp))
          || *(_DWORD *)(v33 + 84) != 1 )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)&v37, (struct RGNOBJ *)&v29, (struct RGNOBJ *)&v31, BYTE2(gafjRgnOp)) )
          {
            if ( RGNOBJ::bSwap((RGNOBJ *)&v37, (struct RGNOBJ *)&v29) )
            {
              SFMLOGICALSURFACE::vDirtyRegionAccum(a2, v29);
              v22 = *((_DWORD *)a2 + 64);
              if ( (v22 & 8) != 0 && (v22 & 4) == 0 )
              {
                *((_DWORD *)a2 + 64) = v22 | 4;
                *a5 |= 2u;
              }
            }
          }
        }
        if ( !v35 && *((_DWORD *)v29 + 21) != 1 && *((_DWORD *)v29 + 20) <= 0xA0u )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
          if ( *(_QWORD *)&v41.left )
          {
            v23 = (struct REGION *)*((_QWORD *)a2 + 11);
            *(_OWORD *)v42 = *(_OWORD *)((char *)v29 + 88);
            if ( v23 && v23 != prgnDefault )
              FreeObject(v23, 4LL);
            RGNOBJ::vSet((RGNOBJ *)&v41, (struct _RECTL *)v42);
            v24 = *(_QWORD *)&v41.left;
            v25 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 11) = *(_QWORD *)&v41.left;
            EtwTraceLifetimeAccum(v25, 1LL, v24);
          }
          if ( v41.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
        }
      }
      goto LABEL_102;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v41);
    v30 = *((_QWORD *)v7 + 4);
    if ( RGNOBJ::bCopy((RGNOBJ *)&v27, (struct RGNOBJ *)&v30)
      && RGNOBJ::bOffset((RGNOBJ *)&v27, (struct _POINTL *)v7 + 3) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v29, a4);
      if ( !v29
        || !v27
        || !*(_QWORD *)&v41.left
        || !RGNOBJ::iCombine((RGNOBJ *)&v41, (struct RGNOBJ *)&v29, (struct RGNOBJ *)&v27, 1)
        || (v42[0] = *(struct REGION **)(*(_QWORD *)&v41.left + 88LL),
            v42[1] = *(struct REGION **)(*(_QWORD *)&v41.left + 96LL),
            (unsigned int)ERECTL::bEmpty((ERECTL *)v42))
        || (unsigned int)METAREGION::bTrimMoveWithRegion((METAREGION *)v7, v29, 1) )
      {
LABEL_68:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v41);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
        if ( *((_DWORD *)v7 + 10) )
        {
          v29 = *(struct REGION **)v7;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v27);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v41);
          v20 = (REGION *)*((_QWORD *)v7 + 1);
          v30 = *((_QWORD *)v7 + 4);
          if ( v20 )
          {
            REGION::vDeleteREGION(v20);
            *((_QWORD *)v7 + 1) = 0LL;
          }
          if ( RGNOBJ::bCopy((RGNOBJ *)&v41, (struct RGNOBJ *)&v30)
            && RGNOBJ::bOffset((RGNOBJ *)&v41, (struct _POINTL *)v7 + 3) )
          {
            RGNOBJ::vSet((RGNOBJ *)&v27);
            if ( v29
              && *(_QWORD *)&v41.left
              && v27
              && RGNOBJ::iCombine((RGNOBJ *)&v27, (struct RGNOBJ *)&v29, (struct RGNOBJ *)&v41, 4) )
            {
              *((_QWORD *)v7 + 1) = v27;
            }
            else
            {
              METAREGION::vClearMoveData((METAREGION *)v7, 1);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
            }
          }
          else
          {
            METAREGION::vClearMoveData((METAREGION *)v7, 1);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v41);
          if ( (_DWORD)v28 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
        }
        goto LABEL_82;
      }
      EtwLogicalSurfRemovedTranslationFromDirtyEvent(
        *((_QWORD *)v7 + 6),
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      EtwTraceMoveRegion(*((_QWORD *)v7 + 4), 0LL, 0LL, *((_QWORD *)v7 + 4));
    }
    METAREGION::vClearMoveData((METAREGION *)v7, 1);
    goto LABEL_68;
  }
LABEL_102:
  if ( (*a5 & 1) != 0 && (*((_DWORD *)a2 + 64) & 4) != 0 )
    *a5 |= 2u;
  if ( (*((_BYTE *)a2 + 256) & 0x82) == 0x82 )
  {
    v26 = *((_DWORD *)a2 + 64) & 0xFFFFFF7F;
    *((_DWORD *)a2 + 64) = v26;
    if ( (v26 & 4) == 0 )
    {
      *((_DWORD *)a2 + 64) = v26 | 4;
      *a5 |= 2u;
    }
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v37);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
  if ( v38 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v33);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v33);
  if ( v34 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v33);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v31);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
  if ( (_DWORD)v32 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
}
