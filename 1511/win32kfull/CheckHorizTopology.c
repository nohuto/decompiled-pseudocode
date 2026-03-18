/*
 * XREFs of CheckHorizTopology @ 0x1C00A6840
 * Callers:
 *     fsc_CheckEndPoint @ 0x1C00A884C (fsc_CheckEndPoint.c)
 *     fsc_EndContourEndpoint @ 0x1C00A922C (fsc_EndContourEndpoint.c)
 * Callees:
 *     AddHorizOn @ 0x1C00A4ACC (AddHorizOn.c)
 *     AddHorizOff @ 0x1C00A4B28 (AddHorizOff.c)
 */

__int64 __fastcall CheckHorizTopology(int a1, int a2, unsigned __int16 a3)
{
  unsigned int v3; // r9d
  bool v7; // cc
  bool v8; // cc

  v3 = 0;
  if ( a2 > dword_1C0323BFC )
  {
    if ( dword_1C0323BFC <= dword_1C0323BF4 )
    {
      if ( dword_1C0323BFC < dword_1C0323BF4 )
      {
LABEL_11:
        v3 = AddHorizOn(a3);
        if ( v3 )
          return v3;
        return (unsigned int)AddHorizOff(a3);
      }
      if ( dword_1C0323BF8 >= State )
        return v3;
    }
    return (unsigned int)AddHorizOn(a3);
  }
  if ( a2 >= dword_1C0323BFC )
  {
    if ( dword_1C0323BFC <= dword_1C0323BF4 )
    {
      if ( dword_1C0323BFC < dword_1C0323BF4 )
      {
        if ( a1 >= dword_1C0323BF8 )
          return v3;
        return (unsigned int)AddHorizOff(a3);
      }
      v8 = dword_1C0323BF8 < State;
      if ( dword_1C0323BF8 > State )
      {
        if ( a1 < dword_1C0323BF8 )
          return (unsigned int)AddHorizOff(a3);
        v8 = dword_1C0323BF8 < State;
      }
      if ( !v8 )
        return v3;
      v7 = a1 <= dword_1C0323BF8;
    }
    else
    {
      v7 = a1 <= dword_1C0323BF8;
    }
    if ( v7 )
      return v3;
    return (unsigned int)AddHorizOn(a3);
  }
  if ( dword_1C0323BFC > dword_1C0323BF4 )
    goto LABEL_11;
  if ( dword_1C0323BFC < dword_1C0323BF4 || dword_1C0323BF8 > State )
    return (unsigned int)AddHorizOff(a3);
  return v3;
}
