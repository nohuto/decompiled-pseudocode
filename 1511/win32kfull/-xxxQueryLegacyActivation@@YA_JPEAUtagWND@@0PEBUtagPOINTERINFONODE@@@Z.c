/*
 * XREFs of ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0PEBUtagPOINTERINFONODE@@@Z @ 0x1C01FB128
 * Callers:
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FACF0 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 */

__int64 __fastcall xxxQueryLegacyActivation(struct tagWND *a1, struct tagWND *a2, const struct tagPOINTERINFONODE *a3)
{
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  unsigned __int16 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v13; // rax
  bool v14; // cc

  v3 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) + 64LL) )
    return 3LL;
  v8 = *((_WORD *)a3 + 16);
  v9 = *(_QWORD *)(gptiCurrent + 684LL);
  v10 = *(_QWORD *)(gptiCurrent + 676LL);
  *(_QWORD *)(gptiCurrent + 684LL) = *((_QWORD *)a3 + 11);
  *(_QWORD *)(gptiCurrent + 676LL) = *((_QWORD *)a3 + 11);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    *(_DWORD *)(gptiCurrent + 676LL) = EngMulDiv(*((_DWORD *)a3 + 22), 96, *(unsigned __int16 *)(gpsi + 7286LL));
    *(_DWORD *)(gptiCurrent + 680LL) = EngMulDiv(*((_DWORD *)a3 + 23), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  }
  if ( a2 )
    v3 = *(_QWORD *)a2;
  v13 = xxxSendMessage(a1, 0x21u, v3, v8 | 0x2460000LL);
  *(_QWORD *)(gptiCurrent + 684LL) = v9;
  *(_QWORD *)(gptiCurrent + 676LL) = v10;
  v14 = (unsigned __int64)(v13 - 3) <= 1;
  result = 3LL;
  if ( !v14 )
    return 1LL;
  return result;
}
