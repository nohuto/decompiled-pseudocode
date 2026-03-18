/*
 * XREFs of InbvCheckDisplayOwnership @ 0x1401F0A90
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1401F0C90 (InbvRotateGuiBootDisplay.c)
 *     PopShutdownHandler @ 0x140403F30 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140353AD8 && (v0 = *(__int64 (**)(void))(qword_140353AD8 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
