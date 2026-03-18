/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x140513368
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140513368 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x140123118 (RtlTimeToTimeFields.c)
 *     RtlUnicodeStringPrintfEx @ 0x14012C1CC (RtlUnicodeStringPrintfEx.c)
 *     PnpGetLogString @ 0x14012C398 (PnpGetLogString.c)
 *     Template_zzjzzztzqzztqz @ 0x14012C564 (Template_zzjzzztzqzztqz.c)
 *     RtlUnicodeStringCopyStringEx @ 0x1401339D0 (RtlUnicodeStringCopyStringEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x140447224 (ExpAllocateStringRoutine.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140513368 (PiDevCfgLogDeviceConfigured.c)
 *     PnpTraceDeviceConfig @ 0x140513818 (PnpTraceDeviceConfig.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // r10
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // ecx
  int ObjectProperties; // eax
  __int64 *v14; // rsi
  int v15; // ecx
  int v16; // ecx
  __int64 *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rdx
  int *v20; // rax
  const wchar_t *v21; // rdx
  const wchar_t *v22; // r8
  const wchar_t *v23; // r9
  const wchar_t *v24; // r10
  const wchar_t *v25; // r11
  __int64 *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 *v32; // r8
  int v33; // edx
  __int64 v34; // rcx
  unsigned int v35; // edx
  unsigned __int16 v36; // ax
  _WORD *StringRoutine; // rax
  __int64 v38; // rax
  __int64 *v39; // rsi
  __int64 v40; // r8
  __int64 v41; // rdx
  int *v42; // rax
  const wchar_t *v43; // rdx
  const wchar_t *v44; // r8
  const wchar_t *v45; // r9
  const wchar_t *v46; // r10
  const wchar_t *v47; // r11
  __int64 *v48; // rsi
  __int64 v49; // r8
  __int64 v50; // rdx
  int *LogString; // rax
  const wchar_t *v52; // rdx
  const wchar_t *v53; // r8
  const wchar_t *v54; // r9
  const wchar_t *v55; // r10
  const wchar_t *v56; // r11
  __int64 *v57; // rsi
  __int64 v58; // r8
  __int64 v59; // rdx
  int *v60; // rax
  const wchar_t *v61; // rdx
  const wchar_t *v62; // r8
  const wchar_t *v63; // r9
  const wchar_t *v64; // r10
  const wchar_t *v65; // r11
  int v66; // eax
  int v67; // r9d
  __int64 v68; // rax
  __int64 v69; // rdx
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
    goto LABEL_34;
  if ( !a3 )
  {
    *(_WORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0;
    *(_WORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 0;
    *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
LABEL_16:
    v16 = a5;
    if ( a5 < 0 )
    {
      if ( v9 == -1073740959 )
      {
        if ( (v6 & 0x200000) != 0 )
        {
          *(_DWORD *)v5 = a4 & 1;
          if ( a3 )
            *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = a3 + 256;
          else
            *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
          v48 = (__int64 *)(a3 + 224);
          if ( !a3 )
            v48 = PiDevCfgNullGuid;
          PnpGetLogString(*(_QWORD *)(v7 + 16) + 40LL);
          PnpGetLogString(v5 + 48);
          PnpGetLogString(v49);
          PnpGetLogString(v50);
          LogString = PnpGetLogString(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
          Template_zzjzzztzqzztqz(
            *(unsigned int *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
            &KMPnPEvt_DeviceConfig_Blocked,
            (__int64)v53,
            *(const wchar_t **)(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 8LL),
            v56,
            (__int64)v48,
            (const wchar_t *)(v5 + 136),
            (const wchar_t *)(v5 + 160),
            (const wchar_t *)LogString,
            *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
            v52,
            *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
            v53,
            v55,
            *(_DWORD *)v5,
            a5,
            v54);
          goto LABEL_24;
        }
      }
      else if ( (v6 & 0x100000) != 0 )
      {
        *(_DWORD *)v5 = a4 & 1;
        if ( a3 )
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = a3 + 256;
        else
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
        v57 = (__int64 *)(a3 + 224);
        if ( !a3 )
          v57 = PiDevCfgNullGuid;
        PnpGetLogString(*(_QWORD *)(v7 + 16) + 40LL);
        PnpGetLogString(v5 + 48);
        PnpGetLogString(v58);
        PnpGetLogString(v59);
        v60 = PnpGetLogString(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
        Template_zzjzzztzqzztqz(
          *(unsigned int *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
          &KMPnPEvt_DeviceConfig_Failure,
          (__int64)v62,
          *(const wchar_t **)(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 8LL),
          v65,
          (__int64)v57,
          (const wchar_t *)(v5 + 136),
          (const wchar_t *)(v5 + 160),
          (const wchar_t *)v60,
          *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
          v61,
          *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
          v62,
          v64,
          *(_DWORD *)v5,
          a5,
          v63);
        goto LABEL_24;
      }
    }
    else
    {
      if ( (a4 & 2) == 0 )
      {
        if ( (v6 & 0x80000) == 0 )
          goto LABEL_25;
        *(_DWORD *)v5 = a4 & 1;
        if ( a3 )
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = a3 + 256;
        else
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
        v17 = (__int64 *)(a3 + 224);
        if ( !a3 )
          v17 = PiDevCfgNullGuid;
        PnpGetLogString(*(_QWORD *)(v7 + 16) + 40LL);
        PnpGetLogString(v5 + 48);
        PnpGetLogString(v18);
        PnpGetLogString(v19);
        v20 = PnpGetLogString(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
        Template_zzjzzztzqzztqz(
          *(unsigned int *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
          &KMPnPEvt_DeviceConfig_Success,
          (__int64)v22,
          *(const wchar_t **)(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 8LL),
          v25,
          (__int64)v17,
          (const wchar_t *)(v5 + 136),
          (const wchar_t *)(v5 + 160),
          (const wchar_t *)v20,
          *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
          v21,
          *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
          v22,
          v24,
          *(_DWORD *)v5,
          a5,
          v23);
        goto LABEL_24;
      }
      if ( (v6 & 0x200000) != 0 )
      {
        *(_DWORD *)v5 = a4 & 1;
        if ( a3 )
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = a3 + 256;
        else
          *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
        v39 = (__int64 *)(a3 + 224);
        if ( !a3 )
          v39 = PiDevCfgNullGuid;
        PnpGetLogString(*(_QWORD *)(v7 + 16) + 40LL);
        PnpGetLogString(v5 + 48);
        PnpGetLogString(v40);
        PnpGetLogString(v41);
        v42 = PnpGetLogString(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
        Template_zzjzzztzqzztqz(
          *(unsigned int *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
          &KMPnPEvt_DeviceConfig_RebootRequired,
          (__int64)v44,
          *(const wchar_t **)(*(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 8LL),
          v47,
          (__int64)v39,
          (const wchar_t *)(v5 + 136),
          (const wchar_t *)(v5 + 160),
          (const wchar_t *)v42,
          *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
          v43,
          *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
          v44,
          v46,
          *(_DWORD *)v5,
          a5,
          v45);
LABEL_24:
        v16 = a5;
      }
    }
LABEL_25:
    if ( a3 )
    {
      v26 = *(__int64 **)(a3 + 192);
      if ( v26 != (__int64 *)(a3 + 192) )
      {
        v66 = *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) & 1;
        *(_DWORD *)v5 = v66;
        do
        {
          v67 = v66;
          if ( *((_DWORD *)v26 + 93) )
            v67 = v66 | 2;
          PiDevCfgLogDeviceConfigured(
            *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
            *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
            (_DWORD)v26,
            v67,
            v16);
          v26 = (__int64 *)*v26;
          v16 = a5;
          v66 = *(_DWORD *)v5;
        }
        while ( v26 != (__int64 *)(a3 + 192) );
      }
      v27 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      v28 = 0LL;
      if ( *(_QWORD *)(v27 + 32) )
        v28 = *(_QWORD *)(v27 + 32);
      if ( *(_QWORD *)(v27 + 48) && *(_WORD *)(v27 + 40) > 2u )
      {
        v29 = *(_QWORD *)(v27 + 48);
        v31 = -1LL;
        do
          ++v31;
        while ( *(_WORD *)(v29 + 2 * v31) );
        while ( *(_WORD *)(v29 + 2 * v31 + 2) )
        {
          v68 = -1LL;
          do
            ++v68;
          while ( *(_WORD *)(v29 + 2 * v68) );
          v69 = v29 + 2 * v68;
          v31 = -1LL;
          v29 = v69 + 2;
          do
            ++v31;
          while ( *(_WORD *)(v29 + 2 * v31) );
        }
      }
      else
      {
        v29 = 0LL;
      }
      v30 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      if ( !v30 )
        v30 = *(_QWORD *)(a3 + 48);
      LOBYTE(v77) = (*(_BYTE *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) & 2) != 0;
      LOBYTE(v76) = PnpSetupInProgress != 0;
      LOBYTE(v75) = *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 4) != 0;
      PnpTraceDeviceConfig(
        v28,
        v29,
        *(_QWORD *)(a3 + 248),
        v30,
        *(_QWORD *)(a3 + 264),
        v5 + 136,
        v5 + 160,
        v75,
        v76,
        v77,
        a5);
    }
    goto LABEL_34;
  }
  memset((void *)(v5 + 96), 0, 0x28uLL);
  v10 = *(_QWORD *)(a3 + 16);
  v11 = *(_QWORD *)(a3 + 64);
  *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = &DEVPKEY_DriverPackage_OriginalInfName;
  *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = ((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 64;
  *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 18;
  *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v12, v11, 7, v10, v5 + 96, 1);
  *(_DWORD *)v5 = ObjectProperties;
  if ( ObjectProperties < 0 )
    goto LABEL_34;
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
LABEL_15:
    v6 = Microsoft_Windows_Kernel_PnPEnableBits;
    v9 = *(_DWORD *)v5;
    a4 = *(_DWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    v7 = *(_QWORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    goto LABEL_16;
  }
  v32 = (__int64 *)*v14;
  v33 = 0;
  while ( v32 != v14 )
  {
    v34 = v32[20];
    v33 += *((unsigned __int16 *)v32 + 20) + *((unsigned __int16 *)v32 + 36) + 22;
    if ( v34 )
    {
      v38 = -1LL;
      do
        ++v38;
      while ( *(_WORD *)(v34 + 2 * v38) );
      v33 += 2 * v38 + 2;
    }
    v32 = (__int64 *)*v32;
  }
  v35 = v33 + 2;
  v36 = -2;
  if ( v35 > 0xFFFE )
  {
    *(_WORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x32) = -2;
  }
  else
  {
    v36 = v35;
    *(_WORD *)(((unsigned __int64)&v78 & 0xFFFFFFFFFFFFFFC0uLL) + 0x32) = v35;
  }
  StringRoutine = ExpAllocateStringRoutine(v36);
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
    goto LABEL_15;
  }
LABEL_34:
  RtlFreeAnsiString((PUNICODE_STRING)(v5 + 64));
  RtlFreeAnsiString((PUNICODE_STRING)(v5 + 48));
}
