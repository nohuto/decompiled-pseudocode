/*
 * XREFs of ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A3B24
 * Callers:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C0012400 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C009E2D4 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A48A8 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00CD13C (ndisIMInitializeDeviceInstance_ea_1C00CD13C.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(__int64 a1)
{
  KLockThisExclusive v2; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(&v2, (struct KPushLockBase *)(a1 + 8));
  *(_DWORD *)a1 = 0;
  KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
  KLockHolder::~KLockHolder(&v2);
}
