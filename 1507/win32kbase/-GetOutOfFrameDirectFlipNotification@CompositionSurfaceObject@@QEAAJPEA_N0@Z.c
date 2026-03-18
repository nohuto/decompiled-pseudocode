/*
 * XREFs of ?GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z @ 0x1C00E050C
 * Callers:
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_UPDATE@@PEAIPEAH@Z @ 0x1C00E06D8 (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_U.c)
 * Callees:
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048D80 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetOutOfFrameDirectFlipNotification(
        CompositionSurfaceObject *this,
        bool *a2,
        bool *a3)
{
  char v4; // bl
  int v7; // edi
  struct CCompositionBuffer *RenderingBuffer; // rax
  char v9; // al
  struct CCompositionBuffer *v10; // rax

  v4 = 0;
  *a2 = 0;
  *a3 = 0;
  v7 = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32));
  if ( v7 >= 0 )
  {
    RenderingBuffer = CCompositionSurface::GetRenderingBuffer((CompositionSurfaceObject *)((char *)this + 24));
    if ( RenderingBuffer )
      v9 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)RenderingBuffer + 104LL))(RenderingBuffer);
    else
      v9 = 0;
    *a3 = v9;
    v10 = CCompositionSurface::GetRenderingBuffer((CompositionSurfaceObject *)((char *)this + 24));
    if ( v10 )
      v4 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v10 + 112LL))(v10);
    *a2 = v4;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)v7;
}
