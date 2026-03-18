/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x1401EE4F0
 * Callers:
 *     PpmUpdateIdleVeto @ 0x1401E8D70 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x1401EA850 (PopFxPlatformStateAvailable.c)
 *     PdcPoResiliencyClient @ 0x14063795C (PdcPoResiliencyClient.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1401EE490 (PopAccumulateNonActivatedCpuTime.c)
 */

void __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  KIRQL v2; // di
  char v3; // cl

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140305B08);
  if ( a1 )
  {
    if ( ++dword_140305B04 == 1 )
    {
      v3 = 0;
LABEL_6:
      PopAccumulateNonActivatedCpuTime(v3, &qword_140305A78, &qword_140305A80);
    }
  }
  else if ( !--dword_140305B04 )
  {
    v3 = 1;
    goto LABEL_6;
  }
  KeReleaseSpinLock(&qword_140305B08, v2);
}
