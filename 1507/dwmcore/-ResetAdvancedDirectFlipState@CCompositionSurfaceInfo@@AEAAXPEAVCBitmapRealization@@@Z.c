/*
 * XREFs of ?ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z @ 0x1800073D8
 * Callers:
 *     ?SetRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@@Z @ 0x1800862D8 (-SetRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@@Z.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800863B0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046670 (-QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CCompositionSurfaceInfo::ResetAdvancedDirectFlipState(
        CCompositionSurfaceInfo *this,
        __int64 (__fastcall ***a2)(struct CBitmapRealization *, GUID *, void **))
{
  __int64 (__fastcall **v2)(struct CBitmapRealization *, GUID *, void **); // rax
  int v3; // eax
  void *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  v2 = *a2;
  v4 = 0LL;
  if ( (char *)*v2 == (char *)CBitmapRealization::QueryInterface )
    v3 = CBitmapRealization::QueryInterface((CBitmapRealization *)a2, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v4);
  else
    v3 = (*v2)((struct CBitmapRealization *)a2, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v4);
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 32LL))(v4);
    if ( v4 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
