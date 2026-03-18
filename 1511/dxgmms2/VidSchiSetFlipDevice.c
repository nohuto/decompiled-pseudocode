/*
 * XREFs of VidSchiSetFlipDevice @ 0x1C00109F4
 * Callers:
 *     VidSchiClearFlipDevice @ 0x1C0010990 (VidSchiClearFlipDevice.c)
 *     VidSchFlushQueuePackets @ 0x1C0010DB0 (VidSchFlushQueuePackets.c)
 *     VidSchSubmitCommand @ 0x1C0039780 (VidSchSubmitCommand.c)
 * Callees:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0002288 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C000248C (VidSchiCompletePendingFlip.c)
 *     ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0010D20 (-InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0014528 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pq @ 0x1C001D234 (Template_pq.c)
 *     VidSchControlVSyncDevice @ 0x1C0038EF0 (VidSchControlVSyncDevice.c)
 *     VidSchiWaitFlushCompletion @ 0x1C003C6BC (VidSchiWaitFlushCompletion.c)
 *     VidSchIsVSyncAvailable @ 0x1C005ECB0 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchiSetFlipDevice(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        _QWORD *a3,
        int a4,
        int a5,
        char a6)
{
  __int64 v6; // r12
  __int64 v8; // r15
  int v9; // r14d
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  struct _VIDSCH_GLOBAL *v21; // rcx
  int v22; // r13d
  __int64 v23; // r12
  unsigned int v24; // edx
  __int64 j; // rsi
  VIDSCH_FLIP_QUEUE *v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // r13
  void *v29; // rax
  unsigned int v30; // r12d
  __int64 v31; // rax
  __int64 **v32; // rax
  __int64 *v33; // rsi
  __int64 *v34; // rcx
  __int64 *v35; // rdi
  __int64 v36; // rax
  _QWORD *v37; // r9
  _QWORD *v38; // rax
  __int64 i; // r15
  VIDSCH_FLIP_QUEUE *v40; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v42[20]; // [rsp+58h] [rbp-79h] BYREF
  struct _ERESOURCE *Resource; // [rsp+128h] [rbp+57h]

  v6 = a2;
  v8 = a4;
  v9 = 0;
  Resource = (struct _ERESOURCE *)((char *)a1 + 1096);
  v11 = *((_QWORD *)a1 + a2 + 324);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1096), 1u);
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
  v14[3] = a3;
  v14[4] = v6;
  v14[5] = v8;
  WdLogEvent5_WdEvent(v14);
  if ( (_DWORD)v8 )
  {
    v19 = *(_QWORD **)(v11 + 16);
    if ( v19 )
    {
      if ( v19 != a3 || *(_DWORD *)(v11 + 4) != (_DWORD)v8 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17, v18);
        v38[3] = 281LL;
        v38[4] = 0x10000LL;
        v38[5] = a1;
        v38[6] = a3;
        v38[7] = v6;
        WdLogEvent5_WdCriticalError(v38);
        JUMPOUT(0x1C001B10BLL);
      }
    }
    else
    {
      if ( (int)v8 >= 4
        && (!(unsigned __int8)VidSchIsVSyncAvailable(a1, (unsigned int)v6)
          ? (v9 = -1073741823)
          : (v9 = VidSchControlVSyncDevice(a3, 1LL)),
            v9 < 0)
        || (int)v8 < 3 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 228, &LockHandle);
        *(_BYTE *)(v11 + 8) = a6;
        *(_DWORD *)(v11 + 4) = v8;
        *(_QWORD *)(v11 + 16) = a3;
      }
      else
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 228, &LockHandle);
        v28 = 0LL;
        if ( *((_DWORD *)a1 + 31) )
        {
          while ( 1 )
          {
            v29 = operator new(0x12238uLL, 0x68536956u, (enum _POOL_TYPE)512);
            *(_QWORD *)(v11 + 8 * v28 + 24) = v29;
            if ( !v29 )
              break;
            memset(v29, 0, 0x12238uLL);
            v30 = 0;
            while ( (int)VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                           (VIDSCH_FLIP_QUEUE_ENTRY *)(*(_QWORD *)(v11 + 8 * v28 + 24) + 56LL + 1160LL * v30),
                           a1) >= 0 )
            {
              if ( ++v30 >= 0x40 )
                goto LABEL_29;
            }
            v9 = -1073741801;
LABEL_29:
            if ( v9 < 0 )
              goto LABEL_47;
            v31 = *(_QWORD *)(v11 + 8 * v28 + 24);
            v28 = (unsigned int)(v28 + 1);
            *(_DWORD *)(v31 + 48) = 63;
            if ( (unsigned int)v28 >= *((_DWORD *)a1 + 31) )
              goto LABEL_31;
          }
          v9 = -1073741801;
        }
LABEL_31:
        if ( v9 < 0 )
        {
LABEL_47:
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 31); i = (unsigned int)(i + 1) )
          {
            v40 = *(VIDSCH_FLIP_QUEUE **)(v11 + 8 * i + 24);
            if ( v40 )
            {
              VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v40, v27);
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
        v32 = (__int64 **)a3[12];
        v33 = a3 + 11;
        v34 = (__int64 *)*v33;
        if ( *(__int64 **)(*v33 + 8) != v33 || *v32 != v33 )
          __fastfail(3u);
        *v32 = v34;
        v35 = (__int64 *)((char *)a1 + 208);
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
  else if ( !a3 || a3 == *(_QWORD **)(v11 + 16) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      if ( a3 )
      {
        v37 = (_QWORD *)a3[1];
        if ( !v37 )
          v37 = a3;
      }
      else
      {
        v37 = 0LL;
      }
      Template_pq(v16, &EventClearFlipDevice, v17, v37, v6);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 228, &LockHandle);
    VidSchiCompletePendingFlip((__int64)a1, v6, a5);
    if ( a5 == 6 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_DWORD *)(v11 + 2336) )
      {
        memset(v42, 0, sizeof(v42));
        LODWORD(v42[4]) |= 4u;
        LODWORD(v42[2]) = 3;
        v42[5] = v11 + 2336;
        VidSchiWaitFlushCompletion(a1, v42, 23LL);
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 228, &LockHandle);
    }
    v22 = *(_DWORD *)(v11 + 4);
    v23 = *(_QWORD *)(v11 + 16);
    VidSchiUnreferenceDisplayingAllocations(v21, (struct _VIDSCH_PRESENT_INFO *)v11, *(_WORD *)(v11 + 14632));
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a1 + 31); j = (unsigned int)(j + 1) )
    {
      v26 = *(VIDSCH_FLIP_QUEUE **)(v11 + 8 * j + 24);
      if ( v26 )
      {
        VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v26, v24);
        *(_QWORD *)(v11 + 8 * j + 24) = 0LL;
      }
    }
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_BYTE *)(v11 + 8) = a6;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v22 >= 4 )
      v9 = VidSchControlVSyncDevice(v23, 1LL);
  }
  ExReleaseResourceLite(Resource);
  return (unsigned int)v9;
}
