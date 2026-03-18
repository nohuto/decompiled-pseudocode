/*
 * XREFs of ?NotifyInvalidResource@CPrimitiveColor@@UEAAXPEBVIDeviceResource@@@Z @ 0x180124EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x18000FA94 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 */

void __fastcall CPrimitiveColor::NotifyInvalidResource(CPrimitiveColor *this, const struct IDeviceResource *a2)
{
  CPrimitiveColor::ReleasePrimitiveProperties(this);
  CResource::NotifyOnChanged((_DWORD *)this + 2, 0, 0LL);
}
