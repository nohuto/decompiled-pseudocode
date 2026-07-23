/*
 * XREFs of KiIntSteerLogState @ 0x14012DC88
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1400D58E0 (PpmParkSteerInterrupts.c)
 *     KiIntSteerDisable @ 0x1401244B8 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14012D8EC (KiIntSteerConnect.c)
 *     KiIntSteerLogStatus @ 0x1401DA6E8 (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     KiIntSteerEtwEventEnabled @ 0x14012DCE8 (KiIntSteerEtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KiIntSteerLogState(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  NTSTATUS result; // eax
  ULONGLONG v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rcx
  _DWORD v8[4]; // [rsp+30h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  _DWORD *v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  _DWORD *v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  _DWORD *v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]
  _DWORD *v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+A8h] [rbp+3Fh]

  result = KiIntSteerEtwEventEnabled(a2);
  if ( (_BYTE)result )
  {
    v8[0] = -1;
    v5 = *(_QWORD *)(a1 + 16) + 32LL;
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = v5;
    v10 = v8;
    v12 = v8;
    v14 = a1 + 68;
    v6 = *(__int64 **)(a1 + 32);
    v11 = 4LL;
    v13 = 4LL;
    v15 = 4LL;
    v7 = *v6;
    v18 = v8;
    v16 = v7 + 24;
    v20 = v8;
    v17 = 8LL;
    v8[0] = 0;
    v19 = 4LL;
    v21 = 4LL;
    return EtwWrite(KiIntSteerEtwHandle, a2, 0LL, 7u, &UserData);
  }
  return result;
}
