/*
 * XREFs of InbvSetTextColor @ 0x1401F0BA8
 * Callers:
 *     DisplayBootBitmap @ 0x14015EE80 (DisplayBootBitmap.c)
 * Callees:
 *     <none>
 */

__int64 InbvSetTextColor()
{
  __int64 (*v0)(void); // rdx

  if ( qword_140353AD8 && (v0 = *(__int64 (**)(void))(qword_140353AD8 + 80)) != 0LL )
    return v0();
  else
    return 0xFFFFFFFFLL;
}
