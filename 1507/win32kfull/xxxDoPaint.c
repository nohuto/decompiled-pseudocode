/*
 * XREFs of xxxDoPaint @ 0x1C008FE9C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x1C004E394 (ExchangeW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C00900D0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     LogicalCursorPos @ 0x1C0090A74 (LogicalCursorPos.c)
 *     CheckPwndFilter @ 0x1C0090AD4 (CheckPwndFilter.c)
 *     DecPaintCount @ 0x1C00EB508 (DecPaintCount.c)
 *     StoreMessage @ 0x1C00F901C (StoreMessage.c)
 */

__int64 __fastcall xxxDoPaint(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  struct tagWND *v5; // rbx
  struct tagWND *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD v10[4]; // [rsp+40h] [rbp-28h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 4) != 0 )
  {
    v4 = *(_QWORD **)(gptiCurrent + 544LL);
    if ( !v4 )
      return 0LL;
    v5 = *(struct tagWND **)(v4[3] + 8LL);
    if ( !*((_QWORD *)v5 + 20) && (*((_BYTE *)v5 + 41) & 0x10) == 0 )
    {
      v5 = 0LL;
      PushW32ThreadLock(0LL, v10, UserDereferenceObject);
      do
      {
        v4 = (_QWORD *)v4[2];
        if ( !v4 )
          break;
        ObfReferenceObject(v4);
        ExchangeW32ThreadLock((__int64)v4, (__int64)v10);
        v5 = xxxInternalDoPaint(*(struct tagWND **)(v4[1] + 16LL), gptiCurrent);
      }
      while ( !v5 );
      PopAndFreeW32ThreadLock((__int64)v10);
    }
  }
  else
  {
    v5 = xxxInternalDoPaint(
           *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL) + 16LL),
           gptiCurrent);
  }
  if ( !v5 || !(unsigned int)CheckPwndFilter(v5, a1) )
    return 0LL;
  if ( (*((_BYTE *)v5 + 41) & 0x10) != 0 )
  {
    SetOrClrWF(0, v5, 0x110u, 1);
    if ( !*((_QWORD *)v5 + 20) )
      DecPaintCount(v5);
  }
  SetOrClrWF(0, v5, 0x404u, 1);
  SetOrClrWF(0, v5, 0x120u, 1);
  v6 = v5;
  while ( (*((_WORD *)v6 + 33) & 0x3FFF) != 0x29D )
  {
    v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
    if ( (*((_BYTE *)v6 + 55) & 2) == 0 )
    {
      SetOrClrWF(1, v5, 0x401u, 1);
      break;
    }
    if ( !v6 )
      break;
  }
  if ( (*((_BYTE *)v5 + 45) & 2) == 0 && (*((_BYTE *)v5 + 55) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)v5 + 19) + 112LL) )
  {
    StoreMessage(a2, (_DWORD)v5, 38, 1);
  }
  else
  {
    v7 = *(_QWORD *)v5;
    v8 = *((_QWORD *)v5 + 2);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)a2 = v7;
    *(_DWORD *)(a2 + 8) = 15;
    *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_QWORD *)(a2 + 36) = LogicalCursorPos(v8);
  }
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
