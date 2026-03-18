/*
 * XREFs of CheckHorizTopology @ 0x1C00BD794
 * Callers:
 *     fsc_CheckEndPoint @ 0x1C00C02E4 (fsc_CheckEndPoint.c)
 *     fsc_EndContourEndpoint @ 0x1C00C126C (fsc_EndContourEndpoint.c)
 * Callees:
 *     AddHorizOn @ 0x1C00BD628 (AddHorizOn.c)
 *     AddHorizOff @ 0x1C00BD684 (AddHorizOff.c)
 */

__int64 __fastcall CheckHorizTopology(int a1, int a2, unsigned __int16 a3)
{
  unsigned int v3; // r9d
  bool v7; // cc
  bool v8; // cc

  v3 = 0;
  if ( a2 > dword_1C03292FC )
  {
    if ( dword_1C03292FC <= dword_1C03292F4 )
    {
      if ( dword_1C03292FC < dword_1C03292F4 )
      {
LABEL_11:
        v3 = AddHorizOn(a3);
        if ( v3 )
          return v3;
        return (unsigned int)AddHorizOff(a3);
      }
      if ( dword_1C03292F8 >= State[0] )
        return v3;
    }
    return (unsigned int)AddHorizOn(a3);
  }
  if ( a2 >= dword_1C03292FC )
  {
    if ( dword_1C03292FC <= dword_1C03292F4 )
    {
      if ( dword_1C03292FC < dword_1C03292F4 )
      {
        if ( a1 >= dword_1C03292F8 )
          return v3;
        return (unsigned int)AddHorizOff(a3);
      }
      v8 = dword_1C03292F8 < State[0];
      if ( dword_1C03292F8 > State[0] )
      {
        if ( a1 < dword_1C03292F8 )
          return (unsigned int)AddHorizOff(a3);
        v8 = dword_1C03292F8 < State[0];
      }
      if ( !v8 )
        return v3;
      v7 = a1 <= dword_1C03292F8;
    }
    else
    {
      v7 = a1 <= dword_1C03292F8;
    }
    if ( v7 )
      return v3;
    return (unsigned int)AddHorizOn(a3);
  }
  if ( dword_1C03292FC > dword_1C03292F4 )
    goto LABEL_11;
  if ( dword_1C03292FC < dword_1C03292F4 || dword_1C03292F8 > State[0] )
    return (unsigned int)AddHorizOff(a3);
  return v3;
}
