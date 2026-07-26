/*
 * XREFs of ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDIS_ADDDEVICE_PARAMETERS@@JPEBG@Z @ 0x1C0013FCC
 * Callers:
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0013F94 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceAdded(const struct _TlgProvider_t *a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // rcx
  const WCHAR *v6; // r10
  int v7; // eax
  const WCHAR *v8; // rdx
  TraceLoggingHProvider v9; // rcx
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  int v12; // r9d
  const WCHAR *v13; // r10
  __int64 v14; // r11
  const WCHAR *v15; // rdx
  TraceLoggingHProvider v16; // rcx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  int v19; // [rsp+30h] [rbp-71h] BYREF
  int v20; // [rsp+34h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-61h] BYREF
  int *v22; // [rsp+60h] [rbp-41h]
  int v23; // [rsp+68h] [rbp-39h]
  int v24; // [rsp+6Ch] [rbp-35h]
  int *v25; // [rsp+70h] [rbp-31h]
  int v26; // [rsp+78h] [rbp-29h]
  int v27; // [rsp+7Ch] [rbp-25h]
  __int64 v28; // [rsp+80h] [rbp-21h]
  int v29; // [rsp+88h] [rbp-19h] BYREF
  int v30; // [rsp+8Ch] [rbp-15h]
  unsigned int *p_Size; // [rsp+90h] [rbp-11h]
  int v32; // [rsp+98h] [rbp-9h]
  int v33; // [rsp+9Ch] [rbp-5h]
  _EVENT_DATA_DESCRIPTOR v34; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+Fh]
  int v36; // [rsp+B8h] [rbp+17h]
  int v37; // [rsp+BCh] [rbp+1Bh]
  __int64 v38; // [rsp+C0h] [rbp+1Fh]
  int v39; // [rsp+C8h] [rbp+27h]
  int v40; // [rsp+CCh] [rbp+2Bh]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+2Fh] BYREF

  if ( a4 < 0 )
  {
    if ( (unsigned int)dword_1C0084040 > 5 && TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v24 = 0;
      v27 = 0;
      v15 = (const WCHAR *)qword_1C00247E0;
      v30 = 0;
      v33 = 0;
      v22 = &v19;
      v19 = v12;
      v25 = &v20;
      if ( v13 )
        v15 = v13;
      v23 = 4;
      p_Size = (unsigned int *)(v14 + 16);
      v20 = a2;
      v26 = 4;
      v28 = v14;
      v29 = 16;
      v32 = 8;
      TlgCreateWsz(&v34, v15);
      TlgWrite(v16, &unk_1C0074197, v17, v18, 7u, &pData);
    }
  }
  else if ( (unsigned int)dword_1C0084040 > 5 && TlgKeywordOn(a1, 0x200000000000uLL) )
  {
    v7 = *(_DWORD *)(v5 + 4);
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v34.Reserved = 0;
    v37 = 0;
    v40 = 0;
    v19 = v7;
    v22 = &v19;
    v25 = &v29;
    v28 = v5 + 598;
    LOWORD(v7) = 2 * (*(_WORD *)(v5 + 596) >> 1);
    v26 = 2;
    v29 = (unsigned __int16)v7;
    p_Size = &v34.Size;
    v34.Ptr = v5 + 10;
    LOWORD(v7) = 2 * (*(_WORD *)(v5 + 8) >> 1);
    v32 = 2;
    v8 = (const WCHAR *)qword_1C00247E0;
    v34.Size = (unsigned __int16)v7;
    v23 = 4;
    v35 = v5 + 540;
    if ( v6 )
      v8 = v6;
    v36 = 16;
    v38 = v5 + 1312;
    v39 = 8;
    TlgCreateWsz(&pDesc, v8);
    TlgWrite(v9, &unk_1C007515A, v10, v11, 0xAu, &pData);
  }
}
