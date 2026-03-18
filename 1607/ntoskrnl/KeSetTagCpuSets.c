/*
 * XREFs of KeSetTagCpuSets @ 0x1401D7948
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 * Callees:
 *     RtlWriteAcquireTickLock @ 0x140083528 (RtlWriteAcquireTickLock.c)
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     KiValidateCpuSetMasks @ 0x140111198 (KiValidateCpuSetMasks.c)
 */

__int64 __fastcall KeSetTagCpuSets(unsigned int a1, char *a2, __int64 a3)
{
  unsigned __int64 *v3; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // r10
  int v9; // r8d
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx

  v3 = (unsigned __int64 *)a2;
  result = KiValidateCpuSetMasks(a2, a1);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    if ( a1 )
    {
      v8 = KiCpuSetData;
      v9 = 0;
      v10 = a1;
      do
      {
        v11 = *v3;
        while ( v11 )
        {
          _BitScanForward64(&v12, v11);
          v11 &= ~(1LL << v12);
          *(_QWORD *)(v8 + 16LL * (unsigned int)(v9 + v12) + 8) = a3;
        }
        v9 += 64;
        ++v3;
        --v10;
      }
      while ( v10 );
    }
    ++KiCpuSetSequence;
    KxReleaseSpinLock(&KiCpuSetLock);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  return result;
}
