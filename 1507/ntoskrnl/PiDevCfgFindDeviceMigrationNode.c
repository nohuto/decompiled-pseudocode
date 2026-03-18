/*
 * XREFs of PiDevCfgFindDeviceMigrationNode @ 0x14068606C
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140589F68 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     ZwEnumerateValueKey @ 0x14017F250 (ZwEnumerateValueKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     NtQueryKey @ 0x1404C1230 (NtQueryKey.c)
 *     _CmIsRootEnumeratedDevice @ 0x1404E2280 (_CmIsRootEnumeratedDevice.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405893D8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140682F40 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140686C6C (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14068822C (PiDevCfgQueryDeviceMigrationNode.c)
 */

__int64 __fastcall PiDevCfgFindDeviceMigrationNode(__int64 a1, char *a2, void *a3, int a4, __int64 **a5)
{
  ULONG v5; // r13d
  int v7; // esi
  __int64 *v8; // r14
  NTSTATUS v9; // ebx
  ULONG v10; // r12d
  WCHAR *v11; // r15
  const UNICODE_STRING *v12; // rcx
  int v13; // eax
  char v14; // r12
  __int64 ***v15; // rdi
  __int64 ***v16; // rax
  char *v17; // r14
  __int16 *v18; // r9
  signed __int64 v19; // r14
  wchar_t **v20; // rdi
  int v21; // r13d
  wchar_t *v22; // rcx
  wchar_t *v23; // rax
  int v24; // edx
  unsigned __int16 v25; // si
  const wchar_t *v26; // r15
  const wchar_t *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  wchar_t *v30; // rbx
  wchar_t *v31; // rsi
  __int16 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rax
  wchar_t *v35; // rsi
  bool v36; // zf
  __int64 v37; // rax
  wchar_t *v38; // rbx
  int v39; // eax
  __int64 *v40; // r8
  __int64 v41; // rdi
  bool v42; // cl
  bool v43; // al
  const WCHAR *v44; // rbx
  char *v45; // rsi
  const WCHAR *v46; // rsi
  __int64 v47; // rax
  int v48; // r12d
  void *v49; // r9
  __int64 v50; // rdx
  void *v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  UNICODE_STRING *v58; // rax
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  __int64 *v61; // rcx
  char v62; // r8
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 **v65; // rdi
  PVOID v66; // rcx
  __int64 *v67; // rcx
  __int64 **v68; // rax
  __int64 *v69; // rcx
  __int64 *v70; // rax
  int ObjectProperties; // [rsp+30h] [rbp-D0h]
  int v73; // [rsp+30h] [rbp-D0h]
  int v74; // [rsp+34h] [rbp-CCh]
  int v75; // [rsp+38h] [rbp-C8h] BYREF
  int v76; // [rsp+3Ch] [rbp-C4h]
  __int64 *v77; // [rsp+40h] [rbp-C0h] BYREF
  __int64 **v78; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v80; // [rsp+58h] [rbp-A8h]
  ULONG ResultLength; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v82; // [rsp+60h] [rbp-A0h]
  char *v83; // [rsp+68h] [rbp-98h]
  __int64 v84; // [rsp+70h] [rbp-90h]
  wchar_t *Str1; // [rsp+78h] [rbp-88h]
  int v86; // [rsp+80h] [rbp-80h] BYREF
  __int16 *v87; // [rsp+88h] [rbp-78h]
  __int64 v88; // [rsp+90h] [rbp-70h] BYREF
  int Data; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v90; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING UnicodeString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v92; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v93; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v94; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING v95; // [rsp+E0h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING v97; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v98[10]; // [rsp+110h] [rbp+10h] BYREF
  wchar_t *Str2; // [rsp+160h] [rbp+60h]
  UNICODE_STRING ValueName; // [rsp+168h] [rbp+68h] BYREF
  __int64 *v101; // [rsp+178h] [rbp+78h]
  __int64 **v102; // [rsp+180h] [rbp+80h]
  UNICODE_STRING String2; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+198h] [rbp+98h] BYREF
  GUID Guid; // [rsp+1A8h] [rbp+A8h] BYREF
  char KeyInformation[20]; // [rsp+1B8h] [rbp+B8h] BYREF
  int v107; // [rsp+1CCh] [rbp+CCh]
  int v108; // [rsp+1D0h] [rbp+D0h]
  int v109; // [rsp+1D4h] [rbp+D4h]

  v5 = 0;
  v84 = a1;
  v76 = a4;
  v102 = a5;
  v83 = a2;
  v78 = &v77;
  KeyHandle = a3;
  v77 = (__int64 *)&v77;
  v7 = a4;
  v88 = 0LL;
  v101 = 0LL;
  v8 = 0LL;
  v74 = 0;
  v75 = 0;
  v86 = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v93.Length = 0;
  v93.Buffer = 0LL;
  *(_DWORD *)&v95.Length = 0;
  v95.Buffer = 0LL;
  *(_DWORD *)&v97.Length = 0;
  v97.Buffer = 0LL;
  *(_DWORD *)&v92.Length = 0;
  v92.Buffer = 0LL;
  v9 = NtQueryKey(a3, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
  if ( v9 < 0 )
    goto LABEL_188;
  if ( !v107 )
    goto LABEL_187;
  v10 = v109 + 2 * (v108 + 13);
  v80 = v10;
  P = ExAllocatePoolWithTag(PagedPool, v10, 0x63647050u);
  v11 = (WCHAR *)P;
  if ( !P )
  {
LABEL_4:
    v9 = -1073741670;
    goto LABEL_188;
  }
  v12 = *(const UNICODE_STRING **)(a1 + 40);
  if ( v12 )
  {
    v9 = RtlGUIDFromString(v12, &Guid);
    if ( v9 < 0 )
      goto LABEL_188;
  }
  else
  {
    *(_QWORD *)&Guid.Data1 = 0LL;
    *(_QWORD *)Guid.Data4 = 0LL;
  }
  v82 = 0;
  ObjectProperties = ZwEnumerateValueKey(KeyHandle, 0, KeyValueFullInformation, v11, v10, &ResultLength);
  v9 = ObjectProperties;
  if ( ObjectProperties == -2147483622 )
  {
LABEL_153:
    v9 = 0;
    ObjectProperties = 0;
    goto LABEL_156;
  }
  while ( 1 )
  {
    if ( v9 == -2147483643 )
    {
      ExFreePoolWithTag(v11, 0);
      v10 = ResultLength + 2;
      v80 = ResultLength + 2;
      P = ExAllocatePoolWithTag(PagedPool, ResultLength + 2, 0x63647050u);
      v11 = (WCHAR *)P;
      if ( !P )
        goto LABEL_4;
      --v5;
      goto LABEL_150;
    }
    if ( v9 < 0 )
      goto LABEL_156;
    if ( *((_DWORD *)v11 + 1) == 4 && *((_DWORD *)v11 + 3) == 4 )
      v7 = *(_DWORD *)((char *)v11 + *((unsigned int *)v11 + 2));
    v11[((unsigned __int64)*((unsigned int *)v11 + 4) >> 1) + 10] = 0;
    if ( !CmIsRootEnumeratedDevice(v11 + 10) )
      break;
LABEL_149:
    v7 = v76;
LABEL_150:
    v82 = ++v5;
    ObjectProperties = ZwEnumerateValueKey(KeyHandle, v5, KeyValueFullInformation, v11, v10, &ResultLength);
    v9 = ObjectProperties;
    if ( ObjectProperties == -2147483622 )
      goto LABEL_153;
  }
  v13 = PiDevCfgQueryDeviceMigrationNode(v84, v11 + 10, &v88);
  ObjectProperties = v13;
  v9 = v13;
  if ( v13 == -1073741772 )
  {
    v88 = 0LL;
    PiDevCfgClearDeviceMigrationNode(v84, v11 + 10);
    goto LABEL_149;
  }
  v14 = 0;
  if ( v13 < 0 )
    goto LABEL_156;
  v15 = (__int64 ***)v88;
  *(_DWORD *)(v88 + 180) = v7;
  v16 = (__int64 ***)v78;
  *v15 = &v77;
  v15[1] = (__int64 **)v16;
  if ( *v16 != &v77 )
    __fastfail(3u);
  v17 = v83;
  v18 = (__int16 *)&v75;
  *v16 = (__int64 **)v15;
  v78 = (__int64 **)v15;
  v90 = &qword_140721A98;
  v19 = v17 - (char *)v15;
  v87 = (__int16 *)&v75;
  v20 = (wchar_t **)(v15 + 7);
  v94 = 2LL;
  v21 = 0;
  while ( 2 )
  {
    v22 = *v20;
    v23 = *(wchar_t **)((char *)v20 + v19 - 24);
    v24 = 0;
    Str2 = v23;
    Str1 = v22;
    v73 = 0;
    if ( !v22 || !v23 || (v25 = 0x4000, v26 = v23, !*v23) )
    {
LABEL_61:
      v14 = 0;
      v32 = -1;
      goto LABEL_62;
    }
    do
    {
      v27 = v22;
      if ( *v22 )
      {
        while ( wcsicmp(v27, v26) )
        {
          v28 = -1LL;
          do
            ++v28;
          while ( v27[v28] );
          v27 += v28 + 1;
          if ( !*v27 )
            goto LABEL_33;
        }
        v14 = 1;
LABEL_33:
        v24 = v73;
        v22 = Str1;
      }
      if ( !*v27 )
      {
        LOWORD(v24) = v25 | v24;
        v73 = v24;
      }
      if ( v25 > 2u )
        v25 >>= 1;
      v29 = -1LL;
      do
        ++v29;
      while ( v26[v29] );
      v26 += v29 + 1;
    }
    while ( *v26 );
    if ( !v14 )
    {
      v18 = v87;
      goto LABEL_61;
    }
    v30 = Str2;
    v31 = Str1;
    v32 = v73;
    v14 = 0;
    if ( wcsicmp(Str1, Str2) )
      v32 = v73 | 0x8000;
    v33 = -1LL;
    do
      ++v33;
    while ( v31[v33] );
    while ( 1 )
    {
      v36 = v31[v33 + 1] == 0;
      v34 = -1LL;
      if ( v36 )
        break;
      do
        ++v34;
      while ( v31[v34] );
      v35 = &v31[v34];
      v33 = -1LL;
      v31 = v35 + 1;
      do
        ++v33;
      while ( v31[v33] );
    }
    do
      ++v34;
    while ( v30[v34] );
    while ( v30[v34 + 1] )
    {
      v37 = -1LL;
      do
        ++v37;
      while ( v30[v37] );
      v38 = &v30[v37];
      v34 = -1LL;
      v30 = v38 + 1;
      do
        ++v34;
      while ( v30[v34] );
    }
    v39 = wcsicmp(v31, v30);
    v18 = v87;
    if ( v39 )
      v32 |= 1u;
LABEL_62:
    v40 = v90;
    *v18 = v32;
    if ( v32 != -1 )
      v21 |= *(_DWORD *)v40;
    ++v18;
    v20 += 2;
    v87 = v18;
    v36 = v94-- == 1;
    v90 = (__int64 *)((char *)v40 + 4);
    if ( !v36 )
      continue;
    break;
  }
  v41 = v88;
  v8 = v101;
  if ( (*(_DWORD *)(v88 + 180) & 0x10000) != 0 )
  {
    if ( (v21 & 0x10000) != 0 )
    {
      v42 = (v21 & 0x11000) == 0;
      v43 = (*(_DWORD *)(v88 + 180) & 0x1000) != 0;
      goto LABEL_69;
    }
    goto LABEL_70;
  }
  v42 = (*(_DWORD *)(v88 + 180) & 0x1000) != 0;
  v43 = (v21 & 0x1000) == 0;
LABEL_69:
  if ( v42 && v43 )
LABEL_70:
    *(_DWORD *)(v88 + 16) |= 1u;
  v44 = *(const WCHAR **)(v41 + 144);
  v45 = v83;
  if ( v44 && *((_QWORD *)v83 + 8) && *v44 )
  {
    do
    {
      v46 = (const WCHAR *)*((_QWORD *)v45 + 8);
      RtlInitUnicodeString(&DestinationString, v44);
      while ( *v46 )
      {
        RtlInitUnicodeString(&String2, v46);
        if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
        {
          v45 = v83;
          LOWORD(v21) = v21 | 0x200;
          *(_QWORD *)(v41 + 152) = v44;
          goto LABEL_83;
        }
        v46 += ((unsigned __int64)String2.Length >> 1) + 1;
      }
      v47 = -1LL;
      do
        ++v47;
      while ( v44[v47] );
      v45 = v83;
      v44 += v47 + 1;
    }
    while ( *v44 );
  }
LABEL_83:
  if ( (*(_DWORD *)(v41 + 180) & 0x200) != 0 && (v21 & 0x200) == 0 )
    *(_DWORD *)(v41 + 16) |= 1u;
  v48 = v74;
  if ( !*(_QWORD *)(v41 + 128) )
    goto LABEL_94;
  if ( (v74 & 0x100) != 0 )
    goto LABEL_91;
  memset(v98, 0, sizeof(v98));
  v49 = (void *)*((_QWORD *)v45 + 2);
  v50 = *((_QWORD *)v45 + 1);
  v98[0] = &DEVPKEY_Device_LocationInfo;
  v98[2] = &v93;
  LODWORD(v98[1]) = 18;
  HIDWORD(v98[3]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(1LL, v50, 1u, v49, (__int64)v98, 1u);
  v9 = ObjectProperties;
  if ( ObjectProperties < 0 )
    goto LABEL_155;
  if ( SLODWORD(v98[4]) < 0 )
    RtlInitUnicodeString(&v93, 0LL);
  v48 = v74 | 0x100;
  v74 |= 0x100u;
LABEL_91:
  if ( v93.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v41 + 120), &v93, 1u) )
    LOWORD(v21) = v21 | 0x100;
LABEL_94:
  if ( (v21 & 0x300) == 0 && (*(_DWORD *)(v41 + 180) & 0x100) != 0 )
    *(_DWORD *)(v41 + 16) |= 1u;
  if ( (v48 & 0x30) != 0 )
  {
LABEL_101:
    if ( (((unsigned __int8)v86 ^ *(_BYTE *)(v41 + 96)) & 0x10) != 0 )
    {
      if ( (*(_DWORD *)(v41 + 180) & 0x10) != 0 )
        *(_DWORD *)(v41 + 16) |= 1u;
    }
    else
    {
      LOWORD(v21) = v21 | 0x10;
    }
    if ( *(_QWORD *)(v41 + 112) )
    {
      if ( !UnicodeString.Buffer || RtlCompareUnicodeString((PCUNICODE_STRING)(v41 + 104), &UnicodeString, 1u) )
        goto LABEL_109;
    }
    else if ( UnicodeString.Buffer )
    {
LABEL_109:
      if ( (*(_BYTE *)(v41 + 180) & 0x20) != 0 && (v21 & 0x20) == 0 )
        *(_DWORD *)(v41 + 16) |= 1u;
      if ( *(_QWORD *)(v41 + 168) )
      {
        if ( (v48 & 2) == 0 )
        {
          v54 = v84;
          v55 = *(_QWORD *)(v84 + 48);
          if ( v55 )
          {
            v56 = *(_QWORD *)(v55 + 8);
            if ( v56 )
            {
              if ( (int)PiDevCfgGetDriverPackageId(v56, (__int64)&v95) >= 0 )
              {
                memset(v98, 0, sizeof(v98));
                v98[0] = &DEVPKEY_DriverPackage_OriginalInfName;
                v98[2] = &v92;
                LODWORD(v98[1]) = 18;
                HIDWORD(v98[3]) = 6;
                ObjectProperties = PiDevCfgQueryObjectProperties(v57, (__int64)v95.Buffer, 7u, 0LL, (__int64)v98, 1u);
                v9 = ObjectProperties;
                if ( ObjectProperties < 0 )
                {
                  v11 = (WCHAR *)P;
                  goto LABEL_156;
                }
                if ( SLODWORD(v98[4]) < 0 )
                  RtlInitUnicodeString(&v92, 0LL);
                v54 = v84;
              }
              v58 = &v92;
              if ( !v92.Buffer )
                v58 = *(UNICODE_STRING **)(v54 + 48);
              v97 = *v58;
            }
          }
          v74 = v48 | 2;
        }
        if ( v97.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v41 + 160), &v97, 1u) )
          LOWORD(v21) = v21 | 2;
      }
      if ( (*(_BYTE *)(v41 + 180) & 2) != 0 && (v21 & 2) == 0 )
        *(_DWORD *)(v41 + 16) |= 1u;
      v59 = *(_QWORD *)(v41 + 80) - *(_QWORD *)&Guid.Data1;
      if ( !v59 )
        v59 = *(_QWORD *)(v41 + 88) - *(_QWORD *)Guid.Data4;
      if ( v59 )
      {
        if ( (*(_DWORD *)(v41 + 180) & 1) != 0 )
          *(_DWORD *)(v41 + 16) |= 1u;
      }
      else
      {
        LOWORD(v21) = v21 | 1;
      }
      v60 = (HIWORD(v75) | ((v75 | 0xFFFFFFFFF0000000uLL) << 16)) << 16;
      *(_QWORD *)(v41 + 184) = v60;
      if ( (v21 & 0x200) == 0 )
        *(_QWORD *)(v41 + 184) = v60 | 0xF000;
      if ( (v21 & 0x100) == 0 )
        *(_QWORD *)(v41 + 184) |= 0x100uLL;
      if ( (v21 & 0x20) == 0 )
        *(_QWORD *)(v41 + 184) |= 0x20uLL;
      if ( (v21 & 0x10) == 0 )
        *(_QWORD *)(v41 + 184) |= 0x10uLL;
      if ( (v21 & 2) == 0 )
        *(_QWORD *)(v41 + 184) |= 2uLL;
      v11 = (WCHAR *)P;
      v36 = (v21 & 1) == 0;
      v5 = v82;
      v10 = v80;
      if ( v36 )
        *(_QWORD *)(v41 + 184) |= 1uLL;
      goto LABEL_149;
    }
    LOWORD(v21) = v21 | 0x20;
    goto LABEL_109;
  }
  memset(v98, 0, sizeof(v98));
  v51 = (void *)*((_QWORD *)v45 + 2);
  v52 = *((_QWORD *)v45 + 1);
  v98[0] = &DEVPKEY_Device_Capabilities;
  v98[2] = &v86;
  v98[5] = &DEVPKEY_Device_BusReportedDeviceDesc;
  v98[7] = &UnicodeString;
  LODWORD(v98[1]) = 7;
  LODWORD(v98[3]) = 4;
  LODWORD(v98[6]) = 18;
  HIDWORD(v98[8]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v53, v52, 1u, v51, (__int64)v98, 2u);
  v9 = ObjectProperties;
  if ( ObjectProperties >= 0 )
  {
    if ( SLODWORD(v98[9]) < 0 )
      RtlInitUnicodeString(&UnicodeString, 0LL);
    v48 |= 0x30u;
    v74 = v48;
    goto LABEL_101;
  }
LABEL_155:
  v11 = (WCHAR *)P;
LABEL_156:
  ExFreePoolWithTag(v11, 0);
  if ( v9 < 0 )
    goto LABEL_188;
  v61 = v77;
  if ( v77 == (__int64 *)&v77 )
  {
LABEL_187:
    v9 = -1073741275;
    goto LABEL_188;
  }
  v62 = PnpSetupInProgress;
  do
  {
    v63 = v61[23];
    if ( v63 == -1LL )
      goto LABEL_168;
    if ( !v8 )
      goto LABEL_167;
    v64 = v8[23];
    if ( v64 > v63 )
      goto LABEL_167;
    if ( v64 != v63 )
      goto LABEL_168;
    if ( v62 && *((_DWORD *)v61 + 44) && !*((_DWORD *)v8 + 44) )
    {
LABEL_167:
      v8 = v61;
    }
    else
    {
      *((_DWORD *)v8 + 4) |= 2u;
      *((_DWORD *)v61 + 4) |= 2u;
    }
LABEL_168:
    v61 = (__int64 *)*v61;
  }
  while ( v61 != (__int64 *)&v77 );
  v9 = ObjectProperties;
  if ( !v8 )
    goto LABEL_187;
  if ( (v8[2] & 2) != 0 )
  {
    v65 = (__int64 **)v77;
    Data = 1;
    if ( v77 != (__int64 *)&v77 )
    {
      do
      {
        if ( ((_DWORD)v65[2] & 2) != 0 && v65[23] == (__int64 *)v8[23] )
        {
          *(_DWORD *)&ValueName.Length = 1310738;
          ValueName.Buffer = L"Duplicate";
          ZwSetValueKey(v65[5], &ValueName, 0, 4u, &Data, 4u);
        }
        v65 = (__int64 **)*v65;
      }
      while ( v65 != &v77 );
    }
  }
  else if ( IopGetRegistryValue((HANDLE)v8[5], L"Duplicate", 0, &P) >= 0 )
  {
    v66 = P;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
      *((_DWORD *)v8 + 4) |= 2u;
    ExFreePoolWithTag(v66, 0);
  }
  v67 = (__int64 *)*v8;
  v68 = (__int64 **)v8[1];
  if ( *(__int64 **)(*v8 + 8) != v8 || *v68 != v8 )
    __fastfail(3u);
  *v68 = v67;
  v67[1] = (__int64)v68;
  *v102 = v8;
LABEL_188:
  while ( 1 )
  {
    v69 = v77;
    if ( v77 == (__int64 *)&v77 )
      break;
    v70 = (__int64 *)*v77;
    if ( (__int64 **)v77[1] != &v77 || (__int64 *)v70[1] != v77 )
      __fastfail(3u);
    v77 = (__int64 *)*v77;
    v70[1] = (__int64)&v77;
    PiDevCfgFreeDeviceMigrationNode(v69);
  }
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v93);
  RtlFreeAnsiString(&v95);
  RtlFreeAnsiString(&v92);
  return (unsigned int)v9;
}
