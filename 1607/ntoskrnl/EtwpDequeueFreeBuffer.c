/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x1400EB470
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400EB250 (EtwpSwitchBuffer.c)
 *     EtwpRotateCompressionTarget @ 0x14022AC78 (EtwpRotateCompressionTarget.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x1400870E4 (EtwpResetBufferHeader.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1400B2424 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpLockBufferList @ 0x1400E9530 (EtwpLockBufferList.c)
 *     EtwpUnlockBufferList @ 0x1400EB1E0 (EtwpUnlockBufferList.c)
 *     EtwpDequeueBuffer @ 0x1400EB5C4 (EtwpDequeueBuffer.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     EtwpDisableCompression @ 0x14022A660 (EtwpDisableCompression.c)
 */

volatile signed __int32 *__fastcall EtwpDequeueFreeBuffer(__int64 a1)
{
  char v1; // si
  bool v3; // zf
  volatile signed __int32 *v4; // rdi
  signed __int32 v5; // edx
  __int64 v7; // rax
  unsigned __int8 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 72) == 0LL;
  v8 = 0;
  if ( v3 && !*(_QWORD *)(a1 + 88) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    EtwpLockBufferList(a1, &v8);
    v4 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 80);
    if ( !v4 )
      v4 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 64);
    if ( *(_DWORD *)(a1 + 976) )
    {
      v7 = *(_QWORD *)(a1 + 72);
      if ( !v7 || ((*(_DWORD *)(v7 + 12) - 4) & 0xFFFFFFFD) == 0 )
        v1 = 1;
    }
    EtwpUnlockBufferList(a1, &v8);
    if ( v1 )
      EtwpDisableCompression(a1);
    if ( v4 )
    {
      while ( 1 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
        if ( (*(_DWORD *)(a1 + 12) & 0x4000000) == 0 || (v5 = *((_DWORD *)v4 + 11), (unsigned int)(v5 - 4) > 1) )
          v5 = 0;
        if ( !*((_DWORD *)v4 + 3) && v5 == _InterlockedCompareExchange(v4 + 11, 1, v5) )
          break;
        EtwpEnqueueOverflowBuffer(a1, (__int64)v4);
        EtwpLockBufferList(a1, &v8);
        v4 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 64);
        EtwpUnlockBufferList(a1, &v8);
        if ( !v4 )
          return 0LL;
      }
      EtwpResetBufferHeader((__int64)v4, 0);
      goto LABEL_14;
    }
    return 0LL;
  }
  EtwpLockBufferList(a1, &v8);
  v4 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 64);
  EtwpUnlockBufferList(a1, &v8);
  if ( !v4 )
    return 0LL;
  EtwpResetBufferHeader((__int64)v4, 0);
  *((_DWORD *)v4 + 11) = 1;
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
LABEL_14:
  if ( *(_DWORD *)(a1 + 4) != *v4 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)v4, *(unsigned int *)(a1 + 4), *(unsigned int *)v4);
  return v4;
}
