/*
 * XREFs of VidSchRestartAdapter @ 0x1C008BEA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C001EA0C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C001EA38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001EA5C (_TlgWrite.c)
 *     VidSchiAcceptDriverCallback @ 0x1C006AAFC (VidSchiAcceptDriverCallback.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C008A2D0 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C008A30C (VidSchResetGPUTimeout.c)
 */

__int64 __fastcall VidSchRestartAdapter(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int16 *v5; // rax
  TraceLoggingHProvider v6; // rcx
  LPCGUID v7; // r9
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v13; // [rsp+30h] [rbp-69h] BYREF
  __int64 v14; // [rsp+38h] [rbp-61h] BYREF
  __int64 v15; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v17; // [rsp+70h] [rbp-29h]
  __int64 v18; // [rsp+78h] [rbp-21h]
  _DWORD *v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  __int64 v21; // [rsp+90h] [rbp-9h]
  _DWORD v22[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 *v23; // [rsp+A0h] [rbp+7h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]
  int *v25; // [rsp+B0h] [rbp+17h]
  __int64 v26; // [rsp+B8h] [rbp+1Fh]
  __int64 v27; // [rsp+C0h] [rbp+27h]
  __int64 v28; // [rsp+C8h] [rbp+2Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+37h] BYREF

  if ( (unsigned int)dword_1C002F020 > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
  {
    v3 = *(_QWORD *)(v2 + 16);
    v4 = *(_QWORD *)(a1 + 2448);
    v14 = *(_QWORD *)(v3 + 252);
    v17 = &v14;
    v18 = 8LL;
    v5 = *(unsigned __int16 **)(v3 + 984);
    v19 = v22;
    v20 = 2LL;
    LODWORD(v3) = *v5;
    v21 = *((_QWORD *)v5 + 1);
    v23 = &v15;
    v13 = *(_DWORD *)(a1 + 2464);
    v25 = &v13;
    v22[0] = v3;
    v27 = v4 + 2792;
    v22[1] = 0;
    v15 = v4;
    v24 = 8LL;
    v26 = 4LL;
    v28 = 8LL;
    TlgCreateSz(&pDesc, *(LPCSTR *)(v4 + 80));
    TlgWrite(v6, &unk_1C0026055, 0LL, v7, 9u, &pData);
  }
  v8 = 0;
  *(_QWORD *)(a1 + 2448) = 0LL;
  *(_DWORD *)(a1 + 2440) = 0;
  *(_QWORD *)(a1 + 336) = 0LL;
  for ( *(_QWORD *)(a1 + 344) = 0LL; v8 < *(_DWORD *)(a1 + 56); *(_QWORD *)(*(_QWORD *)(a1 + 8 * v9 + 376) + 40LL) = 0LL )
    v9 = v8++;
  *(_QWORD *)(a1 + 2456) = 0LL;
  VidSchResetFlipQueueTimeout(a1);
  VidSchResetGPUTimeout(v10);
  VidSchiAcceptDriverCallback(v11);
  return 0LL;
}
