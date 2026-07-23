/*
 * XREFs of PopDiagTraceFxPerfNominalChange @ 0x1402087A0
 * Callers:
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x140203FF8 (PopFxUpdateComponentPerfStateNominalChange.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxPerfNominalChange(__int64 *a1, unsigned __int8 a2, int a3, unsigned int a4, __int64 a5)
{
  _UNKNOWN **v5; // rax
  REGHANDLE v9; // rbx
  __int64 v10; // rcx
  int v12; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-31h] BYREF
  __int64 v14; // [rsp+58h] [rbp-21h]
  int v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+64h] [rbp-15h]
  int *v17; // [rsp+68h] [rbp-11h]
  int v18; // [rsp+70h] [rbp-9h]
  int v19; // [rsp+74h] [rbp-5h]
  int *v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+84h] [rbp+Bh]
  int *v23; // [rsp+88h] [rbp+Fh]
  int v24; // [rsp+90h] [rbp+17h]
  int v25; // [rsp+94h] [rbp+1Bh]
  __int64 v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+A0h] [rbp+27h]
  int v28; // [rsp+A4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+57h] BYREF
  int v30; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v31; // [rsp+F0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v31 = a4;
  v30 = a3;
  if ( PopDiagHandleRegistered )
  {
    v9 = PopDiagHandle;
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_NOMINAL_CHANGE);
    if ( (_BYTE)v5 )
    {
      v10 = *a1;
      v5 = *(_UNKNOWN ***)(*a1 + 80);
      UserData.Reserved = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      UserData.Ptr = (ULONGLONG)(v5 + 6);
      v14 = v10 + 16;
      v12 = a2;
      v17 = &v12;
      v20 = &v30;
      v15 = 4;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      v23 = (int *)&v31;
      LOBYTE(v5) = -1;
      UserData.Size = 8;
      if ( 16 * (unsigned __int64)a4 <= 0xFFFFFFFF )
      {
        v28 = 0;
        v26 = a5;
        v27 = 16 * a4;
        LOBYTE(v5) = EtwWrite(v9, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_NOMINAL_CHANGE, 0LL, 6u, &UserData);
      }
    }
  }
  return (char)v5;
}
