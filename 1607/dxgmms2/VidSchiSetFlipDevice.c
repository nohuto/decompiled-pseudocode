/*
 * XREFs of VidSchiSetFlipDevice @ 0x1C00051FC
 * Callers:
 *     VidSchiClearFlipDevice @ 0x1C0002C18 (VidSchiClearFlipDevice.c)
 *     VidSchFlushQueuePackets @ 0x1C000ED10 (VidSchFlushQueuePackets.c)
 *     VidSchSubmitCommand @ 0x1C0042B20 (VidSchSubmitCommand.c)
 * Callees:
 *     ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0002D00 (-InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C001152C (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C0011A70 (VidSchiCompletePendingFlip.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0011B64 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_pq @ 0x1C001E5A8 (Template_pq.c)
 *     VidSchiFlushPendingFlips @ 0x1C0040310 (VidSchiFlushPendingFlips.c)
 *     VidSchControlVSyncDevice @ 0x1C0040980 (VidSchControlVSyncDevice.c)
 *     VidSchIsVSyncAvailable @ 0x1C0066DF0 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchiSetFlipDevice(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        _QWORD *a3,
        int a4,
        unsigned int a5,
        char a6)
{
  __int64 v6; // r15
  int v7; // ebp
  __int64 v8; // r14
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v17; // r9
  struct _VIDSCH_GLOBAL *v18; // rcx
  int v19; // r12d
  __int64 v20; // r15
  unsigned int v21; // edx
  __int64 j; // rsi
  VIDSCH_FLIP_QUEUE *v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // edx
  __int64 v26; // r12
  void *v27; // rax
  void *v28; // r15
  unsigned int v29; // r15d
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r8
  _QWORD *v33; // rdx
  char *v34; // rdi
  __int64 v35; // rdx
  _QWORD *v36; // r9
  _QWORD *v37; // rax
  __int64 i; // r14
  VIDSCH_FLIP_QUEUE *v39; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  struct _ERESOURCE *Resource; // [rsp+80h] [rbp+8h]

  v6 = a2;
  v7 = 0;
  v8 = a4;
  Resource = (struct _ERESOURCE *)((char *)a1 + 1128);
  v11 = *((_QWORD *)a1 + a2 + 371);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1128), 1u);
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v12[3] = a3;
  v12[4] = v6;
  v12[5] = v8;
  WdLogEvent5_WdEvent(v12);
  if ( (_DWORD)v8 )
  {
    v15 = *(_QWORD **)(v11 + 16);
    if ( v15 )
    {
      if ( v15 != a3 || *(_DWORD *)(v11 + 4) != (_DWORD)v8 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v37[3] = 281LL;
        v37[4] = 0x10000LL;
        v37[5] = a1;
        v37[6] = a3;
        v37[7] = v6;
        WdLogEvent5_WdCriticalError(v37);
        JUMPOUT(0x1C00173CDLL);
      }
    }
    else
    {
      if ( (int)v8 >= 4
        && (!(unsigned __int8)VidSchIsVSyncAvailable(a1, (unsigned int)v6)
          ? (v7 = -1073741823)
          : (LOBYTE(v24) = 1, v7 = VidSchControlVSyncDevice(a3, 1LL, v24)),
            v7 < 0)
        || (int)v8 < 3 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 232, &LockHandle);
        *(_BYTE *)(v11 + 8) = a6;
        *(_DWORD *)(v11 + 4) = v8;
        *(_QWORD *)(v11 + 16) = a3;
      }
      else
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 232, &LockHandle);
        v26 = 0LL;
        if ( *((_DWORD *)a1 + 32) )
        {
          while ( 1 )
          {
            v27 = operator new(0x13238uLL, 0x68536956u, (enum _POOL_TYPE)512);
            v28 = v27;
            if ( v27 )
              memset(v27, 0, 0x13238uLL);
            else
              v28 = 0LL;
            *(_QWORD *)(v11 + 8 * v26 + 24) = v28;
            if ( !v28 )
              break;
            memset(v28, 0, 0x13238uLL);
            v29 = 0;
            while ( (int)VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                           (VIDSCH_FLIP_QUEUE_ENTRY *)(*(_QWORD *)(v11 + 8 * v26 + 24) + 56LL + 1224LL * v29),
                           a1) >= 0 )
            {
              if ( ++v29 >= 0x40 )
                goto LABEL_29;
            }
            v7 = -1073741801;
LABEL_29:
            if ( v7 < 0 )
              goto LABEL_49;
            v30 = *(_QWORD *)(v11 + 8 * v26 + 24);
            v26 = (unsigned int)(v26 + 1);
            *(_DWORD *)(v30 + 52) = 63;
            if ( (unsigned int)v26 >= *((_DWORD *)a1 + 32) )
              goto LABEL_31;
          }
          v7 = -1073741801;
        }
LABEL_31:
        if ( v7 < 0 )
        {
LABEL_49:
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 32); i = (unsigned int)(i + 1) )
          {
            v39 = *(VIDSCH_FLIP_QUEUE **)(v11 + 8 * i + 24);
            if ( v39 )
            {
              VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v39, v25);
              *(_QWORD *)(v11 + 8 * i + 24) = 0LL;
            }
          }
        }
        else
        {
          *(_BYTE *)(v11 + 8) = a6;
          *(_DWORD *)(v11 + 4) = v8;
          *(_QWORD *)(v11 + 16) = a3;
        }
        v31 = a3 + 10;
        v32 = a3[10];
        v33 = (_QWORD *)a3[11];
        if ( *(_QWORD **)(v32 + 8) != a3 + 10 || (_QWORD *)*v33 != v31 )
          __fastfail(3u);
        *v33 = v32;
        v34 = (char *)a1 + 240;
        *(_QWORD *)(v32 + 8) = v33;
        v35 = *(_QWORD *)v34;
        if ( *(char **)(*(_QWORD *)v34 + 8LL) != v34 )
          __fastfail(3u);
        *v31 = v35;
        a3[11] = v34;
        *(_QWORD *)(v35 + 8) = v31;
        *(_QWORD *)v34 = v31;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  else if ( !a3 || a3 == *(_QWORD **)(v11 + 16) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      if ( a3 )
      {
        v36 = (_QWORD *)a3[1];
        if ( !v36 )
          v36 = a3;
      }
      else
      {
        v36 = 0LL;
      }
      Template_pq(v13, &EventClearFlipDevice, v14, v36, v6);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 232, &LockHandle);
    VidSchiCompletePendingFlip(a1, (unsigned int)v6, a5, v17);
    if ( a5 == 6 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiFlushPendingFlips(a1, v11);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 232, &LockHandle);
    }
    v19 = *(_DWORD *)(v11 + 4);
    v20 = *(_QWORD *)(v11 + 16);
    VidSchiUnreferenceDisplayingAllocations(v18, (struct _VIDSCH_PRESENT_INFO *)v11, *(_WORD *)(v11 + 18736));
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a1 + 32); j = (unsigned int)(j + 1) )
    {
      v23 = *(VIDSCH_FLIP_QUEUE **)(v11 + 8 * j + 24);
      if ( v23 )
      {
        VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v23, v21);
        *(_QWORD *)(v11 + 8 * j + 24) = 0LL;
      }
    }
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_BYTE *)(v11 + 8) = a6;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v19 >= 4 )
      v7 = VidSchControlVSyncDevice(v20, 1LL, 0LL);
  }
  ExReleaseResourceLite(Resource);
  return (unsigned int)v7;
}
