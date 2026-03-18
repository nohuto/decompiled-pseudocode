/*
 * XREFs of KdLogDbgPrint @ 0x14072CBDC
 * Callers:
 *     KdpPrint @ 0x14072CE60 (KdpPrint.c)
 *     KdpPrompt @ 0x14072CFC0 (KdpPrompt.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     KdpCopyMemoryChunks @ 0x14072D658 (KdpCopyMemoryChunks.c)
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
  void *v9; // rcx
  unsigned int v10; // ebx
  char *v11; // rcx
  unsigned int v12; // edi
  bool v13; // zf
  unsigned int v14; // ebx
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  result = KeGetCurrentPrcb();
  if ( (struct _KPRCB *)qword_14036E128 == result )
  {
    _InterlockedIncrement(&KdPrintSkippedCount);
    return result;
  }
  _InterlockedIncrement((_DWORD *)&KdpPrintSpinLock + 1);
  while ( (_DWORD)KdpPrintSpinLock )
    _mm_pause();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KdPrintCircularBuffer )
  {
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
    v9 = (void *)*((_QWORD *)a1 + 1);
    if ( v4 + v8 > (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
    {
      v12 = KdPrintBufferSize + (_DWORD)KdPrintCircularBuffer - v8;
      KdpCopyMemoryChunks(v9, 4, (__int64)&v15);
      v13 = (_DWORD)v15 == v12;
      if ( (unsigned int)v15 < v12 )
      {
        memset((void *)(v8 + (unsigned int)v15), 0, v12 - (unsigned int)v15);
        v13 = (_DWORD)v15 == v12;
      }
      if ( !v13 )
      {
        v11 = (char *)KdPrintCircularBuffer;
        v10 = v4 - v12;
        goto LABEL_26;
      }
      v14 = v4 - v12;
      KdpCopyMemoryChunks((PVOID)(*((_QWORD *)a1 + 1) + v12), 4, (__int64)&v15);
      if ( (unsigned int)v15 < v14 )
      {
        v10 = v14 - v15;
        v11 = (char *)KdPrintCircularBuffer + (unsigned int)v15;
        goto LABEL_26;
      }
    }
    else
    {
      KdpCopyMemoryChunks(v9, 4, (__int64)&v15);
      if ( (unsigned int)v15 < v4 )
      {
        v10 = v4 - v15;
        v11 = (char *)(v8 + (unsigned int)v15);
LABEL_26:
        memset(v11, 0, v10);
      }
    }
  }
  _InterlockedDecrement((_DWORD *)&KdpPrintSpinLock + 1);
  result = (struct _KPRCB *)CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
