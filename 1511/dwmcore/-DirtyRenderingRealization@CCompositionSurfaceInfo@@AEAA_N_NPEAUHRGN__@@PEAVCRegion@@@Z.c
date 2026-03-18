/*
 * XREFs of ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x18002EAA0
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18002EB80 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 * Callees:
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x1800191B0 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18006D854 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800834C0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180083520 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

char __fastcall CCompositionSurfaceInfo::DirtyRenderingRealization(
        CCompositionSurfaceInfo *this,
        char a2,
        HRGN a3,
        struct CRegion *a4)
{
  char v4; // bp
  void (__fastcall *v9)(CBitmapRealization *__hidden); // rdi
  int (*v11)(CBitmapRealization *__hidden, const struct CRegion *); // rdi
  int v12; // [rsp+20h] [rbp-58h] BYREF
  int v13; // [rsp+24h] [rbp-54h] BYREF
  _DWORD v14[4]; // [rsp+28h] [rbp-50h] BYREF

  v4 = 0;
  if ( a3 )
  {
    if ( a3 == (HRGN)1 )
    {
      (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(*((_QWORD *)this + 15) + 112LL) + 24LL))(
        *((_QWORD *)this + 15) + 112LL,
        &v13,
        &v12);
      v14[0] = 0;
      v14[1] = 0;
      v14[2] = v13;
      v14[3] = v12;
      CRegion::SetRectangle(a4, (const struct MilRectU *)v14);
    }
    else
    {
      CRegion::SetHRGN(a4, a3);
    }
    v4 = 1;
  }
  if ( a3 == (HRGN)1 || a2 && *((_DWORD *)this + 26) > 1u )
  {
    v9 = *(void (__fastcall **)(CBitmapRealization *__hidden))(**((_QWORD **)this + 15) + 72LL);
    if ( v9 == CBitmapRealization::MarkFullDirty )
      CBitmapRealization::MarkFullDirty(*((CBitmapRealization **)this + 15));
    else
      v9(*((CBitmapRealization **)this + 15));
  }
  else if ( v4 )
  {
    v11 = *(int (**)(CBitmapRealization *__hidden, const struct CRegion *))(**((_QWORD **)this + 15) + 64LL);
    if ( v11 == CBitmapRealization::AddDirtyRegion )
      CBitmapRealization::AddDirtyRegion(*((CBitmapRealization **)this + 15), a4);
    else
      ((void (__fastcall *)(_QWORD, struct CRegion *))v11)(*((_QWORD *)this + 15), a4);
  }
  return v4;
}
