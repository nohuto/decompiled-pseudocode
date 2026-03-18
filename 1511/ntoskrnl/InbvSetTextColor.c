/*
 * XREFs of InbvSetTextColor @ 0x1401B5C94
 * Callers:
 *     DisplayBootBitmap @ 0x1401344C8 (DisplayBootBitmap.c)
 * Callees:
 *     <none>
 */

__int64 InbvSetTextColor()
{
  __int64 (*v0)(void); // rdx

  if ( qword_140305D60 && (v0 = *(__int64 (**)(void))(qword_140305D60 + 80)) != 0LL )
    return v0();
  else
    return 0xFFFFFFFFLL;
}
