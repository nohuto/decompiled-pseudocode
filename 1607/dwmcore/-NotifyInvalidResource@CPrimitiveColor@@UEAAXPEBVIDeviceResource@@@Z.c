/*
 * XREFs of ?NotifyInvalidResource@CPrimitiveColor@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801417D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x18001BC40 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 */

void __fastcall CPrimitiveColor::NotifyInvalidResource(CPrimitiveColor *this, const struct IDeviceResource *a2)
{
  CPrimitiveColor::ReleasePrimitiveProperties(this);
  CResource::NotifyOnChanged((_DWORD *)this + 2, 0, 0LL);
}
