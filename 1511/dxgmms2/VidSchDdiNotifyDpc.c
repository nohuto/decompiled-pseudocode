/*
 * XREFs of VidSchDdiNotifyDpc @ 0x1C0007B10
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00056C0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000EC2C (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000EF58 (VidSchiProcessDpcSystemRequest.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C001C8B8 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 */

void __fastcall VidSchDdiNotifyDpc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 DxgAdapter; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  union _SLIST_HEADER *v9; // rsi
  PSLIST_ENTRY v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _SLIST_ENTRY *v14; // rbx
  PSLIST_ENTRY v15; // rcx
  int Next; // ecx
  struct _SLIST_ENTRY *v17; // rdi
  struct _SLIST_ENTRY *v18; // rax
  signed __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rax
  void (__fastcall *v29)(_QWORD); // rax
  void (__fastcall *v30)(_QWORD); // rax
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-40h] BYREF

  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 5043LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 1) != 0 )
  {
    DxgAdapter = DpiGetDxgAdapter(a1);
    v7 = DxgAdapter;
    v4 = DxgAdapter ? *(_QWORD *)(*(_QWORD *)(DxgAdapter + 1992) + 408LL) : 0LL;
    if ( v4 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1848), &LockHandle);
      v8 = *(_QWORD *)(v7 + 1992);
      v9 = *(union _SLIST_HEADER **)(v8 + 408);
      v10 = ExpInterlockedFlushSList(v9 + 117);
      v14 = 0LL;
      if ( v10 )
      {
        do
        {
          v15 = v10 - 1;
          v10 = v10->Next;
          v15[1].Next = v14;
          v14 = v15 + 1;
        }
        while ( v10 );
        do
        {
          Next = (int)v14[-1].Next;
          v17 = v14 - 1;
          v14 = v14->Next;
          if ( ((Next - 1) & 0xFFFFFFF6) != 0 || Next == 10 )
          {
            if ( ((Next - 3) & 0xFFFFFFFB) == 0 )
            {
              VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v17[-1]);
              ExpInterlockedPushEntrySList((PSLIST_HEADER)(*(&v9[162].Alignment + HIDWORD(v17[4].Next)) + 15136), v17);
            }
          }
          else
          {
            v18 = v17[2].Next;
            v19 = (signed __int64)&v17[-1];
            _InterlockedExchange((volatile __int32 *)&v18[6].Next[27].Next + 2, 1);
            if ( (dword_1C002F104 & 0x10) != 0 )
              VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(v8 + 432), 1u);
            v20 = *(_QWORD *)(v19 + 48);
            v21 = *(_QWORD *)(v20 + 96);
            v22 = *(unsigned int *)(v21 + 1368);
            v23 = *(_QWORD *)(*(_QWORD *)(v20 + 104) + 32LL);
            v24 = v21 + 8 * v22;
            if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 1376), 0LL, v19) )
            {
              v28 = WdLogNewEntry5_WdAssertion(v24, v11, v12, v13);
              *(_QWORD *)(v28 + 24) = v23;
              *(_QWORD *)(v28 + 32) = v19;
              WdLogEvent5_WdAssertion(v28);
            }
            _InterlockedExchange((volatile __int32 *)(v21 + 1368), ((_BYTE)v22 + 1) & 0xF);
            *(_DWORD *)(v21 + 456) = ((unsigned __int8)*(_DWORD *)(v21 + 456) + 1) & 0xF;
            v25 = *(_DWORD *)(v19 + 92);
            if ( (v25 & 0x400) != 0 )
            {
              *(_DWORD *)(v19 + 92) = v25 & 0xFFFFFBFF;
              if ( *(_DWORD *)(v21 + 2952) != -1 )
              {
                v29 = *(void (__fastcall **)(_QWORD))(v23 + 2488);
                if ( v29 )
                  v29(*(_QWORD *)(v23 + 2520));
              }
            }
            if ( (*(_DWORD *)(v19 + 92) & 0x800) != 0 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v23 + 8LL * *(unsigned int *)(*(_QWORD *)(v19 + 56) + 372LL) + 2592) + 14768LL) != -1 )
              {
                v30 = *(void (__fastcall **)(_QWORD))(v23 + 2488);
                if ( v30 )
                  v30(*(_QWORD *)(v23 + 2520));
              }
              *(_DWORD *)(v19 + 92) &= ~0x800u;
            }
            if ( *(_DWORD *)(v19 + 88) == 3 )
            {
              VidSchiProcessDpcSystemRequest(v19);
            }
            else if ( *(_DWORD *)(v19 + 72) == 10 || *(_DWORD *)(v19 + 72) == 18 )
            {
              VidSchiProcessDpcCompletedPacket((struct _VIDSCH_DMA_PACKET *)v19);
            }
            else if ( *(_DWORD *)(v19 + 72) == 11 )
            {
              VidSchiProcessDpcPreemptedPacket(v19);
            }
            v26 = (_QWORD *)(v19 + 16);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v21 + 24) + 1832LL), &v31);
            v27 = *(_QWORD **)(v21 + 2968);
            *v26 = v21 + 2960;
            v26[1] = v27;
            if ( *v27 != v21 + 2960 )
              __fastfail(3u);
            *v27 = v26;
            *(_QWORD *)(v21 + 2968) = v26;
            KeReleaseInStackQueuedSpinLock(&v31);
          }
        }
        while ( v14 );
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v4, &EventProfilerExit, v5, 5043LL);
}
