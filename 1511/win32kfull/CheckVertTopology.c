/*
 * XREFs of CheckVertTopology @ 0x1C00A6CF4
 * Callers:
 *     fsc_CheckEndPoint @ 0x1C00A884C (fsc_CheckEndPoint.c)
 *     fsc_EndContourEndpoint @ 0x1C00A922C (fsc_EndContourEndpoint.c)
 * Callees:
 *     AddVertOff @ 0x1C00A4DD0 (AddVertOff.c)
 *     AddVertOn @ 0x1C00A4E2C (AddVertOn.c)
 */

__int64 __fastcall CheckVertTopology(int a1, int a2, unsigned __int16 a3)
{
  unsigned int v3; // r9d
  bool v7; // cc
  bool v8; // cc

  v3 = 0;
  if ( a1 < dword_1C0323BF8 )
  {
    if ( dword_1C0323BF8 >= State )
    {
      if ( dword_1C0323BF8 > State )
      {
LABEL_15:
        v3 = AddVertOn(a3);
        if ( v3 )
          return v3;
        return (unsigned int)AddVertOff(a3);
      }
      if ( dword_1C0323BFC >= dword_1C0323BF4 )
        return v3;
    }
    return (unsigned int)AddVertOn(a3);
  }
  if ( a1 <= dword_1C0323BF8 )
  {
    if ( dword_1C0323BF8 >= State )
    {
      if ( dword_1C0323BF8 > State )
      {
        if ( a2 >= dword_1C0323BFC )
          return v3;
        return (unsigned int)AddVertOff(a3);
      }
      v8 = dword_1C0323BFC < dword_1C0323BF4;
      if ( dword_1C0323BFC > dword_1C0323BF4 )
      {
        if ( a2 < dword_1C0323BFC )
          return (unsigned int)AddVertOff(a3);
        v8 = dword_1C0323BFC < dword_1C0323BF4;
      }
      if ( !v8 )
        return v3;
      v7 = a2 <= dword_1C0323BFC;
    }
    else
    {
      v7 = a2 <= dword_1C0323BFC;
    }
    if ( v7 )
      return v3;
    return (unsigned int)AddVertOn(a3);
  }
  if ( dword_1C0323BF8 < State )
    goto LABEL_15;
  if ( dword_1C0323BF8 > State || dword_1C0323BFC > dword_1C0323BF4 )
    return (unsigned int)AddVertOff(a3);
  return v3;
}
