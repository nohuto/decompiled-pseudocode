/*
 * XREFs of ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C0097EBC
 * Callers:
 *     ndisSetDevicePower @ 0x1C001227C (ndisSetDevicePower.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0012550 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A2B8C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?TryAcquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A6B0C (-TryAcquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNE.c)
 *     ?Wait@KWaitEventBase@@QEAAXXZ @ 0x1C00CE7A0 (-Wait@KWaitEventBase@@QEAAXXZ.c)
 */

__int64 __fastcall Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::TryAcquire(a1, a2);
    if ( (_BYTE)result )
      break;
    KWaitEventBase::Wait((KWaitEventBase *)(a1 + 16));
  }
  return result;
}
