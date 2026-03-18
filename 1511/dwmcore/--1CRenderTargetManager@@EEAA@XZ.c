/*
 * XREFs of ??1CRenderTargetManager@@EEAA@XZ @ 0x180104A5C
 * Callers:
 *     ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x180104AA0 (--_GCRenderTargetManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180104ECC (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 */

void __fastcall CRenderTargetManager::~CRenderTargetManager(void **this)
{
  *this = &CRenderTargetManager::`vftable';
  CRenderTargetManager::ReleaseTargets((CRenderTargetManager *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 9);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 3);
  *this = &CMILRefCountBase::`vftable';
}
