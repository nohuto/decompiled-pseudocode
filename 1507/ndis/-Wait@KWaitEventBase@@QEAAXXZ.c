/*
 * XREFs of ?Wait@KWaitEventBase@@QEAAXXZ @ 0x1C009B178
 * Callers:
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C009B11C (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C009B16C (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00E35D8 (-ReferenceWdi@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KWaitEventBase::Wait(KWaitEventBase *this)
{
  KeWaitForSingleObject(this, Executive, 0, 0, 0LL);
}
