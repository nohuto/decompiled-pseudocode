/*
 * XREFs of PopTraceSystemIdleUpdate @ 0x1404E4068
 * Callers:
 *     PopPolicySystemIdle @ 0x1404E3E64 (PopPolicySystemIdle.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall PopTraceSystemIdleUpdate(
        int a1,
        unsigned __int8 a2,
        char a3,
        char a4,
        __int64 a5,
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
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v23; // [rsp+38h] [rbp-71h] BYREF
  int v24; // [rsp+3Ch] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-61h] BYREF
  int *v26; // [rsp+58h] [rbp-51h]
  int v27; // [rsp+60h] [rbp-49h]
  int v28; // [rsp+64h] [rbp-45h]
  int *v29; // [rsp+68h] [rbp-41h]
  int v30; // [rsp+70h] [rbp-39h]
  int v31; // [rsp+74h] [rbp-35h]
  char *v32; // [rsp+78h] [rbp-31h]
  int v33; // [rsp+80h] [rbp-29h]
  int v34; // [rsp+84h] [rbp-25h]
  char *v35; // [rsp+88h] [rbp-21h]
  int v36; // [rsp+90h] [rbp-19h]
  int v37; // [rsp+94h] [rbp-15h]
  char *v38; // [rsp+98h] [rbp-11h]
  int v39; // [rsp+A0h] [rbp-9h]
  int v40; // [rsp+A4h] [rbp-5h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+27h] BYREF
  int v42; // [rsp+D8h] [rbp+2Fh] BYREF

  v11 = &retaddr;
  v42 = a1;
  v13 = PopUserShutdownInProgress;
  if ( PopDiagHandleRegistered )
  {
    v16 = PopDiagHandle;
    LOBYTE(v11) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_UPDATE);
    if ( (_BYTE)v11 )
    {
      UserData.Size = 4;
      v27 = 4;
      v30 = 4;
      v33 = 4;
      v36 = 4;
      v17 = ((unsigned __int8)v23 ^ (a3 != 0)) & 1 ^ v23;
      v39 = 4;
      v18 = ((unsigned __int8)v17 ^ (unsigned __int8)(2 * (a4 != 0))) & 2 ^ v17;
      v19 = (v18 ^ (4 * (v13 != 0))) & 4 ^ v18;
      v20 = ((unsigned __int8)v19 ^ (unsigned __int8)(8 * (a6 != 0))) & 8 ^ v19;
      v21 = ((unsigned __int8)v20 ^ (unsigned __int8)(16 * (a8 != 0))) & 0x10 ^ v20;
      UserData.Reserved = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v23 = ((unsigned __int8)v21 ^ (unsigned __int8)(32 * (a9 != 0))) & 0x20 ^ v21;
      UserData.Ptr = (ULONGLONG)&v42;
      v24 = a2;
      v26 = &v24;
      v29 = &v23;
      v32 = &a10;
      v35 = &a11;
      v38 = &a7;
      LOBYTE(v11) = EtwWrite(v16, &POP_ETW_EVENT_SYSTEM_IDLE_UPDATE, 0LL, 6u, &UserData);
    }
  }
  return (char)v11;
}
