/*
 * XREFs of ?Create@CAnalogCompositorTarget@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18013CE7C
 * Callers:
 *     ?Initialize@CAnalogCompositor@@EEAAJXZ @ 0x18013B060 (-Initialize@CAnalogCompositor@@EEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Initialize@CAnalogCompositorTarget@@EEAAJXZ @ 0x18013D1D0 (-Initialize@CAnalogCompositorTarget@@EEAAJXZ.c)
 */

__int64 __fastcall CAnalogCompositorTarget::Create(struct CComposition *a1, struct CAnalogCompositorTarget **a2)
{
  int v4; // esi
  __int64 v5; // rax
  CAnalogCompositorTarget *v6; // rbx

  *a2 = 0LL;
  v4 = -2147024882;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         120LL);
  v6 = (CAnalogCompositorTarget *)v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 16) = a1;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_DWORD *)(v5 + 32) = 0;
    *(_QWORD *)(v5 + 96) = 0LL;
    *(_QWORD *)(v5 + 104) = 0LL;
    *(_QWORD *)(v5 + 112) = 0LL;
    *(_QWORD *)v5 = &CAnalogCompositorTarget::`vftable'{for `CResource'};
    *(_QWORD *)(v5 + 40) = &CAnalogCompositorTarget::`vftable'{for `IRenderTargetResource'};
    *(_QWORD *)(v5 + 48) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
    *(_BYTE *)(v5 + 80) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v4 = CAnalogCompositorTarget::Initialize(v6);
    if ( v4 >= 0 )
    {
      *a2 = v6;
      CBitmapOfDeviceBitmaps::AddRef(v6);
    }
  }
  return (unsigned int)v4;
}
