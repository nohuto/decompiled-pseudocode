/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x18007A370
 * Callers:
 *     TppSetTimer @ 0x18003C378 (TppSetTimer.c)
 *     LdrpRedirectDelayloadFailure @ 0x18007B718 (LdrpRedirectDelayloadFailure.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x18007D850 (RtlQueryUnbiasedInterruptTime.c)
 * Callees:
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 */

ULONG __cdecl RtlNtStatusToDosErrorNoTeb(NTSTATUS Status)
{
  unsigned int v1; // r8d
  ULONG result; // eax
  unsigned int v3; // r9d
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // r10d
  int v7; // eax

  v1 = 0;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  result = Status;
  if ( (Status & 0x20000000) == 0 )
  {
    if ( (Status & 0xFF0000) != 0x70000 || ((HIBYTE(Status) - 128) & 0xFFFFFFBF) != 0 )
    {
      if ( (Status & 0xF0000000) == 0xD0000000 )
        Status &= 0xCFFFFFFF;
      v3 = 287;
      do
      {
        v4 = (v3 + v1) >> 1;
        v5 = RtlpRunTable[2 * v4];
        v6 = Status - v5;
        if ( Status < v5 )
        {
          v3 = v4 - 1;
        }
        else
        {
          if ( v6 < (unsigned __int8)byte_18011AF44[8 * v4] )
          {
            v7 = (unsigned __int16)word_18011AF46[4 * v4];
            if ( byte_18011AF45[8 * v4] == 1 )
              return (unsigned __int16)RtlpStatusTable[v6 + v7];
            else
              return (unsigned __int16)RtlpStatusTable[2 * v6 + v7] | ((unsigned __int16)RtlpStatusTable[2 * v6 + 1 + v7] << 16);
          }
          v1 = v4 + 1;
        }
      }
      while ( v1 <= v3 );
      if ( (Status & 0xFFFF0000) == 0xC0010000 )
        return (unsigned __int16)Status;
      DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", Status);
      DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
      DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
      return 317;
    }
    else
    {
      return (unsigned __int16)Status;
    }
  }
  return result;
}
