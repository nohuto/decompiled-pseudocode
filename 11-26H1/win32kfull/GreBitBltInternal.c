/*
 * XREFs of GreBitBltInternal @ 0x1400B5980
 * Callers:
 *     MNAnimate @ 0x14000ED10 (MNAnimate.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1400148D8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x14003F6C0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140041344 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     StopFade @ 0x14009B510 (StopFade.c)
 *     xxxPrintWindow @ 0x14011CB78 (xxxPrintWindow.c)
 *     xxxCompositedPaint @ 0x14011E700 (xxxCompositedPaint.c)
 *     xxxClientLpkDrawTextEx @ 0x140121E74 (xxxClientLpkDrawTextEx.c)
 *     CreateCompatiblePublicDC @ 0x140122300 (CreateCompatiblePublicDC.c)
 *     xxxClientGetTextExtentPointW @ 0x140122668 (xxxClientGetTextExtentPointW.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     BitBltSysBmp @ 0x140124BEC (BitBltSysBmp.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140129354 (-UT_InvertCaret@@YAXXZ.c)
 *     NtUserBitBltSysBmp @ 0x1401BFFE0 (NtUserBitBltSysBmp.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     xxxClientExtTextOutW @ 0x1401FAFD0 (xxxClientExtTextOutW.c)
 *     BltColor @ 0x1401FB750 (BltColor.c)
 *     xxxClientPSMTextOut @ 0x1401FBB08 (xxxClientPSMTextOut.c)
 *     UpdateSpriteArea @ 0x14020440C (UpdateSpriteArea.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402377E4 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x14023C7F8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     RecolorDeskPattern @ 0x140246F20 (RecolorDeskPattern.c)
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402F0420 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402F9E30 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x1400B4334 (--1MAPIDCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreBitBltInternal(
        Gre::Base *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11)
{
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  DC *v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h]
  struct Gre::Base::SESSION_GLOBALS *v24; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+80h] [rbp-88h]
  _OWORD v26[2]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v27[2]; // [rsp+A8h] [rbp-60h] BYREF
  char v28; // [rsp+C8h] [rbp-40h]
  DC *v29; // [rsp+D0h] [rbp-38h] BYREF
  int v30; // [rsp+D8h] [rbp-30h]
  struct Gre::Base::SESSION_GLOBALS *v31; // [rsp+E0h] [rbp-28h]
  __int64 v32; // [rsp+E8h] [rbp-20h]
  _OWORD v33[2]; // [rsp+F0h] [rbp-18h] BYREF
  _OWORD v34[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v35; // [rsp+130h] [rbp+28h]
  __int16 v36; // [rsp+138h] [rbp+30h]

  v24 = Gre::Base::Globals(a1);
  memset(v26, 0, sizeof(v26));
  v25 = 0LL;
  v22 = 0LL;
  LODWORD(v23) = 0;
  PushThreadGuardedObject(
    v26,
    &v22,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v15) = 1;
  v16 = HmgLock(v24, a1, v15, 0LL);
  v22 = (DC *)v16;
  if ( v16 )
  {
    if ( *(_DWORD *)(v16 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v16 + 12));
      v22 = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction(v17) != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( v22 )
  {
    if ( (unsigned int)DCOBJ::SaveAttributes((DCOBJ *)&v22) )
    {
      if ( (*((_DWORD *)v22 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v22);
    }
    else
    {
      _InterlockedDecrement16((volatile signed __int16 *)v22 + 6);
      v22 = 0LL;
    }
  }
  memset(v27, 0, sizeof(v27));
  PushThreadGuardedObject(v27, &v22, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v28 = 1;
  if ( v22 )
  {
    if ( *((_WORD *)v22 + 6) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
    if ( *((_WORD *)v22 + 6) != 1 )
      DCOBJ::vUnlock((DCOBJ *)&v22);
  }
  v31 = v24;
  v32 = 0LL;
  v29 = 0LL;
  memset(v33, 0, sizeof(v33));
  v30 = 0;
  PushThreadGuardedObject(
    v33,
    &v29,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  memset(v34, 0, sizeof(v34));
  PushThreadGuardedObject(
    v34,
    &v29,
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v35 = a6;
  v36 = 1;
  if ( v22 )
  {
    if ( a6 == *(_QWORD *)v22 )
    {
      v36 = 256;
      v29 = v22;
    }
    v20 = GrepBitBltImpl((struct XDCOBJ *)&v22, a2, a3, a4, a5, (struct OPTAPIDCOBJ *)&v29, a7, a8, a9, a10, a11);
    if ( !(_BYTE)v36 )
      v29 = 0LL;
    PopThreadGuardedObject(v34);
    DCOBJ::~DCOBJ((DCOBJ *)&v29);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v22);
    return v20;
  }
  else
  {
    EngSetLastError(6u);
    MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)&v22);
    return 0LL;
  }
}
