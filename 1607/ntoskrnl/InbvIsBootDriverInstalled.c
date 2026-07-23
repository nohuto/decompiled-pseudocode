/*
 * XREFs of InbvIsBootDriverInstalled @ 0x14013CCAC
 * Callers:
 *     DisplayBootBitmap @ 0x14013CBCC (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x14013CC44 (BvgaReleaseResources.c)
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140328E10 && (v0 = *(__int64 (**)(void))(qword_140328E10 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
