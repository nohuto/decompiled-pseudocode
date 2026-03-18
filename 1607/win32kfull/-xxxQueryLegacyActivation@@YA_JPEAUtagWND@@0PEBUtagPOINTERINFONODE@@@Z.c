/*
 * XREFs of ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0PEBUtagPOINTERINFONODE@@@Z @ 0x1C01F2528
 * Callers:
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F1F34 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     GetDPITransformationMonitor @ 0x1C01DBDF0 (GetDPITransformationMonitor.c)
 */

__int64 __fastcall xxxQueryLegacyActivation(struct tagWND *a1, struct tagWND *a2, const struct tagPOINTERINFONODE *a3)
{
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  unsigned __int16 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) + 72LL) )
    return 3LL;
  v7 = *((_WORD *)a3 + 16);
  v8 = *(_QWORD *)(gptiCurrent + 684LL);
  v9 = *(_QWORD *)(gptiCurrent + 676LL);
  *(_QWORD *)(gptiCurrent + 684LL) = *((_QWORD *)a3 + 11);
  *(_QWORD *)(gptiCurrent + 676LL) = *((_QWORD *)a3 + 11);
  if ( (*((_DWORD *)a1 + 88) & 0xF) != 2 )
  {
    v12 = 0LL;
    GetDPITransformationMonitor(*(_QWORD *)(gptiCurrent + 676LL), (__int64)a1, &v12);
    PhysicalToLogicalDPIPoint(gptiCurrent + 676LL, gptiCurrent + 676LL, 0LL);
  }
  if ( a2 )
    v3 = *(_QWORD *)a2;
  v10 = xxxSendMessage(a1, 0x21u, v3, v7 | 0x2460000LL);
  *(_QWORD *)(gptiCurrent + 684LL) = v8;
  *(_QWORD *)(gptiCurrent + 676LL) = v9;
  v11 = v10 - 3;
  result = 3LL;
  if ( v11 > 1 )
    return 1LL;
  return result;
}
