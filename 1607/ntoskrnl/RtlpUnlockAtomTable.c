/*
 * XREFs of RtlpUnlockAtomTable @ 0x14042A2C0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140014214 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14010CE34 (RtlDestroyLowBoxAtoms.c)
 *     RtlPinAtomInAtomTable @ 0x1404C4A6C (RtlPinAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14051B230 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14051B968 (RtlDeleteAtomFromAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1406882B4 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140688394 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
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
