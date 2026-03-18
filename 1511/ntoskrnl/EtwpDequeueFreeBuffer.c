/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x14009D240
 * Callers:
 *     EtwpSwitchBuffer @ 0x14009D01C (EtwpSwitchBuffer.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x14009D374 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x14009D414 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14009D480 (EtwpLockBufferList.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1400F2E7C (EtwpEnqueueOverflowBuffer.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

volatile signed __int32 *__fastcall EtwpDequeueFreeBuffer(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  volatile signed __int32 *v4; // rbx
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1 + 64;
  v2 = *(_QWORD *)(a1 + 72);
  v6 = 0;
  if ( *(_QWORD *)(a1 + 64) == v2 && *(_QWORD *)(a1 + 88) == *(_QWORD *)(a1 + 96) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    EtwpLockBufferList(a1, &v6);
    v4 = (volatile signed __int32 *)EtwpDequeueBuffer(a1 + 88);
    if ( !v4 )
      v4 = (volatile signed __int32 *)EtwpDequeueBuffer(v1);
    EtwpUnlockBufferList(a1, &v6);
    if ( !v4 )
      return 0LL;
    do
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
      if ( !*((_DWORD *)v4 + 3) && !_InterlockedCompareExchange(v4 + 11, 1, 0) )
        break;
      EtwpEnqueueOverflowBuffer(a1);
      EtwpLockBufferList(a1, &v6);
      v4 = (volatile signed __int32 *)EtwpDequeueBuffer(v1);
      EtwpUnlockBufferList(a1, &v6);
    }
    while ( v4 );
    if ( !v4 )
      return 0LL;
    *((_DWORD *)v4 + 1) = 0;
    *((_DWORD *)v4 + 2) = 72;
    *((_WORD *)v4 + 27) = 0;
    *((_QWORD *)v4 + 4) = 0LL;
  }
  else
  {
    EtwpLockBufferList(a1, &v6);
    v4 = (volatile signed __int32 *)EtwpDequeueBuffer(v1);
    EtwpUnlockBufferList(a1, &v6);
    if ( !v4 )
      return 0LL;
    *((_DWORD *)v4 + 1) = 0;
    *((_DWORD *)v4 + 11) = 1;
    *((_DWORD *)v4 + 2) = 72;
    *((_WORD *)v4 + 27) = 0;
    *((_QWORD *)v4 + 4) = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
  }
  if ( *(_DWORD *)(a1 + 4) != *v4 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)v4, *(unsigned int *)(a1 + 4), *(unsigned int *)v4);
  return v4;
}
