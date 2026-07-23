/*
 * XREFs of PpmEventTraceCoreParkingSelection @ 0x14020C878
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1400D2A6C (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char PpmEventTraceCoreParkingSelection(__int64 a1, unsigned int a2, ...)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  REGHANDLE v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // [rsp+38h] [rbp-79h] BYREF
  __int64 v12; // [rsp+40h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-69h] BYREF
  __int64 v14; // [rsp+58h] [rbp-59h]
  int v15; // [rsp+60h] [rbp-51h]
  int v16; // [rsp+64h] [rbp-4Dh]
  __int64 *v17; // [rsp+68h] [rbp-49h]
  int v18; // [rsp+70h] [rbp-41h]
  int v19; // [rsp+74h] [rbp-3Dh]
  __int64 *v20; // [rsp+78h] [rbp-39h]
  int v21; // [rsp+80h] [rbp-31h]
  int v22; // [rsp+84h] [rbp-2Dh]
  va_list v23; // [rsp+88h] [rbp-29h]
  int v24; // [rsp+90h] [rbp-21h]
  int v25; // [rsp+94h] [rbp-1Dh]
  va_list v26; // [rsp+98h] [rbp-19h]
  int v27; // [rsp+A0h] [rbp-11h]
  int v28; // [rsp+A4h] [rbp-Dh]
  __int64 v29; // [rsp+A8h] [rbp-9h]
  int v30; // [rsp+B0h] [rbp-1h]
  int v31; // [rsp+B4h] [rbp+3h]
  va_list v32; // [rsp+B8h] [rbp+7h]
  int v33; // [rsp+C0h] [rbp+Fh]
  int v34; // [rsp+C4h] [rbp+13h]
  va_list v35; // [rsp+C8h] [rbp+17h]
  int v36; // [rsp+D0h] [rbp+1Fh]
  int v37; // [rsp+D4h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+4Fh] BYREF
  __int64 v39; // [rsp+118h] [rbp+67h] BYREF
  va_list va; // [rsp+118h] [rbp+67h]
  __int64 v41; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+120h] [rbp+6Fh]
  __int64 v43; // [rsp+128h] [rbp+77h] BYREF
  va_list va2; // [rsp+128h] [rbp+77h]
  va_list va3; // [rsp+130h] [rbp+7Fh] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v39 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v41 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v43 = va_arg(va3, _QWORD);
  v2 = &retaddr;
  v3 = v39;
  v4 = a2;
  if ( PpmEtwRegistered )
  {
    v6 = PpmEtwHandle;
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARKING_SELECTION);
    if ( (_BYTE)v2 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      UserData.Reserved = 0;
      v8 = *(_QWORD *)(a1 + 16 + 8 * v4);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v11 = v8 & v7;
      v9 = v8 & *(_QWORD *)(a1 + 32);
      v14 = a1 + 16 + 8 * v4;
      v12 = v9;
      v39 = v8 & v3;
      v15 = 8;
      UserData.Ptr = a1 + 4;
      v17 = &v11;
      v20 = &v12;
      va_copy(v23, va);
      va_copy(v26, va1);
      v18 = 8;
      v29 = v4 + a1 + 106;
      v21 = 8;
      v24 = 8;
      v27 = 8;
      va_copy(v32, va2);
      va_copy(v35, va3);
      v30 = 1;
      v33 = 1;
      UserData.Size = 2;
      v36 = 4;
      LOBYTE(v2) = EtwWrite(v6, &PPM_ETW_PARKING_SELECTION, 0LL, 9u, &UserData);
    }
  }
  return (char)v2;
}
