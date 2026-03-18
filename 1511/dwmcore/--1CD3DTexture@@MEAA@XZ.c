/*
 * XREFs of ??1CD3DTexture@@MEAA@XZ @ 0x18002DCD8
 * Callers:
 *     ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x18002B400 (--_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z.c)
 *     ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x180144FC0 (--_GCD3DTexture@@MEAAPEAXI@Z.c)
 *     ??_ECD3DLockableTexture@@MEAAPEAXI@Z @ 0x18014CF10 (--_ECD3DLockableTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

void __fastcall CD3DTexture::~CD3DTexture(CD3DTexture *this)
{
  bool v1; // zf
  CMILPoolResource *v3; // rcx
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rbp
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi

  v1 = *((_QWORD *)this + 25) == 0LL;
  *(_QWORD *)this = &CD3DTexture::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  if ( !v1 )
  {
    while ( *((_DWORD *)this + 48) )
    {
      v3 = *(CMILPoolResource **)(*((_QWORD *)this + 25) + 8LL * (unsigned int)--*((_DWORD *)this + 48));
      if ( v3 )
        CMILPoolResource::Release(v3);
    }
    --*((_DWORD *)this + 48);
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 25));
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v4)(WPF::g_pProcessHeap, *((_QWORD *)this + 25));
  }
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 16));
  v6 = *((_QWORD *)this + 26);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 26));
  v7 = *((_QWORD *)this + 28);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 28));
  v8 = *((_QWORD *)this + 27);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 27));
  v9 = *((_QWORD *)this + 29);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 29));
  v10 = *((_QWORD *)this + 30);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*((_QWORD *)this + 30));
  CD3DResource::~CD3DResource(this);
}
