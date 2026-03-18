/*
 * XREFs of ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800992FC
 * Callers:
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180099168 (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180099454 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x180090270 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180098B90 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x180099224 (-EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealizati.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180099BD0 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
        CCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2)
{
  unsigned int v2; // ebp
  int v5; // eax
  __int64 (__fastcall ***v6)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rbx
  __int64 (__fastcall *v7)(CBitmapRealization *); // rax
  CBitmapRealization *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  if ( *((_QWORD *)this + 7) != *((_QWORD *)a2 + 2) )
  {
    CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 48));
    CCompositionSurfaceInfo::UpdateRenderingRealization(this, 0LL, 0LL, 0LL, 0LL, 1);
  }
  if ( *((_QWORD *)a2 + 2) )
  {
    v5 = CCompositionSurfaceInfo::EnsureRealization(this, a2, &v9);
    v6 = (__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **))v9;
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x17Du);
    }
    else
    {
      *((_DWORD *)this + 18) = *((_DWORD *)a2 + 7);
      *((_DWORD *)this + 19) = *((_DWORD *)a2 + 48);
      CCompositionSurfaceInfo::UpdateRenderingRealization(
        this,
        v6,
        (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 72),
        *((HRGN *)a2 + 4),
        (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 40),
        0);
    }
    if ( v6 )
    {
      v7 = (__int64 (__fastcall *)(CBitmapRealization *))(*v6)[2];
      if ( v7 == CBitmapRealization::Release )
        CBitmapRealization::Release((CBitmapRealization *)v6);
      else
        v7((CBitmapRealization *)v6);
    }
  }
  return v2;
}
