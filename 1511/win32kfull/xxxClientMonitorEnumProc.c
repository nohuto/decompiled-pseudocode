/*
 * XREFs of xxxClientMonitorEnumProc @ 0x1C00F2D50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall xxxClientMonitorEnumProc(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 result; // rax
  int v13; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v15[3]; // [rsp+50h] [rbp-48h] BYREF

  memset(v15, 0, sizeof(v15));
  *(_QWORD *)&v15[0] = a1;
  *((_QWORD *)&v15[0] + 1) = a2;
  v15[1] = *a3;
  *(_QWORD *)&v15[2] = a4;
  *((_QWORD *)&v15[2] + 1) = a5;
  UserSessionSwitchLeaveCrit(v10, v9);
  EtwTraceBeginCallback(86LL);
  LODWORD(a1) = KeUserModeCallback(86LL, v15, 48LL, v14, &v13);
  EtwTraceEndCallback(86LL);
  EnterCrit(0LL, 1LL);
  if ( (int)a1 < 0 || v13 != 24 )
    return 0LL;
  v11 = (__int64 *)v14[0];
  if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || (unsigned __int64)(v14[0] + 8LL) > W32UserProbeAddress )
    v11 = (__int64 *)W32UserProbeAddress;
  result = *v11;
  v14[1] = *v11;
  return result;
}
