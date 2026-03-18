/*
 * XREFs of xxxClientCallDelegateThread @ 0x1C014A02C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxClientCallDelegateThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 result; // rax
  _QWORD v10[11]; // [rsp+40h] [rbp-58h] BYREF
  int v11; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+18h]

  memset(v10, 0, 0x40uLL);
  v10[0] = a1;
  v10[1] = a3;
  v10[2] = *(_QWORD *)a2;
  LODWORD(v10[3]) = *(_DWORD *)(a2 + 8);
  v10[4] = *(_QWORD *)(a2 + 16);
  v10[5] = *(_QWORD *)(a2 + 24);
  LODWORD(v10[6]) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)((char *)&v10[6] + 4) = *(_QWORD *)(a2 + 36);
  if ( gdwInAtomicOperation )
  {
    v6 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation);
  EtwTraceBeginCallback(50LL);
  v7 = KeUserModeCallback(50LL, v10, 64LL, &v12, &v11);
  EtwTraceEndCallback(50LL);
  EnterCrit(0LL, 1LL);
  if ( v7 < 0 || v11 != 24 )
    return 0LL;
  v8 = (__int64 *)v12;
  if ( v12 + 8 < v12 || v12 + 8 > W32UserProbeAddress )
    v8 = (__int64 *)W32UserProbeAddress;
  result = *v8;
  v13 = *v8;
  return result;
}
