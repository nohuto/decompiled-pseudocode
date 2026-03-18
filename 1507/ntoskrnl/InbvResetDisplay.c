/*
 * XREFs of InbvResetDisplay @ 0x1401F0B6C
 * Callers:
 *     PopShutdownHandler @ 0x140403F30 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char InbvResetDisplay()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140353AD8 && (v0 = *(__int64 (**)(void))(qword_140353AD8 + 24)) != 0LL )
    return v0();
  else
    return 0;
}
