/*
 * XREFs of xxxClientGetCharsetInfo @ 0x1C00E8FA4
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00E67CC (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxClientGetCharsetInfo(int a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  int v12; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v14[10]; // [rsp+58h] [rbp-40h] BYREF

  memset(v14, 0, 0x24uLL);
  v14[0] = a1;
  if ( gdwInAtomicOperation )
  {
    v5 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  EtwTraceBeginCallback(69LL);
  v6 = KeUserModeCallback(69LL, v14, 36LL, v13, &v12);
  EtwTraceEndCallback(69LL);
  EnterCrit(0LL, 1LL);
  if ( v6 < 0 || v12 != 24 )
    return 0LL;
  v7 = (__int64 *)v13[0];
  if ( (unsigned __int64)(v13[0] + 8LL) < v13[0] || (unsigned __int64)(v13[0] + 8LL) > W32UserProbeAddress )
    v7 = (__int64 *)W32UserProbeAddress;
  v8 = *v7;
  v13[1] = *v7;
  v9 = *(_OWORD **)(v13[0] + 16LL);
  if ( v9 + 2 < v9 || (unsigned __int64)(v9 + 2) > W32UserProbeAddress )
    v9 = (_OWORD *)W32UserProbeAddress;
  v10 = v9[1];
  *a2 = *v9;
  a2[1] = v10;
  return (unsigned int)v8;
}
