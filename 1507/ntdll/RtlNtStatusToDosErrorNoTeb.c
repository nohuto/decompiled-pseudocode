/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x18006DFB0
 * Callers:
 *     TppSetTimer @ 0x18003D288 (TppSetTimer.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x1800717C0 (RtlQueryUnbiasedInterruptTime.c)
 *     LdrpRedirectDelayloadFailure @ 0x180077574 (LdrpRedirectDelayloadFailure.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 */

__int64 __fastcall RtlNtStatusToDosErrorNoTeb(unsigned int a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
  unsigned int v3; // r9d
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // r10d
  int v7; // eax

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( a1 == 259 )
    return 997LL;
  result = a1;
  if ( (a1 & 0x20000000) == 0 )
  {
    if ( (a1 & 0xFF0000) != 0x70000 || ((HIBYTE(a1) - 128) & 0xFFFFFFBF) != 0 )
    {
      if ( (a1 & 0xF0000000) == 0xD0000000 )
        a1 &= 0xCFFFFFFF;
      v3 = 275;
      do
      {
        v4 = (v3 + v1) >> 1;
        v5 = RtlpRunTable[2 * v4];
        v6 = a1 - v5;
        if ( a1 < v5 )
        {
          v3 = v4 - 1;
        }
        else
        {
          if ( v6 < (unsigned __int8)byte_180108AE4[8 * v4] )
          {
            v7 = (unsigned __int16)word_180108AE6[4 * v4];
            if ( byte_180108AE5[8 * v4] == 1 )
              return (unsigned __int16)RtlpStatusTable[v6 + v7];
            else
              return (unsigned __int16)RtlpStatusTable[2 * v6 + v7] | ((unsigned __int16)RtlpStatusTable[2 * v6 + 1 + v7] << 16);
          }
          v1 = v4 + 1;
        }
      }
      while ( v1 <= v3 );
      if ( (a1 & 0xFFFF0000) == 0xC0010000 )
        return (unsigned __int16)a1;
      DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", a1);
      DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
      DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
      return 317LL;
    }
    else
    {
      return (unsigned __int16)a1;
    }
  }
  return result;
}
