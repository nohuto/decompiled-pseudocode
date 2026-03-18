/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x18013F5E8
 * Callers:
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18013E768 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18013F518 (-Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0CWarpLockSubresource@@IEAA@PEAVIWarpPrivateAPI@@@Z @ 0x18013F3C4 (--0CWarpLockSubresource@@IEAA@PEAVIWarpPrivateAPI@@@Z.c)
 *     ?Lock@CWarpLockSubresource@@IEAAJXZ @ 0x18013F710 (-Lock@CWarpLockSubresource@@IEAAJXZ.c)
 */

__int64 __fastcall CWarpLockSubresource::Create(
        struct IWarpPrivateAPI *a1,
        struct IDXGIResource *a2,
        int a3,
        struct CWarpLockSubresource **a4)
{
  CWarpLockSubresource *v8; // rax
  CWarpLockSubresource *v9; // rdi
  int v10; // ebx
  int v11; // eax

  *a4 = 0LL;
  v8 = (CWarpLockSubresource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 56LL);
  if ( v8 )
    v9 = CWarpLockSubresource::CWarpLockSubresource(v8, a1);
  else
    v9 = 0LL;
  if ( v9 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v9);
    *((_QWORD *)v9 + 3) = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IDXGIResource *))a2->lpVtbl->AddRef)(a2);
    *((_DWORD *)v9 + 8) = a3;
    v11 = CWarpLockSubresource::Lock(v9);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x78u);
    if ( v10 >= 0 )
    {
      *a4 = v9;
      v9 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x4Au);
    }
    if ( v9 )
      CMILCOMBase::InternalRelease(v9);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x47u);
  }
  return (unsigned int)v10;
}
