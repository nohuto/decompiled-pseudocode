/*
 * XREFs of InbvIsBootDriverInstalled @ 0x14013C73C
 * Callers:
 *     DisplayBootBitmap @ 0x14013C65C (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x14013C6D4 (BvgaReleaseResources.c)
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140328DD0 && (v0 = *(__int64 (**)(void))(qword_140328DD0 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
