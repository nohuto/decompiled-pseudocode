/*
 * XREFs of InbvReleaseResources @ 0x14013CC20
 * Callers:
 *     DisplayBootBitmap @ 0x14013CBCC (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x1401C3748 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     <none>
 */

__int64 InbvReleaseResources()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140328E10;
  if ( qword_140328E10 )
  {
    v1 = *(__int64 (**)(void))(qword_140328E10 + 168);
    if ( v1 )
      return v1();
  }
  return result;
}
