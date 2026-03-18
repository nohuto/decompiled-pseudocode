/*
 * XREFs of ??1CRenderTargetManager@@EEAA@XZ @ 0x1800E89FC
 * Callers:
 *     ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x1800E8A40 (--_GCRenderTargetManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x1800E8F84 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 */

void __fastcall CRenderTargetManager::~CRenderTargetManager(void **this)
{
  *this = &CRenderTargetManager::`vftable';
  CRenderTargetManager::ReleaseTargets((CRenderTargetManager *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 9);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 3);
  *this = &CMILRefCountBase::`vftable';
}
