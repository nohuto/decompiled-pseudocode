/*
 * XREFs of KiInitializeTimer2Data @ 0x140163724
 * Callers:
 *     KeInitializeTimerTable @ 0x14059A850 (KeInitializeTimerTable.c)
 * Callees:
 *     <none>
 */

__int64 *KiInitializeTimer2Data()
{
  __int64 *result; // rax

  result = &qword_140338D90;
  do
  {
    *(result - 2) = 0LL;
    *(result - 1) = 0LL;
    *result = -1LL;
    result += 3;
  }
  while ( (__int64)result < (__int64)&KiHighResolutionTimerClockIntervalRequest.Children[1] );
  KiNextTimer2DueTime = -1LL;
  return result;
}
