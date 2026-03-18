/*
 * XREFs of CheckHorizTopology @ 0x1C00AE138
 * Callers:
 *     fsc_CheckEndPoint @ 0x1C00B04F8 (fsc_CheckEndPoint.c)
 *     fsc_EndContourEndpoint @ 0x1C00B0ED8 (fsc_EndContourEndpoint.c)
 * Callees:
 *     AddHorizOn @ 0x1C00ACCC8 (AddHorizOn.c)
 *     AddHorizOff @ 0x1C00ACD24 (AddHorizOff.c)
 */

__int64 __fastcall CheckHorizTopology(int a1, int a2, unsigned __int16 a3)
{
  unsigned int v3; // r9d
  bool v7; // cc
  bool v8; // cc

  v3 = 0;
  if ( a2 > dword_1C0322EDC )
  {
    if ( dword_1C0322EDC <= dword_1C0322ED4 )
    {
      if ( dword_1C0322EDC < dword_1C0322ED4 )
      {
LABEL_11:
        v3 = AddHorizOn(a3);
        if ( v3 )
          return v3;
        return (unsigned int)AddHorizOff(a3);
      }
      if ( dword_1C0322ED8 >= State )
        return v3;
    }
    return (unsigned int)AddHorizOn(a3);
  }
  if ( a2 >= dword_1C0322EDC )
  {
    if ( dword_1C0322EDC <= dword_1C0322ED4 )
    {
      if ( dword_1C0322EDC < dword_1C0322ED4 )
      {
        if ( a1 >= dword_1C0322ED8 )
          return v3;
        return (unsigned int)AddHorizOff(a3);
      }
      v8 = dword_1C0322ED8 < State;
      if ( dword_1C0322ED8 > State )
      {
        if ( a1 < dword_1C0322ED8 )
          return (unsigned int)AddHorizOff(a3);
        v8 = dword_1C0322ED8 < State;
      }
      if ( !v8 )
        return v3;
      v7 = a1 <= dword_1C0322ED8;
    }
    else
    {
      v7 = a1 <= dword_1C0322ED8;
    }
    if ( v7 )
      return v3;
    return (unsigned int)AddHorizOn(a3);
  }
  if ( dword_1C0322EDC > dword_1C0322ED4 )
    goto LABEL_11;
  if ( dword_1C0322EDC < dword_1C0322ED4 || dword_1C0322ED8 > State )
    return (unsigned int)AddHorizOff(a3);
  return v3;
}
