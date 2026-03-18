/*
 * XREFs of ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0049248
 * Callers:
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C001F960 (NtQueryCompositionSurfaceRenderingRealization.c)
 * Callees:
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048D80 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::GetRenderingRealizationInfo(
        CCompositionSurface *this,
        struct CSM_SURFACE_UPDATE *a2)
{
  struct CCompositionBuffer *RenderingBuffer; // rax
  int v5; // r9d
  struct CCompositionBuffer *v6; // rbx
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  RenderingBuffer = CCompositionSurface::GetRenderingBuffer(this);
  v6 = RenderingBuffer;
  if ( RenderingBuffer )
  {
    *((_QWORD *)a2 + 32) = 0LL;
    v5 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64 *))(*(_QWORD *)RenderingBuffer + 176LL))(
           RenderingBuffer,
           &v10);
    if ( v5 >= 0 )
    {
      *(_QWORD *)a2 = *((_QWORD *)this - 1);
      *((_QWORD *)a2 + 1) = *((_QWORD *)v6 + 1);
      *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)v6 + 40);
      *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)v6 + 56);
      *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)v6 + 72);
      *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)v6 + 88);
      *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)v6 + 104);
      *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)v6 + 120);
      *((_OWORD *)a2 + 7) = *(_OWORD *)((char *)v6 + 136);
      *((_OWORD *)a2 + 8) = *(_OWORD *)((char *)v6 + 152);
      *((_OWORD *)a2 + 9) = *(_OWORD *)((char *)v6 + 168);
      *((_OWORD *)a2 + 10) = *(_OWORD *)((char *)v6 + 184);
      *((_QWORD *)a2 + 22) = *((_QWORD *)v6 + 25);
      v7 = v10;
      *(_OWORD *)((char *)a2 + 184) = *(_OWORD *)(v10 + 24);
      v8 = *(_OWORD *)(v7 + 40);
      *((_QWORD *)a2 + 27) = 0LL;
      *((_DWORD *)a2 + 56) = 0;
      *(_OWORD *)((char *)a2 + 200) = v8;
    }
  }
  return (unsigned int)v5;
}
