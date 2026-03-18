/*
 * XREFs of fnHkINLPRECT @ 0x1C020C338
 * Callers:
 *     xxxHkCallHook @ 0x1C0084730 (xxxHkCallHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall fnHkINLPRECT(int a1, __int64 a2, _OWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  int v10; // ebx
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int128 *v13; // rcx
  int v15; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-80h] BYREF
  __int128 v17; // [rsp+40h] [rbp-78h]
  _OWORD v18[3]; // [rsp+60h] [rbp-58h] BYREF

  memset(v18, 0, sizeof(v18));
  LODWORD(v18[0]) = a1;
  *((_QWORD *)&v18[0] + 1) = a2;
  v18[1] = *a3;
  *(_QWORD *)&v18[2] = a4;
  *((_QWORD *)&v18[2] + 1) = a5;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation);
  EtwTraceBeginCallback(48LL);
  v10 = KeUserModeCallback(48LL, v18, 48LL, &v16, &v15);
  EtwTraceEndCallback(48LL);
  EnterCrit(0LL, 1LL);
  if ( v10 < 0 || v15 != 24 )
    return 0LL;
  v11 = (__int64 *)v16;
  if ( v16 + 8 < v16 || v16 + 8 > W32UserProbeAddress )
    v11 = (__int64 *)W32UserProbeAddress;
  v12 = *v11;
  *(_QWORD *)&v17 = *v11;
  v13 = *(__int128 **)(v16 + 16);
  if ( v13 + 1 < v13 || (unsigned __int64)(v13 + 1) > W32UserProbeAddress )
    v13 = (__int128 *)W32UserProbeAddress;
  v17 = *v13;
  *a3 = v17;
  return (unsigned int)v12;
}
