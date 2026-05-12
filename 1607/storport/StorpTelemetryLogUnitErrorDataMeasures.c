/*
 * XREFs of StorpTelemetryLogUnitErrorDataMeasures @ 0x1C003E888
 * Callers:
 *     StorpTelemetrySendUnitErrorData @ 0x1C0040640 (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0019BC0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0042814 (_TlgCreateSz.c)
 */

void __fastcall StorpTelemetryLogUnitErrorDataMeasures(const struct _TlgProvider_t *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  const WCHAR *v6; // r8
  unsigned int v7; // eax
  int v8; // ecx
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // r11
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+31h] [rbp-CFh] BYREF
  char v15; // [rsp+32h] [rbp-CEh] BYREF
  char v16; // [rsp+33h] [rbp-CDh] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  struct _TlgProvider_t hProvider; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  unsigned __int64 *p_KeywordAll; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  int *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  char *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  char *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  char *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+100h] [rbp+0h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  unsigned int *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  char *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  _QWORD *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+160h] [rbp+60h]
  _QWORD v46[4]; // [rsp+168h] [rbp+68h] BYREF
  _DWORD v47[2]; // [rsp+188h] [rbp+88h] BYREF
  _DWORD *v48; // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+198h] [rbp+98h]
  unsigned __int64 *p_RegHandle; // [rsp+1A0h] [rbp+A0h]
  _DWORD v51[2]; // [rsp+1A8h] [rbp+A8h] BYREF

  if ( (unsigned int)dword_1C004F010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v5 = *(_QWORD *)(v4 + 24);
      v13 = 2;
      v17 = *(_DWORD *)(v5 + 56);
      v14 = *(_BYTE *)(v4 + 88);
      v15 = *(_BYTE *)(v4 + 89);
      v16 = *(_BYTE *)(v4 + 90);
      v6 = *(const WCHAR **)(v5 + 4800);
      hProvider.LevelPlus1 = *(_DWORD *)(v4 + 1888);
      v7 = *(_DWORD *)(v4 + 1824);
      v8 = *(unsigned __int16 *)(a2 + 28);
      *(&hProvider.LevelPlus1 + 1) = v7;
      LODWORD(hProvider.ProviderMetadataPtr) = *(unsigned __int16 *)(a2 + 26);
      HIDWORD(hProvider.ProviderMetadataPtr) = v8;
      hProvider.AnnotationFunc = (void (*)(...))&v13;
      v20 = v5 + 5192;
      p_KeywordAll = &a1[26].KeywordAll;
      v19 = 1LL;
      v24 = &v17;
      v26 = &v14;
      v28 = &v15;
      v30 = &v16;
      v21 = 16LL;
      v23 = 16LL;
      v25 = 4LL;
      v27 = 1LL;
      v29 = 1LL;
      v31 = 1LL;
      TlgCreateWsz(&pDesc, v6);
      TlgCreateSz(&v33, (LPCSTR)a2);
      TlgCreateSz(&v34, (LPCSTR)(a2 + 9));
      v36 = 4LL;
      v37 = &hProvider.LevelPlus1 + 1;
      p_hProvider = &hProvider;
      p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
      v41 = (char *)&hProvider.ProviderMetadataPtr + 4;
      v43 = v46;
      p_EnableCallback = &a1[29].EnableCallback;
      v46[1] = v47;
      v46[3] = (char *)a1 + 1936;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 2LL;
      v46[0] = 40LL;
      v46[2] = 2LL;
      v47[0] = v9;
      v48 = v51;
      p_RegHandle = &a1[36].RegHandle;
      v51[0] = v10;
      v47[1] = 0;
      v49 = 2LL;
      v51[1] = 0;
      TlgWrite(&hProvider, &unk_1C004757B, v11, v12, 0x16u, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAll);
    }
  }
}
