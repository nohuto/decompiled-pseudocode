/*
 * XREFs of KiIntSteerLogState @ 0x140155CB8
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1400E87E0 (PpmParkSteerInterrupts.c)
 *     KiIntSteerDisable @ 0x14014B080 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x1401558E8 (KiIntSteerConnect.c)
 *     KiIntSteerLogStatus @ 0x140209704 (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogState(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  _UNKNOWN **v2; // rax
  REGHANDLE v3; // rbx
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  _DWORD v10[4]; // [rsp+38h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  _DWORD *v12; // [rsp+58h] [rbp-19h]
  int v13; // [rsp+60h] [rbp-11h]
  int v14; // [rsp+64h] [rbp-Dh]
  _DWORD *v15; // [rsp+68h] [rbp-9h]
  int v16; // [rsp+70h] [rbp-1h]
  int v17; // [rsp+74h] [rbp+3h]
  __int64 v18; // [rsp+78h] [rbp+7h]
  int v19; // [rsp+80h] [rbp+Fh]
  int v20; // [rsp+84h] [rbp+13h]
  __int64 v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+94h] [rbp+23h]
  _DWORD *v24; // [rsp+98h] [rbp+27h]
  int v25; // [rsp+A0h] [rbp+2Fh]
  int v26; // [rsp+A4h] [rbp+33h]
  _DWORD *v27; // [rsp+A8h] [rbp+37h]
  int v28; // [rsp+B0h] [rbp+3Fh]
  int v29; // [rsp+B4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF

  v2 = &retaddr;
  v3 = KiIntSteerEtwHandle;
  if ( KiIntSteerEtwHandle )
  {
    LOBYTE(v2) = EtwEventEnabled(KiIntSteerEtwHandle, a2);
    if ( (_BYTE)v2 )
    {
      v10[0] = -1;
      v6 = *(_QWORD *)(a1 + 16);
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      UserData.Ptr = v6 + 32;
      v12 = v10;
      v15 = v10;
      v18 = a1 + 68;
      v7 = *(__int64 **)(a1 + 32);
      UserData.Size = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v8 = *v7;
      v23 = 0;
      v10[0] = 0;
      v26 = 0;
      v29 = 0;
      v24 = v10;
      v27 = v10;
      v21 = v8 + 24;
      v25 = 4;
      v28 = 4;
      v22 = 8;
      LOBYTE(v2) = EtwWrite(v3, a2, 0LL, 7u, &UserData);
    }
  }
  return (char)v2;
}
