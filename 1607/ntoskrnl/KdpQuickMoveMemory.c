/*
 * XREFs of KdpQuickMoveMemory @ 0x1406F2720
 * Callers:
 *     KdpSetContextEx @ 0x140125420 (KdpSetContextEx.c)
 *     KdpGetContextEx @ 0x14012E1CC (KdpGetContextEx.c)
 *     KdpPrint @ 0x1406F20D8 (KdpPrint.c)
 *     KdpCopyContext @ 0x1406F26AC (KdpCopyContext.c)
 *     KdpReportExceptionStateChange @ 0x1406F4050 (KdpReportExceptionStateChange.c)
 *     KdpSearchMemory @ 0x1406F5684 (KdpSearchMemory.c)
 *     KdpPrompt @ 0x1406F5E00 (KdpPrompt.c)
 * Callees:
 *     <none>
 */

char __fastcall KdpQuickMoveMemory(__int64 a1, char *a2, int a3)
{
  __int64 v3; // rcx
  char result; // al

  if ( a3 )
  {
    v3 = a1 - (_QWORD)a2;
    do
    {
      result = *a2;
      a2[v3] = *a2;
      ++a2;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
