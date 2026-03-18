/*
 * XREFs of KiConfigureCpuSetSchedulingInformation @ 0x1403FA4A8
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x1403FA120 (KiConfigureSchedulingInformation.c)
 *     KeConfigureHeteroProcessors @ 0x1403FA8E0 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiGetCpuSetData @ 0x140131B0C (KiGetCpuSetData.c)
 *     RtlWriteAcquireTickLock @ 0x140139E40 (RtlWriteAcquireTickLock.c)
 *     RtlWriteReleaseTickLock @ 0x140139F44 (RtlWriteReleaseTickLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiConfigureCpuSetSchedulingInformation(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  _BYTE *CpuSetData; // r9
  char v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiCpuSetLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiCpuSetLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiCpuSetLock);
  }
  RtlWriteAcquireTickLock(&KiCpuSetSequence);
  CpuSetData = (_BYTE *)KiGetCpuSetData(*(unsigned __int8 *)(a1 + 1616), *(unsigned __int8 *)(a1 + 1617));
  *CpuSetData = v4;
  CpuSetData[1] = *(_BYTE *)(a1 + 1617);
  _BitScanForward64(&v5, *(_QWORD *)(a1 + 24792));
  v6 = (unsigned __int64 *)(a1 + 24816);
  CpuSetData[2] = v5;
  v7 = 0LL;
  v8 = 5LL;
  do
  {
    v9 = *v6++;
    if ( v9 )
      v7 = v9;
    --v8;
  }
  while ( v8 );
  if ( v7 )
  {
    _BitScanForward64(&v10, v7);
    CpuSetData[3] = v10;
  }
  _BitScanForward64(&v11, *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 136LL));
  CpuSetData[4] = v11;
  CpuSetData[5] = *(_BYTE *)(a1 + 23858);
  RtlWriteReleaseTickLock(&KiCpuSetSequence);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KiCpuSetLock, retaddr);
  else
    _InterlockedAnd64(&KiCpuSetLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
