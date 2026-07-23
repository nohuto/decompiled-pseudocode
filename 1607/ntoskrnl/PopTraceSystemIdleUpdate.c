/*
 * XREFs of PopTraceSystemIdleUpdate @ 0x1403F45A8
 * Callers:
 *     PopPolicySystemIdle @ 0x1403F4738 (PopPolicySystemIdle.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopTraceSystemIdleUpdate(
        int a1,
        unsigned __int8 a2,
        char a3,
        char a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  _UNKNOWN **v11; // rax
  char v13; // r15
  REGHANDLE v16; // rbx
  char v17; // al
  char v18; // al
  unsigned __int8 v19; // al
  int v21; // [rsp+38h] [rbp-71h] BYREF
  int v22; // [rsp+3Ch] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-61h] BYREF
  int *v24; // [rsp+58h] [rbp-51h]
  int v25; // [rsp+60h] [rbp-49h]
  int v26; // [rsp+64h] [rbp-45h]
  int *v27; // [rsp+68h] [rbp-41h]
  int v28; // [rsp+70h] [rbp-39h]
  int v29; // [rsp+74h] [rbp-35h]
  char *v30; // [rsp+78h] [rbp-31h]
  int v31; // [rsp+80h] [rbp-29h]
  int v32; // [rsp+84h] [rbp-25h]
  char *v33; // [rsp+88h] [rbp-21h]
  int v34; // [rsp+90h] [rbp-19h]
  int v35; // [rsp+94h] [rbp-15h]
  char *v36; // [rsp+98h] [rbp-11h]
  int v37; // [rsp+A0h] [rbp-9h]
  int v38; // [rsp+A4h] [rbp-5h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+27h] BYREF
  int v40; // [rsp+D8h] [rbp+2Fh] BYREF

  v11 = &retaddr;
  v40 = a1;
  v13 = PopUserShutdownInProgress;
  if ( PopDiagHandleRegistered )
  {
    v16 = PopDiagHandle;
    LOBYTE(v11) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_UPDATE);
    if ( (_BYTE)v11 )
    {
      UserData.Size = 4;
      v25 = 4;
      v28 = 4;
      v31 = 4;
      v34 = 4;
      v37 = 4;
      v17 = ((v21 ^ (a3 != 0)) & 1 ^ v21 ^ (2 * (a4 != 0))) & 2 ^ (v21 ^ (a3 != 0)) & 1 ^ v21;
      v18 = (v17 ^ (4 * (v13 != 0))) & 4 ^ v17;
      v19 = (v18 ^ (8 * (a6 != 0))) & 8 ^ v18;
      UserData.Reserved = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      UserData.Ptr = (ULONGLONG)&v40;
      v22 = a2;
      v24 = &v22;
      v27 = &v21;
      v30 = &a10;
      v33 = &a11;
      v36 = &a7;
      v21 = ((v19 ^ (unsigned __int8)(16 * (a8 != 0))) & 0x10 ^ v19) & 0x1F | (32 * (a9 != 0));
      LOBYTE(v11) = EtwWrite(v16, &POP_ETW_EVENT_SYSTEM_IDLE_UPDATE, 0LL, 6u, &UserData);
    }
  }
  return (char)v11;
}
