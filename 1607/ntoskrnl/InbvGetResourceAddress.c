/*
 * XREFs of InbvGetResourceAddress @ 0x1401C36D4
 * Callers:
 *     DisplayBootBitmap @ 0x14013C65C (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 InbvGetResourceAddress()
{
  __int64 (*v0)(void); // rdx

  if ( qword_140328DD0 && (v0 = *(__int64 (**)(void))(qword_140328DD0 + 128)) != 0LL )
    return v0();
  else
    return 0LL;
}
