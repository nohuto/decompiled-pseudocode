/*
 * XREFs of ExProcessorCounterSetCallback @ 0x140406328
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x14000BE38 (KeFindFirstSetRightGroupAffinity.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     swscanf_s @ 0x140153568 (swscanf_s.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExpQueryProcessorInformationCounters @ 0x140406ACC (ExpQueryProcessorInformationCounters.c)
 *     PcwAddInstance @ 0x1404D4324 (PcwAddInstance.c)
 */

int __fastcall ExProcessorCounterSetCallback(int a1, __int64 *a2)
{
  int v2; // edi
  bool v4; // r14
  bool v5; // r15
  int v6; // ecx
  __int64 v7; // rax
  struct _PCW_BUFFER *v8; // r12
  bool v9; // r13
  int v10; // r8d
  int v11; // r9d
  ULONG ActiveProcessorCount; // eax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rbx
  unsigned int v15; // r8d
  unsigned __int64 v16; // r9
  unsigned __int64 Mask; // r13
  unsigned int v18; // r8d
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 FirstSetRightGroupAffinity; // rbx
  int v22; // r9d
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // r13
  int result; // eax
  __int64 v28; // rsi
  __int64 *v29; // rdx
  const UNICODE_STRING *v30; // rdx
  NTSTATUS v31; // eax
  PPCW_DATA Data; // [rsp+28h] [rbp-E0h]
  bool v33; // [rsp+38h] [rbp-D0h]
  __int16 v34; // [rsp+39h] [rbp-CFh]
  USHORT Count[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v36; // [rsp+40h] [rbp-C8h] BYREF
  int v37; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v38; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v39; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+58h] [rbp-B0h]
  PPCW_BUFFER Buffer; // [rsp+60h] [rbp-A8h]
  struct _PCW_DATA v42; // [rsp+68h] [rbp-A0h] BYREF
  struct _PCW_DATA v43; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+98h] [rbp-70h] BYREF
  struct _PCW_DATA v46; // [rsp+A8h] [rbp-60h] BYREF
  struct _PCW_DATA v47; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v48[24]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v49[24]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v50; // [rsp+248h] [rbp+140h] BYREF
  __int64 v51; // [rsp+250h] [rbp+148h]
  __int64 v52; // [rsp+258h] [rbp+150h]
  __int64 v53; // [rsp+260h] [rbp+158h]
  int v54; // [rsp+268h] [rbp+160h]
  __int64 v55; // [rsp+270h] [rbp+168h]
  __int64 v56; // [rsp+278h] [rbp+170h]
  int v57; // [rsp+280h] [rbp+178h]
  int v58; // [rsp+284h] [rbp+17Ch]
  int v59; // [rsp+288h] [rbp+180h]
  __int64 v60; // [rsp+290h] [rbp+188h]
  __int64 v61; // [rsp+298h] [rbp+190h]
  __int64 v62; // [rsp+2A0h] [rbp+198h]
  __int64 v63; // [rsp+2A8h] [rbp+1A0h]
  __int64 v64; // [rsp+2B0h] [rbp+1A8h]
  __int64 v65; // [rsp+2B8h] [rbp+1B0h]
  __int64 v66; // [rsp+2C0h] [rbp+1B8h]
  int v67; // [rsp+2CCh] [rbp+1C4h]
  int v68; // [rsp+2D0h] [rbp+1C8h]
  unsigned int v69; // [rsp+2D8h] [rbp+1D0h]
  unsigned int v70; // [rsp+2DCh] [rbp+1D4h]
  __int64 v71; // [rsp+2E0h] [rbp+1D8h]
  __int64 v72; // [rsp+2E8h] [rbp+1E0h]
  __int64 v73; // [rsp+2F0h] [rbp+1E8h]
  __int64 v74; // [rsp+2F8h] [rbp+1F0h]
  int v75; // [rsp+300h] [rbp+1F8h]
  int v76; // [rsp+304h] [rbp+1FCh]
  wchar_t pszDest[16]; // [rsp+308h] [rbp+200h] BYREF

  v2 = 0;
  v34 = 0;
  v4 = 0;
  v33 = 0;
  v5 = 0;
  v37 = 0;
  v36 = 0;
  v6 = a1 - 2;
  if ( v6 )
  {
    if ( v6 != 1 )
      return 0;
    v7 = *a2;
    v8 = (struct _PCW_BUFFER *)a2[3];
    Buffer = v8;
    v9 = (v7 & 0x100E0FF05LL) != 0;
    v4 = (v7 & 0xC00F0000) != 0;
    HIBYTE(v34) = v9;
    LOBYTE(v34) = v4;
    v5 = (v7 & 0x3F000000) != 0;
    v33 = v5;
    if ( swscanf_s(*(const wchar_t **)(a2[1] + 8), L"%u,%u", &v36, &v37) == 2 )
    {
      v28 = *((unsigned int *)a2 + 4);
      if ( (unsigned int)v28 >= (unsigned int)KeNumberProcessors_0 )
        return -1073741275;
      v29 = &v50;
      LOBYTE(v11) = v5;
      LOBYTE(v29) = v9;
      LOBYTE(v10) = v4;
      ExpQueryProcessorInformationCounters(KiProcessorBlock[v28], (_DWORD)v29, v10, v11, (__int64)&v50);
      v30 = (const UNICODE_STRING *)a2[1];
      v43.Data = &v50;
      v43.Size = 192;
      v31 = PcwAddInstance(v8, v30, v28, 1u, &v43);
      if ( v31 < 0 )
        return v31;
      return v2;
    }
  }
  else
  {
    v8 = (struct _PCW_BUFFER *)a2[3];
    Buffer = v8;
  }
  memset(v49, 0, sizeof(v49));
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  LOWORD(v13) = 0;
  v14 = 0LL;
  v36 = 0;
  v15 = ActiveProcessorCount;
  LODWORD(v38) = ActiveProcessorCount;
  v43.Data = 0LL;
  v16 = 0LL;
  v42.Data = 0LL;
  if ( !KeNumberNodes )
  {
LABEL_19:
    if ( v15 > 1 )
    {
      v49[0] /= (unsigned __int64)v15;
      v49[1] /= (unsigned __int64)v15;
      v49[2] /= (unsigned __int64)v15;
      v49[3] /= (unsigned __int64)v15;
      v49[6] /= (unsigned __int64)v15;
      v49[5] /= (unsigned __int64)v15;
      v49[9] /= (unsigned __int64)v15;
      v49[10] /= (unsigned __int64)v15;
      v49[11] /= (unsigned __int64)v15;
      v49[15] /= (unsigned __int64)v15;
      HIDWORD(v49[16]) /= v15;
      LODWORD(v49[17]) /= v15;
    }
    if ( v5 )
    {
      LODWORD(v49[18]) = v16 / v15;
      HIDWORD(v49[18]) = v14 / v15;
      v49[19] /= (unsigned __int64)v15;
      v49[20] /= (unsigned __int64)v15;
    }
    if ( v4 )
      LODWORD(v49[23]) /= v15;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"_Total", v16);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v42.Data = v49;
    v42.Size = 192;
    return PcwAddInstance(v8, &DestinationString, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v42);
  }
  while ( 1 )
  {
    KeQueryNodeActiveAffinity(v13, &Affinity, Count);
    Mask = Affinity.Mask;
    if ( Affinity.Mask )
      break;
LABEL_17:
    v13 = v36 + 1;
    v36 = v13;
    if ( v13 >= (unsigned __int16)KeNumberNodes )
    {
      v15 = v38;
      v16 = (unsigned __int64)v42.Data;
      goto LABEL_19;
    }
  }
  memset(v48, 0, sizeof(v48));
  v18 = Count[0];
  v19 = 0LL;
  v39 = 0LL;
  v20 = 0LL;
  v40 = 0LL;
  v37 = 0;
  if ( !Count[0] )
  {
LABEL_10:
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
      HIDWORD(v48[16]) /= v18;
      LODWORD(v48[17]) /= v18;
    }
    v5 = v33;
    if ( v33 )
    {
      LODWORD(v48[18]) = v20 / Count[0];
      HIDWORD(v48[18]) = v19 / Count[0];
      v48[19] /= (unsigned __int64)Count[0];
      v48[20] /= (unsigned __int64)Count[0];
    }
    v4 = v34;
    if ( (_BYTE)v34 )
      LODWORD(v48[23]) /= v18;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,_Total", v36);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v8 = Buffer;
    v47.Data = v48;
    v47.Size = 192;
    result = PcwAddInstance(Buffer, &DestinationString, v36 + KeMaximumProcessors, 1u, &v47);
    if ( result < 0 )
      return result;
    goto LABEL_17;
  }
  while ( 1 )
  {
    FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity((__int64)&Affinity);
    LOBYTE(v22) = v5;
    LOBYTE(v23) = v4;
    v24 = KiProcessorBlock[FirstSetRightGroupAffinity];
    v25 = ~*(_QWORD *)(v24 + 1608);
    v26 = v25 & Mask;
    LOBYTE(v25) = HIBYTE(v34);
    Affinity.Mask = v26;
    ExpQueryProcessorInformationCounters(v24, v25, v23, v22, (__int64)&v50);
    LODWORD(Data) = v37;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,%u", v36, Data);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v46.Size = 192;
    v46.Data = &v50;
    result = PcwAddInstance(v8, &DestinationString, FirstSetRightGroupAffinity, 1u, &v46);
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
    v48[11] += v62;
    v48[14] += v65;
    v48[21] += v73;
    v48[22] += v74;
    v48[15] += v66;
    HIDWORD(v48[16]) += v67;
    LODWORD(v48[17]) += v68;
    v40 += v69;
    v39 += v70;
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
    HIDWORD(v49[16]) += v67;
    HIDWORD(v49[23]) |= v76;
    v49[9] += v60;
    v49[12] += v63;
    v49[10] += v61;
    v49[22] += v74;
    v14 = (unsigned __int64)v43.Data + v70;
    v49[19] += v71;
    v49[13] += v64;
    v49[11] += v62;
    v49[14] += v65;
    v49[21] += v73;
    v49[15] += v66;
    LODWORD(v49[17]) += v68;
    v42.Data = (char *)v42.Data + v69;
    v49[20] += v72;
    LODWORD(v49[23]) += v75;
    v18 = Count[0];
    v4 = v34;
    v5 = v33;
    v8 = Buffer;
    Mask = Affinity.Mask;
    v43.Data = (const void *)v14;
    if ( ++v37 >= (unsigned int)Count[0] )
    {
      v19 = v39;
      v20 = v40;
      goto LABEL_10;
    }
  }
}
