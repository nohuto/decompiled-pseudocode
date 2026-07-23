/*
 * XREFs of PopDiagTraceFxPerfRequest @ 0x1402088CC
 * Callers:
 *     PopFxIssueComponentPerfStateChanges @ 0x140202BE8 (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxPerfRequest(__int64 *a1, unsigned int a2, __int64 a3)
{
  REGHANDLE v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  int v11; // [rsp+48h] [rbp-38h]
  int v12; // [rsp+4Ch] [rbp-34h]
  int *v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+5Ch] [rbp-24h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  unsigned int v19; // [rsp+A8h] [rbp+28h] BYREF

  v19 = a2;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_INITIATING) )
    {
      v7 = *a1;
      v8 = *(_QWORD *)(*a1 + 80);
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = v8 + 48;
      v10 = v7 + 16;
      UserData.Size = 8;
      v13 = (int *)&v19;
      v11 = 4;
      v14 = 4;
      if ( 16 * (unsigned __int64)a2 <= 0xFFFFFFFF )
      {
        v18 = 0;
        v17 = 16 * a2;
        v16 = a3;
        EtwWrite(v6, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_INITIATING, 0LL, 4u, &UserData);
      }
    }
  }
}
