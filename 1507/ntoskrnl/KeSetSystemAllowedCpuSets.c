/*
 * XREFs of KeSetSystemAllowedCpuSets @ 0x140132B54
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeCpuSetReportParkedProcessors @ 0x140132C60 (KeCpuSetReportParkedProcessors.c)
 *     KiValidateCpuSetMasks @ 0x14013356C (KiValidateCpuSetMasks.c)
 *     RtlWriteAcquireTickLock @ 0x140139E40 (RtlWriteAcquireTickLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 */

__int64 __fastcall KeSetSystemAllowedCpuSets(unsigned int a1, char *a2)
{
  char *v2; // rbx
  unsigned int v3; // esi
  __int64 result; // rax
  int v5; // edi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // r8d
  signed __int64 v8; // rdx
  signed __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax

  v2 = a2;
  v3 = a1;
  result = KiValidateCpuSetMasks(a2, a1);
  v5 = 0;
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( v3 >= 0x14 )
      v3 = 20;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&KiCpuSetLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiCpuSetLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiCpuSetLock);
    }
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v7 = 0;
    v8 = (char *)qword_1403D15E8 - v2;
    v9 = (char *)KiSystemAllowedCpuSets - v2;
    do
    {
      v10 = *(_QWORD *)&v2[v8];
      if ( v7 >= v3 )
        v11 = *(_QWORD *)&v2[v8];
      else
        v11 = *(_QWORD *)v2;
      *(_QWORD *)&v2[v9] = v11;
      if ( (v10 & v11) != v10 )
        v5 = 1;
      ++v7;
      v2 += 8;
    }
    while ( v7 < 0x14 );
    LOBYTE(v8) = CurrentIrql;
    KiRestrictedSystemCpuSetsActive = v5;
    ++KiCpuSetSequence;
    KeCpuSetReportParkedProcessors(0LL, v8);
    return 0LL;
  }
  return result;
}
