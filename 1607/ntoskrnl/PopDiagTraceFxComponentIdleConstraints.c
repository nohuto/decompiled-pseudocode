/*
 * XREFs of PopDiagTraceFxComponentIdleConstraints @ 0x14020847C
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1402063D4 (PopPepInitializeVetoMasks.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxComponentIdleConstraints(__int64 a1, int a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v7; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  int *v10; // [rsp+40h] [rbp-40h]
  int v11; // [rsp+48h] [rbp-38h]
  int v12; // [rsp+4Ch] [rbp-34h]
  int *v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+5Ch] [rbp-24h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+18h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+20h] BYREF
  int v21; // [rsp+A8h] [rbp+28h] BYREF
  int v22; // [rsp+B8h] [rbp+38h] BYREF

  v4 = &retaddr;
  v22 = a4;
  v21 = a2;
  v20 = a1;
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_IDLE_CONSTRAINTS);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      UserData.Ptr = (ULONGLONG)&v20;
      UserData.Size = 8;
      v10 = &v21;
      v13 = &v22;
      v17 = 4 * a4;
      v11 = 4;
      v14 = 4;
      v16 = a3;
      LOBYTE(v4) = EtwWrite(v7, &POP_ETW_EVENT_COMPONENT_IDLE_CONSTRAINTS, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
