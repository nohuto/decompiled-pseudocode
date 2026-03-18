/*
 * XREFs of xxxInternalInvalidate @ 0x1C005EB10
 * Callers:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000D0AC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C008E328 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ComposeWindow @ 0x1C0096658 (ComposeWindow.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     zzzLockWindowUpdate2 @ 0x1C0121EF4 (zzzLockWindowUpdate2.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C0134FF0 (xxxInvalidateWallpaperWindow.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01CD718 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01CE450 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01DE0B0 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     xxxCompositedPaint @ 0x1C0225130 (xxxCompositedPaint.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C025F908 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000C984 (SpbCheckRect.c)
 *     CalcWindowRgn @ 0x1C0056EE4 (CalcWindowRgn.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C005A510 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C005CC28 (IntersectWithParents.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C005E728 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     xxxDoSyncPaint @ 0x1C00F97EC (xxxDoSyncPaint.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall xxxInternalInvalidate(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  struct tagWND *v6; // rdi
  __int64 StyleWindow; // r13
  HRGN v8; // rbp
  struct tagRECT *v9; // rax
  HRGN v10; // r14
  HRGN RectRgnIndirect; // rax
  struct tagWND *v12; // [rsp+38h] [rbp-70h]
  struct tagRECT v13; // [rsp+40h] [rbp-68h] BYREF
  struct tagRECT v14; // [rsp+50h] [rbp-58h] BYREF

  v3 = 0;
  v4 = a3;
  v12 = 0LL;
  v6 = a1;
  StyleWindow = 0LL;
  v8 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    StyleWindow = GetStyleWindow(a1, 2818LL);
    if ( StyleWindow )
    {
      if ( a2 == (HRGN)1 )
      {
        RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect((char *)v6 + 112);
        v8 = RectRgnIndirect;
        if ( RectRgnIndirect )
          a2 = RectRgnIndirect;
      }
      v12 = v6;
      v4 |= 0x80u;
      v6 = (struct tagWND *)StyleWindow;
    }
  }
  if ( (((v4 & 1) != 0) & (*((_BYTE *)v6 + 50) >> 3)) != 0 )
    *((_DWORD *)v6 + 72) |= 2u;
  v9 = (struct tagRECT *)((char *)v6 + 112);
  if ( (v4 & 0x400) == 0 )
    v9 = (struct tagRECT *)((char *)v6 + 128);
  v13 = *v9;
  if ( (v4 & 9) != 0 )
  {
    v10 = a2;
    if ( a2 == (HRGN)1 )
    {
      v10 = (HRGN)ghrgnInv1;
      CalcWindowRgn((__int64)v6, ghrgnInv1, (v4 & 0x400) == 0);
    }
  }
  else
  {
    v10 = (HRGN)ghrgnInv1;
    SetEmptyRgn(ghrgnInv1);
  }
  if ( (v4 & 9) == 0 || (v4 & 1) == 0 || (unsigned int)IntersectWithParents((__int64)v6, (__int64)&v13) )
  {
    if ( (v4 & 0x1001) == 0x1001 && *(_QWORD *)(gpDispInfo + 72LL) )
    {
      v14 = 0LL;
      GreGetRgnBox(v10, &v14);
      IntersectRect(&v14, &v14.left, &v13.left);
      SpbCheckRect(v6, &v14, 0);
    }
    InternalInvalidate2(v6, a2, v10, &v13, v4);
    if ( StyleWindow )
    {
      v6 = v12;
      if ( v8 )
        GreDeleteObject(v8);
    }
    if ( (v4 & 0x100) != 0 )
    {
      xxxInternalUpdateWindow(v6, ((unsigned __int8)~(_BYTE)v4 >> 6) & 1);
    }
    else if ( (v4 & 0x200) != 0 )
    {
      if ( (v4 & 0x40) == 0 )
        v3 = (v4 & 0x80u) != 0 ? 32 : 4;
      xxxDoSyncPaint(v6, v3);
    }
  }
}
