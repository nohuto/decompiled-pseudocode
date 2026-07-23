/*
 * XREFs of InbvAcquireLock @ 0x1401C3504
 * Callers:
 *     DisplayBootBitmap @ 0x14013CBCC (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x1401C3748 (InbvRotateGuiBootDisplay.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 InbvAcquireLock()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140328E10;
  if ( qword_140328E10 )
  {
    v1 = *(__int64 (**)(void))(qword_140328E10 + 152);
    if ( v1 )
      return v1();
  }
  return result;
}
