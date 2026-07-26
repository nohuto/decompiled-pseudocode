/*
 * XREFs of ndisCancelMediaDisconnectTimer @ 0x1C00183D8
 * Callers:
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012970 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisMCommonHaltMiniport @ 0x1C00EB5E4 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
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
      ndisDereferenceMiniport(a1);
  }
  return v3;
}
