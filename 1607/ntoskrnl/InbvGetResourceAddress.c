/*
 * XREFs of InbvGetResourceAddress @ 0x1401C35B8
 * Callers:
 *     DisplayBootBitmap @ 0x14013CBCC (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 InbvGetResourceAddress()
{
  __int64 (*v0)(void); // rdx

  if ( qword_140328E10 && (v0 = *(__int64 (**)(void))(qword_140328E10 + 128)) != 0LL )
    return v0();
  else
    return 0LL;
}
