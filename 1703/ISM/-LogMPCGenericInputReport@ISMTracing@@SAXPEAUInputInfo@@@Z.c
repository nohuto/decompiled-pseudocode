/*
 * XREFs of ?LogMPCGenericInputReport@ISMTracing@@SAXPEAUInputInfo@@@Z @ 0x1800442B0
 * Callers:
 *     ??$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z @ 0x180046960 (--$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::LogMPCGenericInputReport(struct InputInfo *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp-59h] BYREF
  int v5; // [rsp+34h] [rbp-55h] BYREF
  int v6; // [rsp+38h] [rbp-51h] BYREF
  int v7; // [rsp+3Ch] [rbp-4Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  int *v9; // [rsp+60h] [rbp-29h]
  __int64 v10; // [rsp+68h] [rbp-21h]
  int *v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  char *v13; // [rsp+80h] [rbp-9h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  char *v15; // [rsp+90h] [rbp+7h]
  __int64 v16; // [rsp+98h] [rbp+Fh]
  int *v17; // [rsp+A0h] [rbp+17h]
  __int64 v18; // [rsp+A8h] [rbp+1Fh]
  int *v19; // [rsp+B0h] [rbp+27h]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]

  if ( *((_DWORD *)a1 + 176) == 8 )
  {
    v3 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
    {
      v7 = *(_DWORD *)a1;
      v9 = &v7;
      v6 = *((_DWORD *)a1 + 1);
      v11 = &v6;
      v13 = (char *)a1 + 8;
      v15 = (char *)a1 + 712;
      v5 = *((_DWORD *)a1 + 176);
      v17 = &v5;
      v4 = *((_DWORD *)a1 + 177);
      v19 = &v4;
      v10 = 4LL;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      TlgWrite((TraceLoggingHProvider)v3, &unk_1800B94A0, 0LL, 0LL, 8u, &pData);
    }
  }
  else
  {
    v2 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v2 > 4u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
    {
      v4 = *(_DWORD *)a1;
      v9 = &v4;
      v5 = *((_DWORD *)a1 + 1);
      v11 = &v5;
      v13 = (char *)a1 + 8;
      v15 = (char *)a1 + 712;
      v6 = *((_DWORD *)a1 + 176);
      v17 = &v6;
      v7 = *((_DWORD *)a1 + 177);
      v19 = &v7;
      v10 = 4LL;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      TlgWrite((TraceLoggingHProvider)v2, &unk_1800B9517, 0LL, 0LL, 8u, &pData);
    }
  }
}
