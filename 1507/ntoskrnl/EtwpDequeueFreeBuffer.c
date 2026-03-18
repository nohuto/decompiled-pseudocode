/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x140063388
 * Callers:
 *     EtwpSwitchBuffer @ 0x140063148 (EtwpSwitchBuffer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     EtwpResetBufferHeader @ 0x1400754B4 (EtwpResetBufferHeader.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14012DD94 (EtwpEnqueueOverflowBuffer.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

volatile signed __int32 *__fastcall EtwpDequeueFreeBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // r14
  volatile signed __int32 *v6; // rdi
  _QWORD **v7; // rcx
  volatile signed __int32 *v8; // rsi
  _QWORD **v9; // rcx
  _QWORD *v10; // rsi
  _QWORD **v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  signed __int64 v18; // rtt
  _QWORD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rsi
  signed __int64 v25; // rax
  signed __int64 v26; // rcx
  signed __int64 v27; // rtt
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = 0;
  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 72) && *(_QWORD *)(a1 + 88) == *(_QWORD *)(a1 + 96) )
    return 0LL;
  v6 = (volatile signed __int32 *)(a1 + 712);
  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    if ( *(_DWORD *)(a1 + 316) == 1 )
    {
      v20 = KeAbPreAcquire(a1 + 712, 0LL, 0LL, a4);
      v21 = v20;
      if ( _interlockedbittestandset64(v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, v20, v6);
      if ( v21 )
        *(_BYTE *)(v21 + 26) |= 1u;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(a1 + 712);
      }
      else if ( _interlockedbittestandset64(v6, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(a1 + 712);
      }
    }
    v7 = *(_QWORD ***)(a1 + 88);
    v8 = 0LL;
    if ( v7 != *(_QWORD ***)(a1 + 96) )
    {
      v19 = *v7;
      *v7 = (_QWORD *)**v7;
      if ( v19 == *(_QWORD **)(a1 + 96) )
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(a1 + 88);
      v8 = (volatile signed __int32 *)(v19 - 4);
    }
    if ( v8 )
      goto LABEL_13;
    while ( 1 )
    {
      v9 = *(_QWORD ***)(a1 + 64);
      v8 = 0LL;
      if ( v9 != *(_QWORD ***)(a1 + 72) )
      {
        v10 = *v9;
        *v9 = (_QWORD *)**v9;
        if ( v10 == *(_QWORD **)(a1 + 72) )
          *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 64);
        v8 = (volatile signed __int32 *)(v10 - 4);
      }
LABEL_13:
      if ( *(_DWORD *)(a1 + 316) == 1 )
      {
        _m_prefetchw((const void *)v6);
        v25 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v26 = 0LL;
        else
          v26 = v25 - 16;
        if ( (v25 & 2) != 0
          || (v27 = *(_QWORD *)v6, v27 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v26, v25)) )
        {
          ExfReleasePushLock(v6);
        }
        KeAbPostRelease((ULONG_PTR)v6);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v6, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
        __writecr8(CurrentIrql);
      }
      if ( !v8 )
        return 0LL;
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
      if ( !*((_DWORD *)v8 + 3) && !_InterlockedCompareExchange(v8 + 11, 1, 0) )
      {
        EtwpResetBufferHeader(v8, 0LL);
        goto LABEL_21;
      }
      EtwpEnqueueOverflowBuffer(a1);
      if ( *(_DWORD *)(a1 + 316) == 1 )
      {
        v23 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL, v22);
        v24 = v23;
        if ( _interlockedbittestandset64(v6, 0LL) )
          ExfAcquirePushLockExclusiveEx(v6, v23, v6);
        if ( v24 )
          *(_BYTE *)(v24 + 26) |= 1u;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v6);
        }
        else if ( _interlockedbittestandset64(v6, 0LL) )
        {
          KxWaitForSpinLockAndAcquire(v6);
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    v14 = KeAbPreAcquire(a1 + 712, 0LL, 0LL, a4);
    v15 = v14;
    if ( _interlockedbittestandset64(v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v14, v6);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(a1 + 712);
    }
    else if ( _interlockedbittestandset64(v6, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(a1 + 712);
    }
  }
  v12 = *(_QWORD ***)(a1 + 64);
  v8 = 0LL;
  if ( v12 != *(_QWORD ***)(a1 + 72) )
  {
    v13 = *v12;
    *v12 = (_QWORD *)**v12;
    if ( v13 == *(_QWORD **)(a1 + 72) )
      *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 64);
    v8 = (volatile signed __int32 *)(v13 - 4);
  }
  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    _m_prefetchw((const void *)v6);
    v16 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v17 = v16 - 16;
    else
      v17 = 0LL;
    if ( (v16 & 2) != 0
      || (v18 = *(_QWORD *)v6, v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v17, v16)) )
    {
      ExfReleasePushLock(v6);
    }
    KeAbPostRelease((ULONG_PTR)v6);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v6, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
    __writecr8(CurrentIrql);
  }
  if ( !v8 )
    return 0LL;
  EtwpResetBufferHeader(v8, 0LL);
  *((_DWORD *)v8 + 11) = 1;
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
LABEL_21:
  if ( *(_DWORD *)(a1 + 4) != *v8 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)v8, *(unsigned int *)(a1 + 4), *(unsigned int *)v8);
  return v8;
}
