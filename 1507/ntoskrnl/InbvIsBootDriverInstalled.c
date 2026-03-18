/*
 * XREFs of InbvIsBootDriverInstalled @ 0x14015EF60
 * Callers:
 *     DisplayBootBitmap @ 0x14015EE80 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x14015EEF8 (BvgaReleaseResources.c)
 *     PopShutdownHandler @ 0x140403F30 (PopShutdownHandler.c)
 *     StartFirstUserProcess @ 0x1407BC5B4 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140353AD8 && (v0 = *(__int64 (**)(void))(qword_140353AD8 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
