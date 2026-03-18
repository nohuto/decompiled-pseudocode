/*
 * XREFs of ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18011E474
 * Callers:
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x18011E438 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 *     ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x18011E570 (--_ECOffScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x18011F67C (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800B7ED0 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::~COffScreenRenderTarget(COffScreenRenderTarget *this)
{
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &COffScreenRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 19) = &COffScreenRenderTarget::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 21));
  *((_QWORD *)this + 21) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 20));
  *((_QWORD *)this + 20) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 47));
  *((_QWORD *)this + 47) = 0LL;
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 248);
  CRenderTarget::~CRenderTarget(this);
}
