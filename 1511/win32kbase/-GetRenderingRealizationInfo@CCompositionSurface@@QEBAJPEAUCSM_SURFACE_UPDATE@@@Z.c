/*
 * XREFs of ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C003A760
 * Callers:
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C004D140 (NtQueryCompositionSurfaceRenderingRealization.c)
 * Callees:
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C003A324 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::GetRenderingRealizationInfo(
        CCompositionSurface *this,
        struct CSM_SURFACE_UPDATE *a2)
{
  int v4; // edi
  struct CCompositionBuffer *RenderingBuffer; // rax
  struct CCompositionBuffer *v6; // rbx
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = -1073741823;
  RenderingBuffer = CCompositionSurface::GetRenderingBuffer(this);
  v6 = RenderingBuffer;
  if ( RenderingBuffer )
  {
    v4 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64 *))(*(_QWORD *)RenderingBuffer + 176LL))(
           RenderingBuffer,
           &v10);
    if ( v4 >= 0 )
    {
      *(_QWORD *)a2 = *((_QWORD *)this - 1);
      *((_QWORD *)a2 + 1) = *((_QWORD *)v6 + 2);
      *((_OWORD *)a2 + 1) = *((_OWORD *)v6 + 3);
      *((_OWORD *)a2 + 2) = *((_OWORD *)v6 + 4);
      *((_OWORD *)a2 + 3) = *((_OWORD *)v6 + 5);
      *((_OWORD *)a2 + 4) = *((_OWORD *)v6 + 6);
      *((_OWORD *)a2 + 5) = *((_OWORD *)v6 + 7);
      *((_OWORD *)a2 + 6) = *((_OWORD *)v6 + 8);
      *((_OWORD *)a2 + 7) = *((_OWORD *)v6 + 9);
      *((_OWORD *)a2 + 8) = *((_OWORD *)v6 + 10);
      *((_OWORD *)a2 + 9) = *((_OWORD *)v6 + 11);
      *((_OWORD *)a2 + 10) = *((_OWORD *)v6 + 12);
      *((_QWORD *)a2 + 22) = *((_QWORD *)v6 + 26);
      v7 = v10;
      *(_OWORD *)((char *)a2 + 184) = *(_OWORD *)(v10 + 24);
      v8 = *(_OWORD *)(v7 + 40);
      *((_QWORD *)a2 + 27) = 0LL;
      *((_DWORD *)a2 + 56) = 0;
      *(_OWORD *)((char *)a2 + 200) = v8;
      *((_DWORD *)a2 + 63) = *((_DWORD *)v6 + 73);
      *((_DWORD *)a2 + 64) = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 136LL))(v6);
    }
  }
  return (unsigned int)v4;
}
