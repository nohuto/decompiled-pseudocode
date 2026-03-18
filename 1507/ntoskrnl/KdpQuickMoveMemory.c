/*
 * XREFs of KdpQuickMoveMemory @ 0x14072D7A0
 * Callers:
 *     KdpGetContextEx @ 0x1401FDF40 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x1401FE0F4 (KdpSetContextEx.c)
 *     KdpReportExceptionStateChange @ 0x14072B6DC (KdpReportExceptionStateChange.c)
 *     KdpSearchMemory @ 0x14072B9A4 (KdpSearchMemory.c)
 *     KdpPrint @ 0x14072CE60 (KdpPrint.c)
 *     KdpPrompt @ 0x14072CFC0 (KdpPrompt.c)
 *     KdpCopyContext @ 0x14072D5E8 (KdpCopyContext.c)
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
