/*
 * XREFs of ndisWakeUpDevice @ 0x1C00CAF20
 * Callers:
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E6DF8 (ndisPnPIrpRemoveDevice.c)
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C00121F4 (ndisRequestDevicePowerD0.c)
 */

__int64 __fastcall ndisWakeUpDevice(__int64 a1)
{
  unsigned int v3; // ebx

  if ( *(_DWORD *)(a1 + 3924) == 1 )
    return 0LL;
  v3 = ndisRequestDevicePowerD0((struct _NDIS_MINIPORT_BLOCK *)a1, NdisMEventD0_D3DResume);
  if ( v3 == 259 )
  {
    v3 = 0;
    KeWaitForSingleObject((PVOID)(a1 + 4280), Executive, 0, 0, 0LL);
  }
  return v3;
}
