/*
 * XREFs of CheckVertTopology @ 0x1C00AE5EC
 * Callers:
 *     fsc_CheckEndPoint @ 0x1C00B04F8 (fsc_CheckEndPoint.c)
 *     fsc_EndContourEndpoint @ 0x1C00B0ED8 (fsc_EndContourEndpoint.c)
 * Callees:
 *     AddVertOff @ 0x1C00ACC6C (AddVertOff.c)
 *     AddVertOn @ 0x1C00ACD80 (AddVertOn.c)
 */

__int64 __fastcall CheckVertTopology(int a1, int a2, unsigned __int16 a3)
{
  unsigned int v3; // r9d
  bool v7; // cc
  bool v8; // cc

  v3 = 0;
  if ( a1 < dword_1C0322ED8 )
  {
    if ( dword_1C0322ED8 >= State )
    {
      if ( dword_1C0322ED8 > State )
      {
LABEL_17:
        v3 = AddVertOn(a3);
        if ( v3 )
          return v3;
        return (unsigned int)AddVertOff(a3);
      }
      if ( dword_1C0322EDC >= dword_1C0322ED4 )
        return v3;
    }
    return (unsigned int)AddVertOn(a3);
  }
  if ( a1 <= dword_1C0322ED8 )
  {
    if ( dword_1C0322ED8 >= State )
    {
      if ( dword_1C0322ED8 > State )
      {
        if ( a2 >= dword_1C0322EDC )
          return v3;
        return (unsigned int)AddVertOff(a3);
      }
      v8 = dword_1C0322EDC < dword_1C0322ED4;
      if ( dword_1C0322EDC > dword_1C0322ED4 )
      {
        if ( a2 < dword_1C0322EDC )
          return (unsigned int)AddVertOff(a3);
        v8 = dword_1C0322EDC < dword_1C0322ED4;
      }
      if ( !v8 )
        return v3;
      v7 = a2 <= dword_1C0322EDC;
    }
    else
    {
      v7 = a2 <= dword_1C0322EDC;
    }
    if ( v7 )
      return v3;
    return (unsigned int)AddVertOn(a3);
  }
  if ( dword_1C0322ED8 < State )
    goto LABEL_17;
  if ( dword_1C0322ED8 > State || dword_1C0322EDC > dword_1C0322ED4 )
    return (unsigned int)AddVertOff(a3);
  return v3;
}
