/*
 * XREFs of KsepDsEventSystemPowerIrp @ 0x1401DDF38
 * Callers:
 *     KseDsCallbackHookIrpPowerFunction @ 0x1401DD020 (KseDsCallbackHookIrpPowerFunction.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventSystemPowerIrp(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7)
{
  _UNKNOWN **v7; // rax
  REGHANDLE v8; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-51h] BYREF
  __int64 *v11; // [rsp+48h] [rbp-41h]
  int v12; // [rsp+50h] [rbp-39h]
  int v13; // [rsp+54h] [rbp-35h]
  __int64 *v14; // [rsp+58h] [rbp-31h]
  int v15; // [rsp+60h] [rbp-29h]
  int v16; // [rsp+64h] [rbp-25h]
  int *v17; // [rsp+68h] [rbp-21h]
  int v18; // [rsp+70h] [rbp-19h]
  int v19; // [rsp+74h] [rbp-15h]
  char *v20; // [rsp+78h] [rbp-11h]
  int v21; // [rsp+80h] [rbp-9h]
  int v22; // [rsp+84h] [rbp-5h]
  char *v23; // [rsp+88h] [rbp-1h]
  int v24; // [rsp+90h] [rbp+7h]
  int v25; // [rsp+94h] [rbp+Bh]
  char *v26; // [rsp+98h] [rbp+Fh]
  int v27; // [rsp+A0h] [rbp+17h]
  int v28; // [rsp+A4h] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  __int64 v30; // [rsp+D8h] [rbp+4Fh] BYREF
  __int64 v31; // [rsp+E0h] [rbp+57h] BYREF
  __int64 v32; // [rsp+E8h] [rbp+5Fh] BYREF
  int v33; // [rsp+F0h] [rbp+67h] BYREF

  v7 = &retaddr;
  v33 = a4;
  v32 = a3;
  v31 = a2;
  v30 = a1;
  v8 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    LOBYTE(v7) = EtwEventEnabled(KseEtwHandle, &KseDsEventSystemPowerIrp);
    if ( (_BYTE)v7 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      UserData.Ptr = (ULONGLONG)&v30;
      v11 = &v31;
      v14 = &v32;
      v17 = &v33;
      v20 = &a5;
      UserData.Size = 8;
      v12 = 8;
      v15 = 8;
      v23 = &a6;
      v26 = &a7;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      LOBYTE(v7) = EtwWrite(v8, &KseDsEventSystemPowerIrp, 0LL, 7u, &UserData);
    }
  }
  return (char)v7;
}
