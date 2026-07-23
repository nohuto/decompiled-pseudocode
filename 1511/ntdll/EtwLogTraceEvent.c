/*
 * XREFs of EtwLogTraceEvent @ 0x18004CC30
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     EtwpTraceUmEvent @ 0x18004CC90 (EtwpTraceUmEvent.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 __fastcall EtwLogTraceEvent(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  NTSTATUS v3; // eax

  v2 = 0;
  if ( a2 )
  {
    if ( (a1 & 0x1000000) != 0 )
    {
      return (unsigned int)EtwpTraceUmEvent(a1, a2, 48LL, 3222536192LL);
    }
    else
    {
      v3 = NtTraceEvent((HANDLE)(unsigned __int16)a1, 0x100u, 0x30u, a2);
      if ( !v3 )
        return v2;
      return RtlNtStatusToDosError(v3);
    }
  }
  return 87LL;
}
