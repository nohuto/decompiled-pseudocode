/*
 * XREFs of ?NotifyInvalidResource@CPrimitive@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801175C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResources@CPrimitive@@AEAAXXZ @ 0x1801178C8 (-ReleaseResources@CPrimitive@@AEAAXXZ.c)
 */

void __fastcall CPrimitive::NotifyInvalidResource(CPrimitive *this, const struct IDeviceResource *a2)
{
  _DWORD *v2; // rbx

  v2 = (_DWORD *)((char *)this - 40);
  CPrimitive::ReleaseResources((CPrimitive *)((char *)this - 40));
  CResource::NotifyOnChanged(v2, 0, 0LL);
}
