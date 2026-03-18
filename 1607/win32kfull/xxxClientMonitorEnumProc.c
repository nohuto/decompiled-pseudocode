/*
 * XREFs of xxxClientMonitorEnumProc @ 0x1C0113DF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxClientMonitorEnumProc(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  int v10; // ebx
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
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation);
  EtwTraceBeginCallback(87LL);
  v10 = KeUserModeCallback(87LL, v15, 48LL, v14, &v13);
  EtwTraceEndCallback(87LL);
  EnterCrit(0LL, 1LL);
  if ( v10 < 0 || v13 != 24 )
    return 0LL;
  v11 = (__int64 *)v14[0];
  if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || (unsigned __int64)(v14[0] + 8LL) > W32UserProbeAddress )
    v11 = (__int64 *)W32UserProbeAddress;
  result = *v11;
  v14[1] = *v11;
  return result;
}
