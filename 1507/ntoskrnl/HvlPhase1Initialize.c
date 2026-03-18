/*
 * XREFs of HvlPhase1Initialize @ 0x1401706D4
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140115984 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140156464 (KeRegisterBugCheckReasonCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpMapStatisticsPage @ 0x1401E6A38 (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401E7698 (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x1401ED6C0 (HvlpInitializePowerStatistics.c)
 *     HvlpInitializeHvCrashdump @ 0x1401EFA5C (HvlpInitializeHvCrashdump.c)
 *     HvlpInitializeIum @ 0x1407F9184 (HvlpInitializeIum.c)
 */

__int64 __fastcall HvlPhase1Initialize(__int64 a1)
{
  __int64 v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-30h] BYREF

  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 && (HvlpRootFlags & 4) == 0 )
  {
    HvlpHvIdentityInfoCallbackRecord.State = 0;
    KeRegisterBugCheckReasonCallback(
      &HvlpHvIdentityInfoCallbackRecord,
      HvlpHvIdentityInfoCallback,
      KbCallbackSecondaryDumpData,
      &HvlpComponentName);
  }
  if ( (HvlpFlags & 1) != 0 )
  {
    HvlpSetupCachedHypercallPages(KeGetCurrentPrcb(), _RDX);
    HvlpInitializePowerStatistics();
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v10[0] = 0LL;
      v10[1] = 0LL;
      if ( (int)HvlpMapStatisticsPage(1LL, v10, &v9) >= 0 )
        HvlpHypervisorStatsPage = MmMapIoSpaceEx(v9, 4096LL, 2u);
    }
    v7 = *(_QWORD *)(a1 + 240);
    if ( (*(_DWORD *)(v7 + 116) & 0x200) != 0 && (HvlpFlags & 0x80u) != 0 )
      HvlpInitializeIum();
    HvlpFlags |= 0x10u;
    if ( (HvlpRootFlags & 4) != 0 )
      HvlpInitializeHvCrashdump(*(_QWORD *)(v7 + 2168), *(unsigned int *)(v7 + 2160));
  }
  return 0LL;
}
