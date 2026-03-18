/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x140510B28
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140510680 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x14012C154 (PnpDuplicateUnicodeString.c)
 *     PnpRegistryValueExists @ 0x14012C890 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     _PnpOpenObjectRegKey @ 0x14043E904 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140447238 (RtlCreateUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x1405110F8 (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405111D8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgFreeDriverNode @ 0x140514E48 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 *     PipCheckComputerSupported @ 0x1405FF62C (PipCheckComputerSupported.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(PCWSTR SourceString, PCWSTR a2, int a3, int a4, char a5, _QWORD *a6)
{
  wchar_t *i; // rsi
  int DriverPackageId; // ebx
  int v10; // ecx
  char *PoolWithTag; // rax
  char *v12; // rdi
  int v13; // edx
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v19; // rax
  int v20; // ecx
  char v21; // al
  char v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v25; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v26; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v29; // [rsp+78h] [rbp-88h]
  UNICODE_STRING v30; // [rsp+80h] [rbp-80h] BYREF
  int v31; // [rsp+90h] [rbp-70h]
  UNICODE_STRING v32; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v33; // [rsp+A8h] [rbp-58h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v35[28]; // [rsp+E0h] [rbp-20h] BYREF

  v33 = a6;
  v29 = a4;
  v23 = -16777216;
  v31 = a3;
  *(_DWORD *)&UnicodeString.Length = 0;
  i = 0LL;
  UnicodeString.Buffer = 0LL;
  Handle = 0LL;
  *(_DWORD *)&v32.Length = 0;
  v32.Buffer = 0LL;
  v22 = 0;
  KeyHandle = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  DriverPackageId = PiDevCfgGetDriverPackageId(SourceString, &UnicodeString);
  if ( DriverPackageId < 0 )
    goto LABEL_40;
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
    goto LABEL_40;
  v35[0] = &DEVPKEY_DriverPackage_TargetComputerIds;
  v35[2] = &v32;
  LODWORD(v35[1]) = 8210;
  HIDWORD(v35[3]) = 6;
  DriverPackageId = PiDevCfgQueryObjectProperties(v10, UnicodeString.Buffer, 7, (_DWORD)Handle, (__int64)v35, 1);
  if ( DriverPackageId < 0 )
    goto LABEL_40;
  if ( SLODWORD(v35[4]) >= 0 && v32.Buffer && v32.Length > 2u )
  {
    for ( i = v32.Buffer; *i; i += v19 + 1 )
    {
      if ( (unsigned __int8)PipCheckComputerSupported(i) )
        break;
      v19 = -1LL;
      do
        ++v19;
      while ( i[v19] );
    }
    if ( !*i )
      goto LABEL_57;
  }
  if ( (a5 & 8) != 0 && !i )
  {
LABEL_57:
    DriverPackageId = -1073740764;
    goto LABEL_40;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x63647050u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    DriverPackageId = -1073741670;
    goto LABEL_40;
  }
  memset(PoolWithTag, 0, 0x190uLL);
  *((_QWORD *)v12 + 27) = v12 + 208;
  *((_QWORD *)v12 + 26) = v12 + 208;
  *((_QWORD *)v12 + 25) = v12 + 192;
  *((_QWORD *)v12 + 24) = v12 + 192;
  *((_QWORD *)v12 + 45) = v12 + 352;
  *((_QWORD *)v12 + 44) = v12 + 352;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 40), SourceString)
    || !PnpDuplicateUnicodeString((__int64)(v12 + 56), (__int64)&UnicodeString)
    || !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 72), a2)
    || i && !RtlCreateUnicodeString((PUNICODE_STRING)v12 + 8, i) )
  {
    DriverPackageId = -1073741670;
    goto LABEL_38;
  }
  memset(v35, 0, 0xA0uLL);
  v35[0] = &DEVPKEY_DriverPackage_DriverDate;
  v35[2] = v12 + 112;
  LODWORD(v35[1]) = 16;
  v35[5] = &DEVPKEY_DriverPackage_DriverVersion;
  LODWORD(v35[3]) = 8;
  v35[10] = &DEVPKEY_DriverPackage_SignerScore;
  LODWORD(v35[13]) = 4;
  v35[12] = &v23;
  LODWORD(v35[11]) = 7;
  v35[15] = &DEVPKEY_DriverPackage_ExtensionId;
  LODWORD(v35[6]) = 9;
  v35[7] = v12 + 120;
  LODWORD(v35[8]) = 8;
  LODWORD(v35[16]) = 13;
  v35[17] = v12 + 172;
  LODWORD(v35[18]) = 16;
  DriverPackageId = PiDevCfgQueryObjectProperties(16, UnicodeString.Buffer, 7, (_DWORD)Handle, (__int64)v35, 4);
  if ( DriverPackageId < 0 )
    goto LABEL_38;
  if ( SLODWORD(v35[4]) < 0 )
    *((_QWORD *)v12 + 14) = 0LL;
  if ( SLODWORD(v35[9]) < 0 )
    *((_QWORD *)v12 + 15) = 0LL;
  v13 = v23;
  if ( SLODWORD(v35[14]) < 0 )
    v13 = -16777216;
  v23 = v13;
  if ( SLODWORD(v35[19]) < 0 )
  {
    *(_QWORD *)(v12 + 172) = 0LL;
    *(_QWORD *)(v12 + 180) = 0LL;
    v13 = v23;
  }
  if ( (a5 & 4) != 0 )
    *((_DWORD *)v12 + 27) = -1;
  else
    *((_DWORD *)v12 + 27) = (unsigned __int16)v31 | v29 & 0xFF0000 | v13 & ((a5 & 1) != 0 ? -268435456 : -16777216);
  if ( (a5 & 2) != 0 )
  {
    memset(v35, 0, 0xA0uLL);
    v35[0] = &DEVPKEY_DriverPackage_F6;
    v35[2] = &v22;
    LODWORD(v35[1]) = 17;
    LODWORD(v35[3]) = 1;
    DriverPackageId = PiDevCfgQueryObjectProperties(v20, UnicodeString.Buffer, 7, (_DWORD)Handle, (__int64)v35, 1);
    if ( DriverPackageId < 0 )
      goto LABEL_38;
    v21 = v22;
    if ( SLODWORD(v35[4]) < 0 )
      v21 = 0;
    v22 = v21;
    if ( v21 == -1 )
      *((_DWORD *)v12 + 42) |= 2u;
  }
  *(_DWORD *)&v30.Length = 1572886;
  v30.Buffer = L"Descriptors";
  ObjectAttributes.RootDirectory = Handle;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v30;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  DriverPackageId = v14;
  if ( v14 == -1073741772 )
    goto LABEL_70;
  if ( v14 < 0 )
    goto LABEL_38;
  ObjectAttributes.RootDirectory = KeyHandle;
  v26 = 0LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 72);
  v15 = ZwOpenKey(&v26, 0x20019u, &ObjectAttributes);
  DriverPackageId = v15;
  if ( v15 == -1073741772 )
  {
LABEL_70:
    DriverPackageId = 0;
  }
  else
  {
    if ( v15 < 0 )
      goto LABEL_38;
    memset(v35, 0, sizeof(v35));
    v35[2] = L"Configuration";
    LODWORD(v35[4]) = 0x1000000;
    v35[3] = v12 + 88;
    LODWORD(v35[1]) = 288;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v26, (__int64)v35, 0LL);
    if ( DriverPackageId < 0 )
      goto LABEL_38;
    if ( !*((_WORD *)v12 + 44) && *((_QWORD *)v12 + 12) )
      RtlFreeAnsiString((PUNICODE_STRING)(v12 + 88));
  }
  v16 = *((_QWORD *)v12 + 12);
  if ( !v16 )
  {
LABEL_36:
    if ( PnpBootMode )
    {
      *(_DWORD *)&v30.Length = 1572886;
      v30.Buffer = L"ConfigFlags";
      if ( !v25 || !PnpRegistryValueExists(v25, &v30) )
        *((_DWORD *)v12 + 42) |= 4u;
    }
    *((_QWORD *)v12 + 2) = Handle;
    *((_QWORD *)v12 + 3) = v26;
    *((_QWORD *)v12 + 4) = v25;
    Handle = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    *v33 = v12;
    v12 = 0LL;
    goto LABEL_38;
  }
  v17 = PiDevCfgOpenDriverConfiguration(Handle, v16, &v25);
  DriverPackageId = v17;
  if ( v17 == -1073741772 )
  {
    DriverPackageId = 0;
    goto LABEL_36;
  }
  if ( v17 >= 0 )
  {
    memset(v35, 0, sizeof(v35));
    v35[3] = v12 + 112;
    v35[0] = PiDevCfgQueryDriverVersionValueCallback;
    v35[2] = L"DriverDate";
    v35[7] = PiDevCfgQueryDriverVersionValueCallback;
    v35[9] = L"DriverVersion";
    v35[10] = v12 + 120;
    v35[16] = L"ExcludeIds";
    LODWORD(v35[18]) = 117440512;
    v35[17] = v12 + 144;
    LODWORD(v35[15]) = 304;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v25, (__int64)v35, 0LL);
    if ( DriverPackageId >= 0 )
    {
      if ( *((_WORD *)v12 + 72) <= 2u && *((_QWORD *)v12 + 19) )
        RtlFreeAnsiString((PUNICODE_STRING)v12 + 9);
      goto LABEL_36;
    }
  }
LABEL_38:
  if ( v12 )
    PiDevCfgFreeDriverNode(v12);
LABEL_40:
  if ( Handle )
    ZwClose(Handle);
  if ( v26 )
    ZwClose(v26);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v25 )
    ZwClose(v25);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v32);
  return (unsigned int)DriverPackageId;
}
