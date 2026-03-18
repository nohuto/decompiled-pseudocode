/*
 * XREFs of KdpQuickMoveMemory @ 0x1406AD754
 * Callers:
 *     KdpGetContextEx @ 0x1401C2214 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x1401C23CC (KdpSetContextEx.c)
 *     KdpReportExceptionStateChange @ 0x1406AB694 (KdpReportExceptionStateChange.c)
 *     KdpSearchMemory @ 0x1406AB95C (KdpSearchMemory.c)
 *     KdpPrint @ 0x1406ACDA4 (KdpPrint.c)
 *     KdpPrompt @ 0x1406ACF04 (KdpPrompt.c)
 *     KdpCopyContext @ 0x1406AD59C (KdpCopyContext.c)
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
