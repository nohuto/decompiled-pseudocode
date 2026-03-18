/*
 * XREFs of ?Init@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0036E90
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_q @ 0x1C0007190 (Template_q.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Init(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_PROCESS *a2)
{
  struct _KEVENT *v3; // rax
  __int64 v4; // rcx
  struct _LOOKASIDE_LIST_EX *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  struct _LOOKASIDE_LIST_EX *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  NTSTATUS v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGPUSHLOCK *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _LIST_ENTRY **v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // r9d

  *((_QWORD *)this + 1) = a2;
  v3 = (struct _KEVENT *)operator new(0x18uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 84) = v3;
  if ( v3 )
  {
    KeInitializeEvent(v3, NotificationEvent, 0);
    v5 = (struct _LOOKASIDE_LIST_EX *)operator new(0x60uLL, 0x30316956u, (POOL_TYPE)512);
    *((_QWORD *)this + 50) = v5;
    if ( v5 )
    {
      v8 = ExInitializeLookasideListEx(v5, 0LL, 0LL, PagedPool, 0, 0xA8uLL, 0x32316956u, 0);
      if ( v8 < 0 )
      {
        _InterlockedIncrement(&dword_1C0027590);
        v23 = WdLogNewEntry5_WdLowResource(v7);
        *(_QWORD *)(v23 + 24) = 8828LL;
        WdLogEvent5_WdLowResource(v23);
        return (unsigned int)v8;
      }
      else
      {
        v9 = (struct _LOOKASIDE_LIST_EX *)operator new(0x60uLL, 0x30316956u, (POOL_TYPE)512);
        *((_QWORD *)this + 51) = v9;
        if ( v9 )
        {
          v13 = ExInitializeLookasideListEx(v9, 0LL, 0LL, PagedPool, 0, 0xE0uLL, 0x32316956u, 0);
          if ( v13 < 0 )
          {
            _InterlockedIncrement(&dword_1C0027590);
            v25 = WdLogNewEntry5_WdLowResource(v12);
            *(_QWORD *)(v25 + 24) = 8846LL;
            WdLogEvent5_WdLowResource(v25);
            return (unsigned int)v13;
          }
          else
          {
            v16 = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
            if ( VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock
              && *((struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock + 1) == KeGetCurrentThread() )
            {
              v26 = WdLogNewEntry5_WdAssertion(v12, v11, v14, v15);
              *(_QWORD *)(v26 + 24) = 1135LL;
              WdLogEvent5_WdAssertion(v26);
            }
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v16, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v27 = *((_DWORD *)v16 + 4);
                if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                  Template_q(v17, &EventBlockThread, v18, v27);
              }
              ExAcquirePushLockExclusiveEx(v16, 0LL);
            }
            *((_QWORD *)v16 + 1) = KeGetCurrentThread();
            v19 = (struct _LIST_ENTRY **)qword_1C0027608;
            *((_QWORD *)this + 85) = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
            *((_QWORD *)this + 86) = v19;
            if ( *v19 != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
              __fastfail(3u);
            *v19 = (struct _LIST_ENTRY *)((char *)this + 680);
            qword_1C0027608 = (__int64)this + 680;
            *((_QWORD *)v16 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v16, 0LL);
            KeLeaveCriticalRegion();
            return 0LL;
          }
        }
        else
        {
          _InterlockedIncrement(&dword_1C0027590);
          v24 = WdLogNewEntry5_WdLowResource(v10);
          *(_QWORD *)(v24 + 24) = 8837LL;
          WdLogEvent5_WdLowResource(v24);
          return 3221225495LL;
        }
      }
    }
    else
    {
      _InterlockedIncrement(&dword_1C0027590);
      v22 = WdLogNewEntry5_WdLowResource(v6);
      *(_QWORD *)(v22 + 24) = 8819LL;
      WdLogEvent5_WdLowResource(v22);
      return 3221225495LL;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C0027590);
    v21 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v21 + 24) = 8805LL;
    WdLogEvent5_WdLowResource(v21);
    return 3221225495LL;
  }
}
