/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C0087F88
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C0087F88 (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0087F88 (xxxDW_SendDestroyMessages.c)
 *     xxxCheckFocus @ 0x1C00880B8 (xxxCheckFocus.c)
 *     xxxDisownClipboard @ 0x1C01F0BAC (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxDW_SendDestroyMessages(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF

  xxxCheckFocus(a1);
  v3 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v2) + 640);
  if ( v3 && a1 == *(_QWORD *)(v3 + 80) )
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
  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
  {
    do
    {
      v6 = *(_QWORD *)(v4 + 72);
      v11[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v11;
      v11[1] = v6;
      if ( v6 )
        ++*(_DWORD *)(v6 + 8);
      v12[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v12;
      v12[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      xxxDW_SendDestroyMessages(v4);
      ThreadUnlock1(v8, v7);
      v4 = v6;
    }
    while ( ThreadUnlock1(v10, v9) && v6 );
  }
  return xxxCheckFocus(a1);
}
