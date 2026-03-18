/*
 * XREFs of TryDetachShellFrame @ 0x1C01E2248
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 * Callees:
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     zzzAttachThreadInput @ 0x1C004340C (zzzAttachThreadInput.c)
 *     IsDebuggerAttached @ 0x1C00454B4 (IsDebuggerAttached.c)
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     AssociateShellFrameAppThreads @ 0x1C01D145C (AssociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D1534 (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryDetachShellFrame(__int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rdi
  unsigned __int64 v8; // r8
  signed int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  _QWORD v21[3]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v22[32]; // [rsp+38h] [rbp-20h] BYREF

  v5 = a3;
  if ( gfShellFrameHangResilient )
  {
    v8 = *(unsigned int *)(a2 + 1080);
    v9 = gdwMDAQThreshold;
    if ( (v8 & 0x100000) != 0 || FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)a2) )
    {
      v11 = 1;
      v12 = (v8 >> 20) & 1;
      v10 = a2;
      goto LABEL_23;
    }
    if ( (unsigned int)IsDebuggerAttached(a1[48]) || (unsigned int)IsDebuggerAttached(*(_QWORD *)(a2 + 384)) )
    {
      v20 = (int)IsDebuggerAttached(*(_QWORD *)(a2 + 384));
      v10 = (int)IsDebuggerAttached(a1[48]);
      v11 = 2;
      v12 = v20;
      goto LABEL_23;
    }
    if ( !(_DWORD)v5 )
      v9 = gdwMDAQThreshold / 0xAu;
    if ( !a4
      && (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - *(_DWORD *)(a1[49] + 424)) < v9 )
    {
      v10 = v5;
      v11 = 2;
      v12 = a2;
LABEL_23:
      LogMDAQueueOp(0xA6u, v10, v12, v11);
      return;
    }
    if ( (unsigned int)AssociateShellFrameAppThreads((__int64)a1, a2) )
    {
      v13 = *(_QWORD *)(a1[49] + 72);
      v21[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v21;
      v21[1] = v13;
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      LockW32Thread(a2, (__int64)v22);
      LogMDAQueueOp(0x9Cu, v5, *(unsigned int *)(a1[49] + 16), 1u);
      v14 = zzzAttachThreadInput((__int64)a1, a2, 0x4000);
      LogMDAQueueOp(0x9Cu, v5, a2, 3u);
      v17 = ThreadUnlock1(v16, v15);
      if ( v14 >= 0 )
      {
        *(_DWORD *)(a2 + 1080) |= 0x80000u;
        HMAssignmentLock(a1[49] + 72, *(_QWORD *)(a1[49] + 80));
        if ( v17 )
        {
          v18 = *(_QWORD *)(a2 + 392);
          if ( *(_QWORD *)(*(_QWORD *)(v17 + 16) + 392LL) == v18 )
            HMAssignmentLock(v18 + 72, v17);
        }
        v19 = a1[154];
        if ( v19 )
          PostMessage(v19, 0x348u, 1uLL, 0LL);
      }
      PopAndFreeW32ThreadLock((__int64)v22);
    }
  }
}
