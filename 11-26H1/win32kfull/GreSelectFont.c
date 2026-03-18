/*
 * XREFs of GreSelectFont @ 0x140126190
 * Callers:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14000C0D0 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNCompute @ 0x14000C5FC (xxxMNCompute.c)
 *     MNSetupAnimationDC @ 0x1400CBBA0 (MNSetupAnimationDC.c)
 *     FinalUserInit @ 0x1400CBC1C (FinalUserInit.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1400CC0D4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     CreateCompatiblePublicDC @ 0x140122300 (CreateCompatiblePublicDC.c)
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     ValidateExternalLogFont @ 0x1401248C4 (ValidateExternalLogFont.c)
 *     xxxSetNCFonts @ 0x1401250CC (xxxSetNCFonts.c)
 *     DrawFrameControl @ 0x140125D60 (DrawFrameControl.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     _ServerFixupMenuDC @ 0x1401A78A8 (_ServerFixupMenuDC.c)
 *     CreateScaledFont @ 0x1401D0CC4 (CreateScaledFont.c)
 *     xxxDrawState @ 0x1401F9348 (xxxDrawState.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14020D1E0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     MNAllocMenuState @ 0x140290298 (MNAllocMenuState.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402D1ADC (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SelectFont @ 0x1402FC490 (SelectFont.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectFont(Gre::Base *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rbx
  struct Gre::Base::SESSION_GLOBALS *v10; // rsi
  Gre::Base *v11; // rcx
  struct LFONT *v12; // rdi
  __int64 v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  DC *v16; // [rsp+28h] [rbp-49h] BYREF
  int v17; // [rsp+30h] [rbp-41h]
  struct Gre::Base::SESSION_GLOBALS *v18; // [rsp+38h] [rbp-39h]
  __int64 v19; // [rsp+40h] [rbp-31h]
  _OWORD v20[2]; // [rsp+48h] [rbp-29h] BYREF
  _OWORD v21[2]; // [rsp+68h] [rbp-9h] BYREF
  char v22; // [rsp+88h] [rbp+17h]
  __int64 v23; // [rsp+98h] [rbp+27h] BYREF
  _OWORD v24[2]; // [rsp+A0h] [rbp+2Fh] BYREF

  v19 = 0LL;
  v18 = Gre::Base::Globals(a1);
  v16 = 0LL;
  v17 = 0;
  memset(v20, 0, sizeof(v20));
  PushThreadGuardedObject(
    v20,
    &v16,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v4) = 1;
  v5 = HmgLock(v18, a1, v4, 0LL);
  v16 = (DC *)v5;
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v5 + 12));
      v16 = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction(v6) != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( v16 )
  {
    if ( (unsigned int)DCOBJ::SaveAttributes((DCOBJ *)&v16) )
    {
      if ( (*((_DWORD *)v16 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v16);
    }
    else
    {
      _InterlockedDecrement16((volatile signed __int16 *)v16 + 6);
      v16 = 0LL;
    }
  }
  memset(v21, 0, sizeof(v21));
  PushThreadGuardedObject(v21, &v16, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v22 = 1;
  if ( !v16 )
    goto LABEL_23;
  if ( *((_WORD *)v16 + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *((_WORD *)v16 + 6) != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v16);
  if ( !v16 )
  {
LABEL_23:
    v9 = 0LL;
    goto LABEL_24;
  }
  v8 = (__int64 *)*((_QWORD *)v16 + 19);
  v9 = 0LL;
  if ( v8 )
    v9 = *v8;
  if ( a2 != v9 )
  {
    v10 = v18;
    LOBYTE(v7) = 10;
    v23 = HmgShareLock(v18, a2, v7, 0LL);
    memset(v24, 0, sizeof(v24));
    PushThreadGuardedObject(
      v24,
      &v23,
      UnexpectedThreadTerminationHandler<HmgShareLockResult<LFONT>>::OnUnexpectedThreadTerminationStatic);
    v12 = (struct LFONT *)v23;
    if ( v23 )
    {
      if ( (*(_BYTE *)(HmgPentryFromPobj(v10, v23) + 15) & 2) == 0 )
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10, *((struct LFONT **)v16 + 19));
        v13 = v23;
        v23 = 0LL;
        *((_QWORD *)v16 + 19) = v13;
        *(_QWORD *)(*((_QWORD *)v16 + 122) + 296LL) = a2;
        *((_QWORD *)v16 + 218) = 0LL;
        *(_DWORD *)(*((_QWORD *)v16 + 122) + 152LL) |= 0x10u;
        v11 = (Gre::Base *)*((_QWORD *)v16 + 122);
        *((_DWORD *)v11 + 38) &= ~0x20u;
        v12 = (struct LFONT *)v23;
LABEL_20:
        if ( v12 )
        {
          v15 = Gre::Base::Globals(v11);
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v15, v12);
          v23 = 0LL;
        }
        PopThreadGuardedObject(v24);
        goto LABEL_24;
      }
      v12 = (struct LFONT *)v23;
    }
    v9 = 0LL;
    goto LABEL_20;
  }
LABEL_24:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v16);
  return v9;
}
