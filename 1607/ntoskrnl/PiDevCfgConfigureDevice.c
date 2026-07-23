/*
 * XREFs of PiDevCfgConfigureDevice @ 0x1406332C8
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14063B1DC (PiDevCfgProcessDevice.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14000932C (PipIsDevNodeDNStarted.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14013C4F0 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpDuplicateUnicodeString @ 0x1401CF1E4 (PnpDuplicateUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     PnpIsNullGuid @ 0x14048C8AC (PnpIsNullGuid.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     PipHardwareConfigActivateService @ 0x140629798 (PipHardwareConfigActivateService.c)
 *     PnpDeleteDeviceInterfaces @ 0x14062B9BC (PnpDeleteDeviceInterfaces.c)
 *     PiDevCfgAppendMultiSz @ 0x140632414 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406327B8 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x140632930 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140635124 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406359A8 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140635B98 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1406373D4 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406399B4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14063A6FC (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14063BE34 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D6D0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgSetObjectProperty @ 0x1406410B0 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140641134 (PiDevCfgVerifyDeviceAllowed.c)
 *     _CmDeleteDeviceRegKey @ 0x1406D85AC (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  int v8; // r13d
  __int64 v9; // r14
  void *v10; // r12
  int DriverConfiguration; // ebx
  __int64 *v12; // r14
  int v13; // edx
  int v14; // eax
  const WCHAR *v15; // rdx
  char v16; // al
  char v17; // al
  _BYTE *v18; // rdx
  unsigned int v19; // r8d
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // r8
  __int64 v28; // r14
  NTSTATUS v29; // eax
  int v30; // ebx
  char v31; // al
  wchar_t *v32; // r14
  int v33; // r9d
  int v34; // r8d
  _QWORD *v35; // rbx
  __int64 v36; // rcx
  int v37; // r8d
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r8
  int *v44; // r14
  __int64 *i; // r14
  int v46; // eax
  char v47; // r9
  _DWORD *v48; // r13
  __int64 v49; // rcx
  UNICODE_STRING v50; // xmm0
  __int64 v51; // r8
  __int64 v52; // rcx
  const WCHAR *v53; // r14
  __int64 v54; // rax
  const WCHAR *v55; // r14
  __int64 v56; // rax
  PGUID Guid; // [rsp+20h] [rbp-E0h]
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
  int v70; // [rsp+28h] [rbp-D8h]
  char v71; // [rsp+60h] [rbp-A0h] BYREF
  char v72; // [rsp+61h] [rbp-9Fh] BYREF
  char v73; // [rsp+62h] [rbp-9Eh] BYREF
  char v74; // [rsp+63h] [rbp-9Dh]
  int v75; // [rsp+64h] [rbp-9Ch] BYREF
  int v76; // [rsp+68h] [rbp-98h] BYREF
  int v77; // [rsp+6Ch] [rbp-94h] BYREF
  int v78; // [rsp+78h] [rbp-88h]
  int v79; // [rsp+7Ch] [rbp-84h]
  int v80; // [rsp+80h] [rbp-80h]
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v82; // [rsp+98h] [rbp-68h]
  UNICODE_STRING String2; // [rsp+A0h] [rbp-60h] BYREF
  int v84; // [rsp+B4h] [rbp-4Ch] BYREF
  int v85; // [rsp+B8h] [rbp-48h] BYREF
  int *v86; // [rsp+C0h] [rbp-40h]
  PCWSTR SourceString; // [rsp+C8h] [rbp-38h]
  PCWSTR Buffer; // [rsp+D0h] [rbp-30h]
  PVOID P; // [rsp+D8h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v92; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v93; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v94; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v95; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING v96; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING v97; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+150h] [rbp+50h] BYREF
  int v99; // [rsp+160h] [rbp+60h] BYREF
  int v100; // [rsp+164h] [rbp+64h] BYREF
  UNICODE_STRING v101; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v102; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING String1; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v104; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v105; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v106; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v107; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v108; // [rsp+1D8h] [rbp+D8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 Source2; // [rsp+210h] [rbp+110h] BYREF
  __int64 v111; // [rsp+218h] [rbp+118h]
  _QWORD v112[20]; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v113[22]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v86 = a4;
  Handle = 0LL;
  *a4 = 1024;
  v82 = a5;
  KeyHandle = 0LL;
  *(_DWORD *)&v95.Length = 0;
  v8 = 1024;
  *a5 = 0;
  v9 = 0LL;
  v10 = *(void **)(a2 + 16);
  v95.Buffer = 0LL;
  *(_DWORD *)&v96.Length = 0;
  SourceString = 0LL;
  v96.Buffer = 0LL;
  *(_DWORD *)&v97.Length = 0;
  Buffer = 0LL;
  v97.Buffer = 0LL;
  *(_DWORD *)&v101.Length = 0;
  v101.Buffer = 0LL;
  *(_DWORD *)&v102.Length = 0;
  v102.Buffer = 0LL;
  *(_DWORD *)&v105.Length = 0;
  v105.Buffer = 0LL;
  *(_DWORD *)&v106.Length = 0;
  v106.Buffer = 0LL;
  v80 = 0;
  v75 = 1024;
  v76 = 0;
  v84 = 0;
  v85 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v92.Length = 0;
  v92.Buffer = 0LL;
  *(_DWORD *)&v93.Length = 0;
  v93.Buffer = 0LL;
  v107.Length = 0;
  v107.Buffer = 0LL;
  *(_DWORD *)&String1.Length = 0;
  String1.Buffer = 0LL;
  v72 = 0;
  v71 = 0;
  v73 = 0;
  P = 0LL;
  v77 = 0;
  v74 = 0;
  *(_DWORD *)&v94.Length = 0;
  v94.Buffer = 0LL;
  *(_DWORD *)&v104.Length = 68157440;
  v104.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x410uLL, 0x63647050u);
  if ( !v104.Buffer )
    goto LABEL_2;
  if ( !a3 )
    goto LABEL_78;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a3);
  if ( DriverConfiguration < 0 )
    goto LABEL_310;
  v108 = *(_QWORD *)(a3 + 248);
  if ( !*(_QWORD *)(a3 + 280) || PnpDuplicateUnicodeString((__int64)&v95, a3 + 272) )
  {
    if ( *(_QWORD *)(a3 + 296) )
    {
      if ( !PnpDuplicateUnicodeString((__int64)&v96, a3 + 288) )
        goto LABEL_2;
      SourceString = v96.Buffer;
    }
    if ( !*(_QWORD *)(a3 + 312) )
      goto LABEL_13;
    if ( PnpDuplicateUnicodeString((__int64)&v97, a3 + 304) )
    {
      Buffer = v97.Buffer;
LABEL_13:
      if ( *(_QWORD *)(a3 + 328) && !PnpDuplicateUnicodeString((__int64)&v101, a3 + 320)
        || *(_QWORD *)(a3 + 344) && !PnpDuplicateUnicodeString((__int64)&v102, a3 + 336) )
      {
        goto LABEL_2;
      }
      v12 = *(__int64 **)(a3 + 192);
      v13 = *(_DWORD *)(a3 + 168);
      v78 = *(_DWORD *)(a3 + 368);
      v75 = v78;
      v80 = *(_DWORD *)(a3 + 372);
      v79 = v13;
      if ( v12 != (__int64 *)(a3 + 192) )
      {
        do
        {
          v14 = PiDevCfgQueryDriverConfiguration(v12);
          DriverConfiguration = v14;
          if ( v14 >= 0 )
          {
            if ( v12[35] )
            {
              *((_DWORD *)v12 + 42) &= ~1u;
            }
            else
            {
              if ( v12[37] )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v96, 0LL, (const void **)v12 + 36, 0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_310;
              }
              if ( v12[39] )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v97, 0LL, (const void **)v12 + 38, 0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_310;
              }
              if ( v12[41] )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v101, 0LL, (const void **)v12 + 40, 0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_310;
              }
              if ( v12[43] )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v102, 0LL, (const void **)v12 + 42, 0);
                if ( DriverConfiguration < 0 )
                  goto LABEL_310;
              }
              v78 |= *((_DWORD *)v12 + 92);
              v75 = v78;
              v80 |= *((_DWORD *)v12 + 93);
              v79 |= *((_DWORD *)v12 + 42);
              DriverConfiguration = PiDevCfgAppendMultiSz(&v105, (const void **)v12 + 5, 0LL, 0);
              if ( DriverConfiguration < 0 )
                goto LABEL_310;
              DriverConfiguration = PiDevCfgAppendMultiSz(&v106, (const void **)v12 + 47, 0LL, 0);
              if ( DriverConfiguration < 0 )
                goto LABEL_310;
            }
          }
          else
          {
            if ( v14 != -1073740653 )
              break;
            if ( !PnpBootMode )
              goto LABEL_312;
            DriverConfiguration = 0;
            v78 |= 0x400u;
            v75 = v78;
          }
          v12 = (__int64 *)*v12;
        }
        while ( v12 != (__int64 *)(a3 + 192) );
        LOBYTE(v13) = v79;
        SourceString = v96.Buffer;
        Buffer = v97.Buffer;
      }
      if ( DriverConfiguration < 0 )
        goto LABEL_310;
      v8 = v78;
      if ( (PiDevCfgFlags & 2) != 0 )
      {
        if ( (v78 & 0x400) != 0
          && (*(_BYTE *)(a3 + 392) & 2) == 0
          && (PiDevCfgOptions & 1) == 0
          && !InitIsWinPEMode
          && !PnpBootMode )
        {
          goto LABEL_42;
        }
        if ( (v13 & 0x40) != 0 )
        {
          if ( !PnpBootMode )
            goto LABEL_42;
          v8 = v78 | 0x400;
          v75 = v78 | 0x400;
        }
      }
      memset(v113, 0, 0xA8uLL);
      LODWORD(v113[1]) = 288;
      LODWORD(v113[4]) = 0x1000000;
      v113[2] = L"Description";
      LODWORD(v113[11]) = 0x1000000;
      v15 = *(const WCHAR **)(a3 + 24);
      v113[3] = &UnicodeString;
      v113[9] = L"Manufacturer";
      LODWORD(v113[8]) = 288;
      v113[10] = &v92;
      DriverConfiguration = RtlpQueryRegistryValues(3221225472LL, v15, (__int64)v113, 0LL, 0LL, 1);
      if ( DriverConfiguration < 0 )
        goto LABEL_310;
      if ( !UnicodeString.Length && UnicodeString.Buffer )
        RtlFreeAnsiString(&UnicodeString);
      if ( !v92.Length && v92.Buffer )
        RtlFreeAnsiString(&v92);
      v9 = v108;
      DriverConfiguration = 0;
      if ( v108
        && (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v108, 2u, 131097, 0, (__int64)&Handle, 0LL, 0) >= 0 )
      {
        memset(v112, 0, sizeof(v112));
        LODWORD(v112[1]) = 17;
        v112[0] = &DEVPKEY_DeviceClass_Configurable;
        LODWORD(v112[6]) = 17;
        v112[2] = &v72;
        v112[5] = &DEVPKEY_DeviceClass_PolicyExempt;
        LODWORD(v112[3]) = 1;
        v112[7] = &v71;
        v112[10] = &DEVPKEY_DeviceClass_DefaultService;
        v112[12] = &DestinationString;
        v112[15] = &DEVPKEY_DeviceClass_CompatibleFeatureScores;
        v112[17] = &P;
        LODWORD(v112[8]) = 1;
        LODWORD(v112[11]) = 18;
        HIDWORD(v112[13]) = 6;
        LODWORD(v112[16]) = 4099;
        HIDWORD(v112[18]) = 2;
        DriverConfiguration = PiDevCfgQueryObjectProperties(2LL, v9, 2u, Handle, (__int64)v112, 4u);
        if ( DriverConfiguration < 0 )
          goto LABEL_310;
        v16 = v72;
        DriverConfiguration = 0;
        if ( SLODWORD(v112[4]) < 0 )
          v16 = 0;
        v72 = v16;
        v17 = v71;
        if ( SLODWORD(v112[9]) < 0 )
          v17 = 0;
        v71 = v17;
        if ( SLODWORD(v112[14]) < 0 )
          RtlInitUnicodeString(&DestinationString, 0LL);
        if ( SLODWORD(v112[19]) >= 0 )
        {
          v19 = v112[18];
          v18 = P;
          goto LABEL_67;
        }
        v18 = 0LL;
        P = 0LL;
      }
      else
      {
        v18 = P;
      }
      v19 = 0;
LABEL_67:
      if ( v72 || (PiDevCfgOptions & 1) != 0 || (PiDevCfgFlags & 2) == 0 )
        goto LABEL_71;
      if ( PnpBootMode )
      {
        v8 |= 0x400u;
        v75 = v8;
LABEL_71:
        if ( v18 )
        {
          v20 = 0;
          if ( !v19 )
            goto LABEL_76;
          do
          {
            if ( *v18 == *(_BYTE *)(a3 + 110) )
              break;
            ++v20;
            ++v18;
          }
          while ( v20 < v19 );
          if ( v20 >= v19 )
LABEL_76:
            DriverConfiguration = -1073740764;
          if ( DriverConfiguration < 0 )
            goto LABEL_310;
        }
LABEL_78:
        if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          memset(v112, 0, sizeof(v112));
          v21 = *(_QWORD *)(a1 + 48);
          v112[0] = &DEVPKEY_Device_ClassGuid;
          v112[2] = &Source2;
          LODWORD(v112[1]) = 13;
          v112[5] = &DEVPKEY_Device_InstallFlags;
          v112[7] = &v77;
          v112[10] = &DEVPKEY_Device_DriverNodeStrongName;
          v112[12] = &v94;
          LODWORD(v112[3]) = 16;
          LODWORD(v112[6]) = 7;
          LODWORD(v112[8]) = 4;
          LODWORD(v112[11]) = 18;
          HIDWORD(v112[13]) = 6;
          DriverConfiguration = PiDevCfgQueryObjectProperties(v22, v21, 1u, v10, (__int64)v112, 3u);
          if ( DriverConfiguration < 0 )
            goto LABEL_310;
          if ( SLODWORD(v112[4]) >= 0 )
          {
            v74 = 1;
          }
          else
          {
            Source2 = 0LL;
            v111 = 0LL;
          }
          v23 = v77;
          if ( SLODWORD(v112[9]) < 0 )
            v23 = 0;
          v77 = v23;
          if ( SLODWORD(v112[14]) < 0 )
            RtlInitUnicodeString(&v94, 0LL);
        }
        if ( v71 )
          goto LABEL_104;
        if ( (v77 & 4) == 0 )
          goto LABEL_98;
        if ( !a3 )
          goto LABEL_96;
        memset(v112, 0, sizeof(v112));
        v24 = *(_QWORD *)(a1 + 48);
        v112[0] = &DEVPKEY_Device_DriverInfPath;
        v112[2] = &String1;
        LODWORD(v112[1]) = 18;
        HIDWORD(v112[3]) = 6;
        DriverConfiguration = PiDevCfgQueryObjectProperties(v25, v24, 1u, v10, (__int64)v112, 1u);
        if ( DriverConfiguration < 0 )
          goto LABEL_310;
        if ( SLODWORD(v112[4]) < 0 )
          RtlInitUnicodeString(&String1, 0LL);
        if ( String1.Buffer && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(a3 + 40), 1u) )
        {
LABEL_96:
          v26 = -1;
          v71 = -1;
        }
        else
        {
          v26 = v71;
        }
        if ( v26 )
        {
LABEL_104:
          v28 = a1;
        }
        else
        {
LABEL_98:
          v27 = v9;
          v28 = a1;
          DriverConfiguration = PiDevCfgEnforceDevicePolicy(a1, a2, v27);
          if ( DriverConfiguration < 0 )
            goto LABEL_310;
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
          v29 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
          DriverConfiguration = v29;
          if ( v29 != -1073741772 )
          {
            if ( v29 < 0 )
              goto LABEL_310;
            DriverConfiguration = PiDevCfgVerifyDeviceAllowed(v28, KeyHandle);
            if ( DriverConfiguration < 0 )
              goto LABEL_310;
          }
        }
        v30 = a1;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 16LL) & 4) == 0
          || (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(_QWORD *)(a1 + 48),
                    1u,
                    (__int64)v10,
                    0LL,
                    (__int64)&DEVPKEY_Device_Reported,
                    (__int64)&v100,
                    (__int64)&v73,
                    1,
                    (__int64)&v99,
                    0) >= 0
          && v100 == 17
          && v99 == 1 )
        {
          v31 = v73;
        }
        else
        {
          v31 = 0;
          v73 = 0;
        }
        v32 = v95.Buffer;
        if ( a3 && !v95.Buffer && !DestinationString.Buffer && !v31 && (*(_DWORD *)(a1 + 560) & 0x100) == 0 )
        {
          DriverConfiguration = -1073740652;
          goto LABEL_311;
        }
        if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          if ( !a3 )
          {
            if ( !v74 || (*(_DWORD *)(a1 + 560) & 0x100) == 0 )
              CmDeleteDeviceRegKey(PiPnpRtlCtx, *(_QWORD *)(a1 + 48));
            CmDeleteDeviceRegKey(PiPnpRtlCtx, *(_QWORD *)(a1 + 48));
            goto LABEL_123;
          }
          if ( !PnpIsNullGuid(&Source2) )
          {
            v35 = (_QWORD *)(a3 + 224);
            if ( !PnpIsNullGuid((void *)(a3 + 224)) )
            {
              v36 = Source2 - *v35;
              if ( Source2 == *v35 )
                v36 = v111 - *(_QWORD *)(a3 + 232);
              if ( v36 )
                CmDeleteDeviceRegKey(PiPnpRtlCtx, *(_QWORD *)(a1 + 48));
            }
            v30 = a1;
          }
        }
        if ( a3 )
        {
          v33 = a3 + 40;
LABEL_124:
          if ( a3 )
            v34 = a3 + 240;
          else
            v34 = 0;
          if ( (int)PiDevCfgMigrateDevice(v30, a2, v34, v33, (__int64)&v84, (__int64)&v85) >= 0 )
          {
            v8 |= v84;
            v75 = v8;
            v76 = v85;
          }
          if ( (*(_DWORD *)a2 & 1) == 0 )
          {
            v37 = a3 + 224;
            if ( !a3 )
              v37 = 0;
            PiDevCfgResetDeviceDriverSettings(
              v30,
              a2,
              v37,
              (int)Handle,
              (PGUID)((unsigned __int64)&Source2 & -(__int64)(v74 != 0)));
            PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v10, (__int64)L"Devices");
          }
          if ( !a3 || PnpIsNullGuid((void *)(a3 + 224)) )
          {
            if ( (*(_DWORD *)a2 & 1) == 0 )
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(a1 + 48),
                1,
                (__int64)v10,
                v59,
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
                                    (__int64)v10,
                                    v59,
                                    (__int64)&DEVPKEY_Device_ClassGuid,
                                    13,
                                    a3 + 224,
                                    16);
            if ( DriverConfiguration < 0 )
              goto LABEL_310;
          }
          if ( v32 )
          {
            if ( v95.Length )
            {
              v38 = PiDevCfgSetObjectProperty(
                      PiPnpRtlCtx,
                      a2,
                      *(_QWORD *)(a1 + 48),
                      1,
                      (__int64)v10,
                      v59,
                      (__int64)&DEVPKEY_Device_Service,
                      18,
                      (__int64)v32,
                      (unsigned int)v95.Length + 2);
              goto LABEL_154;
            }
          }
          else if ( DestinationString.Buffer && DestinationString.Length )
          {
            v38 = PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    (__int64)v10,
                    v59,
                    (__int64)&DEVPKEY_Device_Service,
                    18,
                    (__int64)DestinationString.Buffer,
                    (unsigned int)DestinationString.Length + 2);
LABEL_154:
            v32 = 0LL;
            DriverConfiguration = v38;
            if ( v38 < 0 )
              goto LABEL_310;
LABEL_162:
            if ( SourceString )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(a1 + 48),
                                      1,
                                      (__int64)v10,
                                      v59,
                                      (__int64)&DEVPKEY_Device_LowerFilters,
                                      8210,
                                      (__int64)SourceString,
                                      v96.Length);
              if ( DriverConfiguration < 0 )
                goto LABEL_310;
            }
            else if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(a1 + 48),
                1,
                (__int64)v10,
                v59,
                (__int64)&DEVPKEY_Device_LowerFilters,
                (_DWORD)v32,
                (__int64)v32,
                (_DWORD)v32);
            }
            if ( Buffer )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(a1 + 48),
                                      1,
                                      (__int64)v10,
                                      v59,
                                      (__int64)&DEVPKEY_Device_UpperFilters,
                                      8210,
                                      (__int64)Buffer,
                                      v97.Length);
              if ( DriverConfiguration < 0 )
                goto LABEL_310;
            }
            else if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(a1 + 48),
                1,
                (__int64)v10,
                v59,
                (__int64)&DEVPKEY_Device_UpperFilters,
                (_DWORD)v32,
                (__int64)v32,
                (_DWORD)v32);
            }
            if ( !a3 || UnicodeString.Buffer == v32 )
            {
              if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  (__int64)v10,
                  v59,
                  (__int64)&DEVPKEY_Device_DriverDesc,
                  (_DWORD)v32,
                  (__int64)v32,
                  (_DWORD)v32);
                if ( a3 )
                {
LABEL_190:
                  if ( v92.Buffer != v32 )
                  {
                    DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v92.Length, (__int64)&v93, 0LL);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_310;
                    DriverConfiguration = PiDevCfgSetObjectProperty(
                                            PiPnpRtlCtx,
                                            a2,
                                            *(_QWORD *)(a1 + 48),
                                            1,
                                            (__int64)v10,
                                            v59,
                                            (__int64)&DEVPKEY_Device_Manufacturer,
                                            18,
                                            (__int64)v93.Buffer,
                                            (unsigned int)v93.Length + 2);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_310;
LABEL_196:
                    if ( a3 && (v41 = *(_QWORD *)(a3 + 264)) != 0 )
                    {
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              *(_QWORD *)(a1 + 48),
                                              1,
                                              (__int64)v10,
                                              v59,
                                              (__int64)&DEVPKEY_Device_DriverProvider,
                                              18,
                                              v41,
                                              (unsigned int)*(unsigned __int16 *)(a3 + 256) + 2);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_310;
                    }
                    else if ( (*(_DWORD *)a2 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(a1 + 48),
                        1,
                        (__int64)v10,
                        v59,
                        (__int64)&DEVPKEY_Device_DriverProvider,
                        (_DWORD)v32,
                        (__int64)v32,
                        (_DWORD)v32);
                    }
                    if ( a3 )
                    {
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              *(_QWORD *)(a1 + 48),
                                              1,
                                              (__int64)v10,
                                              v59,
                                              (__int64)&DEVPKEY_Device_DriverDate,
                                              16,
                                              a3 + 112,
                                              8);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_310;
                      v42 = *(unsigned __int16 *)(a3 + 124);
                      v60 = *(unsigned __int16 *)(a3 + 120);
                      LODWORD(Guid) = *(unsigned __int16 *)(a3 + 122);
                      v43 = (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124));
                      v104.Length = (unsigned __int16)v32;
                      DriverConfiguration = RtlUnicodeStringPrintf(&v104, L"%u.%u.%u.%u", v43, v42, Guid);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_310;
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              *(_QWORD *)(a1 + 48),
                                              1,
                                              (__int64)v10,
                                              v60,
                                              (__int64)&DEVPKEY_Device_DriverVersion,
                                              18,
                                              (__int64)v104.Buffer,
                                              (unsigned int)v104.Length + 2);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_310;
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              *(_QWORD *)(a1 + 48),
                                              1,
                                              (__int64)v10,
                                              v61,
                                              (__int64)&DEVPKEY_Device_DriverInfPath,
                                              18,
                                              *(_QWORD *)(a3 + 48),
                                              (unsigned int)*(unsigned __int16 *)(a3 + 40) + 2);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_310;
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              *(_QWORD *)(a1 + 48),
                                              1,
                                              (__int64)v10,
                                              v62,
                                              (__int64)&DEVPKEY_Device_DriverInfSection,
                                              18,
                                              *(_QWORD *)(a3 + 96),
                                              (unsigned int)*(unsigned __int16 *)(a3 + 88) + 2);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_310;
                      DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(a3, &v92, &UnicodeString, &String2);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_310;
                      if ( v94.Buffer != v32 && !RtlCompareUnicodeString(&v94, &String2, 1u) )
                        RtlFreeAnsiString(&v94);
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              *(_QWORD *)(a1 + 48),
                                              1,
                                              (__int64)v10,
                                              v63,
                                              (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                                              18,
                                              (__int64)String2.Buffer,
                                              (unsigned int)String2.Length + 2);
                      RtlFreeAnsiString(&String2);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_310;
                    }
                    else if ( (*(_DWORD *)a2 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(a1 + 48),
                        1,
                        (__int64)v10,
                        v59,
                        (__int64)&DEVPKEY_Device_DriverDate,
                        (_DWORD)v32,
                        (__int64)v32,
                        (_DWORD)v32);
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(a1 + 48),
                        1,
                        (__int64)v10,
                        v64,
                        (__int64)&DEVPKEY_Device_DriverVersion,
                        (_DWORD)v32,
                        (__int64)v32,
                        (_DWORD)v32);
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(a1 + 48),
                        1,
                        (__int64)v10,
                        v65,
                        (__int64)&DEVPKEY_Device_DriverInfPath,
                        (_DWORD)v32,
                        (__int64)v32,
                        (_DWORD)v32);
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(a1 + 48),
                        1,
                        (__int64)v10,
                        v66,
                        (__int64)&DEVPKEY_Device_DriverInfSection,
                        (_DWORD)v32,
                        (__int64)v32,
                        (_DWORD)v32);
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(a1 + 48),
                        1,
                        (__int64)v10,
                        v67,
                        (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                        (_DWORD)v32,
                        (__int64)v32,
                        (_DWORD)v32);
                    }
                    if ( !v94.Buffer || (v77 & 8) != 0 || (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
                    {
                      if ( (*(_DWORD *)a2 & 1) == 0 )
                        PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(a1 + 48),
                          1,
                          (__int64)v10,
                          v59,
                          (__int64)&DEVPKEY_Device_RollbackDriverNode,
                          (_DWORD)v32,
                          (__int64)v32,
                          (_DWORD)v32);
                    }
                    else
                    {
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              *(_QWORD *)(a1 + 48),
                                              1,
                                              (__int64)v10,
                                              v59,
                                              (__int64)&DEVPKEY_Device_RollbackDriverNode,
                                              18,
                                              (__int64)v94.Buffer,
                                              (unsigned int)v94.Length + 2);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_310;
                    }
                    if ( v101.Buffer )
                    {
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              *(_QWORD *)(a1 + 48),
                                              1,
                                              (__int64)v10,
                                              v59,
                                              (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                                              8210,
                                              (__int64)v101.Buffer,
                                              v101.Length);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_310;
                    }
                    else if ( (*(_DWORD *)a2 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(a1 + 48),
                        1,
                        (__int64)v10,
                        v59,
                        (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                        (_DWORD)v32,
                        (__int64)v32,
                        (_DWORD)v32);
                    }
                    if ( v102.Buffer )
                    {
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              *(_QWORD *)(a1 + 48),
                                              1,
                                              (__int64)v10,
                                              v59,
                                              (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                                              8210,
                                              (__int64)v102.Buffer,
                                              v102.Length);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_310;
                    }
                    else if ( (*(_DWORD *)a2 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(a1 + 48),
                        1,
                        (__int64)v10,
                        v59,
                        (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                        (_DWORD)v32,
                        (__int64)v32,
                        (_DWORD)v32);
                    }
                    if ( v105.Buffer )
                    {
                      DriverConfiguration = PiDevCfgSetObjectProperty(
                                              PiPnpRtlCtx,
                                              a2,
                                              *(_QWORD *)(a1 + 48),
                                              1,
                                              (__int64)v10,
                                              v59,
                                              (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                                              8210,
                                              (__int64)v105.Buffer,
                                              v105.Length);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_310;
                    }
                    else if ( (*(_DWORD *)a2 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(a1 + 48),
                        1,
                        (__int64)v10,
                        v59,
                        (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                        (_DWORD)v32,
                        (__int64)v32,
                        (_DWORD)v32);
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
                                                (__int64)v10,
                                                v59,
                                                (__int64)&DEVPKEY_Device_MatchingDeviceId,
                                                18,
                                                *(_QWORD *)(a3 + 80),
                                                (unsigned int)*(unsigned __int16 *)(a3 + 72) + 2);
                        if ( DriverConfiguration < 0 )
                          goto LABEL_310;
                        v32 = 0LL;
                        DriverConfiguration = PiDevCfgSetObjectProperty(
                                                PiPnpRtlCtx,
                                                a2,
                                                *(_QWORD *)(a1 + 48),
                                                1,
                                                (__int64)v10,
                                                v68,
                                                (__int64)&DEVPKEY_Device_DriverRank,
                                                7,
                                                a3 + 108,
                                                4);
                        if ( DriverConfiguration < 0 )
                          goto LABEL_310;
LABEL_246:
                        if ( v77 != (_DWORD)v32 )
                          PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(a1 + 48),
                            1,
                            (__int64)v10,
                            v59,
                            (__int64)&DEVPKEY_Device_InstallFlags,
                            (_DWORD)v32,
                            (__int64)v32,
                            (_DWORD)v32);
                        v44 = v86;
                        if ( a3 )
                        {
                          *v86 = v8;
                          if ( (*(_BYTE *)(a3 + 168) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
                            *v44 = v8 | 0x400;
                          DriverConfiguration = PiDevCfgConfigureDeviceDriver(
                                                  a1,
                                                  a2,
                                                  a3,
                                                  (unsigned int)&v75,
                                                  (__int64)&v76);
                          if ( DriverConfiguration < 0 )
                            goto LABEL_310;
                          *v44 |= v75;
                          *v82 |= v76;
                          for ( i = *(__int64 **)(a3 + 192); i != (__int64 *)(a3 + 192); i = (__int64 *)*i )
                          {
                            if ( (i[21] & 1) != 0 )
                            {
                              DriverConfiguration = PiDevCfgConfigureDeviceDriver(
                                                      a1,
                                                      a2,
                                                      (_DWORD)i,
                                                      (unsigned int)&v75,
                                                      (__int64)&v76);
                              if ( DriverConfiguration < 0 )
                                goto LABEL_310;
                              *v86 |= v75;
                              *v82 |= v76;
                            }
                          }
                          v46 = PiDevCfgConfigureDeviceLocation(a1, a2, &v75, &v76);
                          v47 = 0;
                          DriverConfiguration = v46;
                          if ( v46 < 0 )
                            goto LABEL_310;
                          v44 = v86;
                          v48 = v82;
                          *v86 |= v75;
                          *v48 |= v76;
                        }
                        else
                        {
                          v49 = a1;
                          if ( (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
                          {
                            v48 = v82;
                            v47 = 0;
                            *v86 = 0;
                            goto LABEL_264;
                          }
                          *v86 = 64;
                          PnpDeleteDeviceInterfaces((unsigned __int16 *)(a1 + 40));
                          v48 = v82;
                          v47 = 0;
                        }
                        v49 = a1;
LABEL_264:
                        if ( v80 && !InitIsWinPEMode && PipIsDevNodeDNStarted(v49) || (v77 & 2) != 0 )
                          *v48 |= 2u;
                        if ( v74 != v47 )
                          *v48 |= 1u;
                        if ( KeyHandle )
                        {
                          DriverConfiguration = PiDevCfgConfigureDeviceKeys(
                                                  v49,
                                                  a2,
                                                  (_DWORD)KeyHandle,
                                                  -1,
                                                  (__int64)&v75,
                                                  (__int64)&v76);
                          if ( DriverConfiguration < 0 )
                            goto LABEL_310;
                          *v44 |= v75;
                          *v48 |= v76;
                        }
                        if ( a3 )
                          v50 = *(UNICODE_STRING *)(a3 + 376);
                        else
                          v50 = *(UNICODE_STRING *)PiDevCfgEmptyString;
                        v51 = *(_QWORD *)(a1 + 48);
                        String2 = v50;
                        DriverConfiguration = PiDevCfgSetObjectProperty(
                                                PiPnpRtlCtx,
                                                a2,
                                                v51,
                                                1,
                                                (__int64)v10,
                                                v59,
                                                (__int64)&DEVPKEY_Device_ConfigurationId,
                                                18,
                                                (__int64)v50.Buffer,
                                                (unsigned int)v50.Length + 2);
                        if ( DriverConfiguration >= 0 )
                        {
                          if ( v106.Buffer )
                          {
                            DriverConfiguration = PiDevCfgSetObjectProperty(
                                                    PiPnpRtlCtx,
                                                    a2,
                                                    *(_QWORD *)(a1 + 48),
                                                    1,
                                                    (__int64)v10,
                                                    v70,
                                                    (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                                                    8210,
                                                    (__int64)v106.Buffer,
                                                    v106.Length);
                            if ( DriverConfiguration < 0 )
                              goto LABEL_310;
                          }
                          else if ( (*(_DWORD *)a2 & 1) == 0 )
                          {
                            PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(a1 + 48),
                              1,
                              (__int64)v10,
                              v70,
                              (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                              0,
                              0LL,
                              0);
                          }
                          if ( a3 && (v52 = *(_QWORD *)(a3 + 136)) != 0 )
                          {
                            DriverConfiguration = PiDevCfgSetObjectProperty(
                                                    PiPnpRtlCtx,
                                                    a2,
                                                    *(_QWORD *)(a1 + 48),
                                                    1,
                                                    (__int64)v10,
                                                    v70,
                                                    (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                                                    18,
                                                    v52,
                                                    (unsigned int)*(unsigned __int16 *)(a3 + 128) + 2);
                            if ( DriverConfiguration < 0 )
                              goto LABEL_310;
                          }
                          else if ( (*(_DWORD *)a2 & 1) == 0 )
                          {
                            PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(a1 + 48),
                              1,
                              (__int64)v10,
                              v70,
                              (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                              0,
                              0LL,
                              0);
                          }
                          if ( v95.Buffer && v95.Length )
                            PipHardwareConfigActivateService(v95.Buffer);
                          v53 = SourceString;
                          if ( SourceString )
                          {
                            while ( *v53 )
                            {
                              PipHardwareConfigActivateService(v53);
                              if ( !PnpBootMode && (*(_DWORD *)(a3 + 168) & 0x10) != 0 )
                                PiDevCfgMakeServiceBootStart(v53);
                              v54 = -1LL;
                              do
                                ++v54;
                              while ( v53[v54] );
                              v53 += v54 + 1;
                            }
                          }
                          v55 = Buffer;
                          if ( Buffer )
                          {
                            while ( *v55 )
                            {
                              PipHardwareConfigActivateService(v55);
                              if ( !PnpBootMode && (*(_DWORD *)(a3 + 168) & 0x10) != 0 )
                                PiDevCfgMakeServiceBootStart(v55);
                              v56 = -1LL;
                              do
                                ++v56;
                              while ( v55[v56] );
                              v55 += v56 + 1;
                            }
                          }
                        }
LABEL_310:
                        if ( ((DriverConfiguration + 1073740653) & 0xFFFFFFFD) == 0 )
                          goto LABEL_312;
                        goto LABEL_311;
                      }
                      v32 = 0LL;
                    }
                    if ( (*(_DWORD *)a2 & 1) == 0 )
                    {
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(a1 + 48),
                        1,
                        (__int64)v10,
                        v59,
                        (__int64)&DEVPKEY_Device_MatchingDeviceId,
                        (_DWORD)v32,
                        (__int64)v32,
                        (_DWORD)v32);
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(a1 + 48),
                        1,
                        (__int64)v10,
                        v69,
                        (__int64)&DEVPKEY_Device_DriverRank,
                        (_DWORD)v32,
                        (__int64)v32,
                        (_DWORD)v32);
                    }
                    goto LABEL_246;
                  }
LABEL_194:
                  if ( (*(_DWORD *)a2 & 1) == 0 )
                    PiDevCfgSetObjectProperty(
                      PiPnpRtlCtx,
                      a2,
                      *(_QWORD *)(a1 + 48),
                      1,
                      (__int64)v10,
                      v59,
                      (__int64)&DEVPKEY_Device_Manufacturer,
                      (_DWORD)v32,
                      (__int64)v32,
                      (_DWORD)v32);
                  goto LABEL_196;
                }
                memset(v112, 0, sizeof(v112));
                v39 = *(_QWORD *)(a1 + 48);
                v112[0] = &DEVPKEY_Device_BusReportedDeviceDesc;
                v112[2] = &UnicodeString;
                LODWORD(v112[1]) = 18;
                HIDWORD(v112[3]) = 6;
                if ( (int)PiDevCfgQueryObjectProperties(v40, v39, 1u, v10, (__int64)v112, 1u) < 0
                  || SLODWORD(v112[4]) < (int)v32
                  || !UnicodeString.Buffer )
                {
                  goto LABEL_194;
                }
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        (__int64)v10,
                                        v59,
                                        (__int64)&DEVPKEY_Device_DeviceDesc,
                                        18,
                                        (__int64)UnicodeString.Buffer,
                                        (unsigned int)UnicodeString.Length + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_310;
              }
            }
            else
            {
              DriverConfiguration = PiDevCfgBuildIndirectString(a3, &UnicodeString.Length, (__int64)&v93, &v107);
              if ( DriverConfiguration < 0 )
                goto LABEL_310;
              if ( (v8 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        (__int64)v10,
                                        v59,
                                        (__int64)&DEVPKEY_Device_DeviceDesc,
                                        18,
                                        (__int64)v93.Buffer,
                                        (unsigned int)v93.Length + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_310;
              }
              if ( v107.Buffer )
              {
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        *(_QWORD *)(a1 + 48),
                                        1,
                                        (__int64)v10,
                                        v59,
                                        (__int64)&DEVPKEY_Device_DriverDesc,
                                        18,
                                        (__int64)v107.Buffer,
                                        (unsigned int)v107.Length + 2);
                if ( DriverConfiguration < 0 )
                  goto LABEL_310;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  (__int64)v10,
                  v59,
                  (__int64)&DEVPKEY_Device_DriverDesc,
                  (_DWORD)v32,
                  (__int64)v32,
                  (_DWORD)v32);
              }
              RtlFreeAnsiString(&v93);
            }
            if ( !a3 )
              goto LABEL_194;
            goto LABEL_190;
          }
          if ( (*(_DWORD *)a2 & 1) != 0 )
          {
            v32 = 0LL;
          }
          else if ( v32 && (v32 = 0LL, DestinationString.Buffer) || v73 == (_BYTE)v32 )
          {
            PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              a2,
              *(_QWORD *)(a1 + 48),
              1,
              (__int64)v10,
              v59,
              (__int64)&DEVPKEY_Device_Service,
              (_DWORD)v32,
              (__int64)v32,
              (_DWORD)v32);
          }
          goto LABEL_162;
        }
LABEL_123:
        v33 = 0;
        goto LABEL_124;
      }
LABEL_42:
      DriverConfiguration = -1073740651;
      goto LABEL_312;
    }
  }
LABEL_2:
  DriverConfiguration = -1073741670;
LABEL_311:
  PiDevCfgLogDeviceConfigured(a1, a2, a3, *v82, DriverConfiguration);
LABEL_312:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v92);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v95);
  RtlFreeAnsiString(&v96);
  RtlFreeAnsiString(&v97);
  RtlFreeAnsiString(&v101);
  RtlFreeAnsiString(&v102);
  RtlFreeAnsiString(&v105);
  RtlFreeAnsiString(&v106);
  RtlFreeAnsiString(&v93);
  RtlFreeAnsiString(&String1);
  RtlFreeAnsiString(&v94);
  if ( v104.Buffer )
    ExFreePoolWithTag(v104.Buffer, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverConfiguration;
}
