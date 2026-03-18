/*
 * XREFs of fnHkINLPDEBUGHOOKSTRUCT @ 0x1C02138C4
 * Callers:
 *     xxxHkCallHook @ 0x1C006CB30 (xxxHkCallHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     CopyDebugHookLParam @ 0x1C020DE5C (CopyDebugHookLParam.c)
 */

__int64 __fastcall fnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  _QWORD *v12; // rcx
  int v14; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-B0h] BYREF
  _OWORD v16[8]; // [rsp+50h] [rbp-98h] BYREF

  memset(v16, 0, 0x78uLL);
  LODWORD(v16[0]) = a1;
  *((_QWORD *)&v16[0] + 1) = a2;
  *(_DWORD *)(a3 + 28) = 0;
  v16[1] = *(_OWORD *)a3;
  v16[2] = *(_OWORD *)(a3 + 16);
  *((_QWORD *)&v16[6] + 1) = a4;
  *(_QWORD *)&v16[7] = a5;
  if ( a2 - 13 <= 1 )
    return 0LL;
  LODWORD(v16[6]) = CopyDebugHookLParam(a2, (__int64)&v16[3], a3);
  *((_QWORD *)&v16[1] + 1) = 0LL;
  UserSessionSwitchLeaveCrit(v10, v9);
  EtwTraceBeginCallback(43LL);
  v11 = KeUserModeCallback(43LL, v16, 120LL, &v15, &v14);
  EtwTraceEndCallback(43LL);
  EnterCrit(1LL);
  if ( v11 < 0 || v14 != 24 )
    return 0LL;
  v12 = (_QWORD *)v15;
  if ( v15 + 8 < v15 || v15 + 8 > W32UserProbeAddress )
    v12 = (_QWORD *)W32UserProbeAddress;
  return (unsigned int)*v12;
}
