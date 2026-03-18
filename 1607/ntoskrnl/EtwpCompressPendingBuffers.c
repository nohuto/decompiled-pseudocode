/*
 * XREFs of EtwpCompressPendingBuffers @ 0x14022A488
 * Callers:
 *     EtwpBufferingModeCompressionFlush @ 0x14022A074 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x14022A608 (EtwpCompressionProc.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     EtwpCompressBuffer @ 0x14022A108 (EtwpCompressBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x14022A6E4 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x14022AEB0 (EtwpRotateCompressionTargetIfNeeded.c)
 *     EtwpCompleteBuffer @ 0x1405281CC (EtwpCompleteBuffer.c)
 */

unsigned __int64 __fastcall EtwpCompressPendingBuffers(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  _BYTE *v3; // rax
  _BYTE *v4; // rbx
  LARGE_INTEGER PerformanceCounter; // rbx
  _DWORD *v6; // rax
  _DWORD *v7; // rbp
  LARGE_INTEGER v8; // rax
  __int64 v9; // rcx
  LONGLONG v10; // rax

  v1 = (unsigned __int64 *)(a1 + 952);
  v3 = (_BYTE *)KeAbPreAcquire(a1 + 952, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (ULONG_PTR)v1);
  if ( v4 )
    v4[26] |= 1u;
  EtwpRotateCompressionTargetIfNeeded(a1);
  while ( 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v6 = (_DWORD *)EtwpDequeueBufferPendingCompression(a1);
    v7 = v6;
    if ( !v6 )
      break;
    if ( (int)v6[3] > 0 || v6[1] > 0x48u && v6[2] > 0x48u )
    {
      if ( (int)EtwpCompressBuffer(a1, (__int64)v6) < 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 252));
      EtwpCompleteBuffer(a1, v7);
      v8 = KeQueryPerformanceCounter(0LL);
      v9 = *(_QWORD *)(a1 + 1080);
      v10 = v8.QuadPart - PerformanceCounter.QuadPart;
      if ( v9 )
        *(_QWORD *)(a1 + 1080) = (v10 + 4 * v9) / 5;
      else
        *(_QWORD *)(a1 + 1080) = v10;
    }
    else
    {
      EtwpCompleteBuffer(a1, v6);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
