/*
 * XREFs of ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x18000B3E8
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000BD90 (-IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000BE50 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

char __fastcall CVisual::GetSwapChainTransformForDirtyRects(struct ISwapChainContent *a1, struct CMILMatrix *a2)
{
  char v2; // si
  bool (__fastcall *v5)(CCompositionSurfaceBitmap *__hidden); // rbx
  bool IsYUV; // al
  bool v7; // zf
  __int64 v8; // rax
  __int64 (__fastcall *v9)(struct ISwapChainContent *, struct CMILMatrix *, _QWORD); // rbx
  CCompositionSurfaceInfo *v12; // rax
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  int (__fastcall ***v14)(struct CBitmapRealization *, GUID *, __int64 *); // rdi
  int (__fastcall **v15)(struct CBitmapRealization *, GUID *, __int64 *); // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  char v18[16]; // [rsp+38h] [rbp-50h] BYREF
  char v19[16]; // [rsp+48h] [rbp-40h] BYREF
  char v20[16]; // [rsp+58h] [rbp-30h] BYREF

  v2 = 0;
  v5 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)a1 + 128LL);
  if ( v5 == CCompositionSurfaceBitmap::IsYUV )
    IsYUV = CCompositionSurfaceBitmap::IsYUV(a1);
  else
    IsYUV = v5(a1);
  v7 = !IsYUV;
  v8 = *(_QWORD *)a1;
  if ( v7 )
  {
    v9 = *(__int64 (__fastcall **)(struct ISwapChainContent *, struct CMILMatrix *, _QWORD))(v8 + 56);
    if ( (char *)v9 == (char *)CCompositionSurfaceBitmap::GetTransform )
      return CCompositionSurfaceBitmap::GetTransform(a1, a2, 0LL);
    else
      return v9(a1, a2, 0LL);
  }
  else
  {
    v12 = (CCompositionSurfaceInfo *)(*(__int64 (__fastcall **)(struct ISwapChainContent *))(v8 + 176))(a1);
    if ( v12 )
    {
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v12);
      v14 = (int (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))((char *)RenderingRealizationNoRef
                                                                                 + 112);
      if ( !RenderingRealizationNoRef )
        v14 = 0LL;
      if ( v14 )
      {
        v15 = *v14;
        v17 = 0LL;
        if ( (*v15)((struct CBitmapRealization *)v14, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v17) >= 0 )
        {
          LOBYTE(v16) = 1;
          v2 = (*(__int64 (__fastcall **)(__int64, __int64, struct CMILMatrix *, char *, char *, char *))(*(_QWORD *)v17 + 24LL))(
                 v17,
                 v16,
                 a2,
                 v20,
                 v19,
                 v18);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
  }
  return v2;
}
