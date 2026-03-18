/*
 * XREFs of fnHkOPTINLPEVENTMSG @ 0x1C0213A54
 * Callers:
 *     xxxHkCallHook @ 0x1C005C740 (xxxHkCallHook.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall fnHkOPTINLPEVENTMSG(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // xmm1_8
  _QWORD v17[11]; // [rsp+40h] [rbp-58h] BYREF
  int v18; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+10h]

  memset(v17, 0, 0x40uLL);
  LODWORD(v17[0]) = a1;
  v17[1] = a2;
  v17[2] = a3;
  if ( a3 )
  {
    *(_OWORD *)&v17[5] = *(_OWORD *)a3;
    v17[7] = *(_QWORD *)(a3 + 16);
  }
  v17[3] = a4;
  v17[4] = a5;
  UserSessionSwitchLeaveCrit(v10, v9);
  EtwTraceBeginCallback(49LL);
  v11 = KeUserModeCallback(49LL, v17, 64LL, &a5, &v18);
  EtwTraceEndCallback(49LL);
  EnterCrit(0LL, 1LL);
  if ( v11 < 0 || v18 != 24 )
    return 0xFFFFFFFFLL;
  v12 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v12 = (__int64 *)W32UserProbeAddress;
  v13 = *v12;
  v19 = *v12;
  if ( a3 )
  {
    v14 = *(_QWORD *)(a5 + 16);
    if ( v14 + 24 < v14 || v14 + 24 > W32UserProbeAddress )
      v14 = W32UserProbeAddress;
    v15 = *(_QWORD *)(v14 + 16);
    *(_OWORD *)a3 = *(_OWORD *)v14;
    *(_QWORD *)(a3 + 16) = v15;
  }
  return (unsigned int)v13;
}
