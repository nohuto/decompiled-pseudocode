/*
 * XREFs of ?RenderTelemetry@ADAPTER_RENDER@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_GUID@@@Z @ 0x1C00D5BBC
 * Callers:
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z @ 0x1C00D6934 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000AC10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D5D4 (_TlgWrite.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z @ 0x1C00100AC (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

void __fastcall ADAPTER_RENDER::RenderTelemetry(__int64 a1, unsigned __int16 *a2, int a3, const GUID *a4)
{
  struct VIDMM_GLOBAL *v5; // rdx
  VIDMM_EXPORT *v7; // rcx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r9
  int v11; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-61h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v16; // [rsp+70h] [rbp-29h]
  int v17; // [rsp+78h] [rbp-21h]
  int v18; // [rsp+7Ch] [rbp-1Dh]
  __int64 v19; // [rsp+80h] [rbp-19h]
  _DWORD v20[2]; // [rsp+88h] [rbp-11h] BYREF
  unsigned __int64 *v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+9Ch] [rbp+3h]
  unsigned __int64 *v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+ACh] [rbp+13h]
  unsigned __int64 *v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+BCh] [rbp+23h]
  int *v30; // [rsp+C0h] [rbp+27h]
  int v31; // [rsp+C8h] [rbp+2Fh]
  int v32; // [rsp+CCh] [rbp+33h]

  v14 = 0LL;
  v12 = 0LL;
  v5 = *(struct VIDMM_GLOBAL **)(a1 + 432);
  v7 = *(VIDMM_EXPORT **)(a1 + 424);
  v13 = 0LL;
  VIDMM_EXPORT::VidMmGetTotalSegmentSize(v7, v5, &v14, &v12, &v13);
  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn(v9, 0x800000000000uLL) )
    {
      v18 = 0;
      v20[1] = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v16 = v20;
      v19 = *((_QWORD *)a2 + 1);
      v20[0] = *a2;
      v21 = &v14;
      v24 = &v12;
      v27 = &v13;
      v30 = &v11;
      v17 = 2;
      v22 = 8;
      v25 = 8;
      v28 = 8;
      v11 = a3;
      v31 = 4;
      TlgWrite((TraceLoggingHProvider)8, &unk_1C002FCED, a4, v10, 8u, &pData);
    }
  }
}
