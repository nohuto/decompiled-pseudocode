/*
 * XREFs of KeSetSystemAllowedCpuSets @ 0x14011131C
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     RtlWriteAcquireTickLock @ 0x1400841A8 (RtlWriteAcquireTickLock.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KeCpuSetReportParkedProcessors @ 0x140111400 (KeCpuSetReportParkedProcessors.c)
 *     KiValidateCpuSetMasks @ 0x1401116FC (KiValidateCpuSetMasks.c)
 */

__int64 __fastcall KeSetSystemAllowedCpuSets(unsigned int a1, char *a2)
{
  char *v2; // rbx
  unsigned int v3; // esi
  __int64 result; // rax
  unsigned int v5; // edx
  int v6; // edi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v8; // r8d
  signed __int64 v9; // rdx
  signed __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax

  v2 = a2;
  v3 = a1;
  result = KiValidateCpuSetMasks(a2, a1);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( v5 >= 0x14 )
      v3 = 20;
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v8 = 0;
    v9 = (char *)qword_1403AA618 - v2;
    v10 = (char *)KiSystemAllowedCpuSets - v2;
    do
    {
      v11 = *(_QWORD *)&v2[v9];
      if ( v8 < v3 )
        v12 = *(_QWORD *)v2;
      else
        v12 = *(_QWORD *)&v2[v9];
      *(_QWORD *)&v2[v10] = v12;
      if ( (v11 & v12) != v11 )
        v6 = 1;
      ++v8;
      v2 += 8;
    }
    while ( v8 < 0x14 );
    LOBYTE(v9) = CurrentIrql;
    KiRestrictedSystemCpuSetsActive = v6;
    ++KiCpuSetSequence;
    KeCpuSetReportParkedProcessors(0LL, v9);
    return 0LL;
  }
  return result;
}
