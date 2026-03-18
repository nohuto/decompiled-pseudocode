/*
 * XREFs of DpiProcessMiracastNotifyDpc @ 0x1C000B3D0
 * Callers:
 *     DxgNotifyDpcCB @ 0x1C000B360 (DxgNotifyDpcCB.c)
 * Callees:
 *     DpSynchronizeExecution @ 0x1C000B220 (DpSynchronizeExecution.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C00237F8 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C0023CAC (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C0024BC0 (DpiMiracastStopMiracastSessionAsync.c)
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0029720 (DpiMiracastPerfHandleChunkInfo.c)
 */

void __fastcall DpiProcessMiracastNotifyDpc(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  _QWORD *v4; // r15
  _QWORD *v5; // r13
  __int64 v6; // rdx
  _QWORD *v7; // r14
  bool i; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r9d
  _QWORD *v14; // rax
  struct MIRACAST_CHUNK *v15; // rax
  struct _KEVENT *v16; // rcx
  _QWORD *v17; // rax
  _QWORD v18[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v19; // [rsp+40h] [rbp-19h] BYREF
  __int64 v20; // [rsp+48h] [rbp-11h]
  __int64 v21; // [rsp+50h] [rbp-9h]
  _QWORD v22[2]; // [rsp+58h] [rbp-1h] BYREF
  int v23; // [rsp+68h] [rbp+Fh]
  int v24; // [rsp+6Ch] [rbp+13h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+17h] BYREF
  BOOLEAN v26; // [rsp+C0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( v1 && *(_DWORD *)(v1 + 16) == 1953656900 && *(_DWORD *)(v1 + 20) == 2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1C0047008, &LockHandle);
    v3 = *(_QWORD *)(v1 + 1896);
    if ( v3 )
    {
      v4 = *(_QWORD **)(v3 + 368);
      v5 = (_QWORD *)v4[1];
      v19 = v1;
      v20 = *(_QWORD *)(v3 + 368);
      DpSynchronizeExecution(
        a1,
        (KSYNCHRONIZE_ROUTINE *)MiracastProcessPendingDPCChunks,
        &v19,
        *(_DWORD *)(v1 + 2556),
        &v26);
      if ( BYTE1(v21) )
      {
        DpiMiracastStopMiracastSessionAsync((PVOID)v3);
      }
      else
      {
        if ( (_BYTE)v21 )
        {
          *(_BYTE *)(v3 + 469) = 1;
        }
        else if ( !*(_BYTE *)(v3 + 473) )
        {
          v7 = (_QWORD *)*v4;
          for ( i = v4 == v5; v7 != v4; v7 = (_QWORD *)*v7 )
          {
            if ( i )
            {
              LOBYTE(v6) = 1;
              DpiMiracastPerfHandleChunkInfo(v3, v6, v7 + 2);
            }
            else
            {
              i = v7 == v5;
            }
          }
        }
        if ( HIDWORD(v21) < 0x14 && *(_DWORD *)(v1 + 1916) + 5 < 40 )
        {
          v24 = *(_DWORD *)(v1 + 1880);
          v23 = 0;
          v22[1] = v22;
          v22[0] = v22;
          if ( MIRACAST_CHUNK_LIST::AllocateNewChunks((MIRACAST_CHUNK_LIST *)v22, 5u) )
          {
            v13 = *(_DWORD *)(v1 + 2556);
            v18[0] = v22;
            v18[1] = *(_QWORD *)(v1 + 1920);
            DpSynchronizeExecution(a1, (KSYNCHRONIZE_ROUTINE *)DpiMiracastMoveChunkList, v18, v13, &v26);
            *(_DWORD *)(v1 + 1916) += 5;
          }
          else
          {
            v14 = (_QWORD *)WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
            v14[3] = DpiProcessMiracastNotifyDpc;
            v14[4] = 0LL;
            v14[5] = -1073741801LL;
            WdLogEvent5_WdLowResource(v14);
          }
          while ( 1 )
          {
            v15 = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v22);
            if ( !v15 )
              break;
            ExFreePoolWithTag(v15, 0);
          }
        }
        if ( BYTE2(v21) || (_BYTE)v21 )
        {
          v16 = *(struct _KEVENT **)(v3 + 376);
          if ( v16 )
            KeSetEvent(v16, 1, 0);
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v17[3] = DpiProcessMiracastNotifyDpc;
    v17[4] = v1;
    v17[5] = -1073741585LL;
    WdLogEvent5_WdError(v17);
  }
}
