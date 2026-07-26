/*
 * XREFs of ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072FC8
 * Callers:
 *     ndisMIndicateQosParametersChange @ 0x1C005DF1C (ndisMIndicateQosParametersChange.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingQosOperationalStatus(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp-69h] BYREF
  int v7; // [rsp+34h] [rbp-65h] BYREF
  int v8; // [rsp+38h] [rbp-61h] BYREF
  int v9; // [rsp+3Ch] [rbp-5Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  __int64 v11; // [rsp+60h] [rbp-39h]
  __int64 v12; // [rsp+68h] [rbp-31h]
  int *v13; // [rsp+70h] [rbp-29h]
  __int64 v14; // [rsp+78h] [rbp-21h]
  int *v15; // [rsp+80h] [rbp-19h]
  __int64 v16; // [rsp+88h] [rbp-11h]
  int *v17; // [rsp+90h] [rbp-9h]
  __int64 v18; // [rsp+98h] [rbp-1h]
  int *v19; // [rsp+A0h] [rbp+7h]
  __int64 v20; // [rsp+A8h] [rbp+Fh]
  __int64 v21; // [rsp+B0h] [rbp+17h]
  __int64 v22; // [rsp+B8h] [rbp+1Fh]
  __int64 v23; // [rsp+C0h] [rbp+27h]
  __int64 v24; // [rsp+C8h] [rbp+2Fh]
  __int64 v25; // [rsp+D0h] [rbp+37h]
  __int64 v26; // [rsp+D8h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0088010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v4 = v1 + 4064;
      v12 = 16LL;
      v5 = *(_QWORD *)(v1 + 4984);
      v11 = v4;
      v6 = *(_DWORD *)(v5 + 4);
      v13 = &v6;
      v14 = 4LL;
      v7 = *(_DWORD *)(v5 + 8);
      v15 = &v7;
      v16 = 4LL;
      v8 = *(_DWORD *)(v5 + 36);
      v17 = &v8;
      v18 = 4LL;
      v9 = *(_DWORD *)(v5 + 40);
      v19 = &v9;
      v21 = v5 + 12;
      v23 = v5 + 20;
      v25 = v5 + 28;
      v20 = 4LL;
      v22 = 8LL;
      v24 = 8LL;
      v26 = 8LL;
      TlgWrite((TraceLoggingHProvider)v5, &unk_1C0079A0F, v2, v3, 0xAu, &pData);
    }
  }
}
