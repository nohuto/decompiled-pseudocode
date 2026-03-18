/*
 * XREFs of fnHkINLPRECT @ 0x1C02138D4
 * Callers:
 *     xxxHkCallHook @ 0x1C005C740 (xxxHkCallHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall fnHkINLPRECT(int a1, __int64 a2, _OWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int128 *v14; // rcx
  int v16; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-80h] BYREF
  __int128 v18; // [rsp+40h] [rbp-78h]
  _OWORD v19[3]; // [rsp+60h] [rbp-58h] BYREF

  memset(v19, 0, sizeof(v19));
  LODWORD(v19[0]) = a1;
  *((_QWORD *)&v19[0] + 1) = a2;
  v19[1] = *a3;
  *(_QWORD *)&v19[2] = a4;
  *((_QWORD *)&v19[2] + 1) = a5;
  UserSessionSwitchLeaveCrit(v10, v9);
  EtwTraceBeginCallback(48LL);
  v11 = KeUserModeCallback(48LL, v19, 48LL, &v17, &v16);
  EtwTraceEndCallback(48LL);
  EnterCrit(0LL, 1LL);
  if ( v11 < 0 || v16 != 24 )
    return 0LL;
  v12 = (__int64 *)v17;
  if ( v17 + 8 < v17 || v17 + 8 > W32UserProbeAddress )
    v12 = (__int64 *)W32UserProbeAddress;
  v13 = *v12;
  *(_QWORD *)&v18 = *v12;
  v14 = *(__int128 **)(v17 + 16);
  if ( v14 + 1 < v14 || (unsigned __int64)(v14 + 1) > W32UserProbeAddress )
    v14 = (__int128 *)W32UserProbeAddress;
  v18 = *v14;
  *a3 = v18;
  return (unsigned int)v13;
}
