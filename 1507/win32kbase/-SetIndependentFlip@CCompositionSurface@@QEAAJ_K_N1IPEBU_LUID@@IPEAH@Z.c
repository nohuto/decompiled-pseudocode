/*
 * XREFs of ?SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IPEBU_LUID@@IPEAH@Z @ 0x1C00DF488
 * Callers:
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00DEFF0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 * Callees:
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048D80 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::SetIndependentFlip(
        CCompositionSurface *this,
        __int64 a2,
        char a3,
        char a4,
        unsigned int a5,
        const struct _LUID *a6,
        unsigned int a7,
        int *a8)
{
  struct CCompositionBuffer *RenderingBuffer; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r10

  RenderingBuffer = CCompositionSurface::GetRenderingBuffer(this);
  LOBYTE(v11) = a4;
  LOBYTE(v12) = a3;
  return (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64, __int64, _QWORD, const struct _LUID *, __int64, unsigned int, int *))(*(_QWORD *)RenderingBuffer + 128LL))(
           RenderingBuffer,
           v12,
           v11,
           a5,
           a6,
           v13,
           a7,
           a8);
}
