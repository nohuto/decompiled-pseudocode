/*
 * XREFs of ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C003B564
 * Callers:
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C003AEC0 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0053D20 (-CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C003B2A4 (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGING_QUEUE::InitializePagingQueue(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  struct _KEVENT *v8; // rax
  char v9; // bl
  unsigned int v10; // ebp
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  bool v18; // cl
  __int64 v19; // rcx

  *(_QWORD *)(a1 + 80) = *(_QWORD *)a4;
  *(_QWORD *)(a1 + 136) = a2;
  *(_BYTE *)(a1 + 130) = *(_BYTE *)(a4 + 4616);
  *(_DWORD *)(a1 + 132) = dword_1C002F37C;
  *(_DWORD *)(a1 + 116) = a5;
  v6 = *(_QWORD *)(a4 + 24);
  if ( *(int *)(v6 + 1656) < 0x2000 )
    v7 = 1;
  else
    v7 = *(_DWORD *)(v6 + 232);
  if ( v7 > 1 )
    *(_DWORD *)(a1 + 144) = a3;
  v8 = (struct _KEVENT *)operator new(0x18uLL, 0x38346956u, (POOL_TYPE)512);
  v9 = 0;
  *(_QWORD *)(a1 + 120) = v8;
  if ( v8 )
  {
    KeInitializeEvent(v8, SynchronizationEvent, 0);
    v10 = 0;
    while ( 1 )
    {
      v11 = operator new(0x98uLL, 0x38346956u, PagedPool);
      v12 = v11;
      if ( !v11 )
        break;
      memset(v11, 0, 0x98uLL);
      v13 = *(_QWORD **)(a1 + 24);
      *v12 = a1 + 16;
      v12[1] = v13;
      if ( *v13 != a1 + 16 )
        __fastfail(3u);
      ++v10;
      *v13 = v12;
      *(_QWORD *)(a1 + 24) = v12;
      if ( v10 >= 2 )
      {
        v14 = *(_QWORD *)(a1 + 136);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v14 + 104, 0LL);
        *(_QWORD *)(v14 + 112) = KeGetCurrentThread();
        v15 = a1 + 48;
        v16 = *(_QWORD **)(v14 + 96);
        *(_QWORD *)(a1 + 48) = v14 + 88;
        *(_QWORD *)(a1 + 56) = v16;
        if ( *v16 != v14 + 88 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v14 + 96) = v15;
        if ( *(_BYTE *)(v14 + 49) )
          VIDMM_PAGING_QUEUE::SetStatus((__int64 *)a1, 2);
        *(_QWORD *)(v14 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v14 + 104, 0LL);
        KeLeaveCriticalRegion();
        v17 = *(_QWORD *)(a1 + 136);
        v18 = (*(_BYTE *)(*(_QWORD *)(v17 + 8) + 48LL) & 2) != 0;
        *(_BYTE *)(a1 + 129) = 0;
        *(_BYTE *)(a1 + 128) = v18;
        v19 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 32LL);
        if ( v19 )
        {
          if ( *(_BYTE *)(v19 + 312) || *(_BYTE *)(v19 + 314) )
            v9 = 1;
          *(_BYTE *)(a1 + 129) = v9;
        }
        return 0LL;
      }
    }
  }
  return 3221225495LL;
}
