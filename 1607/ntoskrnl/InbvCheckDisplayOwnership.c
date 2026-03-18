/*
 * XREFs of InbvCheckDisplayOwnership @ 0x1401C3664
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1401C3864 (InbvRotateGuiBootDisplay.c)
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140328DD0 && (v0 = *(__int64 (**)(void))(qword_140328DD0 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
