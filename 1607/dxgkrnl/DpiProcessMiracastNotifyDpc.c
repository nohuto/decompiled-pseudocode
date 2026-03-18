/*
 * XREFs of DpiProcessMiracastNotifyDpc @ 0x1C000C020
 * Callers:
 *     DxgNotifyDpcCB @ 0x1C000BFB0 (DxgNotifyDpcCB.c)
 * Callees:
 *     DpSynchronizeExecution @ 0x1C000BE80 (DpSynchronizeExecution.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C002ACCC (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C002B16C (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C002BFF0 (DpiMiracastStopMiracastSessionAsync.c)
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0030AA4 (DpiMiracastPerfHandleChunkInfo.c)
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
  __int64 v9; // rcx
  unsigned int v10; // r9d
  __int64 v11; // rax
  struct MIRACAST_CHUNK *v12; // rax
  struct _KEVENT *v13; // rcx
  __int64 v14; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v16; // [rsp+40h] [rbp-19h] BYREF
  __int64 v17; // [rsp+48h] [rbp-11h]
  __int64 v18; // [rsp+50h] [rbp-9h]
  _QWORD v19[2]; // [rsp+58h] [rbp-1h] BYREF
  int v20; // [rsp+68h] [rbp+Fh]
  int v21; // [rsp+6Ch] [rbp+13h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+17h] BYREF
  BOOLEAN v23; // [rsp+C0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( v1 && *(_DWORD *)(v1 + 16) == 1953656900 && *(_DWORD *)(v1 + 20) == 2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, &LockHandle);
    v3 = *(_QWORD *)(v1 + 3040);
    if ( v3 )
    {
      v4 = *(_QWORD **)(v3 + 496);
      v5 = (_QWORD *)v4[1];
      v16 = v1;
      v17 = *(_QWORD *)(v3 + 496);
      DpSynchronizeExecution(
        a1,
        (KSYNCHRONIZE_ROUTINE *)MiracastProcessPendingDPCChunks,
        &v16,
        *(_DWORD *)(v1 + 3700),
        &v23);
      if ( BYTE1(v18) )
      {
        DpiMiracastStopMiracastSessionAsync((PVOID)v3);
      }
      else
      {
        if ( (_BYTE)v18 )
        {
          *(_BYTE *)(v3 + 597) = 1;
        }
        else if ( !*(_BYTE *)(v3 + 601) )
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
        if ( HIDWORD(v18) < 0x14 && *(_DWORD *)(v1 + 3060) + 5 < 40 )
        {
          v21 = *(_DWORD *)(v1 + 3024);
          v20 = 0;
          v19[1] = v19;
          v19[0] = v19;
          if ( MIRACAST_CHUNK_LIST::AllocateNewChunks((MIRACAST_CHUNK_LIST *)v19, 5u) )
          {
            v10 = *(_DWORD *)(v1 + 3700);
            v15[0] = v19;
            v15[1] = *(_QWORD *)(v1 + 3064);
            DpSynchronizeExecution(a1, (KSYNCHRONIZE_ROUTINE *)DpiMiracastMoveChunkList, v15, v10, &v23);
            *(_DWORD *)(v1 + 3060) += 5;
          }
          else
          {
            v11 = WdLogNewEntry5_WdLowResource(v9);
            *(_QWORD *)(v11 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v11);
          }
          while ( 1 )
          {
            v12 = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v19);
            if ( !v12 )
              break;
            ExFreePoolWithTag(v12, 0);
          }
        }
        if ( BYTE2(v18) || (_BYTE)v18 )
        {
          v13 = *(struct _KEVENT **)(v3 + 504);
          if ( v13 )
            KeSetEvent(v13, 1, 0);
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v14 + 24) = v1;
    *(_QWORD *)(v14 + 32) = -1073741585LL;
    WdLogEvent5_WdError(v14);
  }
}
