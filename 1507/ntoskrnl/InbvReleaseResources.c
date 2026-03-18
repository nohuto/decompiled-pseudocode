/*
 * XREFs of InbvReleaseResources @ 0x14015EED4
 * Callers:
 *     DisplayBootBitmap @ 0x14015EE80 (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x1401F0C90 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     <none>
 */

__int64 InbvReleaseResources()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140353AD8;
  if ( qword_140353AD8 )
  {
    v1 = *(__int64 (**)(void))(qword_140353AD8 + 168);
    if ( v1 )
      return v1();
  }
  return result;
}
