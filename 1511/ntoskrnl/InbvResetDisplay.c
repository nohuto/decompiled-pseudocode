/*
 * XREFs of InbvResetDisplay @ 0x1401B5C58
 * Callers:
 *     PopShutdownHandler @ 0x1403B2C90 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char InbvResetDisplay()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140305D60 && (v0 = *(__int64 (**)(void))(qword_140305D60 + 24)) != 0LL )
    return v0();
  else
    return 0;
}
