/*
 * XREFs of ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDIS_ADDDEVICE_PARAMETERS@@JPEBG@Z @ 0x1C0020070
 * Callers:
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C002582C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceAdded(const struct _TlgProvider_t *a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // rcx
  const WCHAR *v6; // r10
  int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  const WCHAR *v10; // rdx
  TraceLoggingHProvider v11; // rcx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  int v14; // r9d
  const WCHAR *v15; // r10
  __int64 v16; // r11
  const WCHAR *v17; // rdx
  TraceLoggingHProvider v18; // rcx
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  int v21; // [rsp+30h] [rbp-71h] BYREF
  int v22; // [rsp+34h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-61h] BYREF
  int *v24; // [rsp+60h] [rbp-41h]
  int v25; // [rsp+68h] [rbp-39h]
  int v26; // [rsp+6Ch] [rbp-35h]
  int *v27; // [rsp+70h] [rbp-31h]
  int v28; // [rsp+78h] [rbp-29h]
  int v29; // [rsp+7Ch] [rbp-25h]
  __int64 v30; // [rsp+80h] [rbp-21h]
  int v31; // [rsp+88h] [rbp-19h] BYREF
  int v32; // [rsp+8Ch] [rbp-15h]
  unsigned int *p_Size; // [rsp+90h] [rbp-11h]
  int v34; // [rsp+98h] [rbp-9h]
  int v35; // [rsp+9Ch] [rbp-5h]
  _EVENT_DATA_DESCRIPTOR v36; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+Fh]
  int v38; // [rsp+B8h] [rbp+17h]
  int v39; // [rsp+BCh] [rbp+1Bh]
  __int64 v40; // [rsp+C0h] [rbp+1Fh]
  int v41; // [rsp+C8h] [rbp+27h]
  int v42; // [rsp+CCh] [rbp+2Bh]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+2Fh] BYREF

  if ( a4 < 0 )
  {
    if ( (unsigned int)dword_1C0088010 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v26 = 0;
      v29 = 0;
      v17 = (const WCHAR *)qword_1C00282D0;
      v32 = 0;
      v35 = 0;
      v24 = &v21;
      v21 = v14;
      v27 = &v22;
      if ( v15 )
        v17 = v15;
      v25 = 4;
      p_Size = (unsigned int *)(v16 + 16);
      v22 = a2;
      v28 = 4;
      v30 = v16;
      v31 = 16;
      v34 = 8;
      TlgCreateWsz(&v36, v17);
      TlgWrite(v18, &unk_1C0079236, v19, v20, 7u, &pData);
    }
  }
  else if ( (unsigned int)dword_1C0088010 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
  {
    v7 = *(_DWORD *)(v5 + 4);
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v36.Reserved = 0;
    v39 = 0;
    v42 = 0;
    v21 = v7;
    v24 = &v21;
    v27 = &v31;
    v30 = v5 + 598;
    v8 = 2 * (*(unsigned __int16 *)(v5 + 596) >> 1);
    v28 = 2;
    v31 = v8;
    p_Size = &v36.Size;
    v36.Ptr = v5 + 10;
    v9 = 2 * (*(unsigned __int16 *)(v5 + 8) >> 1);
    v34 = 2;
    v36.Size = v9;
    v10 = (const WCHAR *)qword_1C00282D0;
    v25 = 4;
    v37 = v5 + 540;
    v38 = 16;
    v40 = v5 + 1312;
    if ( v6 )
      v10 = v6;
    v41 = 8;
    TlgCreateWsz(&pDesc, v10);
    TlgWrite(v11, &unk_1C0079636, v12, v13, 0xAu, &pData);
  }
}
