/*
 * XREFs of GrePatBlt @ 0x1400AD26C
 * Callers:
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     xxxSoundSentry @ 0x1401B124C (xxxSoundSentry.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x1401F09B0 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     xxxDrawState @ 0x1401F9348 (xxxDrawState.c)
 *     xxxPaintMenuBar @ 0x14020C128 (xxxPaintMenuBar.c)
 *     EraseBitmap @ 0x1402416F4 (EraseBitmap.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x14028F650 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1402F3BF4 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402FA164 (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNEraseBackground @ 0x1402FA5BC (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1402FA704 (xxxMNDrawFullNC.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400A990C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1400AE8F8 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePatBlt(Gre::Base *a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int locked; // edi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // edx
  DC *v17; // rsi
  int v18; // r8d
  int v19; // r9d
  int v20; // eax
  int v21; // eax
  int v22; // r10d
  DC *v23; // rcx
  int v24; // eax
  DC *v25; // rcx
  int v26; // eax
  DC *v27; // rcx
  struct SURFACE *v28; // rsi
  __int64 v29; // rdx
  DC *v31; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h]
  struct Gre::Base::SESSION_GLOBALS *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  _OWORD v35[2]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v36[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v39[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v40[96]; // [rsp+130h] [rbp+30h] BYREF
  int v41; // [rsp+190h] [rbp+90h] BYREF
  int v42; // [rsp+194h] [rbp+94h]
  int v43; // [rsp+198h] [rbp+98h]
  int v44; // [rsp+19Ch] [rbp+9Ch]

  v33 = Gre::Base::Globals(a1);
  locked = 0;
  memset(v35, 0, sizeof(v35));
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0;
  PushThreadGuardedObject(
    v35,
    &v31,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v11) = 1;
  v12 = HmgLock(v33, a1, v11, 0LL);
  v31 = (DC *)v12;
  if ( v12 )
  {
    if ( *(_DWORD *)(v12 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v12 + 12));
      v31 = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( v31 )
  {
    if ( (unsigned int)DCOBJ::SaveAttributes((DCOBJ *)&v31) )
    {
      if ( (*((_DWORD *)v31 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v31);
    }
    else
    {
      _InterlockedDecrement16((volatile signed __int16 *)v31 + 6);
      v31 = 0LL;
    }
  }
  memset(v36, 0, sizeof(v36));
  PushThreadGuardedObject(v36, &v31, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v37 = 1;
  if ( v31 )
  {
    if ( *((_WORD *)v31 + 6) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
    if ( *((_WORD *)v31 + 6) != 1 )
      DCOBJ::vUnlock((DCOBJ *)&v31);
    if ( v31 )
    {
      v15 = BYTE2(a6) | (BYTE2(a6) << 8);
      if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
      {
        DC::QuickInitXform(v31, &v38, 516LL);
        if ( (*(_BYTE *)(v38 + 32) & 1) == 0 )
        {
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v39, 0LL);
          locked = GrepMaskBlt(
                     (struct XDCOBJ *)&v31,
                     a2,
                     a3,
                     a4,
                     a5,
                     (struct OPTAPIDCOBJ *)v39,
                     0,
                     0,
                     0LL,
                     0,
                     0,
                     v15 << 16,
                     0);
          v39[0] &= -(__int64)(v40[40] != 0);
          PopThreadGuardedObject(v40);
          DCOBJ::~DCOBJ((DCOBJ *)v39);
          goto LABEL_53;
        }
        v16 = a2 + a4;
        v17 = v31;
        v18 = a2;
        v41 = a2;
        v19 = a3;
        v42 = a3;
        v43 = a2 + a4;
        v44 = a3 + a5;
        if ( (*(_BYTE *)(v38 + 32) & 0x43) == 0x43
          || (v20 = bCvtPts1(v38, (__int64)&v41, 2LL), v16 = v43, v19 = v42, v18 = v41, v20) )
        {
          if ( (*(_DWORD *)(*((_QWORD *)v17 + 122) + 108LL) & 1) != 0 )
          {
            ++v18;
            ++v16;
            v41 = v18;
            v43 = v16;
          }
        }
        if ( v18 > v16 )
        {
          v21 = v18;
          v41 = v16;
          v18 = v16;
          v43 = v21;
          v16 = v21;
        }
        v22 = v44;
        if ( v19 > v44 )
        {
          v42 = v44;
          v44 = v19;
          v19 = v22;
        }
        if ( v19 == v44 || v18 == v16 )
        {
          locked = 1;
          goto LABEL_53;
        }
        v23 = v31;
        v24 = *((_DWORD *)v31 + 9);
        if ( (v24 & 0xE0) != 0 )
        {
          if ( (v24 & 0x20) != 0 )
          {
            if ( v18 < *((_DWORD *)v31 + 266) )
            {
              *((_DWORD *)v31 + 266) = v18;
              v16 = v43;
              v19 = v42;
              v18 = v41;
            }
            if ( v19 < *((_DWORD *)v23 + 267) )
            {
              *((_DWORD *)v23 + 267) = v19;
              v16 = v43;
              v19 = v42;
              v18 = v41;
            }
            if ( v16 > *((_DWORD *)v23 + 268) )
            {
              *((_DWORD *)v23 + 268) = v16;
              v16 = v43;
              v19 = v42;
              v18 = v41;
            }
            if ( v44 > *((_DWORD *)v23 + 269) )
            {
              *((_DWORD *)v23 + 269) = v44;
              v16 = v43;
              v19 = v42;
              v18 = v41;
            }
          }
          v25 = v31;
          if ( (*((_DWORD *)v31 + 9) & 0x80u) != 0 )
          {
            if ( v18 < *((_DWORD *)v31 + 274) )
            {
              *((_DWORD *)v31 + 274) = v18;
              v16 = v43;
              v19 = v42;
            }
            if ( v19 < *((_DWORD *)v25 + 275) )
            {
              *((_DWORD *)v25 + 275) = v19;
              v16 = v43;
            }
            if ( v16 > *((_DWORD *)v25 + 276) )
              *((_DWORD *)v25 + 276) = v16;
            if ( v44 > *((_DWORD *)v25 + 277) )
              *((_DWORD *)v25 + 277) = v44;
          }
        }
        if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)(BYTE2(a6) | (BYTE2(a6) << 8)) >> 8]) & 0xB2) != 0 )
          bSpDwmValidateSurface((struct XDCOBJ *)&v31, a2, a3, a4, a5);
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v39);
        v26 = DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v39, (struct XDCOBJ *)&v31, 0);
        v27 = v31;
        if ( v26 )
        {
          v28 = (struct SURFACE *)*((_QWORD *)v31 + 62);
          if ( v28 )
          {
            v29 = *((_QWORD *)v31 + 122);
            if ( (*(_DWORD *)(v29 + 152) & 0x1000) != 0 )
            {
              GreDCSelectBrush(v31, *(_QWORD *)(v29 + 160));
              v27 = v31;
            }
            locked = GrePatBltLockedDC(
                       (struct XDCOBJ *)&v31,
                       (struct EXFORMOBJ *)v29,
                       (struct ERECTL *)&v41,
                       v15,
                       v28,
                       *(_DWORD *)(*((_QWORD *)v27 + 122) + 184LL),
                       *(_DWORD *)(*((_QWORD *)v27 + 122) + 176LL),
                       *(_DWORD *)(*((_QWORD *)v27 + 122) + 188LL),
                       *(_DWORD *)(*((_QWORD *)v27 + 122) + 180LL));
            goto LABEL_52;
          }
        }
        else if ( *((_QWORD *)v31 + 62) && !DC::bInFullScreen(v31) )
        {
          goto LABEL_52;
        }
        locked = 1;
LABEL_52:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
      }
    }
  }
LABEL_53:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v31);
  return locked;
}
