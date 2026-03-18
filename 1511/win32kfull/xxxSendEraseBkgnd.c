/*
 * XREFs of xxxSendEraseBkgnd @ 0x1C0069A20
 * Callers:
 *     xxxBeginPaint @ 0x1C0067C4C (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C006D570 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00EE158 (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
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
    SetOrClrWF(1LL, a1, 260LL, 1LL);
    if ( (*(_BYTE *)(a1 + 45) & 1) == 0 )
      SetOrClrWF(1LL, a1, 258LL, 1LL);
  }
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1LL);
  return v6;
}
