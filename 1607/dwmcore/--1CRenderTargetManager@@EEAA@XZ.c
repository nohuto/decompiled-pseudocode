/*
 * XREFs of ??1CRenderTargetManager@@EEAA@XZ @ 0x18011B048
 * Callers:
 *     ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x18011B090 (--_GCRenderTargetManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x18011B430 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 */

void __fastcall CRenderTargetManager::~CRenderTargetManager(CRenderTargetManager *this)
{
  *(_QWORD *)this = &CRenderTargetManager::`vftable';
  CRenderTargetManager::ReleaseTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 72);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 24);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
