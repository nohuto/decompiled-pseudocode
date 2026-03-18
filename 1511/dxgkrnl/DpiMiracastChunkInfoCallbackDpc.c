/*
 * XREFs of DpiMiracastChunkInfoCallbackDpc @ 0x1C0023CE0
 * Callers:
 *     <none>
 * Callees:
 *     DpSynchronizeExecution @ 0x1C000B220 (DpSynchronizeExecution.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C0023CAC (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0029720 (DpiMiracastPerfHandleChunkInfo.c)
 *     DpiMiracastPerfResetPerfTrack @ 0x1C0029CC0 (DpiMiracastPerfResetPerfTrack.c)
 */

void __fastcall DpiMiracastChunkInfoCallbackDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  bool v9; // zf
  __int32 v10; // eax
  char v11; // si
  __int64 v12; // rcx
  struct MIRACAST_CHUNK *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-38h]
  _QWORD v17[2]; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+50h] [rbp-20h]
  int v19; // [rsp+54h] [rbp-1Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  BOOLEAN v21; // [rsp+98h] [rbp+28h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_1C0047008, &LockHandle);
  v5 = *((_QWORD *)DeferredContext + 39);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 64);
    v19 = *(_DWORD *)(v6 + 1880);
    v17[1] = v17;
    v17[0] = v17;
    v15 = (_QWORD *)*((_QWORD *)DeferredContext + 48);
    v16 = v17;
    v18 = 0;
    DpSynchronizeExecution(v5, (KSYNCHRONIZE_ROUTINE *)DpiMiracastMoveChunkList, &v15, *(_DWORD *)(v6 + 2556), &v21);
    v8 = (_QWORD *)v17[0];
    v9 = v17[0] == (_QWORD)v17;
    v10 = _InterlockedExchange((volatile __int32 *)DeferredContext + 116, 0);
    if ( v9 )
      v8 = 0LL;
    if ( v10 )
    {
      v11 = 1;
    }
    else
    {
      v11 = 0;
      while ( v8 )
      {
        LOBYTE(v7) = 1;
        DpiMiracastPerfHandleChunkInfo(DeferredContext, v7, v8 + 2);
        v14 = (_QWORD *)*v8;
        v9 = *v8 == (_QWORD)v17;
        v8 = 0LL;
        if ( !v9 )
          v8 = v14;
      }
    }
    v12 = *((_QWORD *)DeferredContext + 39);
    v15 = v17;
    v16 = (_QWORD *)*((_QWORD *)DeferredContext + 49);
    DpSynchronizeExecution(v12, (KSYNCHRONIZE_ROUTINE *)DpiMiracastMoveChunkList, &v15, *(_DWORD *)(v6 + 2556), &v21);
    if ( v11 )
    {
      DpiMiracastPerfResetPerfTrack(DeferredContext);
      *((_QWORD *)DeferredContext + 120) = *((_QWORD *)DeferredContext + 119) + 40LL;
    }
    while ( 1 )
    {
      v13 = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v17);
      if ( !v13 )
        break;
      ExFreePoolWithTag(v13, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
