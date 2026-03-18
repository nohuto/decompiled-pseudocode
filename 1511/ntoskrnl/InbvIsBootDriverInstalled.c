/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1401345A8
 * Callers:
 *     DisplayBootBitmap @ 0x1401344C8 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x140134540 (BvgaReleaseResources.c)
 *     PopShutdownHandler @ 0x1403B2C90 (PopShutdownHandler.c)
 *     StartFirstUserProcess @ 0x14075BB50 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140305D60 && (v0 = *(__int64 (**)(void))(qword_140305D60 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
