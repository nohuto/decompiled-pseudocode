/*
 * XREFs of InbvReleaseResources @ 0x14013451C
 * Callers:
 *     DisplayBootBitmap @ 0x1401344C8 (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x1401B5D7C (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     <none>
 */

__int64 InbvReleaseResources()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140305D60;
  if ( qword_140305D60 )
  {
    v1 = *(__int64 (**)(void))(qword_140305D60 + 168);
    if ( v1 )
      return v1();
  }
  return result;
}
