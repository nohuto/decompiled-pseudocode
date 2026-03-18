/*
 * XREFs of VidSchDdiNotifyDpc @ 0x1C0006880
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0005A50 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000D694 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000DA44 (VidSchiProcessDpcSystemRequest.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C001D8A0 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
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
  struct _SLIST_ENTRY *v11; // rbx
  PSLIST_ENTRY v12; // rcx
  __int64 v13; // rdx
  unsigned int Next; // ecx
  struct _SLIST_ENTRY *v15; // rdi
  struct _SLIST_ENTRY *v16; // rax
  signed __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r14
  KSPIN_LOCK *v21; // r13
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // rdi
  _QWORD *v25; // rax
  __int64 v26; // rax
  void (__fastcall *v27)(KSPIN_LOCK); // rax
  void (__fastcall *v28)(KSPIN_LOCK); // rax
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+20h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+38h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 5043LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 1) != 0 )
  {
    DxgAdapter = DpiGetDxgAdapter(a1);
    v7 = DxgAdapter;
    v4 = DxgAdapter ? *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2136) + 384LL) : 0LL;
    if ( v4 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1880), &LockHandle);
      v8 = *(_QWORD *)(v7 + 2136);
      v9 = *(union _SLIST_HEADER **)(v8 + 384);
      v10 = ExpInterlockedFlushSList(v9 + 119);
      v11 = 0LL;
      if ( v10 )
      {
        do
        {
          v12 = v10 - 1;
          v10 = v10->Next;
          v12[1].Next = v11;
          v11 = v12 + 1;
        }
        while ( v10 );
        v13 = 1160LL;
        while ( 1 )
        {
          Next = (unsigned int)v11[-1].Next;
          v15 = v11 - 1;
          v11 = v11->Next;
          if ( ((Next - 1) & 0xFFFFFFF6) != 0 )
            break;
          if ( Next == 10 )
            goto LABEL_28;
          v16 = v15[2].Next;
          v17 = (signed __int64)&v15[-1];
          _InterlockedExchange((volatile __int32 *)&v16[6].Next[30], 1);
          if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
            VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(v8 + 408), 1u);
          v18 = *(_QWORD *)(v17 + 48);
          v19 = *(_QWORD *)(v18 + 96);
          v20 = *(unsigned int *)(v19 + 1408);
          v21 = *(KSPIN_LOCK **)(*(_QWORD *)(v18 + 104) + 32LL);
          v22 = v19 + 8 * v20;
          if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 1416), 0LL, v17) )
          {
            v26 = WdLogNewEntry5_WdAssertion(v22, v13);
            *(_QWORD *)(v26 + 24) = v21;
            *(_QWORD *)(v26 + 32) = v17;
            WdLogEvent5_WdAssertion(v26);
          }
          _InterlockedExchange((volatile __int32 *)(v19 + 1408), ((_BYTE)v20 + 1) & 0xF);
          *(_DWORD *)(v19 + 496) = ((unsigned __int8)*(_DWORD *)(v19 + 496) + 1) & 0xF;
          KeAcquireInStackQueuedSpinLockAtDpcLevel(v21 + 232, &v29);
          v23 = *(_DWORD *)(v17 + 92);
          if ( (v23 & 0x400) != 0 )
          {
            *(_DWORD *)(v17 + 92) = v23 & 0xFFFFFBFF;
            if ( *(_DWORD *)(v19 + 2788) != -1 )
            {
              v27 = (void (__fastcall *)(KSPIN_LOCK))v21[358];
              if ( v27 )
                v27(v21[362]);
            }
          }
          if ( (*(_DWORD *)(v17 + 92) & 0x800) != 0 )
          {
            if ( *(_DWORD *)(v21[*(unsigned int *)(*(_QWORD *)(v17 + 56) + 380LL) + 371] + 18872) != -1 )
            {
              v28 = (void (__fastcall *)(KSPIN_LOCK))v21[356];
              if ( v28 )
                v28(v21[362]);
            }
            *(_DWORD *)(v17 + 92) &= ~0x800u;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v29);
          if ( *(_DWORD *)(v17 + 88) == 3 )
          {
            VidSchiProcessDpcSystemRequest(v17);
          }
          else if ( *(_DWORD *)(v17 + 72) == 10 || *(_DWORD *)(v17 + 72) == 18 )
          {
            VidSchiProcessDpcCompletedPacket((struct _VIDSCH_DMA_PACKET *)v17);
          }
          else if ( *(_DWORD *)(v17 + 72) == 11 )
          {
            VidSchiProcessDpcPreemptedPacket(v17);
          }
          v24 = (_QWORD *)(v17 + 16);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v19 + 24) + 1864LL), &v30);
          v25 = *(_QWORD **)(v19 + 2808);
          if ( *v25 != v19 + 2800 )
            __fastfail(3u);
          *v24 = v19 + 2800;
          v24[1] = v25;
          *v25 = v24;
          *(_QWORD *)(v19 + 2808) = v24;
          KeReleaseInStackQueuedSpinLock(&v30);
LABEL_22:
          v13 = 1160LL;
LABEL_23:
          if ( !v11 )
            goto LABEL_24;
        }
        if ( Next > 0xA )
          goto LABEL_23;
LABEL_28:
        if ( !_bittest((const int *)&v13, Next) )
          goto LABEL_23;
        VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v15[-1]);
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(*(&v9[185].Region + HIDWORD(v15[4].Next)) + 19232), v15);
        goto LABEL_22;
      }
LABEL_24:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerExit, v5, 5043LL);
}
