/*
 * XREFs of TryDetachShellFrame @ 0x1C01E276C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     zzzAttachThreadInput @ 0x1C008AE54 (zzzAttachThreadInput.c)
 *     IsDebuggerAttached @ 0x1C008D488 (IsDebuggerAttached.c)
 *     LockW32Thread @ 0x1C008E0B4 (LockW32Thread.c)
 *     AssociateShellFrameAppThreads @ 0x1C01D30D4 (AssociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D31AC (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall TryDetachShellFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  signed int v9; // ebx
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  result = gfShellFrameHangResilient;
  if ( gfShellFrameHangResilient )
  {
    result = gdwMDAQThreshold;
    v9 = gdwMDAQThreshold;
    if ( (*(_DWORD *)(a2 + 1072) & 0x100000) == 0 )
    {
      result = FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)a2);
      if ( !result )
      {
        result = IsDebuggerAttached(*(__int64 **)(a1 + 376));
        if ( !(_DWORD)result )
        {
          result = IsDebuggerAttached(*(__int64 **)(a2 + 376));
          if ( !(_DWORD)result )
          {
            if ( !a3 )
              v9 = gdwMDAQThreshold / 0xAu;
            if ( a4
              || (result = *(_QWORD *)(a1 + 384),
                  (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                      - *(_DWORD *)(result + 424)) >= v9) )
            {
              result = AssociateShellFrameAppThreads(a1, a2);
              if ( (_DWORD)result )
              {
                v10 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 72LL);
                v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v17;
                v17[1] = v10;
                if ( v10 )
                  ++*(_DWORD *)(v10 + 8);
                LockW32Thread(a2, v18);
                v11 = zzzAttachThreadInput(a1, a2, 0x4000);
                v14 = ThreadUnlock1(v13, v12);
                if ( v11 >= 0 )
                {
                  *(_DWORD *)(a2 + 1072) |= 0x80000u;
                  HMAssignmentLock(*(_QWORD *)(a1 + 384) + 72LL, *(_QWORD *)(*(_QWORD *)(a1 + 384) + 80LL));
                  if ( v14 )
                  {
                    v15 = *(_QWORD *)(a2 + 384);
                    if ( *(_QWORD *)(*(_QWORD *)(v14 + 16) + 384LL) == v15 )
                      HMAssignmentLock(v15 + 72, v14);
                  }
                  v16 = *(_QWORD *)(a1 + 1224);
                  if ( v16 )
                    PostMessage(v16, 840LL, 1uLL, 0LL);
                }
                return PopAndFreeW32ThreadLock((__int64)v18);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
