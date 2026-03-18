/*
 * XREFs of HvlPhase1Initialize @ 0x1401428B0
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400C0C7C (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140123974 (KeRegisterBugCheckReasonCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpMapStatisticsPage @ 0x1401AF48C (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401AFDE4 (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x1401B2C20 (HvlpInitializePowerStatistics.c)
 *     HvlpInitializeHvCrashdump @ 0x1401B4B7C (HvlpInitializeHvCrashdump.c)
 *     HvlpInitializeIum @ 0x1407829C0 (HvlpInitializeIum.c)
 */

__int64 __fastcall HvlPhase1Initialize(__int64 a1)
{
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-30h] BYREF

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
      v12[0] = 0LL;
      v12[1] = 0LL;
      if ( (int)HvlpMapStatisticsPage(1LL, v12, &v11) >= 0 )
        HvlpHypervisorStatsPage = MmMapIoSpaceEx(v11, 4096LL, 2u);
    }
    v8 = *(_QWORD *)(a1 + 240);
    v9 = HvlpFlags;
    if ( (*(_DWORD *)(v8 + 116) & 0x200) != 0 && (HvlpFlags & 0x80u) != 0 )
    {
      HvlpInitializeIum();
      v9 = HvlpFlags;
    }
    v10 = v9 | 0x10;
    HvlpFlags = v10;
    if ( (HvlpRootFlags & 4) != 0 || (v10 & 0x2000) != 0 )
      HvlpInitializeHvCrashdump(*(_QWORD *)(v8 + 2168), *(unsigned int *)(v8 + 2160));
  }
  return 0LL;
}
