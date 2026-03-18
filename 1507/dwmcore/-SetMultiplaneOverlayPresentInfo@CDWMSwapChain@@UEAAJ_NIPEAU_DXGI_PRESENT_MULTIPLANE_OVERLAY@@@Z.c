/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18013C010
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x18008BD34 (-ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDWMSwapChain::SetMultiplaneOverlayPresentInfo(
        CDWMSwapChain *this,
        char a2,
        unsigned int a3,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a4)
{
  unsigned __int64 v5; // r15
  unsigned int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int i; // edi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rsi

  v5 = a3;
  v8 = 0;
  CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(this);
  if ( a2 )
  {
    v9 = v5 << 7;
    if ( !is_mul_ok(v5, 0x80uLL) )
      v9 = -1LL;
    v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v9);
    *((_QWORD *)this + 51) = v10;
    if ( v10 )
    {
      *((_DWORD *)this + 100) = v5;
      for ( i = 0; i < *((_DWORD *)this + 100); ++i )
      {
        v12 = *((_QWORD *)this + 51);
        v13 = (unsigned __int64)i << 7;
        *(_OWORD *)(v12 + v13) = *(_OWORD *)((char *)a4 + v13);
        *(_OWORD *)(v12 + v13 + 16) = *(_OWORD *)((char *)a4 + v13 + 16);
        *(_OWORD *)(v12 + v13 + 32) = *(_OWORD *)((char *)a4 + v13 + 32);
        *(_OWORD *)(v12 + v13 + 48) = *(_OWORD *)((char *)a4 + v13 + 48);
        *(_OWORD *)(v12 + v13 + 64) = *(_OWORD *)((char *)a4 + v13 + 64);
        *(_OWORD *)(v12 + v13 + 80) = *(_OWORD *)((char *)a4 + v13 + 80);
        *(_OWORD *)(v12 + v13 + 96) = *(_OWORD *)((char *)a4 + v13 + 96);
        *(_OWORD *)(v12 + v13 + 112) = *(_OWORD *)((char *)a4 + v13 + 112);
        v14 = *(_QWORD *)(*((_QWORD *)this + 51) + v13 + 8);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      }
      *((_BYTE *)this + 398) = 1;
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x435u);
    }
  }
  return v8;
}
