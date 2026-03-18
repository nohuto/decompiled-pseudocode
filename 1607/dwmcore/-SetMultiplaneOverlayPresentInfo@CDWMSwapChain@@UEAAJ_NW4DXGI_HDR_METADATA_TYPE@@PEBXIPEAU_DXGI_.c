/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800BC8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x18007A530 (-ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetMultiplaneOverlayPresentInfo(
        CDWMSwapChain *this,
        char a2,
        enum DXGI_HDR_METADATA_TYPE a3,
        const void *a4,
        unsigned int a5,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6)
{
  unsigned int v10; // edi
  unsigned int i; // ebx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rax

  v10 = 0;
  CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(this);
  if ( a2 )
  {
    *((_DWORD *)this + 95) = a3;
    *((_QWORD *)this + 48) = a4;
    v16 = (unsigned __int64)a5 << 7;
    if ( !is_mul_ok(a5, 0x80uLL) )
      v16 = -1LL;
    v17 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v16);
    *((_QWORD *)this + 50) = v17;
    if ( v17 )
    {
      *((_DWORD *)this + 98) = a5;
      for ( i = 0; i < *((_DWORD *)this + 98); ++i )
      {
        v13 = *((_QWORD *)this + 50);
        v14 = (unsigned __int64)i << 7;
        *(_OWORD *)(v13 + v14) = *(_OWORD *)((char *)a6 + v14);
        *(_OWORD *)(v13 + v14 + 16) = *(_OWORD *)((char *)a6 + v14 + 16);
        *(_OWORD *)(v13 + v14 + 32) = *(_OWORD *)((char *)a6 + v14 + 32);
        *(_OWORD *)(v13 + v14 + 48) = *(_OWORD *)((char *)a6 + v14 + 48);
        *(_OWORD *)(v13 + v14 + 64) = *(_OWORD *)((char *)a6 + v14 + 64);
        *(_OWORD *)(v13 + v14 + 80) = *(_OWORD *)((char *)a6 + v14 + 80);
        *(_OWORD *)(v13 + v14 + 96) = *(_OWORD *)((char *)a6 + v14 + 96);
        *(_OWORD *)(v13 + v14 + 112) = *(_OWORD *)((char *)a6 + v14 + 112);
        v15 = *(_QWORD *)(*((_QWORD *)this + 50) + v14 + 8);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
      *((_BYTE *)this + 414) = 1;
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x432u);
    }
  }
  return v10;
}
