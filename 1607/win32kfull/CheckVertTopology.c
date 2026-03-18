/*
 * XREFs of CheckVertTopology @ 0x1C00BD6E0
 * Callers:
 *     fsc_CheckEndPoint @ 0x1C00C02E4 (fsc_CheckEndPoint.c)
 *     fsc_EndContourEndpoint @ 0x1C00C126C (fsc_EndContourEndpoint.c)
 * Callees:
 *     AddVertOff @ 0x1C00BD570 (AddVertOff.c)
 *     AddVertOn @ 0x1C00BD5CC (AddVertOn.c)
 */

__int64 __fastcall CheckVertTopology(int a1, int a2, unsigned __int16 a3)
{
  unsigned int v3; // r9d
  bool v7; // cc
  bool v8; // cc

  v3 = 0;
  if ( a1 < dword_1C03292F8 )
  {
    if ( dword_1C03292F8 >= State[0] )
    {
      if ( dword_1C03292F8 > State[0] )
      {
LABEL_17:
        v3 = AddVertOn(a3);
        if ( v3 )
          return v3;
        return (unsigned int)AddVertOff(a3);
      }
      if ( dword_1C03292FC >= dword_1C03292F4 )
        return v3;
    }
    return (unsigned int)AddVertOn(a3);
  }
  if ( a1 <= dword_1C03292F8 )
  {
    if ( dword_1C03292F8 >= State[0] )
    {
      if ( dword_1C03292F8 > State[0] )
      {
        if ( a2 >= dword_1C03292FC )
          return v3;
        return (unsigned int)AddVertOff(a3);
      }
      v8 = dword_1C03292FC < dword_1C03292F4;
      if ( dword_1C03292FC > dword_1C03292F4 )
      {
        if ( a2 < dword_1C03292FC )
          return (unsigned int)AddVertOff(a3);
        v8 = dword_1C03292FC < dword_1C03292F4;
      }
      if ( !v8 )
        return v3;
      v7 = a2 <= dword_1C03292FC;
    }
    else
    {
      v7 = a2 <= dword_1C03292FC;
    }
    if ( v7 )
      return v3;
    return (unsigned int)AddVertOn(a3);
  }
  if ( dword_1C03292F8 < State[0] )
    goto LABEL_17;
  if ( dword_1C03292F8 > State[0] || dword_1C03292FC > dword_1C03292F4 )
    return (unsigned int)AddVertOff(a3);
  return v3;
}
