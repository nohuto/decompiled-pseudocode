/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x1406399B4
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406399B4 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     RtlTimeToTimeFields @ 0x1400A9368 (RtlTimeToTimeFields.c)
 *     RtlUnicodeStringCopyStringEx @ 0x14013C564 (RtlUnicodeStringCopyStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpGetLogString @ 0x1401CF240 (PnpGetLogString.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401CF540 (RtlUnicodeStringPrintfEx.c)
 *     Template_zzjzzztzqzztqz @ 0x1401CFA70 (Template_zzjzzztzqzztqz.c)
 *     ExpAllocateStringRoutine @ 0x1403F6F7C (ExpAllocateStringRoutine.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406399B4 (PiDevCfgLogDeviceConfigured.c)
 *     PnpTraceDeviceConfig @ 0x140648DC8 (PnpTraceDeviceConfig.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // r10
  int v9; // r8d
  void *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  int ObjectProperties; // eax
  __int64 *v14; // rsi
  int v15; // ecx
  __int64 *v16; // r8
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned __int16 v21; // ax
  _WORD *StringRoutine; // rax
  int v23; // ecx
  __int64 *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rdx
  int *v27; // rax
  const wchar_t *v28; // rdx
  const wchar_t *v29; // r8
  const wchar_t *v30; // r9
  const wchar_t *v31; // r10
  const wchar_t *v32; // r11
  __int64 *v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rdx
  int *v36; // rax
  const wchar_t *v37; // rdx
  const wchar_t *v38; // r8
  const wchar_t *v39; // r9
  const wchar_t *v40; // r10
  const wchar_t *v41; // r11
  __int64 *v42; // rsi
  __int64 v43; // r8
  __int64 v44; // rdx
  int *LogString; // rax
  const wchar_t *v46; // rdx
  const wchar_t *v47; // r8
  const wchar_t *v48; // r9
  const wchar_t *v49; // r10
  const wchar_t *v50; // r11
  __int64 *v51; // rsi
  __int64 v52; // r8
  __int64 v53; // rdx
  int *v54; // rax
  const wchar_t *v55; // rdx
  const wchar_t *v56; // r8
  const wchar_t *v57; // r9
  const wchar_t *v58; // r10
  const wchar_t *v59; // r11
  __int64 *v60; // rsi
  int v61; // eax
  int v62; // r9d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r9
  __int64 v70; // [rsp+20h] [rbp-B0h]
  __int64 v71; // [rsp+20h] [rbp-B0h]
  __int64 v72; // [rsp+28h] [rbp-A8h]
  __int64 v73; // [rsp+28h] [rbp-A8h]
  __int64 v74; // [rsp+30h] [rbp-A0h]
  int v75; // [rsp+38h] [rbp-98h]
  int v76; // [rsp+40h] [rbp-90h]
  int v77; // [rsp+48h] [rbp-88h]
  int v78; // [rsp+D0h] [rbp+0h] BYREF

  v5 = (unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL;
  v6 = Microsoft_Windows_Kernel_PnPEnableBits;
  v7 = a1;
  *(_QWORD *)(v5 + 80) = a1;
  *(_QWORD *)(v5 + 40) = a2;
  *(_DWORD *)(v5 + 32) = a4;
  *(_DWORD *)(v5 + 64) = 0;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_DWORD *)(v5 + 4) = 1;
  *(_DWORD *)(v5 + 48) = 0;
  v9 = 0;
  *(_QWORD *)(v5 + 56) = 0LL;
  if ( (v6 & 0x180000) != 0x180000 )
    goto LABEL_94;
  if ( !a3 )
  {
    *(_WORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0;
    *(_WORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 0;
    *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
LABEL_35:
    v23 = a5;
    if ( a5 < 0 )
    {
      if ( v9 == -1073740959 )
      {
        if ( (v6 & 0x200000) == 0 )
          goto LABEL_69;
        *(_DWORD *)v5 = a4 & 1;
        if ( a3 )
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = a3 + 256;
        else
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
        v42 = (__int64 *)(a3 + 224);
        if ( !a3 )
          v42 = PiDevCfgNullGuid;
        PnpGetLogString(*(_QWORD *)(v7 + 16) + 40LL);
        PnpGetLogString(v5 + 48);
        PnpGetLogString(v43);
        PnpGetLogString(v44);
        LogString = PnpGetLogString(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
        Template_zzjzzztzqzztqz(
          *(unsigned int *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
          &KMPnPEvt_DeviceConfig_Blocked,
          (__int64)v47,
          *(const wchar_t **)(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 8LL),
          v50,
          (__int64)v42,
          (const wchar_t *)(v5 + 136),
          (const wchar_t *)(v5 + 160),
          (const wchar_t *)LogString,
          *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
          v46,
          *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
          v47,
          v49,
          *(_DWORD *)v5,
          a5,
          v48);
      }
      else
      {
        if ( (v6 & 0x100000) == 0 )
          goto LABEL_69;
        *(_DWORD *)v5 = a4 & 1;
        if ( a3 )
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = a3 + 256;
        else
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
        v51 = (__int64 *)(a3 + 224);
        if ( !a3 )
          v51 = PiDevCfgNullGuid;
        PnpGetLogString(*(_QWORD *)(v7 + 16) + 40LL);
        PnpGetLogString(v5 + 48);
        PnpGetLogString(v52);
        PnpGetLogString(v53);
        v54 = PnpGetLogString(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
        Template_zzjzzztzqzztqz(
          *(unsigned int *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
          &KMPnPEvt_DeviceConfig_Failure,
          (__int64)v56,
          *(const wchar_t **)(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 8LL),
          v59,
          (__int64)v51,
          (const wchar_t *)(v5 + 136),
          (const wchar_t *)(v5 + 160),
          (const wchar_t *)v54,
          *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
          v55,
          *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
          v56,
          v58,
          *(_DWORD *)v5,
          a5,
          v57);
      }
    }
    else if ( (a4 & 2) != 0 )
    {
      if ( (v6 & 0x200000) == 0 )
        goto LABEL_69;
      *(_DWORD *)v5 = a4 & 1;
      if ( a3 )
        *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = a3 + 256;
      else
        *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      v33 = (__int64 *)(a3 + 224);
      if ( !a3 )
        v33 = PiDevCfgNullGuid;
      PnpGetLogString(*(_QWORD *)(v7 + 16) + 40LL);
      PnpGetLogString(v5 + 48);
      PnpGetLogString(v34);
      PnpGetLogString(v35);
      v36 = PnpGetLogString(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
      Template_zzjzzztzqzztqz(
        *(unsigned int *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
        &KMPnPEvt_DeviceConfig_RebootRequired,
        (__int64)v38,
        *(const wchar_t **)(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 8LL),
        v41,
        (__int64)v33,
        (const wchar_t *)(v5 + 136),
        (const wchar_t *)(v5 + 160),
        (const wchar_t *)v36,
        *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
        v37,
        *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
        v38,
        v40,
        *(_DWORD *)v5,
        a5,
        v39);
    }
    else
    {
      if ( (v6 & 0x80000) == 0 )
        goto LABEL_69;
      *(_DWORD *)v5 = a4 & 1;
      if ( a3 )
        *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = a3 + 256;
      else
        *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      v24 = (__int64 *)(a3 + 224);
      if ( !a3 )
        v24 = PiDevCfgNullGuid;
      PnpGetLogString(*(_QWORD *)(v7 + 16) + 40LL);
      PnpGetLogString(v5 + 48);
      PnpGetLogString(v25);
      PnpGetLogString(v26);
      v27 = PnpGetLogString(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
      Template_zzjzzztzqzztqz(
        *(unsigned int *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
        &KMPnPEvt_DeviceConfig_Success,
        (__int64)v29,
        *(const wchar_t **)(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 8LL),
        v32,
        (__int64)v24,
        (const wchar_t *)(v5 + 136),
        (const wchar_t *)(v5 + 160),
        (const wchar_t *)v27,
        *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
        v28,
        *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
        v29,
        v31,
        *(_DWORD *)v5,
        a5,
        v30);
    }
    v23 = a5;
LABEL_69:
    if ( a3 )
    {
      v60 = *(__int64 **)(a3 + 192);
      if ( v60 != (__int64 *)(a3 + 192) )
      {
        v61 = *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) & 1;
        *(_DWORD *)v5 = v61;
        do
        {
          v62 = v61;
          if ( *((_DWORD *)v60 + 93) )
            v62 = v61 | 2;
          PiDevCfgLogDeviceConfigured(
            *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
            *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
            (_DWORD)v60,
            v62,
            v23);
          v60 = (__int64 *)*v60;
          v23 = a5;
          v61 = *(_DWORD *)v5;
        }
        while ( v60 != (__int64 *)(a3 + 192) );
      }
      v63 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      v64 = 0LL;
      if ( *(_QWORD *)(v63 + 32) )
        v64 = *(_QWORD *)(v63 + 32);
      if ( *(_QWORD *)(v63 + 48) && *(_WORD *)(v63 + 40) > 2u )
      {
        v65 = *(_QWORD *)(v63 + 48);
        v66 = -1LL;
        do
          ++v66;
        while ( *(_WORD *)(v65 + 2 * v66) );
        while ( *(_WORD *)(v65 + 2 * v66 + 2) )
        {
          v67 = -1LL;
          do
            ++v67;
          while ( *(_WORD *)(v65 + 2 * v67) );
          v68 = v65 + 2 * v67;
          v66 = -1LL;
          v65 = v68 + 2;
          do
            ++v66;
          while ( *(_WORD *)(v65 + 2 * v66) );
        }
      }
      else
      {
        v65 = 0LL;
      }
      v69 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      if ( !v69 )
        v69 = *(_QWORD *)(a3 + 48);
      LOBYTE(v77) = (*(_BYTE *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) & 2) != 0;
      LOBYTE(v76) = PnpSetupInProgress != 0;
      LOBYTE(v75) = *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4) != 0;
      PnpTraceDeviceConfig(
        v64,
        v65,
        *(_QWORD *)(a3 + 248),
        v69,
        *(_QWORD *)(a3 + 264),
        v5 + 136,
        v5 + 160,
        v75,
        v76,
        v77,
        a5);
    }
    goto LABEL_94;
  }
  memset((void *)(v5 + 96), 0, 0x28uLL);
  v10 = *(void **)(a3 + 16);
  v11 = *(_QWORD *)(a3 + 64);
  *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = &DEVPKEY_DriverPackage_OriginalInfName;
  *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = ((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 64;
  *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 18;
  *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v12, v11, 7u, v10, v5 + 96, 1u);
  *(_DWORD *)v5 = ObjectProperties;
  if ( ObjectProperties < 0 )
    goto LABEL_94;
  if ( *(int *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) < 0 )
    RtlInitUnicodeString((PUNICODE_STRING)(v5 + 64), 0LL);
  if ( *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) )
    *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = RtlEqualUnicodeString(
                                                                          (PCUNICODE_STRING)(a3 + 40),
                                                                          (PCUNICODE_STRING)(v5 + 64),
                                                                          1u) != 0;
  RtlTimeToTimeFields((PLARGE_INTEGER)(a3 + 112), (PTIME_FIELDS)(v5 + 16));
  LODWORD(v72) = *(__int16 *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  LODWORD(v70) = *(__int16 *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  if ( RtlStringCchPrintfW(
         (NTSTRSAFE_PWSTR)(v5 + 136),
         0xBuLL,
         L"%02d/%02d/%04d",
         (unsigned int)*(__int16 *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12),
         v70,
         v72) < 0 )
    *(_WORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0;
  LODWORD(v73) = *(unsigned __int16 *)(a3 + 122);
  LODWORD(v71) = *(unsigned __int16 *)(a3 + 124);
  if ( RtlStringCchPrintfW(
         (NTSTRSAFE_PWSTR)(v5 + 160),
         0x18uLL,
         L"%u.%u.%u.%u",
         (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
         v71,
         v73,
         *(unsigned __int16 *)(a3 + 120)) < 0 )
    *(_WORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 0;
  v14 = (__int64 *)(a3 + 208);
  v15 = 0;
  if ( *(_DWORD *)(a3 + 108) != -1 )
    v15 = *(_DWORD *)(a3 + 108);
  *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v15;
  if ( (__int64 *)*v14 == v14 )
  {
LABEL_33:
    v6 = Microsoft_Windows_Kernel_PnPEnableBits;
    v9 = *(_DWORD *)v5;
    a4 = *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    v7 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    goto LABEL_35;
  }
  v16 = (__int64 *)*v14;
  v17 = 0;
  while ( v16 != v14 )
  {
    v18 = v16[20];
    v17 += *((unsigned __int16 *)v16 + 20) + *((unsigned __int16 *)v16 + 36) + 22;
    if ( v18 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( *(_WORD *)(v18 + 2 * v19) );
      v17 += 2 * v19 + 2;
    }
    v16 = (__int64 *)*v16;
  }
  v20 = v17 + 2;
  v21 = -2;
  if ( v20 <= 0xFFFE )
  {
    v21 = v20;
    *(_WORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x32) = v20;
  }
  else
  {
    *(_WORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x32) = -2;
  }
  StringRoutine = ExpAllocateStringRoutine(v21);
  *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = StringRoutine;
  if ( StringRoutine )
  {
    *(_OWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x30);
    *StringRoutine = 0;
    do
    {
      v14 = (__int64 *)*v14;
      if ( v14 == (__int64 *)(a3 + 208)
        || v14 != *(__int64 **)(a3 + 208)
        && RtlUnicodeStringCopyStringEx((PUNICODE_STRING)(v5 + 16), L" ", (PUNICODE_STRING)(v5 + 16), 0x800u) < 0 )
      {
        break;
      }
      LODWORD(v74) = *((_DWORD *)v14 + 27);
      if ( RtlUnicodeStringPrintfEx(
             (PUNICODE_STRING)(v5 + 16),
             (PUNICODE_STRING)(v5 + 16),
             0x800u,
             L"%wZ:%wZ:%08X",
             v14 + 5,
             v14 + 9,
             v74) < 0 )
        break;
    }
    while ( !v14[20]
         || RtlUnicodeStringPrintfEx((PUNICODE_STRING)(v5 + 16), (PUNICODE_STRING)(v5 + 16), 0x800u, L":%ws", v14[20]) >= 0 );
    goto LABEL_33;
  }
LABEL_94:
  RtlFreeAnsiString((PUNICODE_STRING)(v5 + 64));
  RtlFreeAnsiString((PUNICODE_STRING)(v5 + 48));
}
