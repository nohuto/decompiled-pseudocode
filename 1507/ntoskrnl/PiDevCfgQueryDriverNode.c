/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x140588D38
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140588230 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpOpenObjectRegKey @ 0x14043BAF4 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 *     RtlCreateUnicodeString @ 0x1404FFE30 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     PiDevCfgFreeDriverNode @ 0x140587BE8 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405893D8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x140589650 (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     PipCheckComputerSupported @ 0x14067A164 (PipCheckComputerSupported.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(PCWSTR SourceString, PCWSTR a2, ULONG a3, int a4, char a5, __int64 *a6)
{
  wchar_t *i; // rsi
  int DriverPackageId; // ebx
  int v10; // ecx
  PVOID PoolWithTag; // rax
  __int64 v12; // rdi
  PVOID StringRoutine; // rax
  int v14; // edx
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v20; // rax
  int v21; // ecx
  char v22; // al
  NTSTATUS v23; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  char v25; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v29; // [rsp+68h] [rbp-98h] BYREF
  HANDLE v30; // [rsp+70h] [rbp-90h] BYREF
  ULONG v31; // [rsp+78h] [rbp-88h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING ValueName; // [rsp+88h] [rbp-78h] BYREF
  int v34; // [rsp+98h] [rbp-68h]
  UNICODE_STRING v35; // [rsp+A0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v37; // [rsp+E0h] [rbp-20h]
  char KeyValueInformation[24]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v39[20]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v40[28]; // [rsp+1A0h] [rbp+A0h] BYREF

  v37 = a6;
  v34 = a4;
  v27 = -16777216;
  v31 = a3;
  *(_DWORD *)&UnicodeString.Length = 0;
  i = 0LL;
  UnicodeString.Buffer = 0LL;
  Handle = 0LL;
  *(_DWORD *)&v35.Length = 0;
  v35.Buffer = 0LL;
  v25 = 0;
  KeyHandle = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  DriverPackageId = PiDevCfgGetDriverPackageId(SourceString, &UnicodeString);
  if ( DriverPackageId < 0 )
    goto LABEL_42;
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
    goto LABEL_42;
  v39[0] = &DEVPKEY_DriverPackage_TargetComputerIds;
  v39[2] = &v35;
  LODWORD(v39[1]) = 8210;
  HIDWORD(v39[3]) = 6;
  DriverPackageId = PiDevCfgQueryObjectProperties(v10, UnicodeString.Buffer, 7, (_DWORD)Handle, (__int64)v39, 1);
  if ( DriverPackageId < 0 )
    goto LABEL_42;
  if ( SLODWORD(v39[4]) >= 0 && v35.Buffer && v35.Length > 2u )
  {
    for ( i = v35.Buffer; *i; i += v20 + 1 )
    {
      if ( (unsigned __int8)PipCheckComputerSupported(i) )
        break;
      v20 = -1LL;
      do
        ++v20;
      while ( i[v20] );
    }
    if ( !*i )
      goto LABEL_60;
  }
  if ( (a5 & 8) != 0 && !i )
  {
LABEL_60:
    DriverPackageId = -1073741637;
    goto LABEL_42;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x63647050u);
  v12 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    DriverPackageId = -1073741670;
    goto LABEL_42;
  }
  memset(PoolWithTag, 0, 0x190uLL);
  *(_QWORD *)(v12 + 216) = v12 + 208;
  *(_QWORD *)(v12 + 208) = v12 + 208;
  *(_QWORD *)(v12 + 200) = v12 + 192;
  *(_QWORD *)(v12 + 192) = v12 + 192;
  *(_QWORD *)(v12 + 360) = v12 + 352;
  *(_QWORD *)(v12 + 352) = v12 + 352;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 40), SourceString) )
    goto LABEL_64;
  if ( UnicodeString.Buffer )
  {
    StringRoutine = ExpAllocateStringRoutine(UnicodeString.MaximumLength);
    *(_QWORD *)(v12 + 64) = StringRoutine;
    if ( !StringRoutine )
    {
LABEL_64:
      DriverPackageId = -1073741670;
      goto LABEL_40;
    }
    memmove(StringRoutine, UnicodeString.Buffer, UnicodeString.MaximumLength);
  }
  else
  {
    *(_QWORD *)(v12 + 64) = 0LL;
  }
  *(_WORD *)(v12 + 56) = UnicodeString.Length;
  *(_WORD *)(v12 + 58) = UnicodeString.MaximumLength;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 72), a2)
    || i && !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 128), i) )
  {
    goto LABEL_64;
  }
  memset(v39, 0, sizeof(v39));
  v39[0] = &DEVPKEY_DriverPackage_DriverDate;
  v39[2] = v12 + 112;
  LODWORD(v39[1]) = 16;
  v39[5] = &DEVPKEY_DriverPackage_DriverVersion;
  LODWORD(v39[18]) = 16;
  v39[10] = &DEVPKEY_DriverPackage_SignerScore;
  LODWORD(v39[3]) = 8;
  v39[12] = &v27;
  LODWORD(v39[13]) = 4;
  v39[15] = &DEVPKEY_DriverPackage_ExtensionId;
  LODWORD(v39[6]) = 9;
  v39[7] = v12 + 120;
  LODWORD(v39[8]) = 8;
  LODWORD(v39[11]) = 7;
  LODWORD(v39[16]) = 13;
  v39[17] = v12 + 172;
  DriverPackageId = PiDevCfgQueryObjectProperties(7, UnicodeString.Buffer, 7, (_DWORD)Handle, (__int64)v39, 4);
  if ( DriverPackageId < 0 )
    goto LABEL_40;
  if ( SLODWORD(v39[4]) < 0 )
    *(_QWORD *)(v12 + 112) = 0LL;
  if ( SLODWORD(v39[9]) < 0 )
    *(_QWORD *)(v12 + 120) = 0LL;
  v14 = v27;
  if ( SLODWORD(v39[14]) < 0 )
    v14 = -16777216;
  v27 = v14;
  if ( SLODWORD(v39[19]) < 0 )
  {
    *(_QWORD *)(v12 + 172) = 0LL;
    *(_QWORD *)(v12 + 180) = 0LL;
    v14 = v27;
  }
  if ( (a5 & 4) != 0 )
    *(_DWORD *)(v12 + 108) = -1;
  else
    *(_DWORD *)(v12 + 108) = (unsigned __int16)v31 | v34 & 0xFF0000 | v14 & ((a5 & 1) != 0 ? -268435456 : -16777216);
  if ( (a5 & 2) != 0 )
  {
    memset(v39, 0, sizeof(v39));
    v39[0] = &DEVPKEY_DriverPackage_F6;
    v39[2] = &v25;
    LODWORD(v39[1]) = 17;
    LODWORD(v39[3]) = 1;
    DriverPackageId = PiDevCfgQueryObjectProperties(v21, UnicodeString.Buffer, 7, (_DWORD)Handle, (__int64)v39, 1);
    if ( DriverPackageId < 0 )
      goto LABEL_40;
    v22 = v25;
    if ( SLODWORD(v39[4]) < 0 )
      v22 = 0;
    v25 = v22;
    if ( v22 == -1 )
      *(_DWORD *)(v12 + 168) |= 2u;
  }
  *(_DWORD *)&ValueName.Length = 1572886;
  ValueName.Buffer = L"Descriptors";
  ObjectAttributes.RootDirectory = Handle;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &ValueName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  DriverPackageId = v15;
  if ( v15 == -1073741772 )
    goto LABEL_51;
  if ( v15 < 0 )
    goto LABEL_40;
  ObjectAttributes.RootDirectory = KeyHandle;
  v29 = 0LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 72);
  v16 = ZwOpenKey(&v29, 0x20019u, &ObjectAttributes);
  DriverPackageId = v16;
  if ( v16 == -1073741772 )
  {
LABEL_51:
    DriverPackageId = 0;
  }
  else
  {
    if ( v16 < 0 )
      goto LABEL_40;
    memset(v40, 0, sizeof(v40));
    LOBYTE(ResultLength) = 1;
    v40[2] = L"Configuration";
    LODWORD(v40[4]) = 0x1000000;
    v40[3] = v12 + 88;
    LODWORD(v40[1]) = 288;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v29, (__int64)v40, 0LL, 0LL, ResultLength);
    if ( DriverPackageId < 0 )
      goto LABEL_40;
    if ( !*(_WORD *)(v12 + 88) && *(_QWORD *)(v12 + 96) )
      RtlFreeAnsiString((PUNICODE_STRING)(v12 + 88));
  }
  v17 = *(_QWORD *)(v12 + 96);
  if ( !v17 )
  {
LABEL_38:
    if ( PnpBootMode )
    {
      *(_DWORD *)&ValueName.Length = 1572886;
      ValueName.Buffer = L"ConfigFlags";
      if ( !v30
        || (v23 = ZwQueryValueKey(v30, &ValueName, KeyValueBasicInformation, KeyValueInformation, 0x10u, &v31),
            (int)(v23 + 0x80000000) >= 0)
        && v23 != -2147483643 )
      {
        *(_DWORD *)(v12 + 168) |= 4u;
      }
    }
    *(_QWORD *)(v12 + 16) = Handle;
    *(_QWORD *)(v12 + 24) = v29;
    *(_QWORD *)(v12 + 32) = v30;
    Handle = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    *v37 = v12;
    v12 = 0LL;
    goto LABEL_40;
  }
  v18 = PiDevCfgOpenDriverConfiguration(Handle, v17, &v30);
  DriverPackageId = v18;
  if ( v18 == -1073741772 )
  {
    DriverPackageId = 0;
    goto LABEL_38;
  }
  if ( v18 >= 0 )
  {
    memset(v40, 0, sizeof(v40));
    LOBYTE(ResultLength) = 1;
    v40[0] = PiDevCfgQueryDriverVersionValueCallback;
    v40[2] = L"DriverDate";
    v40[7] = PiDevCfgQueryDriverVersionValueCallback;
    v40[9] = L"DriverVersion";
    v40[3] = v12 + 112;
    v40[16] = L"ExcludeIds";
    v40[10] = v12 + 120;
    LODWORD(v40[18]) = 117440512;
    v40[17] = v12 + 144;
    LODWORD(v40[15]) = 304;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v30, (__int64)v40, 0LL, 0LL, ResultLength);
    if ( DriverPackageId >= 0 )
    {
      if ( *(_WORD *)(v12 + 144) <= 2u && *(_QWORD *)(v12 + 152) )
        RtlFreeAnsiString((PUNICODE_STRING)(v12 + 144));
      goto LABEL_38;
    }
  }
LABEL_40:
  if ( v12 )
    PiDevCfgFreeDriverNode(v12);
LABEL_42:
  if ( Handle )
    ZwClose(Handle);
  if ( v29 )
    ZwClose(v29);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v30 )
    ZwClose(v30);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v35);
  return (unsigned int)DriverPackageId;
}
