/*
 * XREFs of VidSchiSetFlipDevice @ 0x1C00036B8
 * Callers:
 *     VidSchiClearFlipDevice @ 0x1C0003658 (VidSchiClearFlipDevice.c)
 *     VidSchFlushQueuePackets @ 0x1C0006C00 (VidSchFlushQueuePackets.c)
 *     VidSchSubmitCommand @ 0x1C002E700 (VidSchSubmitCommand.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     Template_pq @ 0x1C000F810 (Template_pq.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0011FB0 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0012098 (-InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00138A0 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C001DEE8 (VidSchiCompletePendingFlip.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0077804 (VidSchiWaitFlushCompletion.c)
 *     VidSchControlVSyncDevice @ 0x1C0077CE0 (VidSchControlVSyncDevice.c)
 *     VidSchIsVSyncAvailable @ 0x1C00788B0 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchiSetFlipDevice(struct _VIDSCH_GLOBAL *a1, unsigned int a2, _QWORD *a3, int a4, int a5)
{
  __int64 v5; // r12
  __int64 v7; // r15
  int v8; // r14d
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v15; // r9
  struct _VIDSCH_GLOBAL *v16; // rcx
  int v17; // r13d
  __int64 v18; // r12
  unsigned int v19; // edx
  __int64 j; // rsi
  VIDSCH_FLIP_QUEUE *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // r8
  unsigned int v25; // edx
  __int64 v26; // r13
  void *v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // rax
  __int64 i; // r15
  VIDSCH_FLIP_QUEUE *v31; // rcx
  __int64 **v32; // rax
  __int64 *v33; // rsi
  __int64 *v34; // rcx
  __int64 *v35; // rdi
  __int64 v36; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-91h] BYREF
  _QWORD v38[20]; // [rsp+58h] [rbp-71h] BYREF
  struct _ERESOURCE *Resource; // [rsp+128h] [rbp+5Fh]

  v5 = a2;
  v7 = a4;
  v8 = 0;
  Resource = (struct _ERESOURCE *)((char *)a1 + 1088);
  v10 = *((_QWORD *)a1 + a2 + 330);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1088), 1u);
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v11[3] = a3;
  v11[4] = v5;
  v11[5] = v7;
  WdLogEvent5_WdEvent(v11);
  if ( (_DWORD)v7 )
  {
    v22 = *(_QWORD **)(v10 + 8);
    if ( v22 )
    {
      if ( v22 != a3 || *(_DWORD *)(v10 + 4) != (_DWORD)v7 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v23[3] = 281LL;
        v23[4] = 0x10000LL;
        v23[5] = a1;
        v23[6] = a3;
        v23[7] = v5;
        WdLogEvent5_WdCriticalError(v23);
        JUMPOUT(0x1C000B093LL);
      }
    }
    else
    {
      if ( (int)v7 >= 4
        && (!(unsigned __int8)VidSchIsVSyncAvailable(a1, (unsigned int)v5)
          ? (v8 = -1073741823)
          : (LOBYTE(v24) = 1, v8 = VidSchControlVSyncDevice(a3, 1LL, v24)),
            v8 < 0)
        || (int)v7 < 3 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &LockHandle);
        *(_DWORD *)(v10 + 4) = v7;
        *(_QWORD *)(v10 + 8) = a3;
      }
      else
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &LockHandle);
        v26 = 0LL;
        if ( *((_DWORD *)a1 + 31) )
        {
          while ( 1 )
          {
            v27 = operator new(0x11E38uLL, 0x68536956u, (enum _POOL_TYPE)512);
            *(_QWORD *)(v10 + 8 * v26 + 16) = v27;
            if ( !v27 )
              break;
            memset(v27, 0, 0x11E38uLL);
            v28 = 0;
            while ( (int)VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                           (VIDSCH_FLIP_QUEUE_ENTRY *)(*(_QWORD *)(v10 + 8 * v26 + 16) + 56LL + 1144LL * v28),
                           a1) >= 0 )
            {
              if ( ++v28 >= 0x40 )
                goto LABEL_38;
            }
            v8 = -1073741801;
LABEL_38:
            if ( v8 < 0 )
              goto LABEL_44;
            v29 = *(_QWORD *)(v10 + 8 * v26 + 16);
            v26 = (unsigned int)(v26 + 1);
            *(_DWORD *)(v29 + 48) = 63;
            if ( (unsigned int)v26 >= *((_DWORD *)a1 + 31) )
              goto LABEL_42;
          }
          v8 = -1073741801;
        }
LABEL_42:
        if ( v8 < 0 )
        {
LABEL_44:
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 31); i = (unsigned int)(i + 1) )
          {
            v31 = *(VIDSCH_FLIP_QUEUE **)(v10 + 8 * i + 16);
            if ( v31 )
            {
              VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v31, v25);
              *(_QWORD *)(v10 + 8 * i + 16) = 0LL;
            }
          }
        }
        else
        {
          *(_DWORD *)(v10 + 4) = v7;
          *(_QWORD *)(v10 + 8) = a3;
        }
        v32 = (__int64 **)a3[12];
        v33 = a3 + 11;
        v34 = (__int64 *)*v33;
        if ( *(__int64 **)(*v33 + 8) != v33 || *v32 != v33 )
          __fastfail(3u);
        *v32 = v34;
        v35 = (__int64 *)((char *)a1 + 200);
        v34[1] = (__int64)v32;
        v36 = *v35;
        *v33 = *v35;
        v33[1] = (__int64)v35;
        if ( *(__int64 **)(v36 + 8) != v35 )
          __fastfail(3u);
        *(_QWORD *)(v36 + 8) = v33;
        *v35 = (__int64)v33;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  else if ( !a3 || a3 == *(_QWORD **)(v10 + 8) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      if ( a3 )
      {
        v15 = (_QWORD *)a3[1];
        if ( !v15 )
          v15 = a3;
      }
      else
      {
        v15 = 0LL;
      }
      Template_pq(v12, &EventClearFlipDevice, v13, v15, v5);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &LockHandle);
    VidSchiCompletePendingFlip(a1);
    if ( a5 == 6 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_DWORD *)(v10 + 2328) )
      {
        memset(v38, 0, sizeof(v38));
        LODWORD(v38[4]) |= 8u;
        LODWORD(v38[2]) = 3;
        v38[5] = v10 + 2328;
        VidSchiWaitFlushCompletion(a1);
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &LockHandle);
    }
    v17 = *(_DWORD *)(v10 + 4);
    v18 = *(_QWORD *)(v10 + 8);
    VidSchiUnreferenceDisplayingAllocations(v16, (struct _VIDSCH_PRESENT_INFO *)v10, *(_WORD *)(v10 + 14624));
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a1 + 31); j = (unsigned int)(j + 1) )
    {
      v21 = *(VIDSCH_FLIP_QUEUE **)(v10 + 8 * j + 16);
      if ( v21 )
      {
        VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v21, v19);
        *(_QWORD *)(v10 + 8 * j + 16) = 0LL;
      }
    }
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v17 >= 4 )
      v8 = VidSchControlVSyncDevice(v18, 1LL, 0LL);
  }
  ExReleaseResourceLite(Resource);
  return (unsigned int)v8;
}
