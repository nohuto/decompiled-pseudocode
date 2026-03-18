/*
 * XREFs of EtwpReserveTraceBuffer @ 0x140017190
 * Callers:
 *     EtwpLogSystemEventUnsafe @ 0x14000BBEC (EtwpLogSystemEventUnsafe.c)
 *     EtwpTraceMessageVa @ 0x140016040 (EtwpTraceMessageVa.c)
 *     EtwTraceContextSwap @ 0x140017470 (EtwTraceContextSwap.c)
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     EtwTraceEvent @ 0x14015C274 (EtwTraceEvent.c)
 *     EtwpReserveWithPebsIndex @ 0x14025E1D0 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14025E260 (EtwpReserveWithPmcCounters.c)
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     EtwpSwitchBuffer @ 0x140063148 (EtwpSwitchBuffer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

unsigned __int64 __fastcall EtwpReserveTraceBuffer(unsigned int *a1, unsigned int a2, __int64 a3, _QWORD *a4, int a5)
{
  unsigned int v6; // r15d
  unsigned __int64 j; // rcx
  unsigned int v8; // r12d
  __int64 v9; // rdx
  _DWORD *EtwSupport; // r13
  unsigned __int64 *v11; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v13; // rbx
  signed __int64 v14; // rax
  int v15; // eax
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  volatile signed __int32 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rbx
  signed __int64 v21; // rax
  signed __int64 v22; // rcx
  signed __int64 v23; // rtt
  unsigned __int32 v24; // edi
  unsigned __int32 v25; // eax
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int i; // [rsp+70h] [rbp+8h]

  if ( (a1[4] & 0x80000000) == 0 && a2 <= a1[2] )
  {
    v6 = a1[1];
    j = *a1;
    v8 = (a2 + 7) & 0xFFFFFFF8;
    for ( i = j; ; j = i )
    {
      v9 = 15LL;
      EtwSupport = KeGetCurrentPrcb()->EtwSupport;
      if ( (a1[3] & 0x10000000) != 0 )
        v11 = (unsigned __int64 *)(a1 + 36);
      else
        v11 = (unsigned __int64 *)&EtwSupport[2 * (unsigned int)j + 16];
      CurrentIrql = 0;
      _m_prefetchw(v11);
      v13 = *v11;
      if ( (*v11 & 0xF) != 0 )
      {
        do
        {
          j = v13 - 1;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v13 - 1, v13);
          if ( v13 == v14 )
            break;
          v13 = v14;
        }
        while ( (v14 & 0xF) != 0 );
      }
      if ( v13 )
      {
        v15 = v13 & 0xF;
        if ( (v13 & 0xF) != 0 )
        {
          v13 &= 0xFFFFFFFFFFFFFFF0uLL;
          if ( v15 == 1 )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFu);
            _m_prefetchw(v11);
            v16 = *v11;
            for ( j = (*v11 & 0xF) + 15; (v16 & 0xF) == 0; j = (v16 & 0xF) + 15 )
            {
              j = v16 & 0xFFFFFFFFFFFFFFF0uLL;
              if ( v13 != (v16 & 0xFFFFFFFFFFFFFFF0uLL) )
                break;
              j = v16 + 15;
              v17 = v16;
              v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v16 + 15, v16);
              if ( v17 == v16 )
                goto LABEL_41;
            }
            _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFF1);
          }
        }
        else
        {
          v18 = (volatile signed __int32 *)(a1 + 178);
          if ( a1[79] == 1 )
          {
            v19 = KeAbPreAcquire((ULONG_PTR)(a1 + 178));
            v20 = v19;
            if ( _interlockedbittestandset64(v18, 0LL) )
              ExfAcquirePushLockExclusiveEx(a1 + 178, v19, a1 + 178);
            if ( v20 )
              *(_BYTE *)(v20 + 26) |= 1u;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireSpinLockInstrumented(a1 + 178);
            }
            else if ( _interlockedbittestandset64(v18, 0LL) )
            {
              KxWaitForSpinLockAndAcquire(a1 + 178);
            }
          }
          v13 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v13 )
            _InterlockedIncrement((volatile signed __int32 *)(v13 + 12));
          if ( a1[79] == 1 )
          {
            _m_prefetchw((const void *)v18);
            v21 = *(_QWORD *)v18;
            if ( (*(_QWORD *)v18 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v22 = 0LL;
            else
              v22 = v21 - 16;
            if ( (v21 & 2) != 0
              || (v23 = *(_QWORD *)v18, v23 != _InterlockedCompareExchange64((volatile signed __int64 *)v18, v22, v21)) )
            {
              ExfReleasePushLock(a1 + 178);
            }
            KeAbPostRelease((ULONG_PTR)(a1 + 178));
          }
          else
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented(a1 + 178, retaddr);
            else
              _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
            __writecr8(CurrentIrql);
          }
        }
LABEL_41:
        if ( v13 )
        {
          _m_prefetchw((const void *)(v13 + 8));
          v24 = *(_DWORD *)(v13 + 8);
          if ( v24 <= v6 )
          {
            while ( 1 )
            {
              *a4 = (*((__int64 (__fastcall **)(unsigned __int64, __int64))a1 + 5))(j, v9);
              v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v24 + v8, v24);
              j = v25;
              if ( v24 == v25 )
                break;
              v24 = v25;
              if ( v25 > v6 )
                goto LABEL_48;
            }
            if ( v25 + v8 <= v6 )
            {
              ++*(_QWORD *)&EtwSupport[2 * i + 144];
              *(_QWORD *)a3 = v13;
              *(_QWORD *)(a3 + 8) = v11;
              *(_DWORD *)(a3 + 16) = v25;
              return v13 + v25;
            }
            *(_DWORD *)(v13 + 4) = v25;
          }
        }
      }
LABEL_48:
      if ( (int)EtwpSwitchBuffer((_DWORD)a1, v13, (_DWORD)v11, *EtwSupport, a5) < 0 )
        break;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)a1 + 64);
  if ( (a1[208] & 8) != 0 )
    a1[116] = 1;
  return 0LL;
}
