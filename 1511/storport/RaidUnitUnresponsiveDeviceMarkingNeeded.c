/*
 * XREFs of RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C0035D98
 * Callers:
 *     RaidUnitRequestTimeout @ 0x1C0034BF4 (RaidUnitRequestTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitUnresponsiveDeviceMarkingNeeded(__int64 a1)
{
  char v1; // bl
  int v2; // eax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 2528) )
  {
    if ( (*(_BYTE *)(a1 + 146) & 2) == 0 )
    {
      v2 = *(_DWORD *)(a1 + 2540);
      if ( v2 )
      {
        if ( v2 == -1 )
        {
          return *(_QWORD *)(a1 + 2576) != 0LL;
        }
        else if ( *(_QWORD *)(a1 + 2576) )
        {
          return KeQueryUnbiasedInterruptTime() < *(_QWORD *)(a1 + 2576)
                                                + (unsigned __int64)(unsigned int)(10000 * *(_DWORD *)(a1 + 2540));
        }
      }
    }
  }
  return v1;
}
