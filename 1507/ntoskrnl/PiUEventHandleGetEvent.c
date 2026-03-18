/*
 * XREFs of PiUEventHandleGetEvent @ 0x1404166CC
 * Callers:
 *     PiUEventHandleIoctl @ 0x140416618 (PiUEventHandleIoctl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PiUEventCopyEventData @ 0x14041689C (PiUEventCopyEventData.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14045DAB4 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14045F91C (PiUEventNotifyClientPendingEvent.c)
 */

__int64 __fastcall PiUEventHandleGetEvent(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  int v6; // edi
  int v7; // r14d
  ULONG_PTR v9; // r13
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v14; // r12
  _QWORD *v15; // rsi
  __int64 v16; // rax
  ULONG_PTR v17; // rsi
  unsigned __int8 v18; // r15
  signed __int32 v19; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  ULONG_PTR v24; // rbx
  unsigned __int8 v25; // si
  signed __int32 v26; // eax
  _QWORD *v27; // [rsp+20h] [rbp-38h]
  unsigned int *v28; // [rsp+60h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0;
  v7 = a4;
  if ( v5 && a2 && (unsigned int)a4 > 4 )
  {
    *a2 = 0;
    v9 = *(_QWORD *)(v5 + 16);
    v28 = a2 + 1;
    v10 = a4 - 4;
    v11 = KeAbPreAcquire(v9, 0LL, 0LL, a4);
    v12 = v11;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v9, 0) )
      ExpAcquireFastMutexContended(v9, v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v9 + 48) = CurrentIrql;
    v14 = *(_QWORD **)(v5 + 112);
    while ( v14 != (_QWORD *)(v5 + 112) && v6 >= 0 )
    {
      v15 = v14;
      v27 = v14 + 3;
      v6 = PiUEventCopyEventData(v28, v10, v14[3]);
      if ( v6 < 0 )
      {
        if ( !*a2 )
        {
          *(_QWORD *)(a5 + 8) = 0LL;
          v24 = *(_QWORD *)(v5 + 16);
          *(_QWORD *)(v24 + 8) = 0LL;
          v25 = *(_BYTE *)(v24 + 48);
          v26 = _InterlockedCompareExchange((volatile signed __int32 *)v24, 1, 0);
          if ( v26 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)v24, v26);
          __writecr8(v25);
          KeAbPostRelease(v24);
          return (unsigned int)v6;
        }
        break;
      }
      v16 = *v28;
      if ( (unsigned int)v16 > v10 )
      {
        v10 -= v16;
        v6 = -1073741789;
      }
      else
      {
        v10 -= v16;
        v28 = (unsigned int *)((char *)v28 + v16);
      }
      ++*a2;
      v14 = (_QWORD *)*v14;
      if ( *(_BYTE *)(*v27 + 68LL) )
      {
        v21 = *v15;
        v22 = (_QWORD *)v15[1];
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v22 != v15 )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        --*(_DWORD *)(v5 + 128);
        v23 = *(_QWORD **)(v5 + 104);
        *v15 = v5 + 96;
        v15[1] = v23;
        if ( *v23 != v5 + 96 )
          __fastfail(3u);
        *v23 = v15;
        *(_QWORD *)(v5 + 104) = v15;
      }
      else
      {
        PiUEventDequeuePendingEventWorker(v5, v15, 0LL);
      }
    }
    v17 = *(_QWORD *)(v5 + 16);
    *(_QWORD *)(v17 + 8) = 0LL;
    v18 = *(_BYTE *)(v17 + 48);
    v19 = _InterlockedCompareExchange((volatile signed __int32 *)v17, 1, 0);
    if ( v19 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v17, v19);
    __writecr8(v18);
    KeAbPostRelease(v17);
    if ( v6 == -1073741789 )
    {
      v6 = 0;
      PiUEventNotifyClientPendingEvent(v5);
    }
    *(_QWORD *)(a5 + 8) = v7 - v10;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
