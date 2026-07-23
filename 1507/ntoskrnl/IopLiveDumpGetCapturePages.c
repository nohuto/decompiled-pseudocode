/*
 * XREFs of IopLiveDumpGetCapturePages @ 0x1403FF334
 * Callers:
 *     IopLiveDumpBufferDumpData @ 0x1403FE6C8 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1403FF3CC (IopLiveDumpGetCapturePagesNoLock.c)
 */

__int64 __fastcall IopLiveDumpGetCapturePages(
        PRTL_BITMAP_EX BitMapHeader,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  volatile signed __int32 *v6; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v6 = (volatile signed __int32 *)(a2 + 24);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a2 + 24));
  }
  else if ( _interlockedbittestandset64(v6, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a2 + 24));
  }
  result = IopLiveDumpGetCapturePagesNoLock(BitMapHeader, a5, a6);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    return KiReleaseSpinLockInstrumented((volatile signed __int64 *)v6, retaddr);
  _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
  return result;
}
