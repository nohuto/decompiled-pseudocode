/*
 * XREFs of fnHkINLPKBDLLHOOKSTRUCT @ 0x1C01122D8
 * Callers:
 *     xxxHkCallHook @ 0x1C0084730 (xxxHkCallHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall fnHkINLPKBDLLHOOKSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  int v10; // ebx
  _QWORD *v11; // rcx
  int v13; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v15[56]; // [rsp+50h] [rbp-48h] BYREF

  memset(v15, 0, sizeof(v15));
  *(_DWORD *)v15 = a1;
  *(_QWORD *)&v15[8] = a2;
  *(_OWORD *)&v15[32] = *(_OWORD *)a3;
  *(_QWORD *)&v15[48] = *(_QWORD *)(a3 + 16);
  *(_QWORD *)&v15[16] = a4;
  *(_QWORD *)&v15[24] = a5;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation);
  EtwTraceBeginCallback(45LL);
  v10 = KeUserModeCallback(45LL, v15, 56LL, &v14, &v13);
  EtwTraceEndCallback(45LL);
  EnterCrit(0LL, 1LL);
  if ( v10 < 0 || v13 != 24 )
    return 0LL;
  v11 = (_QWORD *)v14;
  if ( v14 + 8 < v14 || v14 + 8 > W32UserProbeAddress )
    v11 = (_QWORD *)W32UserProbeAddress;
  return (unsigned int)*v11;
}
