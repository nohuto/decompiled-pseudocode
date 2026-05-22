/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond__ @ 0x1800015A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PerfCounter::_dynamic_initializer_for__c_ticksPerSecond__()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  result = Frequency;
  qword_1800D3928 = Frequency.QuadPart;
  return result;
}
