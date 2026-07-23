/*
 * XREFs of PnpDiagnosticTraceAppVeto @ 0x1401CFDE8
 * Callers:
 *     PnpLogVetoInformation @ 0x140642BC4 (PnpLogVetoInformation.c)
 * Callees:
 *     PnpDiagnosticTrace @ 0x1400AEE00 (PnpDiagnosticTrace.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceAppVeto(__int64 a1, int a2, __int64 a3, unsigned __int16 *a4)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rcx
  unsigned __int16 v6; // cx
  unsigned __int16 v8; // [rsp+20h] [rbp-19h] BYREF
  __int16 v9; // [rsp+24h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-9h] BYREF
  __int16 *v11; // [rsp+40h] [rbp+7h]
  __int64 v12; // [rsp+48h] [rbp+Fh]
  __int64 v13; // [rsp+50h] [rbp+17h]
  int v14; // [rsp+58h] [rbp+1Fh]
  int v15; // [rsp+5Ch] [rbp+23h]
  __int16 *v16; // [rsp+60h] [rbp+27h]
  __int64 v17; // [rsp+68h] [rbp+2Fh]
  __int64 v18; // [rsp+70h] [rbp+37h]
  int v19; // [rsp+78h] [rbp+3Fh]
  int v20; // [rsp+7Ch] [rbp+43h]
  int v21; // [rsp+A8h] [rbp+6Fh] BYREF

  v21 = a2;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v21;
  if ( a3 )
  {
    v4 = *(_WORD *)a3 >> 1;
    v8 = v4;
  }
  else
  {
    v4 = 0;
    v8 = 0;
  }
  v12 = 2LL;
  v11 = (__int16 *)&v8;
  if ( a3 )
    v5 = *(_QWORD *)(a3 + 8);
  else
    v5 = 0LL;
  v13 = v5;
  v6 = *a4;
  v14 = 2 * v4;
  v16 = &v9;
  v18 = *((_QWORD *)a4 + 1);
  v15 = 0;
  v9 = v6 >> 1;
  v20 = 0;
  v19 = 2 * (v6 >> 1);
  v17 = 2LL;
  return PnpDiagnosticTrace(&KMPnPEvt_DeviceEject_Pend, 5u, &UserData);
}
