/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x1406871F0
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406871F0 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x140137F0C (RtlTimeToTimeFields.c)
 *     RtlUnicodeStringPrintfEx @ 0x14015B488 (RtlUnicodeStringPrintfEx.c)
 *     RtlUnicodeStringCopyStringEx @ 0x14015DE78 (RtlUnicodeStringCopyStringEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     Template_zzjzzztzqzztq @ 0x1401FC3FC (Template_zzjzzztzqzztq.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406871F0 (PiDevCfgLogDeviceConfigured.c)
 *     PnpTraceDeviceConfig @ 0x1406939B4 (PnpTraceDeviceConfig.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rbp
  int v5; // eax
  int v7; // edx
  const wchar_t *v8; // r8
  void *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  int ObjectProperties; // eax
  _QWORD *v13; // rsi
  int v14; // ecx
  _QWORD *v15; // r8
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned __int16 v20; // ax
  const wchar_t *StringRoutine; // rax
  __int128 v22; // xmm0
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  unsigned int v25; // ecx
  char v26; // si
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 *v30; // rax
  const wchar_t *v31; // r11
  const wchar_t *v32; // r10
  const wchar_t *v33; // r8
  const wchar_t *v34; // rdx
  const wchar_t *v35; // rcx
  char v36; // si
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 *v40; // rax
  const wchar_t *v41; // r11
  const wchar_t *v42; // r10
  const wchar_t *v43; // r8
  const wchar_t *v44; // rdx
  const wchar_t *v45; // rcx
  char v46; // si
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 *v50; // rax
  const wchar_t *v51; // r11
  const wchar_t *v52; // r10
  const wchar_t *v53; // r8
  const wchar_t *v54; // rdx
  const wchar_t *v55; // rcx
  char v56; // si
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r9
  __int64 *v60; // rax
  const wchar_t *v61; // r11
  const wchar_t *v62; // r10
  const wchar_t *v63; // r8
  const wchar_t *v64; // rdx
  const wchar_t *v65; // rcx
  __int64 *v66; // rsi
  unsigned int v67; // eax
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r9
  __int64 v76; // [rsp+20h] [rbp-A0h]
  __int64 v77; // [rsp+20h] [rbp-A0h]
  __int64 v78; // [rsp+28h] [rbp-98h]
  __int64 v79; // [rsp+28h] [rbp-98h]
  __int64 v80; // [rsp+30h] [rbp-90h]
  int v81; // [rsp+38h] [rbp-88h]
  int v82; // [rsp+40h] [rbp-80h]
  int v83; // [rsp+48h] [rbp-78h]
  int v84; // [rsp+C0h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = Microsoft_Windows_Kernel_PnPEnableBits;
  *(_QWORD *)(v4 + 32) = a1;
  *(_DWORD *)v4 = a4;
  *(_DWORD *)(v4 + 24) = a3;
  *(_DWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 16) = 1;
  LOBYTE(a4) = a3;
  *(_QWORD *)(v4 + 88) = 0LL;
  *(_DWORD *)(v4 + 48) = 0;
  v7 = 0;
  *(_QWORD *)(v4 + 56) = 0LL;
  v8 = 0LL;
  if ( (v5 & 0x180000) != 0x180000 )
    goto LABEL_160;
  if ( !a2 )
  {
    *(_WORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0;
    *(_WORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0;
    *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
    *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = 0;
LABEL_37:
    v25 = *(_DWORD *)v4;
    if ( *(int *)v4 < 0 )
    {
      if ( v7 == -1073740959 )
      {
        if ( (v5 & 0x200000) == 0 )
          goto LABEL_137;
        v46 = a4 & 1;
        if ( !a2 || (v47 = a2 + 72, *(_DWORD *)(a2 + 108) == -1) )
          v47 = 0LL;
        v48 = a2 + 88;
        if ( a2 )
        {
          v49 = a2 + 256;
        }
        else
        {
          v48 = 0LL;
          v49 = 0LL;
        }
        v50 = (__int64 *)(a2 + 224);
        if ( !a2 )
          v50 = PiDevCfgNullGuid;
        *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v50;
        if ( a2 )
          v51 = *(const wchar_t **)(a2 + 48);
        else
          v51 = L"null";
        v52 = (const wchar_t *)&dword_140727324;
        if ( v8 )
          v52 = v8;
        if ( !v47 || (v53 = *(const wchar_t **)(v47 + 8)) == 0LL )
          v53 = (const wchar_t *)&dword_140727324;
        if ( !v48 || (v54 = *(const wchar_t **)(v48 + 8)) == 0LL )
          v54 = (const wchar_t *)&dword_140727324;
        if ( !v49 || (v55 = *(const wchar_t **)(v49 + 8)) == 0LL )
          v55 = (const wchar_t *)&dword_140727324;
        Template_zzjzzztzqzztq(
          (__int64)v55,
          &KMPnPEvt_DeviceConfig_Blocked,
          (__int64)v53,
          *(const wchar_t **)(*(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 8LL),
          v51,
          *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
          (const wchar_t *)(v4 + 144),
          (const wchar_t *)(v4 + 168),
          v55,
          *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
          v54,
          *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
          v53,
          v52,
          v46,
          *(_DWORD *)v4);
      }
      else
      {
        if ( (v5 & 0x100000) == 0 )
          goto LABEL_137;
        v56 = a4 & 1;
        if ( !a2 || (v57 = a2 + 72, *(_DWORD *)(a2 + 108) == -1) )
          v57 = 0LL;
        v58 = a2 + 88;
        if ( a2 )
        {
          v59 = a2 + 256;
        }
        else
        {
          v58 = 0LL;
          v59 = 0LL;
        }
        v60 = (__int64 *)(a2 + 224);
        if ( !a2 )
          v60 = PiDevCfgNullGuid;
        *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v60;
        if ( a2 )
          v61 = *(const wchar_t **)(a2 + 48);
        else
          v61 = L"null";
        v62 = (const wchar_t *)&dword_140727324;
        if ( v8 )
          v62 = v8;
        if ( !v57 || (v63 = *(const wchar_t **)(v57 + 8)) == 0LL )
          v63 = (const wchar_t *)&dword_140727324;
        if ( !v58 || (v64 = *(const wchar_t **)(v58 + 8)) == 0LL )
          v64 = (const wchar_t *)&dword_140727324;
        if ( !v59 || (v65 = *(const wchar_t **)(v59 + 8)) == 0LL )
          v65 = (const wchar_t *)&dword_140727324;
        Template_zzjzzztzqzztq(
          (__int64)v65,
          &KMPnPEvt_DeviceConfig_Failure,
          (__int64)v63,
          *(const wchar_t **)(*(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 8LL),
          v61,
          *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
          (const wchar_t *)(v4 + 144),
          (const wchar_t *)(v4 + 168),
          v65,
          *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
          v64,
          *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
          v63,
          v62,
          v56,
          *(_DWORD *)v4);
      }
    }
    else if ( (a4 & 2) != 0 )
    {
      if ( (v5 & 0x200000) == 0 )
        goto LABEL_137;
      v36 = a4 & 1;
      if ( !a2 || (v37 = a2 + 72, *(_DWORD *)(a2 + 108) == -1) )
        v37 = 0LL;
      v38 = a2 + 88;
      if ( a2 )
      {
        v39 = a2 + 256;
      }
      else
      {
        v38 = 0LL;
        v39 = 0LL;
      }
      v40 = (__int64 *)(a2 + 224);
      if ( !a2 )
        v40 = PiDevCfgNullGuid;
      *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v40;
      if ( a2 )
        v41 = *(const wchar_t **)(a2 + 48);
      else
        v41 = L"null";
      v42 = (const wchar_t *)&dword_140727324;
      if ( v8 )
        v42 = v8;
      if ( !v37 || (v43 = *(const wchar_t **)(v37 + 8)) == 0LL )
        v43 = (const wchar_t *)&dword_140727324;
      if ( !v38 || (v44 = *(const wchar_t **)(v38 + 8)) == 0LL )
        v44 = (const wchar_t *)&dword_140727324;
      if ( !v39 || (v45 = *(const wchar_t **)(v39 + 8)) == 0LL )
        v45 = (const wchar_t *)&dword_140727324;
      Template_zzjzzztzqzztq(
        (__int64)v45,
        &KMPnPEvt_DeviceConfig_RebootRequired,
        (__int64)v43,
        *(const wchar_t **)(*(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 8LL),
        v41,
        *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
        (const wchar_t *)(v4 + 144),
        (const wchar_t *)(v4 + 168),
        v45,
        *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
        v44,
        *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
        v43,
        v42,
        v36,
        *(_DWORD *)v4);
    }
    else
    {
      if ( (v5 & 0x80000) == 0 )
        goto LABEL_137;
      v26 = a4 & 1;
      if ( !a2 || (v27 = a2 + 72, *(_DWORD *)(a2 + 108) == -1) )
        v27 = 0LL;
      v28 = a2 + 88;
      if ( a2 )
      {
        v29 = a2 + 256;
      }
      else
      {
        v28 = 0LL;
        v29 = 0LL;
      }
      v30 = (__int64 *)(a2 + 224);
      if ( !a2 )
        v30 = PiDevCfgNullGuid;
      *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v30;
      if ( a2 )
        v31 = *(const wchar_t **)(a2 + 48);
      else
        v31 = L"null";
      v32 = (const wchar_t *)&dword_140727324;
      if ( v8 )
        v32 = v8;
      if ( !v27 || (v33 = *(const wchar_t **)(v27 + 8)) == 0LL )
        v33 = (const wchar_t *)&dword_140727324;
      if ( !v28 || (v34 = *(const wchar_t **)(v28 + 8)) == 0LL )
        v34 = (const wchar_t *)&dword_140727324;
      if ( !v29 || (v35 = *(const wchar_t **)(v29 + 8)) == 0LL )
        v35 = (const wchar_t *)&dword_140727324;
      Template_zzjzzztzqzztq(
        (__int64)v35,
        &KMPnPEvt_DeviceConfig_Success,
        (__int64)v33,
        *(const wchar_t **)(*(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 8LL),
        v31,
        *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
        (const wchar_t *)(v4 + 144),
        (const wchar_t *)(v4 + 168),
        v35,
        *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
        v34,
        *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
        v33,
        v32,
        v26,
        *(_DWORD *)v4);
    }
    v25 = *(_DWORD *)v4;
LABEL_137:
    if ( a2 )
    {
      v66 = *(__int64 **)(a2 + 192);
      if ( v66 != (__int64 *)(a2 + 192) )
      {
        v67 = *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) & 1;
        *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v67;
        do
        {
          v68 = v67;
          if ( *((_DWORD *)v66 + 93) )
            v68 = v67 | 2;
          PiDevCfgLogDeviceConfigured(
            *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
            v66,
            v68,
            v25);
          v66 = (__int64 *)*v66;
          v25 = *(_DWORD *)v4;
          v67 = *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        }
        while ( v66 != (__int64 *)(a2 + 192) );
      }
      v69 = *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      v70 = 0LL;
      if ( *(_QWORD *)(v69 + 32) )
        v70 = *(_QWORD *)(v69 + 32);
      if ( *(_QWORD *)(v69 + 48) && *(_WORD *)(v69 + 40) > 2u )
      {
        v71 = *(_QWORD *)(v69 + 48);
        v72 = -1LL;
        do
          ++v72;
        while ( *(_WORD *)(v71 + 2 * v72) );
        while ( *(_WORD *)(v71 + 2 * v72 + 2) )
        {
          v73 = -1LL;
          do
            ++v73;
          while ( *(_WORD *)(v71 + 2 * v73) );
          v74 = v71 + 2 * v73;
          v72 = -1LL;
          v71 = v74 + 2;
          do
            ++v72;
          while ( *(_WORD *)(v71 + 2 * v72) );
        }
      }
      else
      {
        v71 = 0LL;
      }
      v75 = *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
      if ( !v75 )
        v75 = *(_QWORD *)(a2 + 48);
      LOBYTE(v83) = (*(_BYTE *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) & 2) != 0;
      LOBYTE(v82) = PnpSetupInProgress != 0;
      LOBYTE(v81) = *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) != 0;
      PnpTraceDeviceConfig(
        v70,
        v71,
        *(_QWORD *)(a2 + 248),
        v75,
        *(_QWORD *)(a2 + 264),
        v4 + 144,
        v4 + 168,
        v81,
        v82,
        v83,
        *(_DWORD *)v4);
    }
    goto LABEL_160;
  }
  memset((void *)(v4 + 104), 0, 0x28uLL);
  v9 = *(void **)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = &DEVPKEY_DriverPackage_OriginalInfName;
  *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = ((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 80;
  *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 18;
  *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v11, v10, 7u, v9, v4 + 104, 1u);
  *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = ObjectProperties;
  if ( ObjectProperties < 0 )
    goto LABEL_160;
  if ( *(int *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) < 0 )
    RtlInitUnicodeString((PUNICODE_STRING)(v4 + 80), 0LL);
  if ( *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) )
    *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = RtlEqualUnicodeString(
                                                                             (PCUNICODE_STRING)(a2 + 40),
                                                                             (PCUNICODE_STRING)(v4 + 80),
                                                                             1u) != 0;
  RtlTimeToTimeFields((PLARGE_INTEGER)(a2 + 112), (PTIME_FIELDS)(v4 + 64));
  LODWORD(v78) = *(__int16 *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  LODWORD(v76) = *(__int16 *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44);
  if ( RtlStringCchPrintfW(
         (NTSTRSAFE_PWSTR)(v4 + 144),
         0xBuLL,
         L"%02d/%02d/%04d",
         (unsigned int)*(__int16 *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x42),
         v76,
         v78) < 0 )
    *(_WORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0;
  LODWORD(v79) = *(unsigned __int16 *)(a2 + 122);
  LODWORD(v77) = *(unsigned __int16 *)(a2 + 124);
  if ( RtlStringCchPrintfW(
         (NTSTRSAFE_PWSTR)(v4 + 168),
         0x18uLL,
         L"%u.%u.%u.%u",
         (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 124)),
         v77,
         v79,
         *(unsigned __int16 *)(a2 + 120)) < 0 )
    *(_WORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0;
  v13 = (_QWORD *)(a2 + 208);
  v14 = 0;
  if ( *(_DWORD *)(a2 + 108) != -1 )
    v14 = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v14;
  if ( (_QWORD *)*v13 == v13 )
  {
    v8 = 0LL;
LABEL_34:
    v7 = *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v5 = Microsoft_Windows_Kernel_PnPEnableBits;
    a4 = *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    goto LABEL_37;
  }
  v15 = (_QWORD *)*v13;
  v16 = 0;
  while ( v15 != v13 )
  {
    v17 = v15[20];
    v16 += *((unsigned __int16 *)v15 + 20) + *((unsigned __int16 *)v15 + 36) + 22;
    if ( v17 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_WORD *)(v17 + 2 * v18) );
      v16 += 2 * v18 + 2;
    }
    v15 = (_QWORD *)*v15;
  }
  v19 = v16 + 2;
  v20 = -2;
  if ( v19 <= 0xFFFE )
  {
    v20 = v19;
    *(_WORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x32) = v19;
  }
  else
  {
    *(_WORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x32) = -2;
  }
  StringRoutine = (const wchar_t *)ExpAllocateStringRoutine(v20);
  *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = StringRoutine;
  v8 = StringRoutine;
  if ( StringRoutine )
  {
    v22 = *(_OWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    *StringRoutine = 0;
    v23 = (_QWORD *)(a2 + 208);
    v24 = (_QWORD *)*v13;
    *(_OWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v22;
    if ( v24 != (_QWORD *)(a2 + 208) )
    {
      do
      {
        if ( v24 != (_QWORD *)*v23
          && RtlUnicodeStringCopyStringEx((PUNICODE_STRING)(v4 + 64), L" ", (PUNICODE_STRING)(v4 + 64), 0x800u) < 0 )
        {
          break;
        }
        LODWORD(v80) = *((_DWORD *)v24 + 27);
        if ( RtlUnicodeStringPrintfEx(
               (PUNICODE_STRING)(v4 + 64),
               (PUNICODE_STRING)(v4 + 64),
               0x800u,
               L"%wZ:%wZ:%08X",
               v24 + 5,
               v24 + 9,
               v80) < 0
          || v24[20]
          && RtlUnicodeStringPrintfEx((PUNICODE_STRING)(v4 + 64), (PUNICODE_STRING)(v4 + 64), 0x800u, L":%ws", v24[20]) < 0 )
        {
          break;
        }
        v24 = (_QWORD *)*v24;
        v23 = (_QWORD *)(a2 + 208);
      }
      while ( v24 != (_QWORD *)(a2 + 208) );
      v8 = *(const wchar_t **)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    }
    goto LABEL_34;
  }
LABEL_160:
  RtlFreeAnsiString((PUNICODE_STRING)(v4 + 80));
  RtlFreeAnsiString((PUNICODE_STRING)(v4 + 48));
}
