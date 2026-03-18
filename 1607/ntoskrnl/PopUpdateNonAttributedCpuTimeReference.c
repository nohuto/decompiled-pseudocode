/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x140207090
 * Callers:
 *     PpmUpdateIdleVeto @ 0x140201794 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x140203228 (PopFxPlatformStateAvailable.c)
 *     PdcPoResiliencyClient @ 0x14066FC04 (PdcPoResiliencyClient.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140207030 (PopAccumulateNonActivatedCpuTime.c)
 */

void __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  KIRQL v2; // di
  char v3; // cl

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140328948);
  if ( a1 )
  {
    if ( ++dword_140328944 == 1 )
    {
      v3 = 0;
LABEL_6:
      PopAccumulateNonActivatedCpuTime(v3, &qword_1403288B8, &qword_1403288C0);
    }
  }
  else if ( !--dword_140328944 )
  {
    v3 = 1;
    goto LABEL_6;
  }
  KeReleaseSpinLock(&qword_140328948, v2);
}
