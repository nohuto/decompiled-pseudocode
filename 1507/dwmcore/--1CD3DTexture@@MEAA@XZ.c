/*
 * XREFs of ??1CD3DTexture@@MEAA@XZ @ 0x180084D38
 * Callers:
 *     ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x180014610 (--_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z.c)
 *     ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x180133780 (--_GCD3DTexture@@MEAAPEAXI@Z.c)
 *     ??_ECD3DLockableTexture@@MEAAPEAXI@Z @ 0x18013CF70 (--_ECD3DLockableTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DTexture::~CD3DTexture(CD3DTexture *this)
{
  bool v1; // zf
  CMILPoolResource *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

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
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 25));
  }
  v4 = *((_QWORD *)this + 16);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 16));
  v5 = *((_QWORD *)this + 26);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 26));
  v6 = *((_QWORD *)this + 28);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 28));
  v7 = *((_QWORD *)this + 27);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 27));
  v8 = *((_QWORD *)this + 29);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 29));
  v9 = *((_QWORD *)this + 30);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 30));
  CD3DResource::~CD3DResource(this);
}
