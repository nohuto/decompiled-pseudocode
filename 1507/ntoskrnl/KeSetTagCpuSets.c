/*
 * XREFs of KeSetTagCpuSets @ 0x140205CAC
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiValidateCpuSetMasks @ 0x14013356C (KiValidateCpuSetMasks.c)
 *     RtlWriteAcquireTickLock @ 0x140139E40 (RtlWriteAcquireTickLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KeSetTagCpuSets(unsigned int a1, char *a2, __int64 a3)
{
  unsigned __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // r10
  int v9; // r8d
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = (unsigned __int64 *)a2;
  v4 = a1;
  result = KiValidateCpuSetMasks(a2, a1);
  if ( (int)result >= 0 )
  {
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
    if ( (_DWORD)v4 )
    {
      v8 = KiCpuSetData;
      v9 = 0;
      v10 = v4;
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiCpuSetLock, retaddr);
    else
      _InterlockedAnd64(&KiCpuSetLock, 0LL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  return result;
}
