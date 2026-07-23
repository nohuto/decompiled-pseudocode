/*
 * XREFs of KiIntSteerInit @ 0x14079266C
 * Callers:
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140792718 (KiIntSteerDetermineSteeringEnabled.c)
 */

__int64 KiIntSteerInit()
{
  KiIntTrackRootCount = 0;
  KiIntTrackSpinlock = 0LL;
  qword_140307978 = (__int64)&KiIntTrackRootList;
  KiIntTrackRootList = (ULONG_PTR)&KiIntTrackRootList;
  KiIntSteerMask = 1310721;
  memset(&dword_1403079A4, 0, 0xA4uLL);
  KeAddProcessorAffinityEx(&KiIntSteerMask, 0);
  KiIntSteerAffinitizedInterrupts[0] = 1310721;
  memset(&unk_140307A64, 0, 0xA4uLL);
  off_1402F37E8();
  KiIntSteerEnabled = KiIntSteerDetermineSteeringEnabled();
  return 0LL;
}
