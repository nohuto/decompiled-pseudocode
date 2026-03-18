/*
 * XREFs of NtUserfnPOINTERINPUT @ 0x1C02231A0
 * Callers:
 *     NtUserfnPARENTNOTIFY @ 0x1C0049A80 (NtUserfnPARENTNOTIFY.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsPointerInputMessage @ 0x1C008C6CC (IsPointerInputMessage.c)
 *     xxxSendPointerMessage @ 0x1C01E187C (xxxSendPointerMessage.c)
 */

__int64 __fastcall NtUserfnPOINTERINPUT(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r10
  __int64 v9; // r11
  int v10; // r8d

  v6 = 0LL;
  v7 = a3;
  v9 = gptiCurrent;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    UserSetLastError(1400);
    return v6;
  }
  v10 = a6;
  if ( a6 != 689 && a6 != 691 && (a6 <= 0x2B6 || a6 > 0x2B8) )
    return v6;
  if ( a2 == 528 )
  {
    if ( (_WORD)v7 != 582 )
      return v6;
    v7 >>= 16;
    return xxxSendPointerMessage(v9, v7, a1, a2, v6, a5, v10);
  }
  if ( a2 == 587 )
  {
    v6 = a4;
    return xxxSendPointerMessage(v9, v7, a1, a2, v6, a5, v10);
  }
  if ( (a2 != 592 || (*(_DWORD *)(gptiCurrent + 1080LL) & 0x2000) != 0)
    && (unsigned int)IsPointerInputMessage(a2)
    && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) == *(_QWORD *)(v9 + 384) )
  {
    return xxxSendPointerMessage(v9, v7, a1, a2, v6, a5, v10);
  }
  return v6;
}
