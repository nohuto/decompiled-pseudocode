/*
 * XREFs of KiIntSteerInit @ 0x14074EC6C
 * Callers:
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
 */

__int64 KiIntSteerInit()
{
  KiIntTrackRootCount = 0;
  KiIntTrackSpinlock = 0LL;
  dword_1402E2464 = 0;
  qword_1402E2448 = (__int64)&KiIntTrackRootList;
  KiIntTrackRootList = (ULONG_PTR)&KiIntTrackRootList;
  KiIntSteerMask = 1310721;
  memset(qword_1402E2468, 0, sizeof(qword_1402E2468));
  KeAddProcessorAffinityEx(&KiIntSteerMask, 0);
  dword_1402E2524 = 0;
  KiIntSteerAffinitizedInterrupts[0] = 1310721;
  memset(qword_1402E2528, 0, sizeof(qword_1402E2528));
  off_1402D29C8();
  return 0LL;
}
