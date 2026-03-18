/*
 * XREFs of InbvGetResourceAddress @ 0x1401F0B00
 * Callers:
 *     DisplayBootBitmap @ 0x14015EE80 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x140403F30 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 InbvGetResourceAddress()
{
  __int64 (*v0)(void); // rdx

  if ( qword_140353AD8 && (v0 = *(__int64 (**)(void))(qword_140353AD8 + 128)) != 0LL )
    return v0();
  else
    return 0LL;
}
