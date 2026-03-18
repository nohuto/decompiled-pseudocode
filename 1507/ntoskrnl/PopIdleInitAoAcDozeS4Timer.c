/*
 * XREFs of PopIdleInitAoAcDozeS4Timer @ 0x140599DD4
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14002F848 (KeInitializeTimer2.c)
 */

__int64 (__fastcall *PopIdleInitAoAcDozeS4Timer())()
{
  __int64 (__fastcall *result)(); // rax

  PopIdleAoAcDozeS4Lock = 0LL;
  KeInitializeTimer2((__int64)&PopIdleAoAcDozeS4Timer, (__int64)PopIdleAoAcDozeS4TimerCallback, 0LL, 2);
  qword_14032D298 = 0LL;
  result = PopIdleAoAcDozeToS4;
  PopIdleAoAcDozeS4WorkItem = 0LL;
  qword_14032D290 = (__int64)PopIdleAoAcDozeToS4;
  return result;
}
