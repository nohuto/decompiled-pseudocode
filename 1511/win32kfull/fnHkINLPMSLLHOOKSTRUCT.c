/*
 * XREFs of fnHkINLPMSLLHOOKSTRUCT @ 0x1C00F6C00
 * Callers:
 *     xxxHkCallHook @ 0x1C005C740 (xxxHkCallHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall fnHkINLPMSLLHOOKSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  _QWORD *v12; // rcx
  int v14; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-70h] BYREF
  _OWORD v16[4]; // [rsp+50h] [rbp-58h] BYREF

  memset(v16, 0, sizeof(v16));
  LODWORD(v16[0]) = a1;
  *((_QWORD *)&v16[0] + 1) = a2;
  *(_DWORD *)(a3 + 20) = 0;
  v16[2] = *(_OWORD *)a3;
  v16[3] = *(_OWORD *)(a3 + 16);
  *(_QWORD *)&v16[1] = a4;
  *((_QWORD *)&v16[1] + 1) = a5;
  UserSessionSwitchLeaveCrit(v10, v9);
  EtwTraceBeginCallback(46LL);
  v11 = KeUserModeCallback(46LL, v16, 64LL, &v15, &v14);
  EtwTraceEndCallback(46LL);
  EnterCrit(0LL, 1LL);
  if ( v11 < 0 || v14 != 24 )
    return 0LL;
  v12 = (_QWORD *)v15;
  if ( v15 + 8 < v15 || v15 + 8 > W32UserProbeAddress )
    v12 = (_QWORD *)W32UserProbeAddress;
  return (unsigned int)*v12;
}
