/*
 * XREFs of xxxClientCallWinEventProc @ 0x1C00887CC
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C0085350 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxClientCallWinEventProc(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ebx
  __int64 *v9; // rcx
  __int64 result; // rax
  _QWORD v11[10]; // [rsp+38h] [rbp-50h] BYREF
  int v12; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+98h] [rbp+10h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+18h]

  memset(v11, 0, 0x30uLL);
  v11[0] = a1;
  if ( a2 )
    v7 = *a2;
  else
    v7 = 0LL;
  v11[1] = v7;
  v11[3] = *(_QWORD *)(a3 + 24);
  LODWORD(v11[2]) = *(_DWORD *)(a3 + 16);
  v11[4] = *(_QWORD *)(a3 + 32);
  v11[5] = *(_QWORD *)(a3 + 40);
  if ( gdwInAtomicOperation )
  {
    v6 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation);
  EtwTraceBeginCallback(88LL);
  v8 = KeUserModeCallback(88LL, v11, 48LL, &v13, &v12);
  EtwTraceEndCallback(88LL);
  EnterCrit(0LL, 1LL);
  if ( v8 < 0 || v12 != 24 )
    return 0LL;
  v9 = (__int64 *)v13;
  if ( v13 + 8 < v13 || v13 + 8 > W32UserProbeAddress )
    v9 = (__int64 *)W32UserProbeAddress;
  result = *v9;
  v14 = *v9;
  return result;
}
