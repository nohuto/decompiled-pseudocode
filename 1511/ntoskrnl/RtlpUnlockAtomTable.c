/*
 * XREFs of RtlpUnlockAtomTable @ 0x14045FF90
 * Callers:
 *     RtlDestroyLowBoxAtoms @ 0x140099C4C (RtlDestroyLowBoxAtoms.c)
 *     RtlAddAtomToAtomTableEx @ 0x140099D18 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x14045F99C (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14045FA88 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14045FED4 (RtlDeleteAtomFromAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140648C0C (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140648CEC (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

void __fastcall RtlpUnlockAtomTable(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
