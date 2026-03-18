/*
 * XREFs of NtGdiPatBlt @ 0x1C00868F0
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     xxxPaintMenuBar @ 0x1C00F6114 (xxxPaintMenuBar.c)
 *     EraseBitmap @ 0x1C0100680 (EraseBitmap.c)
 *     DrawThumb2 @ 0x1C0119F80 (DrawThumb2.c)
 *     xxxSoundSentry @ 0x1C01EF4B0 (xxxSoundSentry.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C0231AE0 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C023E82C (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C023EA14 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNEraseBackground @ 0x1C023F9D4 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0241710 (xxxMNDrawFullNC.c)
 *     DxgkEngColorFillViaGDI @ 0x1C02649A0 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0086F64 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C009DBE0 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiPatBlt(HDC a1, LONG a2, LONG a3, int a4, int a5, int a6)
{
  unsigned int v9; // ebx
  __int64 v10; // rdi
  unsigned int v11; // esi
  int v12; // r14d
  __int64 v13; // r9
  int v14; // edx
  LONG v15; // ecx
  LONG v16; // r10d
  LONG v17; // eax
  LONG v18; // r8d
  int v19; // r11d
  int v20; // eax
  __int64 v21; // rcx
  struct SURFACE *v22; // rdi
  __int64 v23; // rdx
  unsigned int locked; // eax
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  int v28; // [rsp+80h] [rbp-80h]
  int v29; // [rsp+84h] [rbp-7Ch]
  _QWORD v30[7]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v31; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  _QWORD v34[10]; // [rsp+E0h] [rbp-20h] BYREF
  LONG v35; // [rsp+130h] [rbp+30h] BYREF
  LONG v36; // [rsp+134h] [rbp+34h]
  LONG v37; // [rsp+138h] [rbp+38h]
  LONG v38; // [rsp+13Ch] [rbp+3Ch]

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v30, a1);
  v10 = v30[0];
  if ( v30[0] )
  {
    v11 = (BYTE2(a6) << 8) | BYTE2(a6);
    if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
    {
      v28 = *(_DWORD *)(*(_QWORD *)(v30[0] + 80LL) + 68LL);
      v12 = *(_DWORD *)(*(_QWORD *)(v30[0] + 80LL) + 312LL) & 1;
      v29 = v12;
      if ( (*(_DWORD *)(*(_QWORD *)(v30[0] + 80LL) + 352LL) & 0xE000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v27, (struct XDCOBJ *)v30, 0x204u, 0);
        v13 = v27;
        v10 = v30[0];
        v12 = v29;
      }
      else
      {
        v13 = v30[0] + 336LL;
        v27 = v30[0] + 336LL;
      }
      v14 = *(_DWORD *)(v13 + 32);
      if ( (v14 & 1) == 0 )
      {
        v9 = GreMaskBlt(a1, a5, 0LL, 0, 0, 0LL, 0, 0, v11 << 16, 0);
        goto LABEL_34;
      }
      v15 = a2;
      v35 = a2;
      v16 = a3;
      v36 = a3;
      v17 = a4 + a2;
      v37 = a4 + a2;
      v18 = a5 + a3;
      v38 = a5 + a3;
      if ( (v14 & 0x43) != 0x43 )
      {
        bCvtPts1(v13, &v35, 2LL);
        v18 = v38;
        v17 = v37;
        v16 = v36;
        v15 = v35;
      }
      if ( v12 )
      {
        ++v15;
        ++v17;
        v35 = v15;
        v37 = v17;
      }
      if ( v15 > v17 )
      {
        v35 = v17;
        v37 = v15;
      }
      if ( v16 > v18 )
      {
        v36 = v18;
        v38 = v16;
      }
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v35) )
      {
        v9 = 1;
        goto LABEL_34;
      }
      v20 = *(_DWORD *)(v10 + 36);
      if ( (v20 & 0xE0) != 0 )
      {
        if ( (v20 & 0x20) != 0 )
        {
          ERECTL::operator|=(v10 + 1456, &v35);
          v10 = v30[0];
        }
        if ( (*(_DWORD *)(v10 + 36) & 0x80u) != 0 )
          ERECTL::operator|=(v10 + 1488, &v35);
      }
      if ( (gajRop3[BYTE2(a6)] & 0xB2) != 0 )
        bSpDwmValidateSurface((struct XDCOBJ *)v30, a2, a3, v19, a5);
      DCOBJ::DCOBJ((DCOBJ *)v34);
      v32 = 0LL;
      v31 = 0LL;
      v33 = 0;
      v34[0] = 0LL;
      memset(&v34[6], 0, 24);
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v31, (struct XDCOBJ *)v30, 0) )
      {
        v21 = v30[0];
        v22 = *(struct SURFACE **)(v30[0] + 512LL);
        if ( !v22 )
        {
          v9 = 1;
LABEL_31:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v31);
          DCOBJ::~DCOBJ((DCOBJ *)v34);
          goto LABEL_34;
        }
        v23 = *(_QWORD *)(v30[0] + 80LL);
        if ( (*(_DWORD *)(v23 + 8) & 0x1000) != 0 )
        {
          GreDCSelectBrush(v30[0], *(_QWORD *)(v23 + 16));
          v21 = v30[0];
        }
        locked = GrePatBltLockedDC(
                   (struct XDCOBJ *)v30,
                   (struct EXFORMOBJ *)*(unsigned int *)(*(_QWORD *)(v21 + 80) + 44LL),
                   (struct ERECTL *)&v35,
                   v11,
                   v22,
                   *(_DWORD *)(*(_QWORD *)(v21 + 80) + 40LL),
                   *(_DWORD *)(*(_QWORD *)(v21 + 80) + 32LL),
                   *(_DWORD *)(*(_QWORD *)(v21 + 80) + 44LL),
                   *(_DWORD *)(*(_QWORD *)(v21 + 80) + 36LL));
      }
      else
      {
        locked = XDCOBJ::bFullScreen((XDCOBJ *)v30);
      }
      v9 = locked;
      goto LABEL_31;
    }
  }
LABEL_34:
  DCOBJ::~DCOBJ((DCOBJ *)v30);
  return v9;
}
