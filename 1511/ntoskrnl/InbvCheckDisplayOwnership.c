/*
 * XREFs of InbvCheckDisplayOwnership @ 0x1401B5B7C
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1401B5D7C (InbvRotateGuiBootDisplay.c)
 *     PopShutdownHandler @ 0x1403B2C90 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140305D60 && (v0 = *(__int64 (**)(void))(qword_140305D60 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
