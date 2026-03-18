/*
 * XREFs of PiUEventHandleGetEvent @ 0x1403BF838
 * Callers:
 *     PiUEventHandleIoctl @ 0x1403BF784 (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PiUEventCopyEventData @ 0x1403BF98C (PiUEventCopyEventData.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1404E13D0 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1404E1958 (PiUEventDequeuePendingEventWorker.c)
 */

__int64 __fastcall PiUEventHandleGetEvent(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  unsigned int *v9; // r13
  unsigned int v10; // esi
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  _QWORD *v13; // r15
  __int64 v14; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // [rsp+50h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0;
  if ( v5 && a2 && a4 > 4 )
  {
    *a2 = 0;
    v9 = a2 + 1;
    v10 = a4 - 4;
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 16));
    v11 = (_QWORD *)(v5 + 112);
    v12 = *(_QWORD **)(v5 + 112);
    while ( v12 != v11 && v6 >= 0 )
    {
      v13 = v12;
      v19 = v12 + 3;
      v6 = PiUEventCopyEventData(v9, v10, v12[3]);
      if ( v6 < 0 )
      {
        if ( !*a2 )
        {
          *(_QWORD *)(a5 + 8) = 0LL;
          KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
          return (unsigned int)v6;
        }
        break;
      }
      v14 = *v9;
      if ( (unsigned int)v14 > v10 )
      {
        v10 -= v14;
        v6 = -1073741789;
      }
      else
      {
        v10 -= v14;
        v9 = (unsigned int *)((char *)v9 + v14);
      }
      ++*a2;
      v12 = (_QWORD *)*v12;
      if ( *(_BYTE *)(*v19 + 68LL) )
      {
        v16 = *v13;
        v17 = (_QWORD *)v13[1];
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v17 != v13 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        --*(_DWORD *)(v5 + 128);
        v18 = *(_QWORD **)(v5 + 104);
        *v13 = v5 + 96;
        v13[1] = v18;
        if ( *v18 != v5 + 96 )
          __fastfail(3u);
        *v18 = v13;
        *(_QWORD *)(v5 + 104) = v13;
      }
      else
      {
        PiUEventDequeuePendingEventWorker(v5, v13, 0LL);
      }
      v11 = (_QWORD *)(v5 + 112);
    }
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
    if ( v6 == -1073741789 )
    {
      v6 = 0;
      PiUEventNotifyClientPendingEvent(v5);
    }
    *(_QWORD *)(a5 + 8) = a4 - v10;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
