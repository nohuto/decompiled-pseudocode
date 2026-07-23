/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x14063C2F0
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140637B88 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpDuplicateUnicodeString @ 0x1401CF1E4 (PnpDuplicateUnicodeString.c)
 *     PnpRegistryValueExists @ 0x1401CF2C0 (PnpRegistryValueExists.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     PipCheckComputerSupported @ 0x1406296A4 (PipCheckComputerSupported.c)
 *     PiDevCfgFreeDriverNode @ 0x140638DD0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x140639094 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x14063B0FC (PiDevCfgOpenDriverConfiguration.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(PCWSTR SourceString, PCWSTR a2, int a3, int a4, char a5, __int64 *a6)
{
  wchar_t *i; // rsi
  int DriverPackageId; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  PVOID PoolWithTag; // rax
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rcx
  char v16; // al
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  const WCHAR *v19; // rdx
  int v20; // eax
  __int64 v22; // [rsp+28h] [rbp-D8h]
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v26; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v27; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  UNICODE_STRING v32; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v33; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v34; // [rsp+A0h] [rbp-60h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v36[20]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v37[28]; // [rsp+180h] [rbp+80h] BYREF

  v34 = a6;
  v30 = a4;
  v24 = -16777216;
  v31 = a3;
  *(_DWORD *)&UnicodeString.Length = 0;
  i = 0LL;
  UnicodeString.Buffer = 0LL;
  Handle = 0LL;
  *(_DWORD *)&v33.Length = 0;
  v33.Buffer = 0LL;
  v23 = 0;
  KeyHandle = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  DriverPackageId = PiDevCfgGetDriverPackageId((__int64)SourceString, (__int64)&UnicodeString);
  if ( DriverPackageId < 0 )
    goto LABEL_66;
  DriverPackageId = PnpOpenObjectRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)UnicodeString.Buffer,
                      7u,
                      131097,
                      0,
                      (__int64)&Handle,
                      0LL,
                      0);
  if ( DriverPackageId < 0 )
    goto LABEL_66;
  v36[0] = &DEVPKEY_DriverPackage_TargetComputerIds;
  v36[2] = &v33;
  LODWORD(v36[1]) = 8210;
  HIDWORD(v36[3]) = 6;
  DriverPackageId = PiDevCfgQueryObjectProperties(v10, (__int64)UnicodeString.Buffer, 7u, Handle, (__int64)v36, 1u);
  if ( DriverPackageId < 0 )
    goto LABEL_66;
  if ( SLODWORD(v36[4]) >= 0 && v33.Buffer && v33.Length > 2u )
  {
    for ( i = v33.Buffer; *i; i += v11 + 1 )
    {
      if ( PipCheckComputerSupported(i) )
        break;
      v11 = -1LL;
      do
        ++v11;
      while ( i[v11] );
    }
    if ( !*i )
      goto LABEL_13;
  }
  if ( (a5 & 8) != 0 && !i )
  {
LABEL_13:
    DriverPackageId = -1073740764;
    goto LABEL_66;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x63647050u);
  v13 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    DriverPackageId = -1073741670;
    goto LABEL_66;
  }
  memset(PoolWithTag, 0, 0x190uLL);
  *(_QWORD *)(v13 + 216) = v13 + 208;
  *(_QWORD *)(v13 + 208) = v13 + 208;
  *(_QWORD *)(v13 + 200) = v13 + 192;
  *(_QWORD *)(v13 + 192) = v13 + 192;
  *(_QWORD *)(v13 + 360) = v13 + 352;
  *(_QWORD *)(v13 + 352) = v13 + 352;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 40), SourceString)
    || !PnpDuplicateUnicodeString(v13 + 56, (__int64)&UnicodeString)
    || !RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 72), a2)
    || i && !RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 128), i) )
  {
    DriverPackageId = -1073741670;
    goto LABEL_64;
  }
  memset(v36, 0, sizeof(v36));
  v36[0] = &DEVPKEY_DriverPackage_DriverDate;
  v36[2] = v13 + 112;
  LODWORD(v36[1]) = 16;
  v36[5] = &DEVPKEY_DriverPackage_DriverVersion;
  LODWORD(v36[3]) = 8;
  v36[10] = &DEVPKEY_DriverPackage_SignerScore;
  LODWORD(v36[13]) = 4;
  v36[12] = &v24;
  LODWORD(v36[11]) = 7;
  v36[15] = &DEVPKEY_DriverPackage_ExtensionId;
  LODWORD(v36[6]) = 9;
  v36[7] = v13 + 120;
  LODWORD(v36[8]) = 8;
  LODWORD(v36[16]) = 13;
  v36[17] = v13 + 172;
  LODWORD(v36[18]) = 16;
  DriverPackageId = PiDevCfgQueryObjectProperties(16LL, (__int64)UnicodeString.Buffer, 7u, Handle, (__int64)v36, 4u);
  if ( DriverPackageId >= 0 )
  {
    if ( SLODWORD(v36[4]) < 0 )
      *(_QWORD *)(v13 + 112) = 0LL;
    if ( SLODWORD(v36[9]) < 0 )
      *(_QWORD *)(v13 + 120) = 0LL;
    v14 = v24;
    if ( SLODWORD(v36[14]) < 0 )
      v14 = -16777216;
    v24 = v14;
    if ( SLODWORD(v36[19]) < 0 )
    {
      *(_QWORD *)(v13 + 172) = 0LL;
      *(_QWORD *)(v13 + 180) = 0LL;
      v14 = v24;
    }
    if ( (a5 & 4) != 0 )
      *(_DWORD *)(v13 + 108) = -1;
    else
      *(_DWORD *)(v13 + 108) = (unsigned __int16)v31 | v30 & 0xFF0000 | v14 & ((a5 & 1) != 0 ? -268435456 : -16777216);
    if ( (a5 & 2) != 0 )
    {
      memset(v36, 0, sizeof(v36));
      v36[0] = &DEVPKEY_DriverPackage_F6;
      v36[2] = &v23;
      LODWORD(v36[1]) = 17;
      LODWORD(v36[3]) = 1;
      DriverPackageId = PiDevCfgQueryObjectProperties(v15, (__int64)UnicodeString.Buffer, 7u, Handle, (__int64)v36, 1u);
      if ( DriverPackageId < 0 )
        goto LABEL_64;
      v16 = v23;
      if ( SLODWORD(v36[4]) < 0 )
        v16 = 0;
      v23 = v16;
      if ( v16 == -1 )
        *(_DWORD *)(v13 + 168) |= 2u;
    }
    *(_DWORD *)&v32.Length = 1572886;
    v32.Buffer = L"Descriptors";
    ObjectAttributes.RootDirectory = Handle;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &v32;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    DriverPackageId = v17;
    if ( v17 == -1073741772 )
      goto LABEL_45;
    if ( v17 < 0 )
      goto LABEL_64;
    ObjectAttributes.RootDirectory = KeyHandle;
    v26 = 0LL;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(v13 + 72);
    v18 = ZwOpenKey(&v26, 0x20019u, &ObjectAttributes);
    DriverPackageId = v18;
    if ( v18 == -1073741772 )
    {
LABEL_45:
      DriverPackageId = 0;
    }
    else
    {
      if ( v18 < 0 )
        goto LABEL_64;
      memset(v37, 0, sizeof(v37));
      LOBYTE(v22) = 1;
      v37[2] = L"Configuration";
      LODWORD(v37[4]) = 0x1000000;
      v37[3] = v13 + 88;
      LODWORD(v37[1]) = 288;
      DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v26, (__int64)v37, 0LL, 0LL, v22);
      if ( DriverPackageId < 0 )
        goto LABEL_64;
      if ( !*(_WORD *)(v13 + 88) && *(_QWORD *)(v13 + 96) )
        RtlFreeAnsiString((PUNICODE_STRING)(v13 + 88));
    }
    v19 = *(const WCHAR **)(v13 + 96);
    if ( !v19 )
      goto LABEL_59;
    v20 = PiDevCfgOpenDriverConfiguration(Handle, v19, &v27);
    DriverPackageId = v20;
    if ( v20 == -1073741772 )
    {
      DriverPackageId = 0;
LABEL_59:
      if ( PnpBootMode )
      {
        *(_DWORD *)&v32.Length = 1572886;
        v32.Buffer = L"ConfigFlags";
        if ( !v27 || !PnpRegistryValueExists(v27, &v32) )
          *(_DWORD *)(v13 + 168) |= 4u;
      }
      *(_QWORD *)(v13 + 16) = Handle;
      *(_QWORD *)(v13 + 24) = v26;
      *(_QWORD *)(v13 + 32) = v27;
      Handle = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      *v34 = v13;
      v13 = 0LL;
      goto LABEL_64;
    }
    if ( v20 >= 0 )
    {
      memset(v37, 0, sizeof(v37));
      LOBYTE(v22) = 1;
      v37[0] = PiDevCfgQueryDriverVersionValueCallback;
      v37[2] = L"DriverDate";
      v37[7] = PiDevCfgQueryDriverVersionValueCallback;
      v37[9] = L"DriverVersion";
      v37[3] = v13 + 112;
      v37[16] = L"ExcludeIds";
      v37[10] = v13 + 120;
      LODWORD(v37[18]) = 117440512;
      v37[17] = v13 + 144;
      LODWORD(v37[15]) = 304;
      DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v27, (__int64)v37, 0LL, 0LL, v22);
      if ( DriverPackageId >= 0 )
      {
        if ( *(_WORD *)(v13 + 144) <= 2u && *(_QWORD *)(v13 + 152) )
          RtlFreeAnsiString((PUNICODE_STRING)(v13 + 144));
        goto LABEL_59;
      }
    }
  }
LABEL_64:
  if ( v13 )
    PiDevCfgFreeDriverNode(v13);
LABEL_66:
  if ( Handle )
    ZwClose(Handle);
  if ( v26 )
    ZwClose(v26);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v27 )
    ZwClose(v27);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v33);
  return (unsigned int)DriverPackageId;
}
