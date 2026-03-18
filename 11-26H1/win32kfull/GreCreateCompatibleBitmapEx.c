/*
 * XREFs of GreCreateCompatibleBitmapEx @ 0x1400171C0
 * Callers:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1400148D8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x14009AEF8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     CreateCompatiblePublicDC @ 0x140122300 (CreateCompatiblePublicDC.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140125A40 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x14014D538 (CreateOrGetRedirectionBitmap.c)
 *     RecolorDeskPattern @ 0x140246F20 (RecolorDeskPattern.c)
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x14028DF44 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402CE7E8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     MNCreateAnimationBitmap @ 0x1402D0724 (MNCreateAnimationBitmap.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402F0420 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?GreEscCreateScaledCompatibleBitmap@@YAXPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z @ 0x140325F18 (-GreEscCreateScaledCompatibleBitmap@@YAXPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x1400173F4 (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 */

HBITMAP __fastcall GreCreateCompatibleBitmapEx(
        Gre::Base *a1,
        int a2,
        int a3,
        unsigned int a4,
        struct _LUID *a5,
        unsigned __int16 *a6)
{
  HBITMAP CompatibleBitmap; // rbx
  __int64 v12; // [rsp+38h] [rbp-29h] BYREF
  int v13; // [rsp+40h] [rbp-21h]
  struct Gre::Base::SESSION_GLOBALS *v14; // [rsp+48h] [rbp-19h]
  __int64 v15; // [rsp+50h] [rbp-11h]
  _OWORD v16[2]; // [rsp+58h] [rbp-9h] BYREF
  _OWORD v17[2]; // [rsp+78h] [rbp+17h] BYREF
  Gre::Base *v18; // [rsp+98h] [rbp+37h]
  __int16 v19; // [rsp+A0h] [rbp+3Fh]

  v15 = 0LL;
  v14 = Gre::Base::Globals(a1);
  v12 = 0LL;
  v13 = 0;
  memset(v16, 0, sizeof(v16));
  PushThreadGuardedObject(
    v16,
    &v12,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  memset(v17, 0, sizeof(v17));
  PushThreadGuardedObject(
    v17,
    &v12,
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v18 = a1;
  v19 = 1;
  CompatibleBitmap = GrepCreateCompatibleBitmap((struct OPTAPIDCOBJ *)&v12, a2, a3, a4, a5, a6);
  v12 &= -(__int64)((_BYTE)v19 != 0);
  PopThreadGuardedObject(v17);
  DCOBJ::~DCOBJ((DCOBJ *)&v12);
  return CompatibleBitmap;
}
