/*
 * XREFs of KsepDsEventPnpIrp @ 0x1401DDA4C
 * Callers:
 *     KseDsCallbackHookIrpPnpFunction @ 0x1401DCF8C (KseDsCallbackHookIrpPnpFunction.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventPnpIrp(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _UNKNOWN **v5; // rax
  REGHANDLE v6; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-21h] BYREF
  __int64 *v9; // [rsp+48h] [rbp-11h]
  int v10; // [rsp+50h] [rbp-9h]
  int v11; // [rsp+54h] [rbp-5h]
  __int64 *v12; // [rsp+58h] [rbp-1h]
  int v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+64h] [rbp+Bh]
  int *v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+74h] [rbp+1Bh]
  char *v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+84h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+5Fh] BYREF
  __int64 v23; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+6Fh] BYREF
  int v25; // [rsp+D0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v25 = a4;
  v24 = a3;
  v23 = a2;
  v22 = a1;
  v6 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    LOBYTE(v5) = EtwEventEnabled(KseEtwHandle, &KseDsEventPnpIrp);
    if ( (_BYTE)v5 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      UserData.Ptr = (ULONGLONG)&v22;
      v9 = &v23;
      v12 = &v24;
      UserData.Size = 8;
      v10 = 8;
      v13 = 8;
      v15 = &v25;
      v18 = &a5;
      v16 = 4;
      v19 = 4;
      LOBYTE(v5) = EtwWrite(v6, &KseDsEventPnpIrp, 0LL, 5u, &UserData);
    }
  }
  return (char)v5;
}
