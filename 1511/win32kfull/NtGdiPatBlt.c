/*
 * XREFs of NtGdiPatBlt @ 0x1C00412C0
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000FE34 (xxxPaintMenuBar.c)
 *     GreStretchDIBitsInternal @ 0x1C00348C8 (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 *     EraseBitmap @ 0x1C01103CC (EraseBitmap.c)
 *     xxxSoundSentry @ 0x1C01144E8 (xxxSoundSentry.c)
 *     DrawThumb2 @ 0x1C0144F0C (DrawThumb2.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C0231F10 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     xxxDrawState @ 0x1C023DD88 (xxxDrawState.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C023E9DC (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C023EBC4 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNEraseBackground @ 0x1C023FB70 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C02418A0 (xxxMNDrawFullNC.c)
 *     DxgkEngColorFillViaGDI @ 0x1C02630E0 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C00405AC (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C0041E4C (bCvtPts1.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiPatBlt(HDC a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v8; // ebx
  int v11; // edi
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rcx
  struct SURFACE *v16; // rsi
  __int64 v17; // rdx
  unsigned int locked; // eax
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h]
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+8Ch] [rbp-74h]
  __int128 v25; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  _DWORD v33[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+ECh] [rbp-14h]

  v8 = 0;
  v21 = 0;
  v22 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v20, a1);
  if ( !v20 )
    return v8;
  v11 = (BYTE2(a6) << 8) | BYTE2(a6);
  if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v23, (struct XDCOBJ *)&v20, 0x204u);
    v8 = 1;
    v12 = *(_DWORD *)(v23 + 32);
    if ( (v12 & 1) != 0 )
    {
      v33[1] = a3;
      v13 = a4 + a2;
      v14 = a2;
      v33[0] = a2;
      v34 = a4 + a2;
      v35 = a5 + a3;
      if ( (v12 & 0x43) != 0x43 )
      {
        bCvtPts1(v23, v33);
        v13 = v34;
        v14 = v33[0];
      }
      if ( v24 )
      {
        v33[0] = v14 + 1;
        v34 = v13 + 1;
      }
      ERECTL::vOrder((ERECTL *)v33);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v33) )
        goto LABEL_20;
      if ( (*(_DWORD *)(v20 + 36) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)&v20, (struct ERECTL *)v33);
      if ( (gajRop3[BYTE2(a6)] & 0xB2) != 0 )
        bSpDwmValidateSurface((struct XDCOBJ *)&v20, a2, a3, a4, a5);
      v29 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0;
      v28 = 0LL;
      v32 = 0LL;
      v31 = 0LL;
      v30 = 0LL;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v25, (struct XDCOBJ *)&v20, 0) )
      {
        v15 = v20;
        v16 = *(struct SURFACE **)(v20 + 512);
        if ( !v16 )
        {
LABEL_19:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v25);
          goto LABEL_20;
        }
        v17 = *(_QWORD *)(v20 + 80);
        if ( (*(_DWORD *)(v17 + 8) & 0x1000) != 0 )
        {
          GreDCSelectBrush(v20, *(_QWORD *)(v17 + 16));
          v15 = v20;
        }
        locked = GrePatBltLockedDC(
                   (__int64)&v20,
                   (struct EXFORMOBJ *)*(unsigned int *)(*(_QWORD *)(v15 + 80) + 44LL),
                   (struct ERECTL *)v33,
                   v11,
                   v16,
                   *(_DWORD *)(*(_QWORD *)(v15 + 80) + 40LL),
                   *(_DWORD *)(*(_QWORD *)(v15 + 80) + 32LL),
                   *(_DWORD *)(*(_QWORD *)(v15 + 80) + 44LL),
                   *(_DWORD *)(*(_QWORD *)(v15 + 80) + 36LL));
      }
      else
      {
        locked = XDCOBJ::bFullScreen((XDCOBJ *)&v20);
      }
      v8 = locked;
      goto LABEL_19;
    }
    v8 = GreMaskBlt(a1, a5, 0LL, 0, 0, 0LL, 0, 0, v11 << 16, 0);
  }
LABEL_20:
  if ( v20 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v20);
    _InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
  }
  return v8;
}
