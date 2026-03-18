/*
 * XREFs of TraceLoggingWriteMiracastSessionStart @ 0x1C0031444
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C002D594 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C019766C (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000F3F4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     RtlUnicodeStringPrintf @ 0x1C002FC90 (RtlUnicodeStringPrintf.c)
 */

char __fastcall TraceLoggingWriteMiracastSessionStart(__int64 a1)
{
  int v1; // edx
  int v2; // r10d
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  const WCHAR *v7; // r9
  int v8; // ecx
  const WCHAR *v9; // rdx
  int v10; // ecx
  unsigned int v11; // edx
  LPCGUID v12; // r9
  LPCGUID v13; // r10
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  int pData; // [rsp+28h] [rbp-D8h]
  int v17; // [rsp+30h] [rbp-D0h]
  int v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+5Ch] [rbp-A4h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+64h] [rbp-9Ch] BYREF
  int v29; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+6Ch] [rbp-94h] BYREF
  int v31; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+74h] [rbp-8Ch] BYREF
  int v33; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  int *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  int *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  __int64 v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  int *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  int *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  int *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+170h] [rbp+70h] BYREF
  int *v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  int *v59; // [rsp+190h] [rbp+90h]
  __int64 v60; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1C0h] [rbp+C0h] BYREF
  int *v64; // [rsp+1D0h] [rbp+D0h]
  __int64 v65; // [rsp+1D8h] [rbp+D8h]
  int *v66; // [rsp+1E0h] [rbp+E0h]
  __int64 v67; // [rsp+1E8h] [rbp+E8h]
  int *v68; // [rsp+1F0h] [rbp+F0h]
  __int64 v69; // [rsp+1F8h] [rbp+F8h]
  int *v70; // [rsp+200h] [rbp+100h]
  __int64 v71; // [rsp+208h] [rbp+108h]
  __int64 v72; // [rsp+210h] [rbp+110h]
  __int64 v73; // [rsp+218h] [rbp+118h]
  int *v74; // [rsp+220h] [rbp+120h]
  __int64 v75; // [rsp+228h] [rbp+128h]
  int *v76; // [rsp+230h] [rbp+130h]
  __int64 v77; // [rsp+238h] [rbp+138h]
  int *v78; // [rsp+240h] [rbp+140h]
  __int64 v79; // [rsp+248h] [rbp+148h]
  char v80; // [rsp+250h] [rbp+150h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 212);
  v2 = *(unsigned __int8 *)(a1 + 211);
  DestinationString.Buffer = (wchar_t *)&v80;
  v4 = *(unsigned __int8 *)(a1 + 209);
  v5 = *(unsigned __int8 *)(a1 + 208);
  v18 = *(unsigned __int8 *)(a1 + 213);
  v17 = v1;
  pData = v2;
  cData = *(unsigned __int8 *)(a1 + 210);
  *(_DWORD *)&DestinationString.Length = 2490368;
  LODWORD(v6) = RtlUnicodeStringPrintf(
                  &DestinationString,
                  L"%02X:%02X:%02X:%02X:%02X:%02X",
                  v5,
                  v4,
                  cData,
                  pData,
                  v17,
                  v18);
  if ( (_DWORD)v6 )
  {
    *DestinationString.Buffer = 0;
  }
  else
  {
    v6 = (unsigned __int64)DestinationString.Length >> 1;
    DestinationString.Buffer[v6] = 0;
  }
  if ( (unsigned int)dword_1C00568C0 > 5 )
  {
    LOBYTE(v6) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C00568C0, 0x800000000002uLL);
    if ( (_BYTE)v6 )
    {
      v19 = *(_DWORD *)(a1 + 804);
      v36 = a1 + 112;
      v38 = &v19;
      v20 = *(_DWORD *)(a1 + 668);
      v40 = &v20;
      v42 = a1 + 720;
      v21 = *(_DWORD *)(a1 + 424);
      v44 = &v21;
      v22 = *(_DWORD *)(a1 + 800);
      v46 = &v22;
      v23 = *(_DWORD *)(a1 + 716);
      v48 = &v23;
      v24 = *(_DWORD *)(a1 + 796);
      v50 = &v24;
      v37 = 16LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      TlgCreateWsz(&pDesc, v7);
      TlgCreateWsz(&v53, *(LPCWSTR *)(a1 + 344));
      TlgCreateWsz(&v54, *(LPCWSTR *)(a1 + 352));
      TlgCreateWsz(&v55, *(LPCWSTR *)(a1 + 368));
      TlgCreateWsz(&v56, *(LPCWSTR *)(a1 + 376));
      v8 = *(_DWORD *)(a1 + 196);
      v9 = *(const WCHAR **)(a1 + 384);
      v57 = &v25;
      v26 = *(_DWORD *)(a1 + 200);
      v25 = v8;
      v59 = &v26;
      v58 = 4LL;
      v60 = 4LL;
      TlgCreateWsz(&v61, v9);
      TlgCreateWsz(&v62, *(LPCWSTR *)(a1 + 392));
      TlgCreateWsz(&v63, (LPCWSTR)(a1 + 724));
      v10 = *(_DWORD *)(a1 + 792);
      v64 = &v27;
      v28 = *(_QWORD *)(a1 + 624) >> 16;
      v66 = &v28;
      v27 = v10;
      v65 = 4LL;
      v67 = 4LL;
      v29 = *(_QWORD *)(a1 + 632) >> 16;
      v68 = &v29;
      v30 = *(_QWORD *)(a1 + 640) >> 16;
      v70 = &v30;
      v11 = *(_DWORD *)(a1 + 616);
      v72 = a1 + 616;
      v69 = 4LL;
      v31 = v11 & 1;
      v74 = &v31;
      v32 = (v11 >> 1) & 1;
      v71 = 4LL;
      v76 = &v32;
      v78 = &v33;
      v73 = 4LL;
      v75 = 4LL;
      v77 = 4LL;
      v33 = (v11 >> 2) & 1;
      v79 = 4LL;
      LOBYTE(v6) = TlgWrite((TraceLoggingHProvider)&dword_1C00568C0, &unk_1C003DF27, v13, v12, 0x1Cu, &v35);
    }
  }
  return v6;
}
