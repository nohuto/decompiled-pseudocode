/*
 * XREFs of xxxClientGetDDEFlags @ 0x1C0214B54
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EB640 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientGetDDEFlags(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  _QWORD v5[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h]

  v5[0] = a1;
  v5[1] = (unsigned int)a2;
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(69LL);
  v2 = KeUserModeCallback(69LL, v5, 16LL, &v6, &v7);
  EtwTraceEndCallback(69LL);
  EnterCrit(1LL);
  if ( v2 < 0 || v7 != 24 )
    return 0LL;
  v3 = (__int64 *)v6;
  if ( v6 + 8 < v6 || v6 + 8 > W32UserProbeAddress )
    v3 = (__int64 *)W32UserProbeAddress;
  result = *v3;
  v8 = *v3;
  return result;
}
