/*
 * XREFs of RtlpUnlockAtomTable @ 0x14042B3F0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140014694 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140088C44 (RtlDestroyLowBoxAtoms.c)
 *     RtlDestroyAtomTable @ 0x1404A2E30 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1404A3568 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1404E1468 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1406881D0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1406882B0 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
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
