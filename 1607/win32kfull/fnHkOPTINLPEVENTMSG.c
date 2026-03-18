/*
 * XREFs of fnHkOPTINLPEVENTMSG @ 0x1C020C4EC
 * Callers:
 *     xxxHkCallHook @ 0x1C0084730 (xxxHkCallHook.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall fnHkOPTINLPEVENTMSG(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // rcx
  int v10; // ebx
  __int64 *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // xmm1_8
  _QWORD v16[11]; // [rsp+40h] [rbp-58h] BYREF
  int v17; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+10h]

  memset(v16, 0, 0x40uLL);
  LODWORD(v16[0]) = a1;
  v16[1] = a2;
  v16[2] = a3;
  if ( a3 )
  {
    *(_OWORD *)&v16[5] = *(_OWORD *)a3;
    v16[7] = *(_QWORD *)(a3 + 16);
  }
  v16[3] = a4;
  v16[4] = a5;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation);
  EtwTraceBeginCallback(49LL);
  v10 = KeUserModeCallback(49LL, v16, 64LL, &a5, &v17);
  EtwTraceEndCallback(49LL);
  EnterCrit(0LL, 1LL);
  if ( v10 < 0 || v17 != 24 )
    return 0xFFFFFFFFLL;
  v11 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v11 = (__int64 *)W32UserProbeAddress;
  v12 = *v11;
  v18 = *v11;
  if ( a3 )
  {
    v13 = *(_QWORD *)(a5 + 16);
    if ( v13 + 24 < v13 || v13 + 24 > W32UserProbeAddress )
      v13 = W32UserProbeAddress;
    v14 = *(_QWORD *)(v13 + 16);
    *(_OWORD *)a3 = *(_OWORD *)v13;
    *(_QWORD *)(a3 + 16) = v14;
  }
  return (unsigned int)v12;
}
