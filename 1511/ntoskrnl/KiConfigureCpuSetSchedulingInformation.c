/*
 * XREFs of KiConfigureCpuSetSchedulingInformation @ 0x1403A8E4C
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x1403A8B9C (KiConfigureSchedulingInformation.c)
 *     KeConfigureHeteroProcessors @ 0x1403AA258 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     RtlWriteReleaseTickLock @ 0x1400DE3CC (RtlWriteReleaseTickLock.c)
 *     RtlWriteAcquireTickLock @ 0x1400DE444 (RtlWriteAcquireTickLock.c)
 *     KiGetCpuSetData @ 0x1400F43F4 (KiGetCpuSetData.c)
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

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(&KiCpuSetLock);
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
  KxReleaseSpinLock(&KiCpuSetLock);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
