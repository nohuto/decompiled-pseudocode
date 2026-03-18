/*
 * XREFs of ?GetPnpStateInternal@FxPkgPnp@@IEAAJXZ @ 0x1C00550AC
 * Callers:
 *     ?GetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z @ 0x1C0088554 (-GetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall FxPkgPnp::GetPnpStateInternal(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int v4; // ebx
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  v4 = this->m_PnpStateAndCaps.Value & 0xFFF;
  FxNonPagedObject::Unlock(this, irql, v5);
  return v4;
}
