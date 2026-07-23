/*
 * XREFs of KsepDsEventAddDevice @ 0x1401DD370
 * Callers:
 *     KseDsCallbackHookAddDevice @ 0x1401DCD70 (KseDsCallbackHookAddDevice.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char KsepDsEventAddDevice(__int64 a1, int a2, ...)
{
  _UNKNOWN **v2; // rax
  REGHANDLE v3; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-51h] BYREF
  int *v6; // [rsp+48h] [rbp-41h]
  int v7; // [rsp+50h] [rbp-39h]
  int v8; // [rsp+54h] [rbp-35h]
  va_list v9; // [rsp+58h] [rbp-31h]
  int v10; // [rsp+60h] [rbp-29h]
  int v11; // [rsp+64h] [rbp-25h]
  va_list v12; // [rsp+68h] [rbp-21h]
  int v13; // [rsp+70h] [rbp-19h]
  int v14; // [rsp+74h] [rbp-15h]
  va_list v15; // [rsp+78h] [rbp-11h]
  int v16; // [rsp+80h] [rbp-9h]
  int v17; // [rsp+84h] [rbp-5h]
  __int64 v18; // [rsp+88h] [rbp-1h]
  int v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+94h] [rbp+Bh]
  __int64 v21; // [rsp+98h] [rbp+Fh]
  int v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A4h] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+4Fh] BYREF
  int v26; // [rsp+E0h] [rbp+57h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+5Fh]
  __int64 v29; // [rsp+F0h] [rbp+67h] BYREF
  va_list va1; // [rsp+F0h] [rbp+67h]
  __int64 v31; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+F8h] [rbp+6Fh]
  unsigned __int16 *v33; // [rsp+100h] [rbp+77h]
  unsigned __int16 *v34; // [rsp+108h] [rbp+7Fh]
  va_list va3; // [rsp+110h] [rbp+87h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v27 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v29 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v31 = va_arg(va3, _QWORD);
  v33 = va_arg(va3, unsigned __int16 *);
  v34 = va_arg(va3, unsigned __int16 *);
  v2 = &retaddr;
  v26 = a2;
  v25 = a1;
  v3 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    LOBYTE(v2) = EtwEventEnabled(KseEtwHandle, &KseDsEventAddDevice);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&v25;
      v6 = &v26;
      va_copy(v9, va);
      va_copy(v12, va1);
      va_copy(v15, va2);
      v7 = 4;
      v16 = 4;
      UserData.Size = 8;
      v10 = 8;
      v13 = 8;
      v18 = *((_QWORD *)v33 + 1);
      v19 = *v33 + 2;
      v21 = *((_QWORD *)v34 + 1);
      v22 = *v34 + 2;
      LOBYTE(v2) = EtwWrite(v3, &KseDsEventAddDevice, 0LL, 7u, &UserData);
    }
  }
  return (char)v2;
}
