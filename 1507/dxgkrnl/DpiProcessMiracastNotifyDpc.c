/*
 * XREFs of DpiProcessMiracastNotifyDpc @ 0x1C0009000
 * Callers:
 *     DxgNotifyDpcCB @ 0x1C0008F90 (DxgNotifyDpcCB.c)
 * Callees:
 *     DpSynchronizeExecution @ 0x1C0008E50 (DpSynchronizeExecution.c)
 *     Template_p @ 0x1C001F9FC (Template_p.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C0023CC0 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C002417C (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C0025080 (DpiMiracastStopMiracastSessionAsync.c)
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0029AAC (DpiMiracastPerfHandleChunkInfo.c)
 */

void __fastcall DpiProcessMiracastNotifyDpc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  _QWORD *v6; // r15
  _QWORD *v7; // r13
  __int64 v8; // rdx
  _QWORD *v9; // r14
  bool i; // r12
  __int64 v11; // rcx
  unsigned int v12; // r9d
  _QWORD *v13; // rax
  struct MIRACAST_CHUNK *v14; // rax
  struct _KEVENT *v15; // rcx
  _QWORD *v16; // rax
  _QWORD v17[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v18; // [rsp+40h] [rbp-19h] BYREF
  __int64 v19; // [rsp+48h] [rbp-11h]
  __int64 v20; // [rsp+50h] [rbp-9h]
  _QWORD v21[2]; // [rsp+58h] [rbp-1h] BYREF
  int v22; // [rsp+68h] [rbp+Fh]
  int v23; // [rsp+6Ch] [rbp+13h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+17h] BYREF
  BOOLEAN v25; // [rsp+C0h] [rbp+67h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( v3 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      Template_p(a1, &EventMiracastDPC, a3, *(_QWORD *)(v3 + 48));
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v5 = *(_QWORD *)(v3 + 1856);
    if ( v5 )
    {
      v6 = *(_QWORD **)(v5 + 360);
      v7 = (_QWORD *)v6[1];
      v18 = v3;
      v19 = *(_QWORD *)(v5 + 360);
      DpSynchronizeExecution(
        a1,
        (KSYNCHRONIZE_ROUTINE *)MiracastProcessPendingDPCChunks,
        &v18,
        *(_DWORD *)(v3 + 2516),
        &v25);
      if ( BYTE1(v20) )
      {
        DpiMiracastStopMiracastSessionAsync((PVOID)v5);
      }
      else
      {
        if ( (_BYTE)v20 )
        {
          *(_BYTE *)(v5 + 460) = 1;
        }
        else if ( !*(_BYTE *)(v5 + 464) )
        {
          v9 = (_QWORD *)*v6;
          for ( i = v6 == v7; v9 != v6; v9 = (_QWORD *)*v9 )
          {
            if ( i )
            {
              LOBYTE(v8) = 1;
              DpiMiracastPerfHandleChunkInfo(v5, v8, v9 + 2);
            }
            else
            {
              i = v9 == v7;
            }
          }
        }
        if ( HIDWORD(v20) < 0x14 && *(_DWORD *)(v3 + 1876) + 5 < 40 )
        {
          v23 = *(_DWORD *)(v3 + 1840);
          v22 = 0;
          v21[1] = v21;
          v21[0] = v21;
          if ( MIRACAST_CHUNK_LIST::AllocateNewChunks((MIRACAST_CHUNK_LIST *)v21, 5u) )
          {
            v12 = *(_DWORD *)(v3 + 2516);
            v17[0] = v21;
            v17[1] = *(_QWORD *)(v3 + 1880);
            DpSynchronizeExecution(a1, (KSYNCHRONIZE_ROUTINE *)DpiMiracastMoveChunkList, v17, v12, &v25);
            *(_DWORD *)(v3 + 1876) += 5;
          }
          else
          {
            v13 = (_QWORD *)WdLogNewEntry5_WdLowResource(v11);
            v13[3] = DpiProcessMiracastNotifyDpc;
            v13[4] = 0LL;
            v13[5] = -1073741801LL;
            WdLogEvent5_WdLowResource(v13);
          }
          while ( 1 )
          {
            v14 = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v21);
            if ( !v14 )
              break;
            ExFreePoolWithTag(v14, 0);
          }
        }
        if ( BYTE2(v20) || (_BYTE)v20 )
        {
          v15 = *(struct _KEVENT **)(v5 + 368);
          if ( v15 )
            KeSetEvent(v15, 1, 0);
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v16[3] = DpiProcessMiracastNotifyDpc;
    v16[4] = v3;
    v16[5] = -1073741585LL;
    WdLogEvent5_WdError(v16);
  }
}
