/*
 * XREFs of xxxInternalInvalidate @ 0x1C000DB50
 * Callers:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C0008F64 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     ComposeWindow @ 0x1C000B878 (ComposeWindow.c)
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     zzzLockWindowUpdate2 @ 0x1C0044DC8 (zzzLockWindowUpdate2.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 *     xxxRedrawHungWindow @ 0x1C0124828 (xxxRedrawHungWindow.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C0133044 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C01571CC (xxxInvalidateWallpaperWindow.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D4CA8 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D5A6C (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E73E0 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     xxxCompositedPaint @ 0x1C0225058 (xxxCompositedPaint.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02637B4 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     SpbCheckRect @ 0x1C00085DC (SpbCheckRect.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     IntersectWithParents @ 0x1C008D7F8 (IntersectWithParents.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C008EECC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     CalcWindowRgn @ 0x1C00912AC (CalcWindowRgn.c)
 *     xxxDoSyncPaint @ 0x1C00D526C (xxxDoSyncPaint.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00DF658 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
      CalcWindowRgn(v6, ghrgnInv1, (v4 & 0x400) == 0);
    }
  }
  else
  {
    v10 = (HRGN)ghrgnInv1;
    SetEmptyRgn(ghrgnInv1);
  }
  if ( (v4 & 9) == 0 || (v4 & 1) == 0 || (unsigned int)IntersectWithParents(v6, &v13) )
  {
    if ( (v4 & 0x1001) == 0x1001 && *(_QWORD *)(gpDispInfo + 72LL) )
    {
      v14 = 0LL;
      GreGetRgnBox(v10, &v14);
      IntersectRect(&v14, &v14, &v13);
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
