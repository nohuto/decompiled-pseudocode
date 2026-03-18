/*
 * XREFs of xxxDoPaint @ 0x1C005B83C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C005BA70 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     LogicalQmsgCursorPos @ 0x1C005C314 (LogicalQmsgCursorPos.c)
 *     CheckPwndFilter @ 0x1C005C388 (CheckPwndFilter.c)
 *     DecPaintCount @ 0x1C005CB80 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     ExchangeW32ThreadLock @ 0x1C009C914 (ExchangeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     StoreMessage @ 0x1C01227DC (StoreMessage.c)
 */

__int64 __fastcall xxxDoPaint(__int64 a1, __int64 a2)
{
  struct tagWND *v4; // rbx
  struct tagWND *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v13[32]; // [rsp+40h] [rbp-28h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) != 0 )
  {
    v9 = *(_QWORD **)(gptiCurrent + 536LL);
    if ( !v9 )
      return 0LL;
    v4 = *(struct tagWND **)(v9[3] + 8LL);
    if ( !*((_QWORD *)v4 + 20) && (*((_BYTE *)v4 + 41) & 0x10) == 0 )
    {
      v4 = 0LL;
      PushW32ThreadLock(0LL, v13, UserDereferenceObject);
      do
      {
        v9 = (_QWORD *)v9[2];
        if ( !v9 )
          break;
        ObfReferenceObject(v9);
        ExchangeW32ThreadLock(v9, v13);
        v4 = xxxInternalDoPaint(*(struct tagWND **)(v9[1] + 16LL), gptiCurrent);
      }
      while ( !v4 );
      PopAndFreeW32ThreadLock((__int64)v13, v10, v11, v12);
    }
  }
  else
  {
    v4 = xxxInternalDoPaint(
           *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL),
           gptiCurrent);
  }
  if ( !v4 || !(unsigned int)CheckPwndFilter(v4, a1) )
    return 0LL;
  if ( (*((_BYTE *)v4 + 41) & 0x10) != 0 )
  {
    SetOrClrWF(0LL, v4, 272LL, 1LL);
    if ( !*((_QWORD *)v4 + 20) )
      DecPaintCount(v4);
  }
  SetOrClrWF(0LL, v4, 1028LL, 1LL);
  SetOrClrWF(0LL, v4, 288LL, 1LL);
  v5 = v4;
  while ( (*((_WORD *)v5 + 33) & 0x3FFF) != 0x29D )
  {
    v5 = (struct tagWND *)*((_QWORD *)v5 + 11);
    if ( (*((_BYTE *)v5 + 55) & 2) == 0 )
    {
      SetOrClrWF(1LL, v4, 1025LL, 1LL);
      break;
    }
    if ( !v5 )
      break;
  }
  if ( (*((_BYTE *)v4 + 45) & 2) == 0 && (*((_BYTE *)v4 + 55) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)v4 + 19) + 112LL) )
  {
    StoreMessage(a2, (_DWORD)v4, 38, 1);
  }
  else
  {
    v6 = *(_QWORD *)v4;
    v7 = *((_QWORD *)v4 + 2);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)a2 = v6;
    *(_DWORD *)(a2 + 8) = 15;
    *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_QWORD *)(a2 + 36) = LogicalQmsgCursorPos(v4, *(_QWORD *)(v7 + 384));
  }
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
