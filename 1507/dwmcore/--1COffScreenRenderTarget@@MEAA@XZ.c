/*
 * XREFs of ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1800EBD78
 * Callers:
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x1800EBD40 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 *     ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x1800EBE80 (--_ECOffScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x1800EDE84 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800ED144 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::~COffScreenRenderTarget(COffScreenRenderTarget *this)
{
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &COffScreenRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 41));
  *((_QWORD *)this + 41) = 0LL;
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 25);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 21);
  CRenderTarget::~CRenderTarget(this);
}
