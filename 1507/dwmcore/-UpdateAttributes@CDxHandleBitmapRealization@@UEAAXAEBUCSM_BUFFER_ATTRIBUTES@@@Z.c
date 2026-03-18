/*
 * XREFs of ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18001ED20
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800863B0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x180046928 (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180046A90 (-UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDxHandleBitmapRealization::UpdateAttributes(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  unsigned int v2; // esi
  int v3; // ebp
  int v6; // edx

  v2 = 3;
  v3 = 3;
  v6 = *((_DWORD *)a2 + 4);
  if ( *((_DWORD *)this + 32) )
    v3 = *((_DWORD *)this + 32);
  if ( v6 != *((_DWORD *)this + 36) || *((_QWORD *)a2 + 1) != *((_QWORD *)this + 17) )
    CBitmapRealization::UpdateDisplayRestriction(this, v6, *((HMONITOR *)a2 + 1));
  CBitmapRealization::UpdateAttributes(this, a2);
  if ( *((_DWORD *)this + 32) )
    v2 = *((_DWORD *)this + 32);
  if ( v3 != v2 )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16, v2);
}
