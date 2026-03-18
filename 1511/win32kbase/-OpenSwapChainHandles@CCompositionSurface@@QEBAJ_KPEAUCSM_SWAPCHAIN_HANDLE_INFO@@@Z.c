/*
 * XREFs of ?OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C003A704
 * Callers:
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C004CF20 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C003A2EC (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::OpenSwapChainHandles(
        CCompositionSurface *this,
        __int64 a2,
        struct CSM_SWAPCHAIN_HANDLE_INFO *a3)
{
  __int64 result; // rax
  struct CCompositionBuffer *v5; // rbx
  struct CCompositionBuffer *v6; // [rsp+48h] [rbp+20h] BYREF

  result = CCompositionSurface::FindBuffer(this, a2, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    if ( (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 8LL))(v6) == 2 )
      return (*(__int64 (__fastcall **)(struct CCompositionBuffer *, struct CSM_SWAPCHAIN_HANDLE_INFO *))(*(_QWORD *)v5 + 56LL))(
               v5,
               a3);
    else
      return 3221225485LL;
  }
  return result;
}
