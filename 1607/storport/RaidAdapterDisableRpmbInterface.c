/*
 * XREFs of RaidAdapterDisableRpmbInterface @ 0x1C0026F94
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C005E438 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C005E6F0 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableRpmbInterface(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 5632) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5624), 0);
  return result;
}
