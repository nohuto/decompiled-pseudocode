/*
 * XREFs of ExProcessorCounterSetCallback @ 0x1404FA400
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     swscanf_s @ 0x140177C98 (swscanf_s.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExpQueryProcessorInformationCounters @ 0x1404FABCC (ExpQueryProcessorInformationCounters.c)
 *     PcwAddInstance @ 0x14053C6D4 (PcwAddInstance.c)
 */

int __fastcall ExProcessorCounterSetCallback(int a1, __int64 *a2)
{
  int v2; // ebx
  bool v4; // r14
  bool v5; // r15
  int v6; // ecx
  __int64 v7; // rax
  struct _PCW_BUFFER *v8; // r12
  bool v9; // r13
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // r8d
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned int v16; // ecx
  unsigned __int64 Mask; // rsi
  int v18; // edx
  unsigned int v19; // r8d
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  int result; // eax
  __int64 v26; // rsi
  __int64 *v27; // rdx
  const UNICODE_STRING *v28; // rdx
  NTSTATUS v29; // eax
  PPCW_DATA Data; // [rsp+28h] [rbp-E0h]
  bool v31; // [rsp+38h] [rbp-D0h]
  bool v32; // [rsp+39h] [rbp-CFh]
  USHORT Count[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v34; // [rsp+40h] [rbp-C8h]
  unsigned int v35; // [rsp+44h] [rbp-C4h] BYREF
  ULONG Id[2]; // [rsp+48h] [rbp-C0h] BYREF
  PPCW_BUFFER Buffer; // [rsp+50h] [rbp-B8h]
  __int64 v38; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v41; // [rsp+70h] [rbp-98h]
  struct _PCW_DATA v42; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+98h] [rbp-70h] BYREF
  struct _PCW_DATA v45; // [rsp+A8h] [rbp-60h] BYREF
  struct _PCW_DATA v46; // [rsp+B8h] [rbp-50h] BYREF
  struct _PCW_DATA v47; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v48[24]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v49[24]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v50; // [rsp+258h] [rbp+150h] BYREF
  __int64 v51; // [rsp+260h] [rbp+158h]
  __int64 v52; // [rsp+268h] [rbp+160h]
  __int64 v53; // [rsp+270h] [rbp+168h]
  int v54; // [rsp+278h] [rbp+170h]
  __int64 v55; // [rsp+280h] [rbp+178h]
  __int64 v56; // [rsp+288h] [rbp+180h]
  int v57; // [rsp+290h] [rbp+188h]
  int v58; // [rsp+294h] [rbp+18Ch]
  int v59; // [rsp+298h] [rbp+190h]
  __int64 v60; // [rsp+2A0h] [rbp+198h]
  __int64 v61; // [rsp+2A8h] [rbp+1A0h]
  __int64 v62; // [rsp+2B0h] [rbp+1A8h]
  __int64 v63; // [rsp+2B8h] [rbp+1B0h]
  __int64 v64; // [rsp+2C0h] [rbp+1B8h]
  __int64 v65; // [rsp+2C8h] [rbp+1C0h]
  __int64 v66; // [rsp+2D0h] [rbp+1C8h]
  int v67; // [rsp+2DCh] [rbp+1D4h]
  int v68; // [rsp+2E0h] [rbp+1D8h]
  unsigned int v69; // [rsp+2E8h] [rbp+1E0h]
  unsigned int v70; // [rsp+2ECh] [rbp+1E4h]
  __int64 v71; // [rsp+2F0h] [rbp+1E8h]
  __int64 v72; // [rsp+2F8h] [rbp+1F0h]
  __int64 v73; // [rsp+300h] [rbp+1F8h]
  __int64 v74; // [rsp+308h] [rbp+200h]
  int v75; // [rsp+310h] [rbp+208h]
  int v76; // [rsp+314h] [rbp+20Ch]
  wchar_t pszDest[16]; // [rsp+318h] [rbp+210h] BYREF

  v2 = 0;
  LOBYTE(v34) = 0;
  v32 = 0;
  v4 = 0;
  v31 = 0;
  v5 = 0;
  Id[0] = 0;
  v35 = 0;
  v6 = a1 - 2;
  if ( v6 )
  {
    if ( v6 != 1 )
      return 0;
    v7 = *a2;
    v8 = (struct _PCW_BUFFER *)a2[3];
    Buffer = v8;
    v9 = (v7 & 0x100E0FF05LL) != 0;
    v10 = a2[1];
    v4 = (v7 & 0xC00F0000) != 0;
    LOBYTE(v34) = v9;
    v32 = v4;
    v5 = (v7 & 0x3F000000) != 0;
    v31 = v5;
    if ( swscanf_s(*(const wchar_t **)(v10 + 8), L"%u,%u", &v35, Id) == 2 )
    {
      v26 = *((unsigned int *)a2 + 4);
      if ( (unsigned int)v26 >= (unsigned int)KeNumberProcessors_0 )
        return -1073741275;
      v27 = &v50;
      LOBYTE(v12) = v5;
      LOBYTE(v27) = v9;
      LOBYTE(v11) = v4;
      ExpQueryProcessorInformationCounters(KiProcessorBlock[v26], (_DWORD)v27, v11, v12, (__int64)&v50);
      v28 = (const UNICODE_STRING *)a2[1];
      v42.Data = &v50;
      v42.Size = 192;
      v29 = PcwAddInstance(v8, v28, v26, 1u, &v42);
      if ( v29 < 0 )
        return v29;
      return v2;
    }
  }
  else
  {
    v8 = (struct _PCW_BUFFER *)a2[3];
    Buffer = v8;
  }
  memset(v49, 0, sizeof(v49));
  v13 = KeNumberProcessors_0;
  v14 = 0LL;
  v15 = 0LL;
  LODWORD(v38) = KeNumberProcessors_0;
  LOWORD(v16) = 0;
  v39 = 0LL;
  v42.Data = 0LL;
  v35 = 0;
  if ( !KeNumberNodes )
  {
LABEL_21:
    if ( v13 > 1 )
    {
      v49[0] /= (unsigned __int64)v13;
      v49[1] /= (unsigned __int64)v13;
      v49[2] /= (unsigned __int64)v13;
      v49[3] /= (unsigned __int64)v13;
      v49[6] /= (unsigned __int64)v13;
      v49[5] /= (unsigned __int64)v13;
      v49[9] /= (unsigned __int64)v13;
      v49[10] /= (unsigned __int64)v13;
      v49[11] /= (unsigned __int64)v13;
      v49[15] /= (unsigned __int64)v13;
      HIDWORD(v49[16]) /= v13;
      LODWORD(v49[17]) /= v13;
    }
    if ( v5 )
    {
      LODWORD(v49[18]) = v15 / v13;
      HIDWORD(v49[18]) = v14 / v13;
      v49[19] /= (unsigned __int64)v13;
      v49[20] /= (unsigned __int64)v13;
    }
    if ( v4 )
      LODWORD(v49[23]) /= v13;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"_Total", v14);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v45.Data = v49;
    v45.Size = 192;
    return PcwAddInstance(v8, &DestinationString, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v45);
  }
  while ( 1 )
  {
    KeQueryNodeActiveAffinity(v16, &Affinity, Count);
    Mask = Affinity.Mask;
    if ( Affinity.Mask )
      break;
LABEL_19:
    v16 = v35 + 1;
    v35 = v16;
    if ( v16 >= (unsigned __int16)KeNumberNodes )
    {
      v13 = v38;
      v14 = v39;
      v15 = (unsigned __int64)v42.Data;
      goto LABEL_21;
    }
  }
  memset(v48, 0, sizeof(v48));
  v19 = Count[0];
  v20 = 0LL;
  v41 = 0LL;
  v21 = 0LL;
  v40 = 0LL;
  Id[0] = 0;
  if ( !Count[0] )
  {
LABEL_12:
    if ( Count[0] > 1u )
    {
      v48[0] /= (unsigned __int64)Count[0];
      v48[1] /= (unsigned __int64)Count[0];
      v48[2] /= (unsigned __int64)Count[0];
      v48[3] /= (unsigned __int64)Count[0];
      v48[6] /= (unsigned __int64)Count[0];
      v48[5] /= (unsigned __int64)Count[0];
      v48[9] /= (unsigned __int64)Count[0];
      v48[10] /= (unsigned __int64)Count[0];
      v48[11] /= (unsigned __int64)Count[0];
      v48[15] /= (unsigned __int64)Count[0];
      HIDWORD(v48[16]) /= v19;
      LODWORD(v48[17]) /= v19;
    }
    v5 = v31;
    if ( v31 )
    {
      LODWORD(v48[18]) = v21 / Count[0];
      HIDWORD(v48[18]) = v20 / Count[0];
      v48[19] /= (unsigned __int64)Count[0];
      v48[20] /= (unsigned __int64)Count[0];
    }
    v4 = v32;
    if ( v32 )
      LODWORD(v48[23]) /= v19;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,_Total", v35);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v8 = Buffer;
    v47.Data = v48;
    v47.Size = 192;
    result = PcwAddInstance(Buffer, &DestinationString, v35 + KeMaximumProcessors, 1u, &v47);
    if ( result < 0 )
      return result;
    goto LABEL_19;
  }
  while ( 1 )
  {
    if ( Mask )
    {
      _BitScanForward64(&v22, Mask);
      v23 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * Affinity.Group + (unsigned int)v22];
    }
    else
    {
      v23 = 0xFFFFFFFFLL;
    }
    v24 = KiProcessorBlock[v23];
    LOBYTE(v20) = v5;
    LOBYTE(v18) = v34;
    LOBYTE(v19) = v4;
    Id[1] = v23;
    Affinity.Mask = ~*(_QWORD *)(v24 + 1608) & Mask;
    ExpQueryProcessorInformationCounters(v24, v18, v19, v20, (__int64)&v50);
    LODWORD(Data) = Id[0];
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,%u", v35, Data);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v46.Data = &v50;
    v46.Size = 192;
    result = PcwAddInstance(v8, &DestinationString, Id[1], 1u, &v46);
    if ( result < 0 )
      return result;
    v48[13] += v64;
    v49[0] += v50;
    v49[1] += v51;
    v49[2] += v52;
    v49[3] += v53;
    LODWORD(v49[4]) += v54;
    v49[6] += v56;
    HIDWORD(v49[7]) += v58;
    LODWORD(v49[8]) += v59;
    LODWORD(v20) = v70;
    v18 = v72;
    v48[11] += v62;
    v48[14] += v65;
    v48[21] += v73;
    v48[22] += v74;
    v48[15] += v66;
    HIDWORD(v48[16]) += v67;
    LODWORD(v48[17]) += v68;
    v40 += v69;
    v41 += v70;
    v48[19] += v71;
    v48[20] += v72;
    LODWORD(v48[23]) += v75;
    v48[0] += v50;
    v48[1] += v51;
    v48[2] += v52;
    v48[3] += v53;
    LODWORD(v48[4]) += v54;
    v48[6] += v56;
    HIDWORD(v48[7]) += v58;
    LODWORD(v48[8]) += v59;
    v48[5] += v55;
    LODWORD(v48[7]) += v57;
    v48[9] += v60;
    v48[12] += v63;
    v48[10] += v61;
    HIDWORD(v48[23]) |= v76;
    v49[5] += v55;
    LODWORD(v49[7]) += v57;
    HIDWORD(v49[23]) |= v76;
    v49[9] += v60;
    v49[12] += v63;
    v49[10] += v61;
    v49[15] += v66;
    v49[19] += v71;
    v49[13] += v64;
    v49[11] += v62;
    v49[14] += v65;
    v49[21] += v73;
    v49[22] += v74;
    HIDWORD(v49[16]) += v67;
    LODWORD(v49[17]) += v68;
    v42.Data = (char *)v42.Data + v69;
    v39 += v70;
    v49[20] += v72;
    LODWORD(v49[23]) += v75;
    v19 = Count[0];
    Mask = Affinity.Mask;
    v4 = v32;
    v5 = v31;
    v8 = Buffer;
    if ( ++Id[0] >= Count[0] )
    {
      v20 = v41;
      v21 = v40;
      goto LABEL_12;
    }
  }
}
