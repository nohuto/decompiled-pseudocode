/*
 * XREFs of VfThunkFindExportAddressAllTables @ 0x1407CBFD0
 * Callers:
 *     VfInitBootDriversLoaded @ 0x1407CBEA0 (VfInitBootDriversLoaded.c)
 * Callees:
 *     ViThunkFindAllExportAddresses @ 0x1407CC064 (ViThunkFindAllExportAddresses.c)
 */

__int64 __fastcall VfThunkFindExportAddressAllTables(__int64 a1)
{
  ViThunkFindAllExportAddresses(a1, &VfRegularThunks, 40LL, &VfRegularThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfOrderDependentThunks, 48LL, &VfOrderDependentThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfPoolThunks, 40LL, &VfPoolThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfMandatoryThunks, 40LL, 0LL);
  return ViThunkFindAllExportAddresses(a1, &VfXdvThunks, 40LL, &VfXdvThunksBitMapHeader);
}
