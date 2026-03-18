/*
 * XREFs of InbvReleaseResources @ 0x14013C6B0
 * Callers:
 *     DisplayBootBitmap @ 0x14013C65C (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x1401C3864 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     <none>
 */

__int64 InbvReleaseResources()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140328DD0;
  if ( qword_140328DD0 )
  {
    v1 = *(__int64 (**)(void))(qword_140328DD0 + 168);
    if ( v1 )
      return v1();
  }
  return result;
}
