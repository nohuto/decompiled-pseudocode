/*
 * XREFs of NtGdiPatBlt @ 0x1C00942F0
 * Callers:
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     EraseBitmap @ 0x1C009425C (EraseBitmap.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     xxxPaintMenuBar @ 0x1C012D944 (xxxPaintMenuBar.c)
 *     xxxSoundSentry @ 0x1C01357C8 (xxxSoundSentry.c)
 *     DrawThumb2 @ 0x1C014EF3C (DrawThumb2.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C022ACCC (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     xxxDrawState @ 0x1C0235770 (xxxDrawState.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C023638C (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0236574 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNEraseBackground @ 0x1C0237348 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0237D5C (xxxMNDrawFullNC.c)
 *     DxgkEngColorFillViaGDI @ 0x1C0260BE0 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0035130 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C003955C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00488E8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiPatBlt(HDC a1, LONG a2, LONG a3, int a4, int a5, int a6)
{
  unsigned int v10; // ebx
  int v11; // edi
  struct _POINTL *v12; // rcx
  struct SURFACE *v13; // rsi
  struct _POINTL v14; // rdx
  unsigned int locked; // eax
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+7Ch] [rbp-84h]
  struct _POINTL *v19[6]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v20[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v21[80]; // [rsp+D0h] [rbp-30h] BYREF
  struct _POINTL v22; // [rsp+120h] [rbp+20h] BYREF
  int v23; // [rsp+128h] [rbp+28h]
  int v24; // [rsp+12Ch] [rbp+2Ch]

  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  if ( v19[0] )
  {
    v11 = (BYTE2(a6) << 8) | BYTE2(a6);
    if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v17, (struct XDCOBJ *)v19, 0x204u);
      if ( (*(_DWORD *)(v17 + 32) & 1) == 0 )
      {
        v10 = GreMaskBlt(a1, a5, 0LL, 0, 0, 0LL, 0, 0, v11 << 16, 0);
        goto LABEL_22;
      }
      v22.x = a2;
      v23 = a4 + a2;
      v22.y = a3;
      v24 = a5 + a3;
      EXFORMOBJ::bXform((EXFORMOBJ *)&v17, &v22, 2LL);
      if ( v18 )
      {
        ++v22.x;
        ++v23;
      }
      ERECTL::vOrder((ERECTL *)&v22);
      if ( ERECTL::bEmpty((ERECTL *)&v22) )
      {
        v10 = 1;
        goto LABEL_22;
      }
      if ( (v19[0][4].y & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v19, (struct ERECTL *)&v22);
      if ( (gajRop3[BYTE2(a6)] & 0xB2) != 0 )
        bSpDwmValidateSurface((struct XDCOBJ *)v19, a2, a3, a4, a5);
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v20);
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v20, (struct XDCOBJ *)v19, 0) )
      {
        v12 = v19[0];
        v13 = (struct SURFACE *)v19[0][64];
        if ( !v13 )
        {
          v10 = 1;
LABEL_19:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
          DCOBJ::~DCOBJ((DCOBJ *)v21);
          goto LABEL_22;
        }
        v14 = v19[0][10];
        if ( (*(_DWORD *)(*(_QWORD *)&v14 + 8LL) & 0x1000) != 0 )
        {
          GreDCSelectBrush(v19[0], *(_QWORD *)(*(_QWORD *)&v14 + 16LL));
          v12 = v19[0];
        }
        locked = GrePatBltLockedDC(
                   v19,
                   (struct EXFORMOBJ *)*(unsigned int *)(*(_QWORD *)&v12[10] + 44LL),
                   (struct ERECTL *)&v22,
                   v11,
                   v13,
                   *(_DWORD *)(*(_QWORD *)&v12[10] + 40LL),
                   *(_DWORD *)(*(_QWORD *)&v12[10] + 32LL),
                   *(_DWORD *)(*(_QWORD *)&v12[10] + 44LL),
                   *(_DWORD *)(*(_QWORD *)&v12[10] + 36LL));
      }
      else
      {
        locked = XDCOBJ::bFullScreen((XDCOBJ *)v19);
      }
      v10 = locked;
      goto LABEL_19;
    }
  }
LABEL_22:
  DCOBJ::~DCOBJ((DCOBJ *)v19);
  return v10;
}
