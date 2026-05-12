/*
 * XREFs of StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C003E604
 * Callers:
 *     StorpTelemetrySendUnitErrorData @ 0x1C0040640 (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0019BC0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0042814 (_TlgCreateSz.c)
 */

void __fastcall StorpTelemetryLogUnitErrorDataCriticalData(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  const WCHAR *v7; // r8
  unsigned int v8; // eax
  int v9; // ecx
  unsigned __int16 v10; // r10
  unsigned __int16 v11; // r11
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+31h] [rbp-CFh] BYREF
  char v16; // [rsp+32h] [rbp-CEh] BYREF
  char v17; // [rsp+33h] [rbp-CDh] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  struct _TlgProvider_t hProvider; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  __int64 v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  char *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  char *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  char *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+100h] [rbp+0h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  unsigned int *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  char *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  _QWORD *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  __int64 v46; // [rsp+160h] [rbp+60h]
  _QWORD v47[4]; // [rsp+168h] [rbp+68h] BYREF
  _DWORD v48[2]; // [rsp+188h] [rbp+88h] BYREF
  _DWORD *v49; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  __int64 v51; // [rsp+1A0h] [rbp+A0h]
  _DWORD v52[2]; // [rsp+1A8h] [rbp+A8h] BYREF

  ++*(_BYTE *)(a1 + 1704);
  if ( (unsigned int)dword_1C004F010 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)a1, 0x800000000000uLL) )
    {
      v6 = *(_QWORD *)(v4 + 24);
      v14 = 2;
      v18 = *(_DWORD *)(v6 + 56);
      v15 = *(_BYTE *)(v4 + 88);
      v16 = *(_BYTE *)(v4 + 89);
      v17 = *(_BYTE *)(v4 + 90);
      v7 = *(const WCHAR **)(v6 + 4800);
      hProvider.LevelPlus1 = *(_DWORD *)(v4 + 1888);
      v8 = *(_DWORD *)(v4 + 1824);
      v9 = *(unsigned __int16 *)(a2 + 28);
      *(&hProvider.LevelPlus1 + 1) = v8;
      LODWORD(hProvider.ProviderMetadataPtr) = *(unsigned __int16 *)(a2 + 26);
      HIDWORD(hProvider.ProviderMetadataPtr) = v9;
      hProvider.AnnotationFunc = (void (*)(...))&v14;
      v21 = v6 + 5192;
      v23 = a1 + 1688;
      v20 = v5;
      v25 = &v18;
      v27 = &v15;
      v29 = &v16;
      v31 = &v17;
      v22 = 16LL;
      v24 = 16LL;
      v26 = 4LL;
      v28 = v5;
      v30 = v5;
      v32 = v5;
      TlgCreateWsz(&pDesc, v7);
      TlgCreateSz(&v34, (LPCSTR)a2);
      TlgCreateSz(&v35, (LPCSTR)(a2 + 9));
      v37 = 4LL;
      v38 = &hProvider.LevelPlus1 + 1;
      p_hProvider = &hProvider;
      p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
      v42 = (char *)&hProvider.ProviderMetadataPtr + 4;
      v44 = v47;
      v46 = a1 + 1896;
      v47[1] = v48;
      v47[3] = a1 + 1936;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 2LL;
      v47[0] = 40LL;
      v47[2] = 2LL;
      v48[0] = v10;
      v49 = v52;
      v51 = a1 + 2336;
      v52[0] = v11;
      v48[1] = 0;
      v50 = 2LL;
      v52[1] = 0;
      TlgWrite(&hProvider, &unk_1C00471DB, v12, v13, 0x16u, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAll);
    }
  }
}
