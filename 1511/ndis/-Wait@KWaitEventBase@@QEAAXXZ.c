/*
 * XREFs of ?Wait@KWaitEventBase@@QEAAXXZ @ 0x1C00CE7A0
 * Callers:
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C0097EBC (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C0098C28 (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A29C8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00DDB68 (-ReferenceWdi@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KWaitEventBase::Wait(KWaitEventBase *this)
{
  KeWaitForSingleObject(this, Executive, 0, 0, 0LL);
}
