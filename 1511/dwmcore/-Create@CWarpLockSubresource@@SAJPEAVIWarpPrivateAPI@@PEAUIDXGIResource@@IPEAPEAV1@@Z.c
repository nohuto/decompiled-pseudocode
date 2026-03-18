/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x18001AEB4
 * Callers:
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18000D4D8 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18014E994 (-Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Lock@CWarpLockSubresource@@IEAAJXZ @ 0x18001B0A0 (-Lock@CWarpLockSubresource@@IEAAJXZ.c)
 *     ??0CWarpLockSubresource@@IEAA@PEAVIWarpPrivateAPI@@@Z @ 0x18001B1C8 (--0CWarpLockSubresource@@IEAA@PEAVIWarpPrivateAPI@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWarpLockSubresource::Create(
        struct IWarpPrivateAPI *a1,
        struct IDXGIResource *a2,
        int a3,
        struct CWarpLockSubresource **a4)
{
  void *(__fastcall *v8)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CWarpLockSubresource *v9; // rax
  CWarpLockSubresource *v10; // rdi
  int v11; // eax
  int v12; // ebx

  *a4 = 0LL;
  v8 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v8 == WPF::ProcessHeapImpl::Alloc )
    v9 = (CWarpLockSubresource *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x38uLL);
  else
    v9 = (CWarpLockSubresource *)v8(WPF::g_pProcessHeap, 56uLL);
  if ( v9 )
    v10 = CWarpLockSubresource::CWarpLockSubresource(v9, a1);
  else
    v10 = 0LL;
  if ( v10 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v10);
    *((_QWORD *)v10 + 3) = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IDXGIResource *))a2->lpVtbl->AddRef)(a2);
    *((_DWORD *)v10 + 8) = a3;
    v11 = CWarpLockSubresource::Lock(v10);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x78u);
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x4Au);
    }
    else
    {
      *a4 = v10;
      v10 = 0LL;
    }
    if ( v10 )
      CMILCOMBase::InternalRelease(v10);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x47u);
  }
  return (unsigned int)v12;
}
