/*
 * XREFs of InbvReleaseLock @ 0x1401C371C
 * Callers:
 *     DisplayBootBitmap @ 0x14013C65C (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x1401C3864 (InbvRotateGuiBootDisplay.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 InbvReleaseLock()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140328DD0;
  if ( qword_140328DD0 )
  {
    v1 = *(__int64 (**)(void))(qword_140328DD0 + 160);
    if ( v1 )
      return v1();
  }
  return result;
}
