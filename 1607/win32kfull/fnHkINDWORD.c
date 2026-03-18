/*
 * XREFs of fnHkINDWORD @ 0x1C01068A8
 * Callers:
 *     xxxCallCtfHook @ 0x1C007F1EC (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C0084730 (xxxHkCallHook.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall fnHkINDWORD(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, _DWORD *a6)
{
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  int v12; // ebx
  _QWORD *v13; // rcx
  _DWORD *v14; // r8
  _DWORD *v15; // rcx
  _QWORD v17[6]; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+80h] [rbp+8h] BYREF

  memset(v17, 0, sizeof(v17));
  LODWORD(v17[0]) = a1;
  v17[1] = a2;
  v17[5] = a3;
  v17[2] = a4;
  v17[3] = a5;
  v11 = a6;
  LODWORD(v17[4]) = *a6;
  if ( gdwInAtomicOperation )
  {
    v10 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation);
  EtwTraceBeginCallback(40LL);
  v12 = KeUserModeCallback(40LL, v17, 48LL, &a5, &v18);
  EtwTraceEndCallback(40LL);
  EnterCrit(0LL, 1LL);
  if ( v12 < 0 || v18 != 24 )
    return 0LL;
  v13 = (_QWORD *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v13 = (_QWORD *)W32UserProbeAddress;
  v14 = (_DWORD *)*v13;
  a6 = (_DWORD *)*v13;
  v15 = *(_DWORD **)(a5 + 16);
  if ( v15 + 1 < v15 || (unsigned __int64)(v15 + 1) > W32UserProbeAddress )
    v15 = (_DWORD *)W32UserProbeAddress;
  *v11 ^= ((unsigned __int8)*v15 ^ (unsigned __int8)*v11) & 0x10;
  return (unsigned int)v14;
}
