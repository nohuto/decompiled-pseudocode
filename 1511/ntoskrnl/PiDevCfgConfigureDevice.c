/*
 * XREFs of PiDevCfgConfigureDevice @ 0x140511EA0
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140511A60 (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PipIsDevNodeDNStarted @ 0x1400998AC (PipIsDevNodeDNStarted.c)
 *     PnpDuplicateUnicodeString @ 0x14012C154 (PnpDuplicateUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x140133B28 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     RtlCompareUnicodeString @ 0x14043D980 (RtlCompareUnicodeString.c)
 *     _PnpOpenObjectRegKey @ 0x14043E904 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     PnpIsNullGuid @ 0x14045E9F8 (PnpIsNullGuid.c)
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405113A0 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgSetObjectProperty @ 0x140512D8C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgBuildIndirectString @ 0x140512E14 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140513368 (PiDevCfgLogDeviceConfigured.c)
 *     PipHardwareConfigActivateService @ 0x140513D6C (PipHardwareConfigActivateService.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140513DF8 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140513ED8 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140513FDC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140514A28 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgMigrateDevice @ 0x140514B9C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140514D5C (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140515CB0 (PiDevCfgVerifyDeviceAllowed.c)
 *     _PnpCtxRegDeleteTree @ 0x140522444 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 *     PnpDeleteDeviceInterfaces @ 0x1406018BC (PnpDeleteDeviceInterfaces.c)
 *     PiDevCfgAppendMultiSz @ 0x1406076CC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140608F34 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140609F54 (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceRegKey @ 0x140693548 (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  int v8; // r13d
  __int64 v9; // r14
  __int64 v10; // r12
  int DriverConfiguration; // ebx
  __int64 v12; // r14
  int v13; // edx
  const WCHAR *v14; // rdx
  char v15; // al
  char v16; // al
  _BYTE *v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // r8
  __int64 v20; // r14
  int v21; // ebx
  char v22; // al
  wchar_t *v23; // r14
  int v24; // r9d
  int v25; // r8d
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r8
  int *v30; // r14
  __int64 *i; // r14
  int v32; // eax
  char v33; // r9
  _DWORD *v34; // r13
  __int64 v35; // rcx
  UNICODE_STRING v36; // xmm0
  __int64 v37; // r8
  __int64 v38; // rcx
  const WCHAR *v39; // r14
  const WCHAR *v40; // r14
  int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rdx
  int v45; // ecx
  int v46; // eax
  __int64 v47; // rdx
  int v48; // ecx
  char v49; // al
  _QWORD *v50; // rbx
  __int64 v51; // rcx
  int v52; // r8d
  __int64 v53; // rdx
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rax
  PGUID Guid; // [rsp+20h] [rbp-E0h]
  int v58; // [rsp+28h] [rbp-D8h]
  int v59; // [rsp+28h] [rbp-D8h]
  int v60; // [rsp+28h] [rbp-D8h]
  int v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+28h] [rbp-D8h]
  int v63; // [rsp+28h] [rbp-D8h]
  int v64; // [rsp+28h] [rbp-D8h]
  int v65; // [rsp+28h] [rbp-D8h]
  int v66; // [rsp+28h] [rbp-D8h]
  int v67; // [rsp+28h] [rbp-D8h]
  int v68; // [rsp+28h] [rbp-D8h]
  int v69; // [rsp+28h] [rbp-D8h]
  char v70; // [rsp+60h] [rbp-A0h] BYREF
  char v71; // [rsp+61h] [rbp-9Fh] BYREF
  char v72; // [rsp+62h] [rbp-9Eh]
  char v73; // [rsp+63h] [rbp-9Dh] BYREF
  int v74; // [rsp+64h] [rbp-9Ch] BYREF
  int v75; // [rsp+68h] [rbp-98h] BYREF
  int v76; // [rsp+6Ch] [rbp-94h] BYREF
  int v77; // [rsp+78h] [rbp-88h]
  int v78; // [rsp+7Ch] [rbp-84h]
  int v79; // [rsp+80h] [rbp-80h]
  _DWORD *v80; // [rsp+88h] [rbp-78h]
  UNICODE_STRING v81; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING String2; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-50h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp-48h]
  PCWSTR Buffer; // [rsp+C0h] [rbp-40h]
  int v86; // [rsp+C8h] [rbp-38h] BYREF
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  int v88; // [rsp+DCh] [rbp-24h] BYREF
  int *v89; // [rsp+E0h] [rbp-20h]
  HANDLE KeyHandle; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v91; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v93; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v94; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING v95; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING v96; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+150h] [rbp+50h] BYREF
  UNICODE_STRING v98; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING v99; // [rsp+170h] [rbp+70h] BYREF
  int v100; // [rsp+180h] [rbp+80h] BYREF
  int v101; // [rsp+184h] [rbp+84h] BYREF
  UNICODE_STRING String1; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v103; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v104; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v105; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int16 v106; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v107; // [rsp+1D0h] [rbp+D0h]
  __int64 v108; // [rsp+1D8h] [rbp+D8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 Source2; // [rsp+210h] [rbp+110h] BYREF
  __int64 v111; // [rsp+218h] [rbp+118h]
  _QWORD v112[22]; // [rsp+220h] [rbp+120h] BYREF

  v89 = a4;
  Handle = 0LL;
  *a4 = 1024;
  v80 = a5;
  KeyHandle = 0LL;
  *(_DWORD *)&v94.Length = 0;
  v8 = 1024;
  *a5 = 0;
  v9 = 0LL;
  v10 = *(_QWORD *)(a2 + 16);
  v94.Buffer = 0LL;
  *(_DWORD *)&v95.Length = 0;
  SourceString = 0LL;
  v95.Buffer = 0LL;
  *(_DWORD *)&v96.Length = 0;
  Buffer = 0LL;
  v96.Buffer = 0LL;
  *(_DWORD *)&v98.Length = 0;
  v98.Buffer = 0LL;
  *(_DWORD *)&v103.Length = 0;
  v103.Buffer = 0LL;
  *(_DWORD *)&v105.Length = 0;
  v105.Buffer = 0LL;
  *(_DWORD *)&v104.Length = 0;
  v104.Buffer = 0LL;
  v78 = 0;
  v74 = 1024;
  v75 = 0;
  v86 = 0;
  v88 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&v81.Length = 0;
  v81.Buffer = 0LL;
  *(_DWORD *)&v93.Length = 0;
  v93.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v106 = 0;
  v107 = 0LL;
  *(_DWORD *)&String1.Length = 0;
  String1.Buffer = 0LL;
  v73 = 0;
  v70 = 0;
  v71 = 0;
  P = 0LL;
  v76 = 0;
  v72 = 0;
  *(_DWORD *)&v91.Length = 0;
  v91.Buffer = 0LL;
  *(_DWORD *)&v99.Length = 68157440;
  v99.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x410uLL, 0x63647050u);
  if ( !v99.Buffer )
    goto LABEL_150;
  if ( !a3 )
    goto LABEL_31;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a3);
  if ( DriverConfiguration < 0 )
    goto LABEL_132;
  v108 = *(_QWORD *)(a3 + 248);
  if ( *(_QWORD *)(a3 + 280) )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v94, a3 + 272) )
      goto LABEL_150;
  }
  if ( *(_QWORD *)(a3 + 296) )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v95, a3 + 288) )
      goto LABEL_150;
    SourceString = v95.Buffer;
  }
  if ( !*(_QWORD *)(a3 + 312) )
    goto LABEL_8;
  if ( !PnpDuplicateUnicodeString((__int64)&v96, a3 + 304) )
  {
LABEL_150:
    DriverConfiguration = -1073741670;
LABEL_133:
    PiDevCfgLogDeviceConfigured(a1, a2, a3, *v80, DriverConfiguration);
    goto LABEL_134;
  }
  Buffer = v96.Buffer;
LABEL_8:
  if ( *(_QWORD *)(a3 + 328) && !PnpDuplicateUnicodeString((__int64)&v98, a3 + 320)
    || *(_QWORD *)(a3 + 344) && !PnpDuplicateUnicodeString((__int64)&v103, a3 + 336) )
  {
    goto LABEL_150;
  }
  v12 = *(_QWORD *)(a3 + 192);
  v13 = *(_DWORD *)(a3 + 168);
  v77 = *(_DWORD *)(a3 + 368);
  v74 = v77;
  v78 = *(_DWORD *)(a3 + 372);
  v79 = v13;
  if ( v12 != a3 + 192 )
  {
    do
    {
      v42 = PiDevCfgQueryDriverConfiguration(v12);
      DriverConfiguration = v42;
      if ( v42 >= 0 )
      {
        if ( *(_QWORD *)(v12 + 280) )
        {
          *(_DWORD *)(v12 + 168) &= ~1u;
        }
        else
        {
          if ( *(_QWORD *)(v12 + 296) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v95);
            if ( DriverConfiguration < 0 )
              goto LABEL_132;
          }
          if ( *(_QWORD *)(v12 + 312) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v96);
            if ( DriverConfiguration < 0 )
              goto LABEL_132;
          }
          if ( *(_QWORD *)(v12 + 328) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v98);
            if ( DriverConfiguration < 0 )
              goto LABEL_132;
          }
          if ( *(_QWORD *)(v12 + 344) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v103);
            if ( DriverConfiguration < 0 )
              goto LABEL_132;
          }
          v77 |= *(_DWORD *)(v12 + 368);
          v74 = v77;
          v78 |= *(_DWORD *)(v12 + 372);
          v79 |= *(_DWORD *)(v12 + 168);
          DriverConfiguration = PiDevCfgAppendMultiSz(&v105);
          if ( DriverConfiguration < 0 )
            goto LABEL_132;
          DriverConfiguration = PiDevCfgAppendMultiSz(&v104);
          if ( DriverConfiguration < 0 )
            goto LABEL_132;
        }
      }
      else
      {
        if ( v42 != -1073740653 )
          break;
        if ( !PnpBootMode )
          goto LABEL_134;
        DriverConfiguration = 0;
        v77 |= 0x400u;
        v74 = v77;
      }
      v12 = *(_QWORD *)v12;
    }
    while ( v12 != a3 + 192 );
    LOBYTE(v13) = v79;
    SourceString = v95.Buffer;
    Buffer = v96.Buffer;
  }
  if ( DriverConfiguration < 0 )
    goto LABEL_132;
  v8 = v77;
  if ( (PiDevCfgFlags & 2) != 0 )
  {
    if ( (v77 & 0x400) != 0
      && (*(_BYTE *)(a3 + 392) & 2) == 0
      && (PiDevCfgOptions & 1) == 0
      && !InitIsWinPEMode
      && !PnpBootMode )
    {
      goto LABEL_180;
    }
    if ( (v13 & 0x40) != 0 )
    {
      if ( !PnpBootMode )
        goto LABEL_180;
      v8 = v77 | 0x400;
      v74 = v77 | 0x400;
    }
  }
  memset(v112, 0, 0xA8uLL);
  LODWORD(v112[1]) = 288;
  LODWORD(v112[4]) = 0x1000000;
  v112[2] = L"Description";
  LODWORD(v112[11]) = 0x1000000;
  v14 = *(const WCHAR **)(a3 + 24);
  v112[3] = &v81;
  v112[9] = L"Manufacturer";
  LODWORD(v112[8]) = 288;
  v112[10] = &v93;
  DriverConfiguration = RtlpQueryRegistryValues(3221225472LL, v14, (__int64)v112, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_132;
  if ( !v81.Length && v81.Buffer )
    RtlFreeAnsiString(&v81);
  if ( !v93.Length && v93.Buffer )
    RtlFreeAnsiString(&v93);
  v9 = v108;
  DriverConfiguration = 0;
  if ( v108 && (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v108, 2u, 131097, 0, (__int64)&Handle, 0LL, 0) >= 0 )
  {
    memset(v112, 0, 0xA0uLL);
    LODWORD(v112[1]) = 17;
    v112[0] = &DEVPKEY_DeviceClass_Configurable;
    LODWORD(v112[6]) = 17;
    v112[2] = &v73;
    v112[5] = &DEVPKEY_DeviceClass_PolicyExempt;
    LODWORD(v112[3]) = 1;
    v112[7] = &v70;
    v112[10] = &DEVPKEY_DeviceClass_DefaultService;
    v112[12] = &DestinationString;
    v112[15] = &DEVPKEY_DeviceClass_CompatibleFeatureScores;
    v112[17] = &P;
    LODWORD(v112[8]) = 1;
    LODWORD(v112[11]) = 18;
    HIDWORD(v112[13]) = 6;
    LODWORD(v112[16]) = 4099;
    HIDWORD(v112[18]) = 2;
    DriverConfiguration = PiDevCfgQueryObjectProperties(2, v9, 2, (_DWORD)Handle, (__int64)v112, 4);
    if ( DriverConfiguration < 0 )
      goto LABEL_132;
    v15 = v73;
    DriverConfiguration = 0;
    if ( SLODWORD(v112[4]) < 0 )
      v15 = 0;
    v73 = v15;
    v16 = v70;
    if ( SLODWORD(v112[9]) < 0 )
      v16 = 0;
    v70 = v16;
    if ( SLODWORD(v112[14]) < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( SLODWORD(v112[19]) < 0 )
    {
      v17 = 0LL;
      P = 0LL;
      v18 = 0;
      goto LABEL_29;
    }
    v18 = v112[18];
  }
  else
  {
    v18 = 0;
  }
  v17 = P;
LABEL_29:
  if ( v73 || (PiDevCfgOptions & 1) != 0 || (PiDevCfgFlags & 2) == 0 )
    goto LABEL_30;
  if ( PnpBootMode )
  {
    v8 |= 0x400u;
    v74 = v8;
LABEL_30:
    if ( v17 )
    {
      v43 = 0;
      if ( !v18 )
        goto LABEL_197;
      do
      {
        if ( *v17 == *(_BYTE *)(a3 + 110) )
          break;
        ++v43;
        ++v17;
      }
      while ( v43 < v18 );
      if ( v43 >= v18 )
LABEL_197:
        DriverConfiguration = -1073740764;
      if ( DriverConfiguration < 0 )
        goto LABEL_132;
    }
LABEL_31:
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      memset(v112, 0, 0xA0uLL);
      v44 = *(_QWORD *)(a1 + 48);
      v112[0] = &DEVPKEY_Device_ClassGuid;
      v112[2] = &Source2;
      LODWORD(v112[1]) = 13;
      v112[5] = &DEVPKEY_Device_InstallFlags;
      v112[7] = &v76;
      v112[10] = &DEVPKEY_Device_DriverNodeStrongName;
      v112[12] = &v91;
      LODWORD(v112[3]) = 16;
      LODWORD(v112[6]) = 7;
      LODWORD(v112[8]) = 4;
      LODWORD(v112[11]) = 18;
      HIDWORD(v112[13]) = 6;
      DriverConfiguration = PiDevCfgQueryObjectProperties(v45, v44, 1, v10, (__int64)v112, 3);
      if ( DriverConfiguration < 0 )
        goto LABEL_132;
      if ( SLODWORD(v112[4]) >= 0 )
      {
        v72 = 1;
      }
      else
      {
        Source2 = 0LL;
        v111 = 0LL;
      }
      v46 = v76;
      if ( SLODWORD(v112[9]) < 0 )
        v46 = 0;
      v76 = v46;
      if ( SLODWORD(v112[14]) < 0 )
        RtlInitUnicodeString(&v91, 0LL);
    }
    if ( v70 )
      goto LABEL_217;
    if ( (v76 & 4) == 0 )
      goto LABEL_34;
    if ( !a3 )
      goto LABEL_215;
    memset(v112, 0, 0xA0uLL);
    v47 = *(_QWORD *)(a1 + 48);
    v112[0] = &DEVPKEY_Device_DriverInfPath;
    v112[2] = &String1;
    LODWORD(v112[1]) = 18;
    HIDWORD(v112[3]) = 6;
    DriverConfiguration = PiDevCfgQueryObjectProperties(v48, v47, 1, v10, (__int64)v112, 1);
    if ( DriverConfiguration < 0 )
      goto LABEL_132;
    if ( SLODWORD(v112[4]) < 0 )
      RtlInitUnicodeString(&String1, 0LL);
    if ( String1.Buffer && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(a3 + 40), 1u) )
    {
LABEL_215:
      v49 = -1;
      v70 = -1;
    }
    else
    {
      v49 = v70;
    }
    if ( v49 )
    {
LABEL_217:
      v20 = a1;
    }
    else
    {
LABEL_34:
      v19 = v9;
      v20 = a1;
      DriverConfiguration = PiDevCfgEnforceDevicePolicy(a1, a2, v19);
      if ( DriverConfiguration < 0 )
        goto LABEL_132;
    }
    if ( Handle )
    {
      ObjectAttributes.RootDirectory = Handle;
      String2.Buffer = L"Configuration";
      *(_DWORD *)&String2.Length = 1835034;
      KeyHandle = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &String2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DriverConfiguration = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( DriverConfiguration != -1073741772 )
      {
        if ( DriverConfiguration < 0 )
          goto LABEL_132;
        DriverConfiguration = PiDevCfgVerifyDeviceAllowed(v20, KeyHandle);
        if ( DriverConfiguration < 0 )
          goto LABEL_132;
      }
    }
    v21 = a1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 16LL) & 4) == 0
      || (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 48),
                1u,
                v10,
                0LL,
                (__int64)&DEVPKEY_Device_Reported,
                (__int64)&v101,
                (__int64)&v71,
                1,
                (__int64)&v100,
                0) >= 0
      && v101 == 17
      && v100 == 1 )
    {
      v22 = v71;
    }
    else
    {
      v22 = 0;
      v71 = 0;
    }
    v23 = v94.Buffer;
    if ( a3 && !v94.Buffer && !DestinationString.Buffer && !v22 && (*(_DWORD *)(a1 + 560) & 0x100) == 0 )
    {
      DriverConfiguration = -1073740652;
      goto LABEL_133;
    }
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      if ( !a3 )
      {
        if ( !v72 || (*(_DWORD *)(a1 + 560) & 0x100) == 0 )
          CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 17LL);
        CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 18LL);
        goto LABEL_231;
      }
      if ( !PnpIsNullGuid(&Source2) )
      {
        v50 = (_QWORD *)(a3 + 224);
        if ( !PnpIsNullGuid((void *)(a3 + 224)) )
        {
          v51 = Source2 - *v50;
          if ( Source2 == *v50 )
            v51 = v111 - *(_QWORD *)(a3 + 232);
          if ( v51 )
            CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 18LL);
        }
        v21 = a1;
      }
    }
    if ( a3 )
    {
      v24 = a3 + 40;
      goto LABEL_44;
    }
LABEL_231:
    v24 = 0;
LABEL_44:
    if ( a3 )
      v25 = a3 + 240;
    else
      v25 = 0;
    if ( (int)PiDevCfgMigrateDevice(v21, a2, v25, v24, (__int64)&v86, (__int64)&v88) >= 0 )
    {
      v8 |= v86;
      v74 = v8;
      v75 = v88;
    }
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      v52 = a3 + 224;
      if ( !a3 )
        v52 = 0;
      PiDevCfgResetDeviceDriverSettings(
        v21,
        a2,
        v52,
        (int)Handle,
        (PGUID)((unsigned __int64)&Source2 & -(__int64)(v72 != 0)));
      PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v10, L"Devices");
    }
    if ( !a3 || PnpIsNullGuid((void *)(a3 + 224)) )
    {
      if ( (*(_DWORD *)a2 & 1) == 0 )
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(a1 + 48),
          1,
          v10,
          v58,
          (__int64)&DEVPKEY_Device_ClassGuid,
          0,
          0LL,
          0);
    }
    else
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(a1 + 48),
                              1,
                              v10,
                              v58,
                              (__int64)&DEVPKEY_Device_ClassGuid,
                              13,
                              a3 + 224,
                              16);
      if ( DriverConfiguration < 0 )
        goto LABEL_132;
    }
    if ( v23 )
    {
      if ( v94.Length )
      {
        v26 = PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(a1 + 48),
                1,
                v10,
                v58,
                (__int64)&DEVPKEY_Device_Service,
                18,
                (__int64)v23,
                (unsigned int)v94.Length + 2);
        goto LABEL_55;
      }
    }
    else if ( DestinationString.Buffer && DestinationString.Length )
    {
      v26 = PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              a2,
              *(_QWORD *)(a1 + 48),
              1,
              v10,
              v58,
              (__int64)&DEVPKEY_Device_Service,
              18,
              (__int64)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2);
LABEL_55:
      v23 = 0LL;
      DriverConfiguration = v26;
      if ( v26 < 0 )
        goto LABEL_132;
LABEL_56:
      if ( SourceString )
      {
        DriverConfiguration = PiDevCfgSetObjectProperty(
                                PiPnpRtlCtx,
                                a2,
                                *(_QWORD *)(a1 + 48),
                                1,
                                v10,
                                v58,
                                (__int64)&DEVPKEY_Device_LowerFilters,
                                8210,
                                (__int64)SourceString,
                                v95.Length);
        if ( DriverConfiguration < 0 )
          goto LABEL_132;
      }
      else if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(a1 + 48),
          1,
          v10,
          v58,
          (__int64)&DEVPKEY_Device_LowerFilters,
          (_DWORD)v23,
          (__int64)v23,
          (_DWORD)v23);
      }
      if ( Buffer )
      {
        DriverConfiguration = PiDevCfgSetObjectProperty(
                                PiPnpRtlCtx,
                                a2,
                                *(_QWORD *)(a1 + 48),
                                1,
                                v10,
                                v58,
                                (__int64)&DEVPKEY_Device_UpperFilters,
                                8210,
                                (__int64)Buffer,
                                v96.Length);
        if ( DriverConfiguration < 0 )
          goto LABEL_132;
      }
      else if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(a1 + 48),
          1,
          v10,
          v58,
          (__int64)&DEVPKEY_Device_UpperFilters,
          (_DWORD)v23,
          (__int64)v23,
          (_DWORD)v23);
      }
      if ( !a3 || v81.Buffer == v23 )
      {
        if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            a2,
            *(_QWORD *)(a1 + 48),
            1,
            v10,
            v58,
            (__int64)&DEVPKEY_Device_DriverDesc,
            (_DWORD)v23,
            (__int64)v23,
            (_DWORD)v23);
          if ( a3 )
          {
LABEL_70:
            if ( v93.Buffer != v23 )
            {
              DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v93, &UnicodeString, 0LL);
              if ( DriverConfiguration < 0 )
                goto LABEL_132;
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(a1 + 48),
                                      1,
                                      v10,
                                      v58,
                                      (__int64)&DEVPKEY_Device_Manufacturer,
                                      18,
                                      (__int64)UnicodeString.Buffer,
                                      (unsigned int)UnicodeString.Length + 2);
              if ( DriverConfiguration < 0 )
                goto LABEL_132;
LABEL_73:
              if ( a3 && (v27 = *(_QWORD *)(a3 + 264)) != 0 )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        v10,
                                        v58,
                                        (__int64)&DEVPKEY_Device_DriverProvider,
                                        18,
                                        v27,
                                        (unsigned int)*(unsigned __int16 *)(a3 + 256) + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v58,
                  (__int64)&DEVPKEY_Device_DriverProvider,
                  (_DWORD)v23,
                  (__int64)v23,
                  (_DWORD)v23);
              }
              if ( a3 )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        v10,
                                        v58,
                                        (__int64)&DEVPKEY_Device_DriverDate,
                                        16,
                                        a3 + 112,
                                        8);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                v28 = *(unsigned __int16 *)(a3 + 124);
                v59 = *(unsigned __int16 *)(a3 + 120);
                LODWORD(Guid) = *(unsigned __int16 *)(a3 + 122);
                v29 = (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124));
                v99.Length = (unsigned __int16)v23;
                DriverConfiguration = RtlUnicodeStringPrintf(&v99, L"%u.%u.%u.%u", v29, v28, Guid);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        v10,
                                        v59,
                                        (__int64)&DEVPKEY_Device_DriverVersion,
                                        18,
                                        (__int64)v99.Buffer,
                                        (unsigned int)v99.Length + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        v10,
                                        v60,
                                        (__int64)&DEVPKEY_Device_DriverInfPath,
                                        18,
                                        *(_QWORD *)(a3 + 48),
                                        (unsigned int)*(unsigned __int16 *)(a3 + 40) + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        v10,
                                        v61,
                                        (__int64)&DEVPKEY_Device_DriverInfSection,
                                        18,
                                        *(_QWORD *)(a3 + 96),
                                        (unsigned int)*(unsigned __int16 *)(a3 + 88) + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(a3, &v93, &v81, &String2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
                if ( v91.Buffer != v23 && !RtlCompareUnicodeString(&v91, &String2, 1u) )
                  RtlFreeAnsiString(&v91);
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        v10,
                                        v62,
                                        (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                                        18,
                                        (__int64)String2.Buffer,
                                        (unsigned int)String2.Length + 2);
                RtlFreeAnsiString(&String2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v58,
                  (__int64)&DEVPKEY_Device_DriverDate,
                  (_DWORD)v23,
                  (__int64)v23,
                  (_DWORD)v23);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v65,
                  (__int64)&DEVPKEY_Device_DriverVersion,
                  (_DWORD)v23,
                  (__int64)v23,
                  (_DWORD)v23);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v66,
                  (__int64)&DEVPKEY_Device_DriverInfPath,
                  (_DWORD)v23,
                  (__int64)v23,
                  (_DWORD)v23);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v67,
                  (__int64)&DEVPKEY_Device_DriverInfSection,
                  (_DWORD)v23,
                  (__int64)v23,
                  (_DWORD)v23);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v68,
                  (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                  (_DWORD)v23,
                  (__int64)v23,
                  (_DWORD)v23);
              }
              if ( !v91.Buffer || (v76 & 8) != 0 || (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
              {
                if ( (*(_DWORD *)a2 & 1) == 0 )
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v58,
                    (__int64)&DEVPKEY_Device_RollbackDriverNode,
                    (_DWORD)v23,
                    (__int64)v23,
                    (_DWORD)v23);
              }
              else
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        v10,
                                        v58,
                                        (__int64)&DEVPKEY_Device_RollbackDriverNode,
                                        18,
                                        (__int64)v91.Buffer,
                                        (unsigned int)v91.Length + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              if ( v98.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        v10,
                                        v58,
                                        (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                                        8210,
                                        (__int64)v98.Buffer,
                                        v98.Length);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v58,
                  (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                  (_DWORD)v23,
                  (__int64)v23,
                  (_DWORD)v23);
              }
              if ( v103.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        v10,
                                        v58,
                                        (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                                        8210,
                                        (__int64)v103.Buffer,
                                        v103.Length);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v58,
                  (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                  (_DWORD)v23,
                  (__int64)v23,
                  (_DWORD)v23);
              }
              if ( v105.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        v10,
                                        v58,
                                        (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                                        8210,
                                        (__int64)v105.Buffer,
                                        v105.Length);
                if ( DriverConfiguration < 0 )
                  goto LABEL_132;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v58,
                  (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                  (_DWORD)v23,
                  (__int64)v23,
                  (_DWORD)v23);
              }
              if ( a3 )
              {
                if ( *(_DWORD *)(a3 + 108) != -1 )
                {
                  DriverConfiguration = PiDevCfgSetObjectProperty(
                                          PiPnpRtlCtx,
                                          a2,
                                          *(_QWORD *)(a1 + 48),
                                          1,
                                          v10,
                                          v58,
                                          (__int64)&DEVPKEY_Device_MatchingDeviceId,
                                          18,
                                          *(_QWORD *)(a3 + 80),
                                          (unsigned int)*(unsigned __int16 *)(a3 + 72) + 2);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_132;
                  v23 = 0LL;
                  DriverConfiguration = PiDevCfgSetObjectProperty(
                                          PiPnpRtlCtx,
                                          a2,
                                          *(_QWORD *)(a1 + 48),
                                          1,
                                          v10,
                                          v63,
                                          (__int64)&DEVPKEY_Device_DriverRank,
                                          7,
                                          a3 + 108,
                                          4);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_132;
LABEL_101:
                  if ( v76 != (_DWORD)v23 )
                    PiDevCfgSetObjectProperty(
                      PiPnpRtlCtx,
                      a2,
                      *(_QWORD *)(a1 + 48),
                      1,
                      v10,
                      v58,
                      (__int64)&DEVPKEY_Device_InstallFlags,
                      (_DWORD)v23,
                      (__int64)v23,
                      (_DWORD)v23);
                  v30 = v89;
                  if ( a3 )
                  {
                    *v89 = v8;
                    if ( (*(_BYTE *)(a3 + 168) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
                      *v30 = v8 | 0x400;
                    DriverConfiguration = PiDevCfgConfigureDeviceDriver(a1, a2, a3, (unsigned int)&v74, (__int64)&v75);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_132;
                    *v30 |= v74;
                    *v80 |= v75;
                    for ( i = *(__int64 **)(a3 + 192); i != (__int64 *)(a3 + 192); i = (__int64 *)*i )
                    {
                      if ( (i[21] & 1) != 0 )
                      {
                        DriverConfiguration = PiDevCfgConfigureDeviceDriver(
                                                a1,
                                                a2,
                                                (_DWORD)i,
                                                (unsigned int)&v74,
                                                (__int64)&v75);
                        if ( DriverConfiguration < 0 )
                          goto LABEL_132;
                        *v89 |= v74;
                        *v80 |= v75;
                      }
                    }
                    v32 = PiDevCfgConfigureDeviceLocation(a1, a2, &v74, &v75);
                    v33 = 0;
                    DriverConfiguration = v32;
                    if ( v32 < 0 )
                      goto LABEL_132;
                    v30 = v89;
                    v34 = v80;
                    *v89 |= v74;
                    *v34 |= v75;
                  }
                  else
                  {
                    v35 = a1;
                    if ( (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
                    {
                      v34 = v80;
                      v33 = 0;
                      *v89 = 0;
LABEL_112:
                      if ( v78 && !InitIsWinPEMode && PipIsDevNodeDNStarted(v35) || (v76 & 2) != 0 )
                        *v34 |= 2u;
                      if ( v72 != v33 )
                        *v34 |= 1u;
                      if ( KeyHandle )
                      {
                        DriverConfiguration = PiDevCfgConfigureDeviceKeys(
                                                v35,
                                                a2,
                                                (_DWORD)KeyHandle,
                                                -1,
                                                (__int64)&v74,
                                                (__int64)&v75);
                        if ( DriverConfiguration < 0 )
                          goto LABEL_132;
                        *v30 |= v74;
                        *v34 |= v75;
                      }
                      if ( a3 )
                        v36 = *(UNICODE_STRING *)(a3 + 376);
                      else
                        v36 = *(UNICODE_STRING *)PiDevCfgEmptyString;
                      v37 = *(_QWORD *)(a1 + 48);
                      String2 = v36;
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              v37,
                                              1,
                                              v10,
                                              v58,
                                              (__int64)&DEVPKEY_Device_ConfigurationId,
                                              18,
                                              (__int64)v36.Buffer,
                                              (unsigned int)v36.Length + 2);
                      if ( DriverConfiguration >= 0 )
                      {
                        if ( v104.Buffer )
                        {
                          DriverConfiguration = PiDevCfgSetObjectProperty(
                                                  PiPnpRtlCtx,
                                                  a2,
                                                  *(_QWORD *)(a1 + 48),
                                                  1,
                                                  v10,
                                                  v64,
                                                  (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                                                  8210,
                                                  (__int64)v104.Buffer,
                                                  v104.Length);
                          if ( DriverConfiguration < 0 )
                            goto LABEL_132;
                        }
                        else if ( (*(_DWORD *)a2 & 1) == 0 )
                        {
                          PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(a1 + 48),
                            1,
                            v10,
                            v64,
                            (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                            0,
                            0LL,
                            0);
                        }
                        if ( a3 && (v38 = *(_QWORD *)(a3 + 136)) != 0 )
                        {
                          DriverConfiguration = PiDevCfgSetObjectProperty(
                                                  PiPnpRtlCtx,
                                                  a2,
                                                  *(_QWORD *)(a1 + 48),
                                                  1,
                                                  v10,
                                                  v64,
                                                  (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                                                  18,
                                                  v38,
                                                  (unsigned int)*(unsigned __int16 *)(a3 + 128) + 2);
                          if ( DriverConfiguration < 0 )
                            goto LABEL_132;
                        }
                        else if ( (*(_DWORD *)a2 & 1) == 0 )
                        {
                          PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(a1 + 48),
                            1,
                            v10,
                            v64,
                            (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                            0,
                            0LL,
                            0);
                        }
                        if ( v94.Buffer && v94.Length )
                          PipHardwareConfigActivateService(v94.Buffer);
                        v39 = SourceString;
                        if ( SourceString )
                        {
                          while ( *v39 )
                          {
                            PipHardwareConfigActivateService(v39);
                            if ( !PnpBootMode && (*(_DWORD *)(a3 + 168) & 0x10) != 0 )
                              PiDevCfgMakeServiceBootStart(v39);
                            v55 = -1LL;
                            do
                              ++v55;
                            while ( v39[v55] );
                            v39 += v55 + 1;
                          }
                        }
                        v40 = Buffer;
                        if ( Buffer )
                        {
                          while ( *v40 )
                          {
                            PipHardwareConfigActivateService(v40);
                            if ( !PnpBootMode && (*(_DWORD *)(a3 + 168) & 0x10) != 0 )
                              PiDevCfgMakeServiceBootStart(v40);
                            v56 = -1LL;
                            do
                              ++v56;
                            while ( v40[v56] );
                            v40 += v56 + 1;
                          }
                        }
                      }
LABEL_132:
                      if ( ((DriverConfiguration + 1073740653) & 0xFFFFFFFD) == 0 )
                        goto LABEL_134;
                      goto LABEL_133;
                    }
                    *v89 = 64;
                    PnpDeleteDeviceInterfaces(a1 + 40);
                    v34 = v80;
                    v33 = 0;
                  }
                  v35 = a1;
                  goto LABEL_112;
                }
                v23 = 0LL;
              }
              if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v58,
                  (__int64)&DEVPKEY_Device_MatchingDeviceId,
                  (_DWORD)v23,
                  (__int64)v23,
                  (_DWORD)v23);
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v69,
                  (__int64)&DEVPKEY_Device_DriverRank,
                  (_DWORD)v23,
                  (__int64)v23,
                  (_DWORD)v23);
              }
              goto LABEL_101;
            }
LABEL_267:
            if ( (*(_DWORD *)a2 & 1) == 0 )
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(a1 + 48),
                1,
                v10,
                v58,
                (__int64)&DEVPKEY_Device_Manufacturer,
                (_DWORD)v23,
                (__int64)v23,
                (_DWORD)v23);
            goto LABEL_73;
          }
          memset(v112, 0, 0xA0uLL);
          v53 = *(_QWORD *)(a1 + 48);
          v112[0] = &DEVPKEY_Device_BusReportedDeviceDesc;
          v112[2] = &v81;
          LODWORD(v112[1]) = 18;
          HIDWORD(v112[3]) = 6;
          if ( (int)PiDevCfgQueryObjectProperties(v54, v53, 1, v10, (__int64)v112, 1) < 0
            || SLODWORD(v112[4]) < (int)v23
            || !v81.Buffer )
          {
            goto LABEL_267;
          }
          DriverConfiguration = PiDevCfgSetObjectProperty(
                                  PiPnpRtlCtx,
                                  a2,
                                  *(_QWORD *)(a1 + 48),
                                  1,
                                  v10,
                                  v58,
                                  (__int64)&DEVPKEY_Device_DeviceDesc,
                                  18,
                                  (__int64)v81.Buffer,
                                  (unsigned int)v81.Length + 2);
          if ( DriverConfiguration < 0 )
            goto LABEL_132;
        }
      }
      else
      {
        DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v81, &UnicodeString, &v106);
        if ( DriverConfiguration < 0 )
          goto LABEL_132;
        if ( (v8 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
        {
          DriverConfiguration = PiDevCfgSetObjectProperty(
                                  PiPnpRtlCtx,
                                  a2,
                                  *(_QWORD *)(a1 + 48),
                                  1,
                                  v10,
                                  v58,
                                  (__int64)&DEVPKEY_Device_DeviceDesc,
                                  18,
                                  (__int64)UnicodeString.Buffer,
                                  (unsigned int)UnicodeString.Length + 2);
          if ( DriverConfiguration < 0 )
            goto LABEL_132;
        }
        if ( v107 )
        {
          DriverConfiguration = PiDevCfgSetObjectProperty(
                                  PiPnpRtlCtx,
                                  a2,
                                  *(_QWORD *)(a1 + 48),
                                  1,
                                  v10,
                                  v58,
                                  (__int64)&DEVPKEY_Device_DriverDesc,
                                  18,
                                  v107,
                                  (unsigned int)v106 + 2);
          if ( DriverConfiguration < 0 )
            goto LABEL_132;
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            a2,
            *(_QWORD *)(a1 + 48),
            1,
            v10,
            v58,
            (__int64)&DEVPKEY_Device_DriverDesc,
            (_DWORD)v23,
            (__int64)v23,
            (_DWORD)v23);
        }
        RtlFreeAnsiString(&UnicodeString);
      }
      if ( !a3 )
        goto LABEL_267;
      goto LABEL_70;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      v23 = 0LL;
    }
    else if ( v23 && (v23 = 0LL, DestinationString.Buffer) || v71 == (_BYTE)v23 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(a1 + 48),
        1,
        v10,
        v58,
        (__int64)&DEVPKEY_Device_Service,
        (_DWORD)v23,
        (__int64)v23,
        (_DWORD)v23);
    }
    goto LABEL_56;
  }
LABEL_180:
  DriverConfiguration = -1073740651;
LABEL_134:
  RtlFreeAnsiString(&v81);
  RtlFreeAnsiString(&v93);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v94);
  RtlFreeAnsiString(&v95);
  RtlFreeAnsiString(&v96);
  RtlFreeAnsiString(&v98);
  RtlFreeAnsiString(&v103);
  RtlFreeAnsiString(&v105);
  RtlFreeAnsiString(&v104);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&String1);
  RtlFreeAnsiString(&v91);
  if ( v99.Buffer )
    ExFreePoolWithTag(v99.Buffer, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverConfiguration;
}
