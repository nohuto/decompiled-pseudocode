/*
 * XREFs of xxxSendEraseBkgnd @ 0x1C010BBF0
 * Callers:
 *     xxxBeginPaint @ 0x1C00552FC (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0076920 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C010D750 (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 */

__int64 __fastcall xxxSendEraseBkgnd(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 DCEx; // rdi
  unsigned int v6; // ebp

  if ( !a3 || (*(_BYTE *)(a1 + 55) & 0x20) != 0 )
    return 0LL;
  if ( a2 )
    DCEx = a2;
  else
    DCEx = _GetDCEx(a1, a3, 327808LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) != *(_QWORD *)(gptiCurrent + 376LL) )
    GreSetDCOwnerEx(DCEx, 0LL, 0LL, 0LL);
  v6 = xxxSendMessage((struct tagWND *)a1, 0x14u, DCEx, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) != *(_QWORD *)(gptiCurrent + 376LL) )
    GreSetDCOwnerEx(DCEx, 2147483650LL, 0LL, 0LL);
  if ( !v6 )
  {
    SetOrClrWF(1, (_DWORD *)a1, 0x104u, 1);
    if ( (*(_BYTE *)(a1 + 45) & 1) == 0 )
      SetOrClrWF(1, (_DWORD *)a1, 0x102u, 1);
  }
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1LL);
  return v6;
}
