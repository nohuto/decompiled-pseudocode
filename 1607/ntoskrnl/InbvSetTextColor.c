/*
 * XREFs of InbvSetTextColor @ 0x1401C3660
 * Callers:
 *     DisplayBootBitmap @ 0x14013CBCC (DisplayBootBitmap.c)
 * Callees:
 *     <none>
 */

__int64 InbvSetTextColor()
{
  __int64 (*v0)(void); // rdx

  if ( qword_140328E10 && (v0 = *(__int64 (**)(void))(qword_140328E10 + 80)) != 0LL )
    return v0();
  else
    return 0xFFFFFFFFLL;
}
