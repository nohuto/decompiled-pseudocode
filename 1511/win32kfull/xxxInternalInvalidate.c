/*
 * XREFs of xxxInternalInvalidate @ 0x1C007D060
 * Callers:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000C0AC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     ComposeWindow @ 0x1C0080214 (ComposeWindow.c)
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00D7698 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C0113AC8 (xxxInvalidateWallpaperWindow.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     xxxRedrawHungWindow @ 0x1C014D7BC (xxxRedrawHungWindow.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D6864 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D75E0 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E7850 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     xxxCompositedPaint @ 0x1C0224568 (xxxCompositedPaint.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0261F44 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     SpbCheckRect @ 0x1C00097BC (SpbCheckRect.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00526DC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     IntersectWithParents @ 0x1C006A260 (IntersectWithParents.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     CalcWindowRgn @ 0x1C007D1B4 (CalcWindowRgn.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00964A8 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDoSyncPaint @ 0x1C00DB9D8 (xxxDoSyncPaint.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
    StyleWindow = GetStyleWindow((__int64)a1, 2818);
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
      CalcWindowRgn(v6, ghrgnInv1, (v4 & 0x400) == 0);
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
