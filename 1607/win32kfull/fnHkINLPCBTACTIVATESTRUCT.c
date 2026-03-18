/*
 * XREFs of fnHkINLPCBTACTIVATESTRUCT @ 0x1C01285A8
 * Callers:
 *     xxxCallCtfHook @ 0x1C007F1EC (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C0084730 (xxxHkCallHook.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTACTIVATESTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // rcx
  int v10; // ebx
  _QWORD *v11; // rcx
  _OWORD v13[5]; // [rsp+38h] [rbp-50h] BYREF
  int v14; // [rsp+90h] [rbp+8h] BYREF

  memset(v13, 0, 0x30uLL);
  LODWORD(v13[0]) = a1;
  *((_QWORD *)&v13[0] + 1) = a2;
  *(_DWORD *)(a3 + 4) = 0;
  v13[1] = *(_OWORD *)a3;
  *(_QWORD *)&v13[2] = a4;
  *((_QWORD *)&v13[2] + 1) = a5;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation);
  EtwTraceBeginCallback(41LL);
  v10 = KeUserModeCallback(41LL, v13, 48LL, &a5, &v14);
  EtwTraceEndCallback(41LL);
  EnterCrit(0LL, 1LL);
  if ( v10 < 0 || v14 != 24 )
    return 0LL;
  v11 = (_QWORD *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v11 = (_QWORD *)W32UserProbeAddress;
  return (unsigned int)*v11;
}
