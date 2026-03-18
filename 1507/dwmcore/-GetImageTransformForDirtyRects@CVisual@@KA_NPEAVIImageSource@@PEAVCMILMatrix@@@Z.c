/*
 * XREFs of ?GetImageTransformForDirtyRects@CVisual@@KA_NPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x180003578
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D8C0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007E10 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800087A0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CVisual::GetImageTransformForDirtyRects(struct IImageSource *a1, struct CMILMatrix *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v5)(CCompositionSurfaceBitmap *__hidden, struct IBitmapRealization **); // rbx
  int CurrentRenderingRealization; // eax
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(struct IImageSource *, struct CMILMatrix *, _QWORD); // rbx
  char Transform; // al
  char v10; // si
  struct IBitmapRealization *v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-20h] BYREF

  v2 = *(_QWORD *)a1;
  v12 = 0LL;
  v13 = 0LL;
  v5 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *__hidden, struct IBitmapRealization **))(v2 + 136);
  if ( v5 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(a1, &v12);
  else
    CurrentRenderingRealization = v5(a1, &v12);
  if ( CurrentRenderingRealization >= 0
    && (**(int (__fastcall ***)(struct IBitmapRealization *, GUID *, __int64 *))v12)(
         v12,
         &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
         &v13) >= 0 )
  {
    LOBYTE(v7) = 1;
    Transform = (*(__int64 (__fastcall **)(__int64, __int64, struct CMILMatrix *, _BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v13 + 24LL))(
                  v13,
                  v7,
                  a2,
                  v16,
                  v15,
                  v14);
  }
  else
  {
    v8 = *(__int64 (__fastcall **)(struct IImageSource *, struct CMILMatrix *, _QWORD))(*(_QWORD *)a1 + 112LL);
    if ( (char *)v8 == (char *)CCompositionSurfaceBitmap::GetTransform )
      Transform = CCompositionSurfaceBitmap::GetTransform(a1, a2, 0LL);
    else
      Transform = v8(a1, a2, 0LL);
  }
  v10 = Transform;
  if ( v12 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v10;
}
