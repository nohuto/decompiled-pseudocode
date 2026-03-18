/*
 * XREFs of ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011C4C8
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0055C24 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C011C228 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026E0F0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C02734C0 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0273C48 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     vSpUnTearDownSprites @ 0x1C02790C0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0065F2C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011C818 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C0158A28 (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C025FF68 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     DxDdEnumLockedSurfaceRect @ 0x1C025FFB0 (DxDdEnumLockedSurfaceRect.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C0269154 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C02692A0 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpComputeUnlockedRegion(struct _SPRITESTATE *a1)
{
  __int64 v1; // rbx
  REGION *v3; // rcx
  BOOL v4; // r14d
  int v5; // r15d
  int v6; // edx
  int v7; // edx
  __int64 i; // rdx
  __int64 locked; // r14
  TRACKOBJ *j; // r14
  __int64 k; // rbx
  REGION *v12; // rdx
  REGION *v13; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D8h]
  _QWORD v15[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v20[24]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v21[112]; // [rsp+98h] [rbp-70h] BYREF
  struct _RECTL v22; // [rsp+108h] [rbp+0h] BYREF
  struct _RECTL v23; // [rsp+118h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = (REGION *)*((_QWORD *)a1 + 130);
  v16 = v1;
  if ( v3 )
  {
    REGION::vDeleteREGION(v3);
    *((_QWORD *)a1 + 130) = 0LL;
  }
  SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5));
  if ( gpto || *((_QWORD *)a1 + 131) )
  {
    v4 = 1;
  }
  else
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&v16);
    v4 = *(_DWORD *)(v1 + 2664) != 0;
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v21);
  }
  if ( v4 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13, 0, 1);
    if ( v13 )
    {
      v5 = 0;
      v22.left = 0;
      v22.top = 0;
      v22.right = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v16).cx;
      v22.bottom = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v16) + 4LL);
      RGNOBJ::vSet((RGNOBJ *)&v13, &v22);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v17, v6);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v15, v7);
      if ( !v17[0] || !v15[0] )
        goto LABEL_33;
      GreLockDisplayDevice(v1);
      for ( i = 0LL; ; i = locked )
      {
        locked = DxDdEnumLockedSurfaceRect(v1, i, &v23);
        if ( !locked )
          break;
        RGNOBJ::vSet((RGNOBJ *)v17, &v23);
        RGNOBJ::bCopy((RGNOBJ *)v15, (struct RGNOBJ *)&v13);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v13, (struct RGNOBJ *)v15, (struct RGNOBJ *)v17, BYTE4(gafjRgnOp)) )
          v5 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v13);
      }
      GreUnlockDisplayDevice(v1);
      v19 = ghsemWndobj;
      GreAcquireSemaphore(ghsemWndobj);
      for ( j = gpto; j; j = (TRACKOBJ *)*((_QWORD *)j + 1) )
      {
        for ( k = *((_QWORD *)j + 3); k; k = *(_QWORD *)(k + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v20, (struct EWNDOBJ *)k, a1);
          if ( (*(_DWORD *)(k + 184) & 0x1000000) != 0 )
          {
            RGNOBJ::bCopy((RGNOBJ *)v15, (struct RGNOBJ *)&v13);
            if ( RGNOBJ::bMerge((RGNOBJ *)&v13, (struct RGNOBJ *)v15, (struct RGNOBJ *)(k + 56), BYTE4(gafjRgnOp)) )
              v5 = 1;
            else
              RGNOBJ::vSet((RGNOBJ *)&v13);
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v20);
        }
      }
      if ( *((_QWORD *)a1 + 131) )
      {
        v18 = *((_QWORD *)a1 + 131);
        RGNOBJ::bCopy((RGNOBJ *)v15, (struct RGNOBJ *)&v13);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v13, (struct RGNOBJ *)v15, (struct RGNOBJ *)&v18, BYTE1(gafjRgnOp)) )
          v5 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v13);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v19);
      if ( v5 == 1 )
      {
        v12 = v13;
        *((_DWORD *)v12 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
        *((_QWORD *)a1 + 130) = v13;
      }
      else
      {
LABEL_33:
        REGION::vDeleteREGION(v13);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
    }
    if ( (_DWORD)v14 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
  }
  *((_DWORD *)a1 + 31) = 0;
  vSpComputeSpriteRanges(a1);
  ++giSpriteUniqueness;
}
