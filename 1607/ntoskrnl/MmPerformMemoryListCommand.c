/*
 * XREFs of MmPerformMemoryListCommand @ 0x1403D2CFC
 * Callers:
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x1403D049C (PfpPowerActionStartScenarioTracing.c)
 *     PfpLogScenarioEvent @ 0x14052FC18 (PfpLogScenarioEvent.c)
 *     MmIssueMemoryListCommand @ 0x1405467E8 (MmIssueMemoryListCommand.c)
 * Callees:
 *     MmFlushAllPages @ 0x140113180 (MmFlushAllPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x14013133C (MiCaptureAllWorkingSetAccessBits.c)
 *     MmEmptyAllWorkingSets @ 0x1401EA3D8 (MmEmptyAllWorkingSets.c)
 *     MiPurgeTransitionList @ 0x1401F3960 (MiPurgeTransitionList.c)
 */

__int64 __fastcall MmPerformMemoryListCommand(__int64 a1)
{
  int v1; // edx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  unsigned int v6; // ecx

  if ( !(_DWORD)a1 )
  {
    v1 = 0;
    goto LABEL_4;
  }
  a1 = (unsigned int)(a1 - 1);
  if ( !(_DWORD)a1 )
  {
    v1 = 1;
LABEL_4:
    MiCaptureAllWorkingSetAccessBits(a1, v1);
    return 0LL;
  }
  v3 = a1 - 1;
  if ( !v3 )
  {
    MmEmptyAllWorkingSets();
    return 0LL;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    MmFlushAllPages();
    return 0LL;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = 8;
    goto LABEL_14;
  }
  if ( v5 == 1 )
  {
    v6 = 1;
LABEL_14:
    MiPurgeTransitionList(v6);
    return 0LL;
  }
  return 3221225659LL;
}
