/*
 * XREFs of fnHkINLPKBDLLHOOKSTRUCT @ 0x1C00ED61C
 * Callers:
 *     xxxHkCallHook @ 0x1C006CB30 (xxxHkCallHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall fnHkINLPKBDLLHOOKSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  _QWORD *v12; // rcx
  int v14; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v16[56]; // [rsp+50h] [rbp-48h] BYREF

  memset(v16, 0, sizeof(v16));
  *(_DWORD *)v16 = a1;
  *(_QWORD *)&v16[8] = a2;
  *(_OWORD *)&v16[32] = *(_OWORD *)a3;
  *(_QWORD *)&v16[48] = *(_QWORD *)(a3 + 16);
  *(_QWORD *)&v16[16] = a4;
  *(_QWORD *)&v16[24] = a5;
  UserSessionSwitchLeaveCrit(v10, v9);
  EtwTraceBeginCallback(45LL);
  v11 = KeUserModeCallback(45LL, v16, 56LL, &v15, &v14);
  EtwTraceEndCallback(45LL);
  EnterCrit(1LL);
  if ( v11 < 0 || v14 != 24 )
    return 0LL;
  v12 = (_QWORD *)v15;
  if ( v15 + 8 < v15 || v15 + 8 > W32UserProbeAddress )
    v12 = (_QWORD *)W32UserProbeAddress;
  return (unsigned int)*v12;
}
