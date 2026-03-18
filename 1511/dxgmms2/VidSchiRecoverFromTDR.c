/*
 * XREFs of VidSchiRecoverFromTDR @ 0x1C008CDD8
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C001EA38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001EA5C (_TlgWrite.c)
 */

void __fastcall VidSchiRecoverFromTDR(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned __int16 *v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  struct _TDR_RECOVERY_CONTEXT *v6; // rcx
  int v7; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+34h] [rbp-55h] BYREF
  __int64 v9; // [rsp+38h] [rbp-51h] BYREF
  const struct _TlgProvider_t *v10; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v12; // [rsp+70h] [rbp-19h]
  __int64 v13; // [rsp+78h] [rbp-11h]
  _DWORD *v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  __int64 v16; // [rsp+90h] [rbp+7h]
  _DWORD v17[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v18; // [rsp+A0h] [rbp+17h]
  __int64 v19; // [rsp+A8h] [rbp+1Fh]
  const struct _TlgProvider_t **v20; // [rsp+B0h] [rbp+27h]
  __int64 v21; // [rsp+B8h] [rbp+2Fh]
  int *v22; // [rsp+C0h] [rbp+37h]
  __int64 v23; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_1C002F020 > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
  {
    v3 = *(_QWORD *)(v2 + 16);
    v9 = *(_QWORD *)(v3 + 252);
    v12 = &v9;
    v13 = 8LL;
    v4 = *(unsigned __int16 **)(v3 + 984);
    v14 = v17;
    v15 = 2LL;
    LODWORD(v3) = *v4;
    v16 = *((_QWORD *)v4 + 1);
    v17[0] = v3;
    v5 = *(const struct _TlgProvider_t **)(a1 + 2448);
    v17[1] = 0;
    v7 = *((_DWORD *)v5 + 4);
    v18 = &v7;
    v20 = &v10;
    v8 = *(_DWORD *)(a1 + 2464);
    v22 = &v8;
    v19 = 4LL;
    v10 = v5;
    v21 = 8LL;
    v23 = 4LL;
    TlgWrite(v5, &unk_1C00260CC, 0LL, 0LL, 8u, &pData);
  }
  v6 = *(struct _TDR_RECOVERY_CONTEXT **)(a1 + 2448);
  *(_DWORD *)(a1 + 2440) = 2;
  TdrResetFromTimeoutAsync(v6);
}
