/*
 * XREFs of ?Wait@KWaitEventBase@@QEAAXXZ @ 0x1C009C27C
 * Callers:
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C009C6F4 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C00A4738 (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00E3938 (-ReferenceWdi@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KWaitEventBase::Wait(KWaitEventBase *this)
{
  KeWaitForSingleObject(this, Executive, 0, 0, 0LL);
}
