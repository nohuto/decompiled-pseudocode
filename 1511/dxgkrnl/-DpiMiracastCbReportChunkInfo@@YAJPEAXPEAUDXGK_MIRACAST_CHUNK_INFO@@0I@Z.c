/*
 * XREFs of ?DpiMiracastCbReportChunkInfo@@YAJPEAXPEAUDXGK_MIRACAST_CHUNK_INFO@@0I@Z @ 0x1C0023880
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C0023CAC (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     Template_xqqqqqq @ 0x1C0027CE4 (Template_xqqqqqq.c)
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0029720 (DpiMiracastPerfHandleChunkInfo.c)
 */

__int64 __fastcall DpiMiracastCbReportChunkInfo(char *a1, struct DXGK_MIRACAST_CHUNK_INFO *a2, void *a3, int a4)
{
  unsigned int v4; // ebp
  _QWORD *v7; // rax
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // si
  int v10; // r8d
  struct MIRACAST_CHUNK *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // xmm1_8
  __int64 v17; // rcx
  struct MIRACAST_CHUNK **v18; // rdx
  __int64 v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v7[4] = a1;
    v8 = -1073741584LL;
LABEL_28:
    v7[3] = DpiMiracastCbReportChunkInfo;
    v7[5] = v8;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v8;
  }
  if ( a3 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v7[4] = a1;
    v8 = -1073741583LL;
    goto LABEL_28;
  }
  if ( a4 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v7[4] = a1;
    v8 = -1073741582LL;
    goto LABEL_28;
  }
  if ( !a1 || *((_DWORD *)a1 + 4) != 1953656900 || *((_DWORD *)a1 + 5) != 14 || !*((_QWORD *)a1 + 39) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v7[4] = a1;
    v8 = -1073741585LL;
    goto LABEL_28;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v11 = MIRACAST_CHUNK_LIST::RemoveHead(*((MIRACAST_CHUNK_LIST **)a1 + 49));
    if ( v11 )
    {
      *((_OWORD *)v11 + 1) = *(_OWORD *)&a2->ChunkType;
      v16 = *(_QWORD *)&a2->ProcessingTime;
      *((_DWORD *)v11 + 10) = 0;
      *((_QWORD *)v11 + 4) = v16;
      v17 = *((_QWORD *)a1 + 48);
      v18 = *(struct MIRACAST_CHUNK ***)(v17 + 8);
      *(_QWORD *)v11 = v17;
      *((_QWORD *)v11 + 1) = v18;
      if ( *v18 != (struct MIRACAST_CHUNK *)v17 )
        __fastfail(3u);
      *v18 = v11;
      *(_QWORD *)(v17 + 8) = v11;
      ++*(_DWORD *)(v17 + 16);
    }
    else
    {
      v19 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v19 + 24) = DpiMiracastCbReportChunkInfo;
      *(_QWORD *)(v19 + 32) = a1;
      WdLogEvent5_WdWarning(v19);
      v4 = -1073741801;
      _InterlockedExchange((volatile __int32 *)a1 + 116, 1);
    }
    KeInsertQueueDpc((PRKDPC)(a1 + 400), 0LL, 0LL);
  }
  else
  {
    if ( CurrentIrql == 2 )
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_1C0047008, &LockHandle);
    else
      KeAcquireInStackQueuedSpinLock(&qword_1C0047008, &LockHandle);
    DpiMiracastPerfHandleChunkInfo(a1, 1LL, a2);
    if ( CurrentIrql == 2 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    Template_xqqqqqq(
      a2->ChunkType,
      (a2->ChunkId.Value >> 40) & 0xFFFFFF,
      v10,
      *((_QWORD *)a1 + 12),
      a2->ChunkType,
      *(_DWORD *)&a2->ChunkId.0,
      (unsigned __int16)WORD2(a2->ChunkId.Value) >> 8,
      a2->ProcessingTime,
      a2->EncodeRate,
      0);
  return v4;
}
