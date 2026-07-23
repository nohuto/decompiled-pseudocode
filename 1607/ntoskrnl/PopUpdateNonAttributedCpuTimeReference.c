/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x140206EBC
 * Callers:
 *     PpmUpdateIdleVeto @ 0x1402015C0 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x140203054 (PopFxPlatformStateAvailable.c)
 *     PdcPoResiliencyClient @ 0x14066FCE8 (PdcPoResiliencyClient.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140206E5C (PopAccumulateNonActivatedCpuTime.c)
 */

void __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  KIRQL v2; // di
  char v3; // cl

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140328988);
  if ( a1 )
  {
    if ( ++dword_140328984 == 1 )
    {
      v3 = 0;
LABEL_6:
      PopAccumulateNonActivatedCpuTime(v3, &qword_1403288F8, &qword_140328900);
    }
  }
  else if ( !--dword_140328984 )
  {
    v3 = 1;
    goto LABEL_6;
  }
  KeReleaseSpinLock(&qword_140328988, v2);
}
