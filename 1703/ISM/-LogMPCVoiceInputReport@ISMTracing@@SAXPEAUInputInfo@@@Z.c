/*
 * XREFs of ?LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@@Z @ 0x1800449DC
 * Callers:
 *     ??$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z @ 0x180046960 (--$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::LogMPCVoiceInputReport(struct InputInfo *a1)
{
  __int64 v2; // rcx
  int v3; // [rsp+30h] [rbp-79h] BYREF
  int v4; // [rsp+34h] [rbp-75h] BYREF
  int v5; // [rsp+38h] [rbp-71h] BYREF
  int v6; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v7; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v9; // [rsp+70h] [rbp-39h]
  __int64 v10; // [rsp+78h] [rbp-31h]
  int *v11; // [rsp+80h] [rbp-29h]
  __int64 v12; // [rsp+88h] [rbp-21h]
  char *v13; // [rsp+90h] [rbp-19h]
  __int64 v14; // [rsp+98h] [rbp-11h]
  char *v15; // [rsp+A0h] [rbp-9h]
  __int64 v16; // [rsp+A8h] [rbp-1h]
  int *v17; // [rsp+B0h] [rbp+7h]
  __int64 v18; // [rsp+B8h] [rbp+Fh]
  int *v19; // [rsp+C0h] [rbp+17h]
  __int64 v20; // [rsp+C8h] [rbp+1Fh]
  int *v21; // [rsp+D0h] [rbp+27h]
  __int64 v22; // [rsp+D8h] [rbp+2Fh]

  v2 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v2 > 4u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
  {
    v3 = *(_DWORD *)a1;
    v9 = &v3;
    v4 = *((_DWORD *)a1 + 1);
    v11 = &v4;
    v13 = (char *)a1 + 8;
    v15 = (char *)a1 + 712;
    v5 = *((_DWORD *)a1 + 176);
    v17 = &v5;
    v6 = *((_DWORD *)a1 + 177);
    v19 = &v6;
    v7 = *((_DWORD *)a1 + 324);
    v21 = &v7;
    v10 = 4LL;
    v12 = 4LL;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 4LL;
    TlgWrite((TraceLoggingHProvider)v2, &unk_1800B9358, 0LL, 0LL, 9u, &pData);
  }
}
