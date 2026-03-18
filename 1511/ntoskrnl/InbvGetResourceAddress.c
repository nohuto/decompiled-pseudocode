/*
 * XREFs of InbvGetResourceAddress @ 0x1401B5BEC
 * Callers:
 *     DisplayBootBitmap @ 0x1401344C8 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x1403B2C90 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 InbvGetResourceAddress()
{
  __int64 (*v0)(void); // rdx

  if ( qword_140305D60 && (v0 = *(__int64 (**)(void))(qword_140305D60 + 128)) != 0LL )
    return v0();
  else
    return 0LL;
}
