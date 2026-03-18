/*
 * XREFs of VfThunkAddTargetNotify @ 0x1406B2128
 * Callers:
 *     VfTargetDriversAdd @ 0x140002384 (VfTargetDriversAdd.c)
 * Callees:
 *     ViThunkCreateSharedExportInformation @ 0x1406B21F8 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkFreeSharedThunksArray @ 0x1406B22B0 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall VfThunkAddTargetNotify(_QWORD *a1)
{
  _DWORD *v1; // rdi
  __int64 result; // rax

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
    || (result = ViThunkCreateSharedExportInformation(*a1, &VfXdvThunks, 40LL, &VfXdvThunksBitMapHeader, a1 + 5),
        !(_DWORD)result) )
  {
    ViThunkFreeSharedThunksArray(v1);
    ViThunkFreeSharedThunksArray(a1 + 3);
    ViThunkFreeSharedThunksArray(a1 + 4);
    result = ViThunkFreeSharedThunksArray(a1 + 5);
    *v1 |= 1u;
  }
  return result;
}
