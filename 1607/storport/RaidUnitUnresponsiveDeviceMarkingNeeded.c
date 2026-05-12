/*
 * XREFs of RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C0038DE8
 * Callers:
 *     RaidUnitRequestTimeout @ 0x1C0037E64 (RaidUnitRequestTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitUnresponsiveDeviceMarkingNeeded(__int64 a1)
{
  char v1; // bl
  int v2; // eax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 2552) )
  {
    if ( (*(_BYTE *)(a1 + 154) & 2) == 0 )
    {
      v2 = *(_DWORD *)(a1 + 2564);
      if ( v2 )
      {
        if ( v2 == -1 )
        {
          return *(_QWORD *)(a1 + 2600) != 0LL;
        }
        else if ( *(_QWORD *)(a1 + 2600) )
        {
          return KeQueryUnbiasedInterruptTime() < *(_QWORD *)(a1 + 2600)
                                                + (unsigned __int64)(unsigned int)(10000 * *(_DWORD *)(a1 + 2564));
        }
      }
    }
  }
  return v1;
}
