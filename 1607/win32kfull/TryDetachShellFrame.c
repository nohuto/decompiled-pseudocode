/*
 * XREFs of TryDetachShellFrame @ 0x1C01D8950
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     IsDebuggerAttached @ 0x1C00AAB24 (IsDebuggerAttached.c)
 *     zzzAttachThreadInput @ 0x1C00DC6D4 (zzzAttachThreadInput.c)
 *     AssociateShellFrameAppThreads @ 0x1C01CADF4 (AssociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01CAF50 (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall TryDetachShellFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  signed int v9; // ebx
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v21[32]; // [rsp+38h] [rbp-20h] BYREF

  result = gfShellFrameHangResilient;
  if ( gfShellFrameHangResilient )
  {
    result = gdwMDAQThreshold;
    v9 = gdwMDAQThreshold;
    if ( (*(_DWORD *)(a2 + 1096) & 0x100000) == 0 )
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
                      - *(_DWORD *)(result + 432)) >= v9) )
            {
              result = AssociateShellFrameAppThreads(a1, a2);
              if ( (_DWORD)result )
              {
                v10 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 80LL);
                v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v20;
                v20[1] = v10;
                if ( v10 )
                  ++*(_DWORD *)(v10 + 8);
                LockW32Thread(a2, (__int64)v21);
                v11 = zzzAttachThreadInput(a1, a2, 0x4000LL);
                v15 = ThreadUnlock1(v13, v12);
                if ( v11 >= 0 )
                {
                  *(_DWORD *)(a2 + 1096) |= 0x80000u;
                  HMAssignmentLock(*(_QWORD *)(a1 + 384) + 80LL, *(_QWORD *)(*(_QWORD *)(a1 + 384) + 88LL));
                  if ( v15 )
                  {
                    v18 = *(_QWORD *)(a2 + 384);
                    if ( *(_QWORD *)(*(_QWORD *)(v15 + 16) + 384LL) == v18 )
                      HMAssignmentLock(v18 + 80, v15);
                  }
                  v19 = *(_QWORD *)(a1 + 1248);
                  if ( v19 )
                    PostMessage(v19, 840LL, 1LL, 0LL);
                }
                return PopAndFreeW32ThreadLock((__int64)v21, v14, v16, v17);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
