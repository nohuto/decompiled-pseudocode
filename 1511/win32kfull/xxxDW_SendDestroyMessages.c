/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C0069824
 * Callers:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0069824 (xxxDW_SendDestroyMessages.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0069824 (xxxDW_SendDestroyMessages.c)
 *     xxxCheckFocus @ 0x1C0069950 (xxxCheckFocus.c)
 *     _GetProcessWindowStation @ 0x1C00699F0 (_GetProcessWindowStation.c)
 *     xxxDisownClipboard @ 0x1C01F0B0C (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxDW_SendDestroyMessages(__int64 a1)
{
  __int64 ProcessWindowStation; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF

  ((void (*)(void))xxxCheckFocus)();
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( ProcessWindowStation && a1 == *(_QWORD *)(ProcessWindowStation + 80) )
  {
    xxxDisownClipboard(a1);
  }
  else if ( grpWinStaList && a1 == *(_QWORD *)(grpWinStaList + 80LL) )
  {
    HMAssignmentUnlock(grpWinStaList + 80LL);
  }
  if ( (*(_BYTE *)(a1 + 290) & 4) != 0 )
  {
    xxxSendMessage((struct tagWND *)a1, 0x272u, 0LL, 0LL);
    *(_BYTE *)(a1 + 290) &= ~4u;
  }
  xxxSendMessage((struct tagWND *)a1, 2u, 0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 72);
      v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v12;
      v12[1] = v7;
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
      v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v13;
      v13[1] = v5;
      ++*(_DWORD *)(v5 + 8);
      xxxDW_SendDestroyMessages(v5, gptiCurrent, v3, v4);
      ThreadUnlock1(v9, v8);
      v5 = v7;
    }
    while ( ThreadUnlock1(v11, v10) && v7 );
  }
  return xxxCheckFocus(a1);
}
