/*
 * XREFs of fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0213738
 * Callers:
 *     xxxHkCallHook @ 0x1C005C740 (xxxHkCallHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     GetDebugHookLParamSize @ 0x1C020E420 (GetDebugHookLParamSize.c)
 */

__int64 __fastcall fnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int DebugHookLParamSize; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  int v12; // ebx
  _QWORD *v13; // rcx
  int v15; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v16[3]; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v17[8]; // [rsp+60h] [rbp-98h] BYREF

  memset(v17, 0, 0x78uLL);
  LODWORD(v17[0]) = a1;
  *((_QWORD *)&v17[0] + 1) = a2;
  *(_DWORD *)(a3 + 28) = 0;
  v17[1] = *(_OWORD *)a3;
  v17[2] = *(_OWORD *)(a3 + 16);
  *((_QWORD *)&v17[6] + 1) = a4;
  *(_QWORD *)&v17[7] = a5;
  DebugHookLParamSize = GetDebugHookLParamSize(a2, a3);
  LODWORD(v17[6]) = DebugHookLParamSize;
  v11 = a2 - 13;
  if ( a2 - 13 <= 1 )
    return 0LL;
  if ( DebugHookLParamSize )
    memmove(&v17[3], *(const void **)(a3 + 8), DebugHookLParamSize);
  UserSessionSwitchLeaveCrit(v11, v10);
  EtwTraceBeginCallback(43LL);
  v12 = KeUserModeCallback(43LL, v17, 120LL, v16, &v15);
  EtwTraceEndCallback(43LL);
  EnterCrit(0LL, 1LL);
  if ( v12 < 0 || v15 != 24 )
    return 0LL;
  v13 = (_QWORD *)v16[0];
  if ( v16[0] + 8 < v16[0] || v16[0] + 8 > W32UserProbeAddress )
    v13 = (_QWORD *)W32UserProbeAddress;
  return (unsigned int)*v13;
}
