/*
 * XREFs of InbvSetTextColor @ 0x1401C377C
 * Callers:
 *     DisplayBootBitmap @ 0x14013C65C (DisplayBootBitmap.c)
 * Callees:
 *     <none>
 */

__int64 InbvSetTextColor()
{
  __int64 (*v0)(void); // rdx

  if ( qword_140328DD0 && (v0 = *(__int64 (**)(void))(qword_140328DD0 + 80)) != 0LL )
    return v0();
  else
    return 0xFFFFFFFFLL;
}
