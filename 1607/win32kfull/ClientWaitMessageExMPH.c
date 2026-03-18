/*
 * XREFs of ClientWaitMessageExMPH @ 0x1C00E175C
 * Callers:
 *     xxxWaitMessageEx @ 0x1C00DF5E4 (xxxWaitMessageEx.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientWaitMessageExMPH(__int64 a1, int a2)
{
  int v2; // ebx
  unsigned __int64 v3; // rcx
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+64h] [rbp+1Ch]
  unsigned __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = a1;
  v7 = a2;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  EtwTraceBeginCallback(89LL);
  v2 = KeUserModeCallback(89LL, &v6, 8LL, &v8, &v5);
  EtwTraceEndCallback(89LL);
  EnterCrit(0LL, 1LL);
  if ( v2 < 0 || v5 != 24 )
    return 0LL;
  v3 = v8;
  if ( v8 + 8 < v8 || v8 + 8 > W32UserProbeAddress )
    v3 = W32UserProbeAddress;
  return *(_QWORD *)v3;
}
