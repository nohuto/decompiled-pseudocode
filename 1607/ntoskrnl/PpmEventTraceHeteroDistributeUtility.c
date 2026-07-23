/*
 * XREFs of PpmEventTraceHeteroDistributeUtility @ 0x14020C9E0
 * Callers:
 *     PpmHeteroDistributeUtility @ 0x14020AD4C (PpmHeteroDistributeUtility.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceHeteroDistributeUtility(__int64 a1, char a2, char a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h]
  int v9; // [rsp+48h] [rbp-38h]
  int v10; // [rsp+4Ch] [rbp-34h]
  char *v11; // [rsp+50h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+5Ch] [rbp-24h]
  char *v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF
  char v18; // [rsp+98h] [rbp+18h] BYREF
  char v19; // [rsp+A0h] [rbp+20h] BYREF

  v3 = &retaddr;
  v19 = a3;
  v18 = a2;
  if ( PpmEtwRegistered )
  {
    v5 = PpmEtwHandle;
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_DISTRIBUTE_UTILITY);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = a1 + 4;
      v8 = a1 + 8;
      v11 = &v18;
      v12 = 1;
      v14 = &v19;
      v15 = 1;
      UserData.Size = 2;
      v9 = 8;
      LOBYTE(v3) = EtwWrite(v5, &PPM_ETW_HETERO_DISTRIBUTE_UTILITY, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
