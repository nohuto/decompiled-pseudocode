/*
 * XREFs of PpmEventParkNodePreference @ 0x14020C0E4
 * Callers:
 *     PpmParkChooseCoresToUnpark @ 0x14020D7B0 (PpmParkChooseCoresToUnpark.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodePreference(__int16 a1, __int64 a2, char a3, __int64 a4, char a5, char a6, char a7)
{
  _UNKNOWN **v7; // rax
  REGHANDLE v8; // rbx
  __int64 v10; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-41h] BYREF
  __int64 *v12; // [rsp+58h] [rbp-31h]
  int v13; // [rsp+60h] [rbp-29h]
  int v14; // [rsp+64h] [rbp-25h]
  char *v15; // [rsp+68h] [rbp-21h]
  int v16; // [rsp+70h] [rbp-19h]
  int v17; // [rsp+74h] [rbp-15h]
  __int64 *v18; // [rsp+78h] [rbp-11h]
  int v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+84h] [rbp-5h]
  char *v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+94h] [rbp+Bh]
  char *v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+A0h] [rbp+17h]
  int v26; // [rsp+A4h] [rbp+1Bh]
  char *v27; // [rsp+A8h] [rbp+1Fh]
  int v28; // [rsp+B0h] [rbp+27h]
  int v29; // [rsp+B4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  __int16 v31; // [rsp+D8h] [rbp+4Fh] BYREF
  __int64 v32; // [rsp+E0h] [rbp+57h] BYREF
  char v33; // [rsp+E8h] [rbp+5Fh] BYREF

  v7 = &retaddr;
  v33 = a3;
  v32 = a2;
  v31 = a1;
  v10 = 0LL;
  if ( PpmEtwRegistered )
  {
    v8 = PpmEtwHandle;
    LOBYTE(v7) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_PARKING_PREFERENCE);
    if ( (_BYTE)v7 )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      UserData.Ptr = (ULONGLONG)&v31;
      v12 = &v32;
      v15 = &v33;
      v18 = &v10;
      v21 = &a5;
      v24 = &a6;
      v27 = &a7;
      v13 = 8;
      v19 = 8;
      v22 = 8;
      v25 = 8;
      v28 = 8;
      UserData.Size = 2;
      v16 = 1;
      LOBYTE(v7) = EtwWrite(v8, &PPM_ETW_PLATFORM_PARKING_PREFERENCE, 0LL, 7u, &UserData);
    }
  }
  return (char)v7;
}
