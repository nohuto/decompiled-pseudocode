/*
 * XREFs of ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x180144E50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C6FC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 */

void __fastcall CPrimitiveGroup::NotifyInvalidResource(CPrimitiveGroup *this, const struct IDeviceResource *a2)
{
  _DWORD *v2; // rbx

  v2 = (_DWORD *)((char *)this - 112);
  CPrimitiveGroup::ReleasePrimitiveCaches((CPrimitiveGroup *)((char *)this - 112), 1);
  CResource::NotifyOnChanged(v2, 0, 0LL);
}
