/*
 * XREFs of KdLogDbgPrint @ 0x1406F2CFC
 * Callers:
 *     KdpPrint @ 0x1406F2E34 (KdpPrint.c)
 *     KdpPrompt @ 0x1406F5E00 (KdpPrompt.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 */

struct _KPRCB *__fastcall KdLogDbgPrint(unsigned __int16 *a1)
{
  struct _KPRCB *result; // rax
  unsigned __int8 CurrentIrql; // r15
  unsigned int v4; // ebx
  unsigned int v5; // eax
  signed __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  char *v9; // rcx
  unsigned int v10; // ebx
  char *v11; // rcx
  unsigned int v12; // edi
  bool v13; // zf
  unsigned int v14; // ebx
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF

  result = KeGetCurrentPrcb();
  if ( (struct _KPRCB *)qword_140329B58 != result )
  {
    _InterlockedIncrement((_DWORD *)&KdpPrintSpinLock + 1);
    while ( (_DWORD)KdpPrintSpinLock )
      _mm_pause();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( !KdPrintCircularBuffer )
      goto LABEL_17;
    v4 = *a1;
    v5 = (unsigned int)KdPrintBufferSize >> 3;
    if ( (unsigned int)KdPrintBufferSize >> 3 > 0x200 )
      v5 = 512;
    if ( v4 > v5 )
    {
      v4 = v5;
      _InterlockedIncrement(&KdPrintTruncatedCount);
    }
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, 0LL, 0LL);
    do
    {
      v7 = v4 + v6;
      v8 = v6;
      if ( v7 >= (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
        v7 -= (unsigned int)KdPrintBufferSize;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, v7, v6);
    }
    while ( v6 != v8 );
    if ( v7 < v8 )
      _InterlockedIncrement(&KdPrintRolloverCount);
    v9 = (char *)*((_QWORD *)a1 + 1);
    if ( v4 + v8 > (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
    {
      v12 = KdPrintBufferSize + (_DWORD)KdPrintCircularBuffer - v8;
      KdpCopyMemoryChunks(v9, v8, v12, 0, 4, &v15);
      v13 = v15 == v12;
      if ( v15 < v12 )
      {
        memset((void *)(v8 + v15), 0, v12 - v15);
        v13 = v15 == v12;
      }
      if ( v13 )
      {
        v14 = v4 - v12;
        KdpCopyMemoryChunks((char *)(*((_QWORD *)a1 + 1) + v12), (__int64)KdPrintCircularBuffer, v14, 0, 4, &v15);
        if ( v15 >= v14 )
          goto LABEL_17;
        v10 = v14 - v15;
        v11 = (char *)KdPrintCircularBuffer + v15;
      }
      else
      {
        v11 = (char *)KdPrintCircularBuffer;
        v10 = v4 - v12;
      }
    }
    else
    {
      KdpCopyMemoryChunks(v9, v8, v4, 0, 4, &v15);
      if ( v15 >= v4 )
      {
LABEL_17:
        _InterlockedDecrement((_DWORD *)&KdpPrintSpinLock + 1);
        result = (struct _KPRCB *)CurrentIrql;
        __writecr8(CurrentIrql);
        return result;
      }
      v10 = v4 - v15;
      v11 = (char *)(v8 + v15);
    }
    memset(v11, 0, v10);
    goto LABEL_17;
  }
  _InterlockedIncrement(&KdPrintSkippedCount);
  return result;
}
