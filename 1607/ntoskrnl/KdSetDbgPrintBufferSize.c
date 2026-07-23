/*
 * XREFs of KdSetDbgPrintBufferSize @ 0x1401D1778
 * Callers:
 *     NtSystemDebugControl @ 0x1404C1E48 (NtSystemDebugControl.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KdSetDbgPrintBufferSize(SIZE_T NumberOfBytes)
{
  unsigned int v1; // ebp
  _BYTE *PoolWithTag; // rsi
  unsigned __int8 CurrentIrql; // r12
  size_t v5; // rdi
  PVOID v6; // r14
  size_t v7; // rbx
  size_t v8; // rax
  size_t v9; // rax

  v1 = NumberOfBytes;
  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( (unsigned int)NumberOfBytes > 0x1000000 )
    return 3221225711LL;
  if ( (unsigned int)NumberOfBytes <= 0x1000 )
  {
    v1 = 4096;
    PoolWithTag = &KdPrintDefaultCircularBuffer;
    while ( 1 )
    {
LABEL_9:
      if ( !KdpPrintSpinLock )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( !_InterlockedCompareExchange64(&KdpPrintSpinLock, 1LL, 0LL) )
        {
          v5 = 0LL;
          v6 = KdPrintCircularBuffer;
          qword_140329B58 = (__int64)KeGetCurrentPrcb();
          if ( v1 > (unsigned __int64)(unsigned int)KdPrintBufferSize )
          {
            v7 = KdPrintWritePointer - (_UNKNOWN *)KdPrintCircularBuffer;
            if ( KdPrintWritePointer - (_UNKNOWN *)KdPrintCircularBuffer >= (unsigned __int64)(unsigned int)KdPrintBufferSize )
            {
              v7 = 0LL;
              KdPrintRolloverCount = 0;
            }
            if ( KdPrintRolloverCount )
            {
              v5 = (unsigned int)KdPrintBufferSize - v7;
              memmove(PoolWithTag, (char *)KdPrintCircularBuffer + v7, v5);
            }
            memmove(&PoolWithTag[v5], v6, v7);
            v5 += v7;
            if ( KdPrintRolloverCount )
            {
              v8 = 0LL;
              if ( *PoolWithTag )
              {
                do
                {
                  if ( v8 >= v5 )
                    break;
                  ++v8;
                }
                while ( PoolWithTag[v8] );
              }
              v9 = v8 + 1;
              if ( v9 < v5 )
              {
                v5 -= v9;
                memmove(PoolWithTag, &PoolWithTag[v9], v5);
              }
            }
          }
          memset(&PoolWithTag[v5], 0, v1 - v5);
          ++KdPrintBufferChanges;
          qword_140329B58 = 0LL;
          KdPrintCircularBuffer = PoolWithTag;
          KdPrintBufferSize = v1;
          KdPrintWritePointer = &PoolWithTag[v5];
          KdPrintRolloverCount = 0;
          _InterlockedExchange((volatile __int32 *)&KdpPrintSpinLock, 0);
          __writecr8(CurrentIrql);
          if ( v6 )
          {
            if ( v6 != &KdPrintDefaultCircularBuffer )
              ExFreePoolWithTag(v6, 0);
          }
          return 0LL;
        }
        __writecr8(CurrentIrql);
      }
      _mm_pause();
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6250644Bu);
  if ( PoolWithTag )
    goto LABEL_9;
  return 3221225495LL;
}
