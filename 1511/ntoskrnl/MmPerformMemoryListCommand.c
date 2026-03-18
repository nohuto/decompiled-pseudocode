/*
 * XREFs of MmPerformMemoryListCommand @ 0x1403A5F50
 * Callers:
 *     PfPowerActionNotify @ 0x1403A46FC (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x1403A56C8 (PfpPowerActionStartScenarioTracing.c)
 *     PfpLogScenarioEvent @ 0x1404F7B2C (PfpLogScenarioEvent.c)
 *     MmIssueMemoryListCommand @ 0x1404F9CC0 (MmIssueMemoryListCommand.c)
 * Callees:
 *     MmFlushAllPages @ 0x140118BBC (MmFlushAllPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x14011B79C (MiCaptureAllWorkingSetAccessBits.c)
 *     MmEmptyAllWorkingSets @ 0x1401D86C4 (MmEmptyAllWorkingSets.c)
 *     MiPurgeTransitionList @ 0x1401E4210 (MiPurgeTransitionList.c)
 */

__int64 __fastcall MmPerformMemoryListCommand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // ecx

  if ( !(_DWORD)a1 )
  {
    v4 = 0;
    goto LABEL_4;
  }
  a1 = (unsigned int)(a1 - 1);
  if ( !(_DWORD)a1 )
  {
    v4 = 1;
LABEL_4:
    MiCaptureAllWorkingSetAccessBits(a1, v4, a3, a4);
    return 0LL;
  }
  v6 = a1 - 1;
  if ( !v6 )
  {
    MmEmptyAllWorkingSets();
    return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    MmFlushAllPages();
    return 0LL;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = 8;
    goto LABEL_14;
  }
  if ( v8 == 1 )
  {
    v9 = 1;
LABEL_14:
    MiPurgeTransitionList(v9);
    return 0LL;
  }
  return 3221225659LL;
}
