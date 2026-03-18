/*
 * XREFs of ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180055080
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180098B90 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x18009016C (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?GetAlphaMode@CBitmapRealization@@UEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800902C0 (-GetAlphaMode@CBitmapRealization@@UEBA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180090650 (-UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x18010EEB8 (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CDxHandleBitmapRealization::UpdateAttributes(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  CBitmapRealization *v2; // rdi
  bool updated; // bp
  __int64 v4; // rax
  CBitmapRealization *v7; // rcx
  enum DXGI_ALPHA_MODE (__fastcall *v8)(CBitmapRealization *__hidden); // rax
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  enum DXGI_ALPHA_MODE v10; // r14d
  int v11; // edx
  enum DXGI_ALPHA_MODE (__fastcall *v12)(CBitmapRealization *__hidden); // rax
  enum DXGI_ALPHA_MODE v13; // eax

  v2 = (CDxHandleBitmapRealization *)((char *)this + 112);
  updated = 0;
  v4 = *((_QWORD *)this + 14);
  v7 = (CDxHandleBitmapRealization *)((char *)this + 112);
  v8 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmapRealization *__hidden))(v4 + 48);
  if ( v8 == CBitmapRealization::GetAlphaMode )
    AlphaMode = CBitmapRealization::GetAlphaMode(v7);
  else
    AlphaMode = v8(v7);
  v10 = AlphaMode;
  v11 = *((_DWORD *)a2 + 29) & 1;
  if ( v11 != (*((_DWORD *)this + 61) & 1) || *((_QWORD *)a2 + 1) != *((_QWORD *)this + 17) )
    updated = CBitmapRealization::UpdateDisplayRestriction(this, v11, *((HMONITOR *)a2 + 1));
  CBitmapRealization::UpdateAttributes(this, a2);
  v12 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)v2 + 48LL);
  if ( v12 == CBitmapRealization::GetAlphaMode )
    v13 = CBitmapRealization::GetAlphaMode(v2);
  else
    v13 = v12(v2);
  if ( v10 != v13 )
  {
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16, (unsigned int)v13);
    updated = 1;
  }
  if ( updated )
    CBitmapRealization::InvalidateDecodeBitmap(this, 0);
}
