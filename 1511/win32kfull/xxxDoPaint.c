/*
 * XREFs of xxxDoPaint @ 0x1C0055FF8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0056220 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     LogicalCursorPos @ 0x1C0056358 (LogicalCursorPos.c)
 *     CheckPwndFilter @ 0x1C00563B8 (CheckPwndFilter.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     DecPaintCount @ 0x1C00F15F4 (DecPaintCount.c)
 *     StoreMessage @ 0x1C00FF530 (StoreMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDoPaint(__int64 a1, __int64 a2)
{
  struct tagWND *v4; // rbx
  struct tagWND *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp-20h]
  void (*v13)(void); // [rsp+50h] [rbp-18h]

  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) != 0 )
  {
    v9 = *(_QWORD **)(gptiCurrent + 536LL);
    if ( !v9 )
      return 0LL;
    v4 = *(struct tagWND **)(v9[3] + 8LL);
    if ( !*((_QWORD *)v4 + 20) && (*((_BYTE *)v4 + 41) & 0x10) == 0 )
    {
      v4 = 0LL;
      PushW32ThreadLock(0LL, &v11, UserDereferenceObject);
      do
      {
        v9 = (_QWORD *)v9[2];
        if ( !v9 )
          break;
        ObfReferenceObject(v9);
        v10 = v12;
        v12 = v9;
        if ( v10 )
          v13();
        v4 = xxxInternalDoPaint(*(struct tagWND **)(v9[1] + 16LL), gptiCurrent);
      }
      while ( !v4 );
      PopAndFreeW32ThreadLock(&v11);
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
    *(_QWORD *)(a2 + 36) = LogicalCursorPos(v7);
  }
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
