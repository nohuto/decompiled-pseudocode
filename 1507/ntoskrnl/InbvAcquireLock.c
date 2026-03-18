/*
 * XREFs of InbvAcquireLock @ 0x1401F0A4C
 * Callers:
 *     DisplayBootBitmap @ 0x14015EE80 (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x1401F0C90 (InbvRotateGuiBootDisplay.c)
 *     StartFirstUserProcess @ 0x1407BC5B4 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 InbvAcquireLock()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140353AD8;
  if ( qword_140353AD8 )
  {
    v1 = *(__int64 (**)(void))(qword_140353AD8 + 152);
    if ( v1 )
      return v1();
  }
  return result;
}
