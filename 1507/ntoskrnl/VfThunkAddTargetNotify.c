/*
 * XREFs of VfThunkAddTargetNotify @ 0x140732198
 * Callers:
 *     VfTargetDriversAdd @ 0x140153EF4 (VfTargetDriversAdd.c)
 * Callees:
 *     ViThunkFreeSharedThunksArray @ 0x1407320A4 (ViThunkFreeSharedThunksArray.c)
 *     ViThunkCreateSharedExportInformation @ 0x140732268 (ViThunkCreateSharedExportInformation.c)
 */

void __fastcall VfThunkAddTargetNotify(void **a1)
{
  void **v1; // rdi

  v1 = a1 + 2;
  if ( !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        &VfRegularThunks,
                        40LL,
                        &VfRegularThunksBitMapHeader,
                        a1 + 2)
    || !(unsigned int)ViThunkCreateSharedExportInformation(*a1, &VfPoolThunks, 40LL, &VfPoolThunksBitMapHeader, a1 + 3)
    || !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        &VfOrderDependentThunks,
                        48LL,
                        &VfOrderDependentThunksBitMapHeader,
                        a1 + 4)
    || !(unsigned int)ViThunkCreateSharedExportInformation(*a1, &VfXdvThunks, 40LL, &VfXdvThunksBitMapHeader, a1 + 5) )
  {
    ViThunkFreeSharedThunksArray(v1);
    ViThunkFreeSharedThunksArray(a1 + 3);
    ViThunkFreeSharedThunksArray(a1 + 4);
    ViThunkFreeSharedThunksArray(a1 + 5);
    *(_DWORD *)v1 |= 1u;
  }
}
