/*
 * XREFs of InbvResetDisplay @ 0x1401C3624
 * Callers:
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char InbvResetDisplay()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140328E10 && (v0 = *(__int64 (**)(void))(qword_140328E10 + 24)) != 0LL )
    return v0();
  else
    return 0;
}
