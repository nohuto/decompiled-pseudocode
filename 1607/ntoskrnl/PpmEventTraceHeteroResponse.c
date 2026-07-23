/*
 * XREFs of PpmEventTraceHeteroResponse @ 0x14020CAC0
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x14020AA78 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char PpmEventTraceHeteroResponse(__int64 a1, __int64 a2, _QWORD *a3, ...)
{
  _UNKNOWN **v3; // rax
  unsigned __int64 v4; // rbx
  REGHANDLE v8; // rsi
  unsigned __int8 v9; // r8
  char v10; // al
  _QWORD *v11; // rcx
  __int64 v12; // r9
  unsigned __int8 v14; // [rsp+38h] [rbp-A9h] BYREF
  char v15; // [rsp+39h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-99h] BYREF
  __int64 v17; // [rsp+58h] [rbp-89h]
  __int64 v18; // [rsp+60h] [rbp-81h]
  char *v19; // [rsp+68h] [rbp-79h]
  __int64 v20; // [rsp+70h] [rbp-71h]
  __int64 v21; // [rsp+78h] [rbp-69h]
  int v22; // [rsp+80h] [rbp-61h]
  int v23; // [rsp+84h] [rbp-5Dh]
  _QWORD *v24; // [rsp+88h] [rbp-59h]
  int v25; // [rsp+90h] [rbp-51h]
  int v26; // [rsp+94h] [rbp-4Dh]
  va_list v27; // [rsp+98h] [rbp-49h]
  __int64 v28; // [rsp+A0h] [rbp-41h]
  __int64 v29; // [rsp+A8h] [rbp-39h]
  __int64 v30; // [rsp+B0h] [rbp-31h]
  char *v31; // [rsp+B8h] [rbp-29h]
  __int64 v32; // [rsp+C0h] [rbp-21h]
  va_list v33; // [rsp+C8h] [rbp-19h]
  __int64 v34; // [rsp+D0h] [rbp-11h]
  __int64 v35; // [rsp+D8h] [rbp-9h]
  __int64 v36; // [rsp+E0h] [rbp-1h]
  va_list v37; // [rsp+E8h] [rbp+7h]
  __int64 v38; // [rsp+F0h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+4Fh] BYREF
  unsigned __int64 v40; // [rsp+150h] [rbp+6Fh] BYREF
  va_list va; // [rsp+150h] [rbp+6Fh]
  __int64 v42; // [rsp+158h] [rbp+77h] BYREF
  va_list va1; // [rsp+158h] [rbp+77h]
  va_list va2; // [rsp+160h] [rbp+7Fh] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v40 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  v3 = &retaddr;
  v4 = v40;
  if ( PpmEtwRegistered )
  {
    v8 = PpmEtwHandle;
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_RESPONSE);
    if ( (_BYTE)v3 )
    {
      v9 = *(_BYTE *)(a1 + 6);
      v10 = *(_BYTE *)(a1 + 116);
      v14 = v9;
      v15 = v10;
      if ( v4 > 1 && v9 )
      {
        v11 = a3;
        v12 = v9;
        do
        {
          *v11++ /= v4;
          --v12;
        }
        while ( v12 );
        v8 = PpmEtwHandle;
      }
      UserData.Ptr = a1 + 4;
      *(_QWORD *)&UserData.Size = 2LL;
      v17 = a1 + 8;
      v18 = 8LL;
      v19 = (char *)&v14;
      v20 = 1LL;
      v22 = 4 * v9;
      v25 = 8 * v9;
      va_copy(v27, va);
      v29 = a1 + 115;
      v31 = &v15;
      va_copy(v33, va1);
      v35 = a1 + 107;
      va_copy(v37, va2);
      v21 = a2;
      v23 = 0;
      v24 = a3;
      v26 = 0;
      v28 = 8LL;
      v30 = 1LL;
      v32 = 1LL;
      v34 = 1LL;
      v36 = 1LL;
      v38 = 4LL;
      LOBYTE(v3) = EtwWrite(v8, &PPM_ETW_HETERO_RESPONSE, 0LL, 0xBu, &UserData);
    }
  }
  return (char)v3;
}
