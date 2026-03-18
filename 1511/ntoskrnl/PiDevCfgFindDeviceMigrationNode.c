/*
 * XREFs of PiDevCfgFindDeviceMigrationNode @ 0x140608318
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140514B9C (PiDevCfgMigrateDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PnpMultiSzContainsString @ 0x14012C0F0 (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryDword @ 0x14012C1B4 (PnpValidateRegistryDword.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x140150880 (ZwEnumerateValueKey.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1401C02CC (PiDevCfgGetMigrationDeviceIdScore.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     RtlCompareUnicodeString @ 0x14043D980 (RtlCompareUnicodeString.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     _CmIsRootEnumeratedDevice @ 0x140458E9C (_CmIsRootEnumeratedDevice.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405111D8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140607C34 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140608C88 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140609340 (PiDevCfgQueryDeviceMigrationNode.c)
 */

__int64 __fastcall PiDevCfgFindDeviceMigrationNode(__int64 *a1, __int64 a2, void *a3, int a4, __int64 **a5)
{
  ULONG v5; // r13d
  int v7; // r14d
  __int64 *v8; // rsi
  NTSTATUS v9; // ebx
  ULONG v10; // r12d
  WCHAR *v11; // r15
  const UNICODE_STRING *v12; // rcx
  ULONG i; // edx
  WCHAR v14; // dx
  int v15; // eax
  __int64 ***v16; // rdi
  __int64 ***v17; // rax
  int v18; // r14d
  wchar_t **v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rdi
  __int64 *v22; // r15
  int *v23; // r12
  __int16 MigrationDeviceIdScore; // ax
  __int64 v25; // rdi
  bool v26; // cl
  bool v27; // al
  const WCHAR *v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rax
  int v31; // r12d
  void *v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  void *v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  UNICODE_STRING *v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  bool v45; // zf
  __int64 *v46; // rcx
  char v47; // r8
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 **v50; // rdi
  unsigned int *v51; // rcx
  __int64 *v52; // rcx
  __int64 **v53; // rax
  __int64 *v54; // rcx
  __int64 *v55; // rax
  int ObjectProperties; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+34h] [rbp-CCh]
  int v59; // [rsp+38h] [rbp-C8h] BYREF
  int v60; // [rsp+3Ch] [rbp-C4h]
  __int64 *v61; // [rsp+40h] [rbp-C0h] BYREF
  __int64 **v62; // [rsp+48h] [rbp-B8h]
  WCHAR *PoolWithTag; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v64; // [rsp+58h] [rbp-A8h]
  ULONG ResultLength; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v66; // [rsp+60h] [rbp-A0h]
  __int64 *v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+70h] [rbp-90h] BYREF
  __int64 v69; // [rsp+78h] [rbp-88h] BYREF
  __int64 v70; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v71; // [rsp+88h] [rbp-78h] BYREF
  int Data; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING String2; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v75; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+D0h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp-20h]
  _QWORD v78[10]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 **v79; // [rsp+140h] [rbp+40h]
  UNICODE_STRING ValueName; // [rsp+148h] [rbp+48h] BYREF
  GUID Guid; // [rsp+158h] [rbp+58h] BYREF
  char KeyInformation[20]; // [rsp+168h] [rbp+68h] BYREF
  int v83; // [rsp+17Ch] [rbp+7Ch]
  int v84; // [rsp+180h] [rbp+80h]
  int v85; // [rsp+184h] [rbp+84h]

  v5 = 0;
  v67 = a1;
  v60 = a4;
  v79 = a5;
  v70 = a2;
  v62 = &v61;
  KeyHandle = a3;
  v61 = (__int64 *)&v61;
  v7 = a4;
  v69 = 0LL;
  v58 = 0;
  v8 = 0LL;
  v59 = 0;
  v68 = 0;
  *(_DWORD *)&String2.Length = 0;
  String2.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v75.Length = 0;
  v75.Buffer = 0LL;
  *(_DWORD *)&v71.Length = 0;
  v71.Buffer = 0LL;
  v9 = NtQueryKey(a3, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
  if ( v9 < 0 )
    goto LABEL_144;
  if ( !v83 )
    goto LABEL_143;
  v10 = v85 + 2 * (v84 + 13);
  v66 = v10;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v10, 0x63647050u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_4:
    v9 = -1073741670;
    goto LABEL_144;
  }
  v12 = (const UNICODE_STRING *)a1[5];
  if ( v12 )
  {
    v9 = RtlGUIDFromString(v12, &Guid);
    if ( v9 < 0 )
      goto LABEL_144;
  }
  else
  {
    *(_QWORD *)&Guid.Data1 = 0LL;
    *(_QWORD *)Guid.Data4 = 0LL;
  }
  for ( i = 0; ; i = v5 )
  {
    v64 = v5;
    ObjectProperties = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v11, v10, &ResultLength);
    v9 = ObjectProperties;
    if ( ObjectProperties == -2147483622 )
    {
      v9 = 0;
      ObjectProperties = 0;
      goto LABEL_113;
    }
    if ( ObjectProperties != -2147483643 )
      break;
    ExFreePoolWithTag(v11, 0);
    v10 = ResultLength + 2;
    v66 = ResultLength + 2;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, ResultLength + 2, 0x63647050u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_4;
    --v5;
LABEL_20:
    ++v5;
  }
  if ( ObjectProperties < 0 )
    goto LABEL_113;
  if ( PnpValidateRegistryDword((__int64)v11) )
    v7 = *(_DWORD *)((char *)v11 + *((unsigned int *)v11 + 2));
  v11[((unsigned __int64)*((unsigned int *)v11 + 4) >> 1) + 10] = v14;
  if ( CmIsRootEnumeratedDevice(v11 + 10) )
    goto LABEL_19;
  v15 = PiDevCfgQueryDeviceMigrationNode(v67, v11 + 10, &v69);
  ObjectProperties = v15;
  v9 = v15;
  if ( v15 == -1073741772 )
  {
    v69 = 0LL;
    PiDevCfgClearDeviceMigrationNode(v67, v11 + 10);
LABEL_19:
    v7 = v60;
    goto LABEL_20;
  }
  if ( v15 < 0 )
    goto LABEL_113;
  v16 = (__int64 ***)v69;
  *(_DWORD *)(v69 + 180) = v7;
  v17 = (__int64 ***)v62;
  *v16 = &v61;
  v16[1] = (__int64 **)v17;
  if ( *v17 != &v61 )
    __fastfail(3u);
  v18 = 0;
  *v17 = (__int64 **)v16;
  v19 = (wchar_t **)(v16 + 7);
  v20 = v70 - (_QWORD)v16;
  v62 = (__int64 **)v16;
  v21 = 2LL;
  v22 = &qword_1406A1838;
  v23 = &v59;
  do
  {
    MigrationDeviceIdScore = PiDevCfgGetMigrationDeviceIdScore(*v19, *(wchar_t **)((char *)v19 + v20 - 24));
    *(_WORD *)v23 = MigrationDeviceIdScore;
    if ( MigrationDeviceIdScore != -1 )
      v18 |= *(_DWORD *)v22;
    v19 += 2;
    v23 = (int *)((char *)v23 + 2);
    v22 = (__int64 *)((char *)v22 + 4);
    --v21;
  }
  while ( v21 );
  v25 = v69;
  if ( (*(_DWORD *)(v69 + 180) & 0x10000) != 0 )
  {
    if ( (v18 & 0x10000) == 0 )
    {
LABEL_34:
      *(_DWORD *)(v69 + 16) |= 1u;
      goto LABEL_35;
    }
    v26 = (v18 & 0x11000) == 0;
    v27 = (*(_DWORD *)(v69 + 180) & 0x1000) != 0;
  }
  else
  {
    v26 = (*(_DWORD *)(v69 + 180) & 0x1000) != 0;
    v27 = (v18 & 0x1000) == 0;
  }
  if ( v26 && v27 )
    goto LABEL_34;
LABEL_35:
  v28 = *(const WCHAR **)(v25 + 144);
  v29 = v70;
  if ( v28 && *(_QWORD *)(v70 + 64) )
  {
    while ( *v28 )
    {
      if ( PnpMultiSzContainsString(*(PCWSTR *)(v29 + 64), v28) )
      {
        LOWORD(v18) = v18 | 0x200;
        *(_QWORD *)(v25 + 152) = v28;
        break;
      }
      v30 = -1LL;
      do
        ++v30;
      while ( v28[v30] );
      v28 += v30 + 1;
    }
  }
  if ( (*(_DWORD *)(v25 + 180) & 0x200) != 0 && (v18 & 0x200) == 0 )
    *(_DWORD *)(v25 + 16) |= 1u;
  v31 = v58;
  if ( *(_QWORD *)(v25 + 128) )
  {
    if ( (v58 & 0x100) == 0 )
    {
      memset(v78, 0, sizeof(v78));
      v32 = *(void **)(v29 + 16);
      v33 = *(_QWORD *)(v29 + 8);
      v78[0] = &DEVPKEY_Device_LocationInfo;
      v78[2] = &DestinationString;
      LODWORD(v78[1]) = 18;
      HIDWORD(v78[3]) = 6;
      ObjectProperties = PiDevCfgQueryObjectProperties(v34, v33, 1u, v32, (__int64)v78, 1u);
      v9 = ObjectProperties;
      if ( ObjectProperties < 0 )
        goto LABEL_112;
      if ( SLODWORD(v78[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      v31 = v58 | 0x100;
      v58 |= 0x100u;
    }
    if ( DestinationString.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v25 + 120), &DestinationString, 1u) )
      LOWORD(v18) = v18 | 0x100;
  }
  if ( (v18 & 0x300) == 0 && (*(_DWORD *)(v25 + 180) & 0x100) != 0 )
    *(_DWORD *)(v25 + 16) |= 1u;
  if ( (v31 & 0x30) == 0 )
  {
    memset(v78, 0, sizeof(v78));
    v35 = *(void **)(v29 + 16);
    v36 = *(_QWORD *)(v29 + 8);
    v78[0] = &DEVPKEY_Device_Capabilities;
    v78[2] = &v68;
    v78[5] = &DEVPKEY_Device_BusReportedDeviceDesc;
    v78[7] = &String2;
    LODWORD(v78[1]) = 7;
    LODWORD(v78[3]) = 4;
    LODWORD(v78[6]) = 18;
    HIDWORD(v78[8]) = 6;
    ObjectProperties = PiDevCfgQueryObjectProperties(v37, v36, 1u, v35, (__int64)v78, 2u);
    v9 = ObjectProperties;
    if ( ObjectProperties < 0 )
      goto LABEL_112;
    if ( SLODWORD(v78[9]) < 0 )
      RtlInitUnicodeString(&String2, 0LL);
    v31 |= 0x30u;
    v58 = v31;
  }
  if ( (((unsigned __int8)v68 ^ *(_BYTE *)(v25 + 96)) & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(v25 + 180) & 0x10) != 0 )
      *(_DWORD *)(v25 + 16) |= 1u;
  }
  else
  {
    LOWORD(v18) = v18 | 0x10;
  }
  if ( !*(_QWORD *)(v25 + 112) )
  {
    if ( String2.Buffer )
      goto LABEL_73;
    goto LABEL_72;
  }
  if ( String2.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v25 + 104), &String2, 1u) )
LABEL_72:
    LOWORD(v18) = v18 | 0x20;
LABEL_73:
  if ( (*(_BYTE *)(v25 + 180) & 0x20) != 0 && (v18 & 0x20) == 0 )
    *(_DWORD *)(v25 + 16) |= 1u;
  if ( !*(_QWORD *)(v25 + 168) )
    goto LABEL_91;
  if ( (v31 & 2) != 0 )
  {
LABEL_88:
    if ( v75.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v25 + 160), &v75, 1u) )
      LOWORD(v18) = v18 | 2;
LABEL_91:
    if ( (*(_BYTE *)(v25 + 180) & 2) != 0 && (v18 & 2) == 0 )
      *(_DWORD *)(v25 + 16) |= 1u;
    v43 = *(_QWORD *)(v25 + 80) - *(_QWORD *)&Guid.Data1;
    if ( !v43 )
      v43 = *(_QWORD *)(v25 + 88) - *(_QWORD *)Guid.Data4;
    if ( v43 )
    {
      if ( (*(_DWORD *)(v25 + 180) & 1) != 0 )
        *(_DWORD *)(v25 + 16) |= 1u;
    }
    else
    {
      LOWORD(v18) = v18 | 1;
    }
    v44 = (HIWORD(v59) | ((v59 | 0xFFFFFFFFF0000000uLL) << 16)) << 16;
    *(_QWORD *)(v25 + 184) = v44;
    if ( (v18 & 0x200) == 0 )
      *(_QWORD *)(v25 + 184) = v44 | 0xF000;
    if ( (v18 & 0x100) == 0 )
      *(_QWORD *)(v25 + 184) |= 0x100uLL;
    if ( (v18 & 0x20) == 0 )
      *(_QWORD *)(v25 + 184) |= 0x20uLL;
    if ( (v18 & 0x10) == 0 )
      *(_QWORD *)(v25 + 184) |= 0x10uLL;
    if ( (v18 & 2) == 0 )
      *(_QWORD *)(v25 + 184) |= 2uLL;
    v11 = PoolWithTag;
    v45 = (v18 & 1) == 0;
    v7 = v60;
    v10 = v66;
    v5 = v64;
    if ( v45 )
      *(_QWORD *)(v25 + 184) |= 1uLL;
    goto LABEL_20;
  }
  v38 = v67;
  v39 = v67[6];
  if ( !v39 || (v40 = *(_QWORD *)(v39 + 8)) == 0 )
  {
LABEL_87:
    v58 = v31 | 2;
    goto LABEL_88;
  }
  if ( (int)PiDevCfgGetDriverPackageId(v40, (__int64)&UnicodeString) < 0 )
  {
LABEL_84:
    v42 = &v71;
    if ( !v71.Buffer )
      v42 = (UNICODE_STRING *)v38[6];
    v75 = *v42;
    goto LABEL_87;
  }
  memset(v78, 0, sizeof(v78));
  v78[0] = &DEVPKEY_DriverPackage_OriginalInfName;
  v78[2] = &v71;
  LODWORD(v78[1]) = 18;
  HIDWORD(v78[3]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v41, (__int64)UnicodeString.Buffer, 7u, 0LL, (__int64)v78, 1u);
  v9 = ObjectProperties;
  if ( ObjectProperties >= 0 )
  {
    if ( SLODWORD(v78[4]) < 0 )
      RtlInitUnicodeString(&v71, 0LL);
    v38 = v67;
    goto LABEL_84;
  }
LABEL_112:
  v11 = PoolWithTag;
LABEL_113:
  ExFreePoolWithTag(v11, 0);
  if ( v9 < 0 )
    goto LABEL_144;
  v46 = v61;
  if ( v61 == (__int64 *)&v61 )
  {
LABEL_143:
    v9 = -1073741275;
    goto LABEL_144;
  }
  v47 = PnpSetupInProgress;
  do
  {
    v48 = v46[23];
    if ( v48 == -1LL )
      goto LABEL_125;
    if ( !v8 )
      goto LABEL_124;
    v49 = v8[23];
    if ( v49 > v48 )
      goto LABEL_124;
    if ( v49 != v48 )
      goto LABEL_125;
    if ( v47 && *((_DWORD *)v46 + 44) && !*((_DWORD *)v8 + 44) )
    {
LABEL_124:
      v8 = v46;
    }
    else
    {
      *((_DWORD *)v8 + 4) |= 2u;
      *((_DWORD *)v46 + 4) |= 2u;
    }
LABEL_125:
    v46 = (__int64 *)*v46;
  }
  while ( v46 != (__int64 *)&v61 );
  if ( !v8 )
    goto LABEL_143;
  if ( (v8[2] & 2) != 0 )
  {
    v50 = (__int64 **)v61;
    Data = 1;
    if ( v61 != (__int64 *)&v61 )
    {
      do
      {
        if ( ((_DWORD)v50[2] & 2) != 0 && v50[23] == (__int64 *)v8[23] )
        {
          *(_DWORD *)&ValueName.Length = 1310738;
          ValueName.Buffer = L"Duplicate";
          ZwSetValueKey(v50[5], &ValueName, 0, 4u, &Data, 4u);
        }
        v50 = (__int64 **)*v50;
      }
      while ( v50 != &v61 );
      v9 = ObjectProperties;
    }
  }
  else if ( IopGetRegistryValue((HANDLE)v8[5], L"Duplicate", 0, &PoolWithTag) >= 0 )
  {
    if ( PnpValidateRegistryDword((__int64)PoolWithTag) && *(unsigned int *)((char *)v51 + v51[2]) )
      *((_DWORD *)v8 + 4) |= 2u;
    ExFreePoolWithTag(v51, 0);
  }
  v52 = (__int64 *)*v8;
  v53 = (__int64 **)v8[1];
  if ( *(__int64 **)(*v8 + 8) != v8 || *v53 != v8 )
    __fastfail(3u);
  *v53 = v52;
  v52[1] = (__int64)v53;
  *v79 = v8;
LABEL_144:
  while ( 1 )
  {
    v54 = v61;
    if ( v61 == (__int64 *)&v61 )
      break;
    v55 = (__int64 *)*v61;
    if ( (__int64 **)v61[1] != &v61 || (__int64 *)v55[1] != v61 )
      __fastfail(3u);
    v61 = (__int64 *)*v61;
    v55[1] = (__int64)&v61;
    PiDevCfgFreeDeviceMigrationNode(v54);
  }
  RtlFreeAnsiString(&String2);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v71);
  return (unsigned int)v9;
}
