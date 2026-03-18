/*
 * XREFs of KiIntSteerInit @ 0x14079266C
 * Callers:
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1400D3F88 (KeAddProcessorAffinityEx.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     xHalSetSystemInformation @ 0x140581940 (xHalSetSystemInformation.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140792718 (KiIntSteerDetermineSteeringEnabled.c)
 */

__int64 KiIntSteerInit()
{
  KiIntTrackRootCount = 0;
  KiIntTrackSpinlock = 0LL;
  qword_140307948 = (__int64)&KiIntTrackRootList;
  KiIntTrackRootList = (ULONG_PTR)&KiIntTrackRootList;
  KiIntSteerMask = 1310721;
  memset(&dword_140307964, 0, 0xA4uLL);
  KeAddProcessorAffinityEx(&KiIntSteerMask, 0);
  KiIntSteerAffinitizedInterrupts[0] = 1310721;
  memset(&unk_140307A24, 0, 0xA4uLL);
  off_1402F37E8();
  KiIntSteerEnabled = KiIntSteerDetermineSteeringEnabled();
  return 0LL;
}
