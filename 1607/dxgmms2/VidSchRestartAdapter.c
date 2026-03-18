/*
 * XREFs of VidSchRestartAdapter @ 0x1C00A1840
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0020774 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00207A0 (_TlgWrite.c)
 *     VidSchiAcceptDriverCallback @ 0x1C006AF40 (VidSchiAcceptDriverCallback.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C009FA90 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C009FAD4 (VidSchResetGPUTimeout.c)
 */

__int64 __fastcall VidSchRestartAdapter(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int16 *v4; // rax
  LPCGUID v5; // r9
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-69h] BYREF
  __int64 v12; // [rsp+38h] [rbp-61h] BYREF
  __int64 v13; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-29h]
  __int64 v16; // [rsp+78h] [rbp-21h]
  _DWORD *v17; // [rsp+80h] [rbp-19h]
  __int64 v18; // [rsp+88h] [rbp-11h]
  __int64 v19; // [rsp+90h] [rbp-9h]
  _DWORD v20[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 *v21; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+A8h] [rbp+Fh]
  int *v23; // [rsp+B0h] [rbp+17h]
  __int64 v24; // [rsp+B8h] [rbp+1Fh]
  __int64 v25; // [rsp+C0h] [rbp+27h]
  __int64 v26; // [rsp+C8h] [rbp+2Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+37h] BYREF

  if ( (unsigned int)hProvider > 5
    && (qword_1C0035010 & 0x400000000010LL) != 0
    && (qword_1C0035018 & 0x400000000010LL) == qword_1C0035018 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 2808);
    v12 = *(_QWORD *)(v2 + 268);
    v15 = &v12;
    v16 = 8LL;
    v4 = *(unsigned __int16 **)(v2 + 1072);
    v17 = v20;
    v18 = 2LL;
    LODWORD(v2) = *v4;
    v19 = *((_QWORD *)v4 + 1);
    v21 = &v13;
    v11 = *(_DWORD *)(a1 + 2824);
    v23 = &v11;
    v20[0] = v2;
    v25 = v3 + 2808;
    v20[1] = 0;
    v13 = v3;
    v22 = 8LL;
    v24 = 4LL;
    v26 = 8LL;
    TlgCreateSz(&pDesc, *(LPCSTR *)(v3 + 96));
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C002B105, 0LL, v5, 9u, &pData);
  }
  *(_BYTE *)(a1 + 2828) &= ~4u;
  v6 = 0;
  *(_QWORD *)(a1 + 2808) = 0LL;
  *(_DWORD *)(a1 + 2800) = 0;
  *(_QWORD *)(a1 + 368) = 0LL;
  for ( *(_QWORD *)(a1 + 376) = 0LL; v6 < *(_DWORD *)(a1 + 60); *(_QWORD *)(*(_QWORD *)(a1 + 8 * v7 + 408) + 40LL) = 0LL )
    v7 = v6++;
  *(_QWORD *)(a1 + 2816) = 0LL;
  VidSchResetFlipQueueTimeout(a1);
  VidSchResetGPUTimeout(v8);
  VidSchiAcceptDriverCallback(v9);
  return 0LL;
}
