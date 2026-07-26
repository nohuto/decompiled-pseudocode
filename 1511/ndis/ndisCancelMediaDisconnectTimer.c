/*
 * XREFs of ndisCancelMediaDisconnectTimer @ 0x1C001EBA8
 * Callers:
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012FB0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A2B8C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E0560 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 */

BOOLEAN __fastcall ndisCancelMediaDisconnectTimer(__int64 a1)
{
  int v1; // eax
  BOOLEAN v3; // di

  v1 = *(_DWORD *)(a1 + 124);
  v3 = 1;
  if ( (v1 & 8) != 0 )
  {
    *(_DWORD *)(a1 + 124) = v1 & 0xFFFFFDF7 | 0x200;
    v3 = KeCancelTimer((PKTIMER)(a1 + 1392));
    if ( v3 )
      ndisDereferenceMiniport(a1, 0xBu);
  }
  return v3;
}
