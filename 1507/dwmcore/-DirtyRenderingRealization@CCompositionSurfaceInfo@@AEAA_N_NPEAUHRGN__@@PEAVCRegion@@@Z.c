/*
 * XREFs of ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x18008631C
 * Callers:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 * Callees:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180087914 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180119750 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 */

char __fastcall CCompositionSurfaceInfo::DirtyRenderingRealization(
        CCompositionSurfaceInfo *this,
        char a2,
        HRGN a3,
        struct CRegion *a4)
{
  char v4; // bp
  int v10; // [rsp+20h] [rbp-58h] BYREF
  int v11; // [rsp+24h] [rbp-54h] BYREF
  _DWORD v12[4]; // [rsp+28h] [rbp-50h] BYREF

  v4 = 0;
  if ( a3 )
  {
    if ( a3 == (HRGN)1 )
    {
      (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(*((_QWORD *)this + 16) + 112LL) + 24LL))(
        *((_QWORD *)this + 16) + 112LL,
        &v11,
        &v10);
      v12[0] = 0;
      v12[1] = 0;
      v12[2] = v11;
      v12[3] = v10;
      CRegion::SetRectangle(a4, (const struct MilRectU *)v12);
    }
    else
    {
      CRegion::SetHRGN(a4, a3);
    }
    v4 = 1;
  }
  if ( a3 == (HRGN)1 || a2 && *((_DWORD *)this + 28) > 1u )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 72LL))(*((_QWORD *)this + 16));
  }
  else if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, struct CRegion *))(**((_QWORD **)this + 16) + 64LL))(*((_QWORD *)this + 16), a4);
  }
  return v4;
}
