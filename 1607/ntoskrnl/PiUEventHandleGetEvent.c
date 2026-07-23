/*
 * XREFs of PiUEventHandleGetEvent @ 0x14048D158
 * Callers:
 *     PiUEventHandleIoctl @ 0x14048CA38 (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140489874 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14048AAD0 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventCopyEventData @ 0x14048D2AC (PiUEventCopyEventData.c)
 */

__int64 __fastcall PiUEventHandleGetEvent(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  unsigned int *v9; // r13
  unsigned int v10; // esi
  __int64 *v11; // rax
  __int64 *v12; // r12
  __int64 *v13; // r15
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 **v17; // rax
  __int64 **v18; // rcx
  _QWORD *v19; // [rsp+50h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0;
  if ( v5 && a2 && a4 > 4 )
  {
    *a2 = 0;
    v9 = a2 + 1;
    v10 = a4 - 4;
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 16));
    v11 = (__int64 *)(v5 + 112);
    v12 = *(__int64 **)(v5 + 112);
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
      v12 = (__int64 *)*v12;
      if ( *(_BYTE *)(*v19 + 68LL) )
      {
        v16 = *v13;
        v17 = (__int64 **)v13[1];
        if ( *(__int64 **)(*v13 + 8) != v13 || *v17 != v13 )
          __fastfail(3u);
        *v17 = (__int64 *)v16;
        *(_QWORD *)(v16 + 8) = v17;
        --*(_DWORD *)(v5 + 128);
        v18 = *(__int64 ***)(v5 + 104);
        if ( *v18 != (__int64 *)(v5 + 96) )
          __fastfail(3u);
        *v13 = v5 + 96;
        v13[1] = (__int64)v18;
        *v18 = v13;
        *(_QWORD *)(v5 + 104) = v13;
      }
      else
      {
        PiUEventDequeuePendingEventWorker(v5, v13, 0);
      }
      v11 = (__int64 *)(v5 + 112);
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
