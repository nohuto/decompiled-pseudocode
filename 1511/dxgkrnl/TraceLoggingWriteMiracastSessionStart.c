/*
 * XREFs of TraceLoggingWriteMiracastSessionStart @ 0x1C0029FFC
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0026540 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C016DE70 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000AC10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D5D4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000D7EC (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     RtlUnicodeStringPrintf @ 0x1C0028828 (RtlUnicodeStringPrintf.c)
 */

char __fastcall TraceLoggingWriteMiracastSessionStart(__int64 a1)
{
  int v1; // edx
  int v2; // r10d
  __int64 v4; // r9
  __int64 v5; // r8
  NTSTATUS v6; // eax
  wchar_t *Buffer; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  wchar_t *v10; // rcx
  const WCHAR *v11; // rcx
  int v12; // ecx
  int v13; // ecx
  const WCHAR *v14; // rdx
  int v15; // ecx
  unsigned int v16; // ecx
  const struct _TlgProvider_t *v17; // rcx
  LPCGUID v18; // r9
  LPCGUID v19; // r10
  int cDataa; // [rsp+28h] [rbp-E0h]
  UINT32 cData[2]; // [rsp+28h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-D8h]
  int v24; // [rsp+40h] [rbp-C8h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  int v27; // [rsp+5Ch] [rbp-ACh] BYREF
  int v28; // [rsp+60h] [rbp-A8h] BYREF
  int v29; // [rsp+64h] [rbp-A4h] BYREF
  int v30; // [rsp+68h] [rbp-A0h] BYREF
  int v31; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v32; // [rsp+70h] [rbp-98h] BYREF
  int v33; // [rsp+74h] [rbp-94h] BYREF
  int v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v36; // [rsp+80h] [rbp-88h] BYREF
  int v37; // [rsp+84h] [rbp-84h] BYREF
  int v38; // [rsp+88h] [rbp-80h] BYREF
  int v39; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v40; // [rsp+90h] [rbp-78h] BYREF
  int v41; // [rsp+94h] [rbp-74h] BYREF
  int v42; // [rsp+98h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v43; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-40h]
  __int64 v45; // [rsp+D0h] [rbp-38h]
  int *v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  int *v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  __int64 v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  int *v52; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  int *v54; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  int *v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  int *v58; // [rsp+138h] [rbp+30h]
  __int64 v59; // [rsp+140h] [rbp+38h]
  __int64 v60; // [rsp+148h] [rbp+40h]
  __int64 v61; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+168h] [rbp+60h] BYREF
  int *v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  int *v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+1D8h] [rbp+D0h] BYREF
  int *v73; // [rsp+1E8h] [rbp+E0h]
  __int64 v74; // [rsp+1F0h] [rbp+E8h]
  int *v75; // [rsp+1F8h] [rbp+F0h]
  __int64 v76; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+208h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+218h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+228h] [rbp+120h] BYREF
  int *v80; // [rsp+238h] [rbp+130h]
  __int64 v81; // [rsp+240h] [rbp+138h]
  int *v82; // [rsp+248h] [rbp+140h]
  __int64 v83; // [rsp+250h] [rbp+148h]
  int *v84; // [rsp+258h] [rbp+150h]
  __int64 v85; // [rsp+260h] [rbp+158h]
  int *v86; // [rsp+268h] [rbp+160h]
  __int64 v87; // [rsp+270h] [rbp+168h]
  __int64 v88; // [rsp+278h] [rbp+170h]
  __int64 v89; // [rsp+280h] [rbp+178h]
  int *v90; // [rsp+288h] [rbp+180h]
  __int64 v91; // [rsp+290h] [rbp+188h]
  int *v92; // [rsp+298h] [rbp+190h]
  __int64 v93; // [rsp+2A0h] [rbp+198h]
  int *v94; // [rsp+2A8h] [rbp+1A0h]
  __int64 v95; // [rsp+2B0h] [rbp+1A8h]
  char v96; // [rsp+2B8h] [rbp+1B0h] BYREF
  char v97; // [rsp+2E8h] [rbp+1E0h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 212);
  v2 = *(unsigned __int8 *)(a1 + 211);
  DestinationString.Buffer = (wchar_t *)&v96;
  v4 = *(unsigned __int8 *)(a1 + 209);
  v5 = *(unsigned __int8 *)(a1 + 208);
  v24 = *(unsigned __int8 *)(a1 + 213);
  cDataa = *(unsigned __int8 *)(a1 + 210);
  *(_DWORD *)&DestinationString.Length = 2490368;
  v6 = RtlUnicodeStringPrintf(&DestinationString, L"%02X:%02X:%02X:%02X:%02X:%02X", v5, v4, cDataa, v2, v1, v24);
  Buffer = DestinationString.Buffer;
  if ( v6 )
    *DestinationString.Buffer = 0;
  else
    DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1] = 0;
  v8 = *(_QWORD *)(a1 + 600);
  DestinationString.Buffer = (wchar_t *)&v97;
  LODWORD(pData) = (unsigned __int16)v8;
  *(_DWORD *)&DestinationString.Length = 4063232;
  cData[0] = WORD1(v8);
  LODWORD(v9) = RtlUnicodeStringPrintf(
                  &DestinationString,
                  L"%u.%u.%u.%u",
                  HIWORD(HIDWORD(v8)),
                  WORD2(v8),
                  *(_QWORD *)cData,
                  pData);
  v10 = DestinationString.Buffer;
  if ( (_DWORD)v9 )
  {
    *DestinationString.Buffer = 0;
  }
  else
  {
    v9 = (unsigned __int64)DestinationString.Length >> 1;
    DestinationString.Buffer[v9] = 0;
  }
  if ( (unsigned int)hProvider > 5 )
  {
    LOBYTE(v9) = TlgKeywordOn((TraceLoggingHProvider)v10, 0x400000000000uLL);
    if ( (_BYTE)v9 )
    {
      v36 = *(_DWORD *)(a1 + 712);
      v44 = a1 + 112;
      v46 = &v36;
      v39 = *(_DWORD *)(a1 + 540);
      v48 = &v39;
      v50 = a1 + 628;
      v28 = *(_DWORD *)(a1 + 296);
      v52 = &v28;
      v41 = *(_DWORD *)(a1 + 708);
      v54 = &v41;
      v30 = *(_DWORD *)(a1 + 624);
      v56 = &v30;
      v38 = *(_DWORD *)(a1 + 704);
      v58 = &v38;
      v60 = a1 + 608;
      v45 = 16LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 16LL;
      TlgCreateWsz(&pDesc, v11);
      TlgCreateWsz(&v63, *(LPCWSTR *)(a1 + 256));
      v12 = *(_DWORD *)(a1 + 592);
      v64 = &v32;
      v42 = *(_DWORD *)(a1 + 588);
      v32 = v12;
      v66 = &v42;
      v65 = 4LL;
      v67 = 4LL;
      TlgCreateWsz(&v68, Buffer);
      TlgCreateWsz(&v69, *(LPCWSTR *)(a1 + 216));
      TlgCreateWsz(&v70, *(LPCWSTR *)(a1 + 224));
      TlgCreateWsz(&v71, *(LPCWSTR *)(a1 + 240));
      TlgCreateWsz(&v72, *(LPCWSTR *)(a1 + 248));
      v13 = *(_DWORD *)(a1 + 196);
      v14 = *(const WCHAR **)(a1 + 264);
      v73 = &v34;
      v40 = *(_DWORD *)(a1 + 200);
      v75 = &v40;
      v34 = v13;
      v74 = 4LL;
      v76 = 4LL;
      TlgCreateWsz(&v77, v14);
      TlgCreateWsz(&v78, *(LPCWSTR *)(a1 + 272));
      TlgCreateWsz(&v79, (LPCWSTR)(a1 + 632));
      v15 = *(_DWORD *)(a1 + 700);
      v80 = &v26;
      v27 = *(_QWORD *)(a1 + 496) >> 16;
      v82 = &v27;
      v29 = *(_QWORD *)(a1 + 504) >> 16;
      v84 = &v29;
      v31 = *(_QWORD *)(a1 + 512) >> 16;
      v86 = &v31;
      v88 = a1 + 488;
      v26 = v15;
      v16 = *(_DWORD *)(a1 + 488);
      v81 = 4LL;
      v33 = v16 & 1;
      v90 = &v33;
      v35 = (v16 >> 1) & 1;
      v17 = (const struct _TlgProvider_t *)((v16 >> 2) & 1);
      v83 = 4LL;
      v92 = &v35;
      v94 = &v37;
      v85 = 4LL;
      v87 = 4LL;
      v89 = 4LL;
      v91 = 4LL;
      v93 = 4LL;
      v37 = (int)v17;
      v95 = 4LL;
      LOBYTE(v9) = TlgWrite(v17, &unk_1C00305EF, v19, v18, 0x21u, &v43);
    }
  }
  return v9;
}
