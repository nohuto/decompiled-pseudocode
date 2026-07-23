/*
 * XREFs of PnprLogFailureEvent @ 0x140644E10
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnprLogFailureEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  ULONG v4; // ecx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  _WORD v9[2]; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  _WORD *v13; // [rsp+50h] [rbp-19h]
  __int64 v14; // [rsp+58h] [rbp-11h]
  __int64 v15; // [rsp+60h] [rbp-9h]
  int v16; // [rsp+68h] [rbp-1h]
  int v17; // [rsp+6Ch] [rbp+3h]
  _WORD *v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  int *v20; // [rsp+80h] [rbp+17h]
  __int64 v21; // [rsp+88h] [rbp+1Fh]
  int *v22; // [rsp+90h] [rbp+27h]
  __int64 v23; // [rsp+98h] [rbp+2Fh]
  int *v24; // [rsp+A0h] [rbp+37h]
  __int64 v25; // [rsp+A8h] [rbp+3Fh]
  int v26; // [rsp+E0h] [rbp+77h] BYREF

  v26 = a3;
  v9[0] = 0;
  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v3 = 0LL;
  v4 = *(unsigned __int16 *)(v3 + 40);
  UserData.Ptr = *(_QWORD *)(v3 + 48);
  v13 = v9;
  UserData.Size = v4;
  UserData.Reserved = 0;
  v14 = 2LL;
  if ( a2 )
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(unsigned __int16 *)(v5 + 40);
  v7 = *(_QWORD *)(v5 + 48);
  v16 = v6;
  v15 = v7;
  v18 = v9;
  v17 = 0;
  v19 = 2LL;
  if ( PnprContext )
  {
    v10 = *(_DWORD *)(PnprContext + 10744);
    v11 = *(_DWORD *)(PnprContext + 10748);
  }
  else
  {
    v10 = 0;
    v11 = 1;
  }
  v20 = &v26;
  v21 = 4LL;
  v22 = &v10;
  v23 = 4LL;
  v24 = &v11;
  v25 = 4LL;
  return EtwWrite(PnpEtwHandle, &PNP_EVT_DP_REPLACE_FAILURE, 0LL, 7u, &UserData);
}
