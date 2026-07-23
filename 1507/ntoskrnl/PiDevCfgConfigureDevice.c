/*
 * XREFs of PiDevCfgConfigureDevice @ 0x140587D2C
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     PipIsDevNodeDNStarted @ 0x1400CFD80 (PipIsDevNodeDNStarted.c)
 *     RtlUnicodeStringPrintf @ 0x14015DE04 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 *     _PnpOpenObjectRegKey @ 0x14043BAF4 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     PnpIsNullGuid @ 0x14054E1B4 (PnpIsNullGuid.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140587FA4 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140589984 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140589C68 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgSetObjectProperty @ 0x140589E38 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgMigrateDevice @ 0x140589F68 (PiDevCfgMigrateDevice.c)
 *     _PnpCtxRegDeleteTree @ 0x14058F9B0 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     PipHardwareConfigActivateService @ 0x14067A258 (PipHardwareConfigActivateService.c)
 *     PnpDeleteDeviceInterfaces @ 0x14067C4CC (PnpDeleteDeviceInterfaces.c)
 *     PiDevCfgAppendMultiSz @ 0x140682470 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406827A0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x140682918 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140683298 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140683C20 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1406858BC (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406871F0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140687EE8 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14068CC44 (PiDevCfgVerifyDeviceAllowed.c)
 *     _CmDeleteDeviceRegKey @ 0x1407130E4 (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  unsigned int v8; // r14d
  int v9; // r13d
  __int64 v10; // r12
  int DriverConfiguration; // ebx
  wchar_t *StringRoutine; // rax
  WCHAR *v14; // rax
  WCHAR *v15; // rax
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  __int64 *v18; // r14
  int v19; // r8d
  int v20; // eax
  const WCHAR *v21; // rdx
  int v22; // ebx
  char v23; // al
  char v24; // al
  _BYTE *v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // ecx
  char v32; // al
  __int64 v33; // r14
  NTSTATUS v34; // eax
  char v35; // al
  char v36; // bl
  _QWORD *v37; // rbx
  __int64 v38; // rcx
  int v39; // r9d
  bool v40; // zf
  int v41; // r8d
  int v42; // r8d
  int v43; // eax
  char v44; // r10
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rdx
  int v49; // ecx
  int ObjectProperties; // eax
  int v51; // eax
  int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // r9
  __int64 v56; // r8
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int *v62; // r14
  __int64 *i; // r14
  int v64; // eax
  _DWORD *v65; // r13
  __int64 v66; // rcx
  UNICODE_STRING v67; // xmm0
  __int64 v68; // r8
  __int64 v69; // rcx
  const WCHAR *v70; // r14
  __int64 v71; // rax
  const WCHAR *v72; // r14
  __int64 v73; // rax
  PGUID Guid; // [rsp+20h] [rbp-E0h]
  int v75; // [rsp+28h] [rbp-D8h]
  int v76; // [rsp+28h] [rbp-D8h]
  int v77; // [rsp+28h] [rbp-D8h]
  int v78; // [rsp+28h] [rbp-D8h]
  int v79; // [rsp+28h] [rbp-D8h]
  int v80; // [rsp+28h] [rbp-D8h]
  int v81; // [rsp+28h] [rbp-D8h]
  int v82; // [rsp+28h] [rbp-D8h]
  int v83; // [rsp+28h] [rbp-D8h]
  int v84; // [rsp+28h] [rbp-D8h]
  int v85; // [rsp+28h] [rbp-D8h]
  int v86; // [rsp+28h] [rbp-D8h]
  char v87; // [rsp+60h] [rbp-A0h] BYREF
  char v88; // [rsp+61h] [rbp-9Fh]
  char v89; // [rsp+62h] [rbp-9Eh] BYREF
  char v90; // [rsp+63h] [rbp-9Dh] BYREF
  int P; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v92; // [rsp+68h] [rbp-98h] BYREF
  int v93; // [rsp+70h] [rbp-90h]
  int v94; // [rsp+74h] [rbp-8Ch]
  int v95; // [rsp+80h] [rbp-80h]
  unsigned int v96; // [rsp+84h] [rbp-7Ch]
  PCWSTR Buffer; // [rsp+88h] [rbp-78h]
  _DWORD *v98; // [rsp+90h] [rbp-70h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-68h] BYREF
  PCWSTR SourceString; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING v101; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING String2; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp-30h] BYREF
  int v104; // [rsp+D8h] [rbp-28h] BYREF
  int v105; // [rsp+DCh] [rbp-24h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v107; // [rsp+E8h] [rbp-18h] BYREF
  int *v108; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING v109; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v110; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v111; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING v112; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING v113; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING v114; // [rsp+150h] [rbp+50h] BYREF
  PVOID v115; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v117; // [rsp+178h] [rbp+78h] BYREF
  int v118; // [rsp+188h] [rbp+88h] BYREF
  int v119; // [rsp+18Ch] [rbp+8Ch] BYREF
  __int64 v120; // [rsp+190h] [rbp+90h]
  UNICODE_STRING String1; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v122; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v123; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int16 v124; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v125; // [rsp+1D0h] [rbp+D0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 Source2; // [rsp+208h] [rbp+108h] BYREF
  __int64 v128; // [rsp+210h] [rbp+110h]
  _QWORD v129[20]; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v130[22]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v108 = a4;
  *(_DWORD *)&v117.Length = 68157440;
  Handle = 0LL;
  SourceString = 0LL;
  v107.Buffer = 0LL;
  v8 = 0;
  Buffer = 0LL;
  v109.Buffer = 0LL;
  *a4 = 1024;
  v9 = 1024;
  *a5 = 0;
  v10 = *(_QWORD *)(a2 + 16);
  v98 = a5;
  KeyHandle = 0LL;
  *(_DWORD *)&v101.Length = 0;
  v101.Buffer = 0LL;
  *(_DWORD *)&v107.Length = 0;
  *(_DWORD *)&v109.Length = 0;
  *(_DWORD *)&v113.Length = 0;
  v113.Buffer = 0LL;
  *(_DWORD *)&v110.Length = 0;
  v110.Buffer = 0LL;
  *(_DWORD *)&v123.Length = 0;
  v123.Buffer = 0LL;
  *(_DWORD *)&v122.Length = 0;
  v122.Buffer = 0LL;
  v95 = 0;
  v92 = 0LL;
  v104 = 0;
  v105 = 0;
  v120 = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v111.Length = 0;
  v111.Buffer = 0LL;
  *(_DWORD *)&v114.Length = 0;
  v114.Buffer = 0LL;
  v124 = 0;
  v125 = 0LL;
  *(_DWORD *)&String1.Length = 0;
  String1.Buffer = 0LL;
  v90 = 0;
  v87 = 0;
  v89 = 0;
  v115 = 0LL;
  v96 = 0;
  v88 = 0;
  *(_DWORD *)&v112.Length = 0;
  v112.Buffer = 0LL;
  P = 1024;
  v117.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x410uLL, 0x63647050u);
  if ( !v117.Buffer )
    goto LABEL_14;
  if ( !a3 )
    goto LABEL_82;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a3);
  if ( DriverConfiguration < 0 )
    goto LABEL_4;
  v120 = *(_QWORD *)(a3 + 248);
  if ( *(_QWORD *)(a3 + 280) )
  {
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(*(unsigned __int16 *)(a3 + 274));
    v101.Buffer = StringRoutine;
    if ( !StringRoutine )
      goto LABEL_14;
    memmove(StringRoutine, *(const void **)(a3 + 280), *(unsigned __int16 *)(a3 + 274));
    v101.Length = *(_WORD *)(a3 + 272);
    v101.MaximumLength = *(_WORD *)(a3 + 274);
  }
  if ( *(_QWORD *)(a3 + 296) )
  {
    v14 = (WCHAR *)ExpAllocateStringRoutine(*(unsigned __int16 *)(a3 + 290));
    SourceString = v14;
    v107.Buffer = v14;
    if ( !v14 )
      goto LABEL_14;
    memmove(v14, *(const void **)(a3 + 296), *(unsigned __int16 *)(a3 + 290));
    v107.Length = *(_WORD *)(a3 + 288);
    v107.MaximumLength = *(_WORD *)(a3 + 290);
  }
  if ( *(_QWORD *)(a3 + 312) )
  {
    v15 = (WCHAR *)ExpAllocateStringRoutine(*(unsigned __int16 *)(a3 + 306));
    Buffer = v15;
    v109.Buffer = v15;
    if ( !v15 )
      goto LABEL_14;
    memmove(v15, *(const void **)(a3 + 312), *(unsigned __int16 *)(a3 + 306));
    v109.Length = *(_WORD *)(a3 + 304);
    v109.MaximumLength = *(_WORD *)(a3 + 306);
  }
  if ( *(_QWORD *)(a3 + 328) )
  {
    v16 = (wchar_t *)ExpAllocateStringRoutine(*(unsigned __int16 *)(a3 + 322));
    v113.Buffer = v16;
    if ( !v16 )
      goto LABEL_14;
    memmove(v16, *(const void **)(a3 + 328), *(unsigned __int16 *)(a3 + 322));
    v113.Length = *(_WORD *)(a3 + 320);
    v113.MaximumLength = *(_WORD *)(a3 + 322);
  }
  if ( !*(_QWORD *)(a3 + 344) )
    goto LABEL_31;
  v17 = (wchar_t *)ExpAllocateStringRoutine(*(unsigned __int16 *)(a3 + 338));
  v110.Buffer = v17;
  if ( !v17 )
  {
LABEL_14:
    DriverConfiguration = -1073741670;
LABEL_15:
    PiDevCfgLogDeviceConfigured(a2, a3, (unsigned int)*v98, (unsigned int)DriverConfiguration);
    goto LABEL_5;
  }
  memmove(v17, *(const void **)(a3 + 344), *(unsigned __int16 *)(a3 + 338));
  v110.Length = *(_WORD *)(a3 + 336);
  v110.MaximumLength = *(_WORD *)(a3 + 338);
LABEL_31:
  v18 = *(__int64 **)(a3 + 192);
  v19 = *(_DWORD *)(a3 + 168);
  v93 = *(_DWORD *)(a3 + 368);
  P = v93;
  v95 = *(_DWORD *)(a3 + 372);
  v94 = v19;
  if ( v18 != (__int64 *)(a3 + 192) )
  {
    do
    {
      v20 = PiDevCfgQueryDriverConfiguration(v18);
      DriverConfiguration = v20;
      if ( v20 >= 0 )
      {
        if ( v18[35] )
        {
          *((_DWORD *)v18 + 42) &= ~1u;
        }
        else
        {
          if ( v18[37] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v107);
            if ( DriverConfiguration < 0 )
              goto LABEL_4;
          }
          if ( v18[39] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v109);
            if ( DriverConfiguration < 0 )
              goto LABEL_4;
          }
          if ( v18[41] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v113);
            if ( DriverConfiguration < 0 )
              goto LABEL_4;
          }
          if ( v18[43] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v110);
            if ( DriverConfiguration < 0 )
              goto LABEL_4;
          }
          v93 |= *((_DWORD *)v18 + 92);
          P = v93;
          v95 |= *((_DWORD *)v18 + 93);
          v94 |= *((_DWORD *)v18 + 42);
          DriverConfiguration = PiDevCfgAppendMultiSz(&v123);
          if ( DriverConfiguration < 0 )
            goto LABEL_4;
          DriverConfiguration = PiDevCfgAppendMultiSz(&v122);
          if ( DriverConfiguration < 0 )
            goto LABEL_4;
        }
      }
      else
      {
        if ( v20 != -1073741637 )
          break;
        if ( !PnpBootMode )
          goto LABEL_5;
        DriverConfiguration = 0;
        v93 |= 0x400u;
        P = v93;
      }
      v18 = (__int64 *)*v18;
    }
    while ( v18 != (__int64 *)(a3 + 192) );
    LOBYTE(v19) = v94;
    SourceString = v107.Buffer;
    Buffer = v109.Buffer;
  }
  if ( DriverConfiguration < 0 )
    goto LABEL_4;
  v9 = v93;
  if ( (v93 & 0x400) != 0
    && (*(_BYTE *)(a3 + 392) & 2) == 0
    && (PiDevCfgOptions & 1) == 0
    && !InitIsWinPEMode
    && !PnpBootMode )
  {
    goto LABEL_55;
  }
  if ( (PiDevCfgFlags & 2) != 0 && (v19 & 0x40) != 0 && (PiDevCfgOptions & 1) == 0 )
  {
    if ( !PnpBootMode )
      goto LABEL_55;
    v9 = v93 | 0x400;
    P = v93 | 0x400;
  }
  memset(v130, 0, 0xA8uLL);
  LODWORD(v130[1]) = 288;
  LODWORD(v130[4]) = 0x1000000;
  v130[2] = L"Description";
  LODWORD(v130[11]) = 0x1000000;
  v21 = *(const WCHAR **)(a3 + 24);
  v130[3] = &UnicodeString;
  v130[9] = L"Manufacturer";
  v130[10] = &v111;
  LODWORD(v130[8]) = 288;
  DriverConfiguration = RtlpQueryRegistryValues(3221225472LL, v21, (__int64)v130, 0LL, 0LL, 1);
  if ( DriverConfiguration < 0 )
    goto LABEL_4;
  if ( !UnicodeString.Length && UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( !v111.Length && v111.Buffer )
    RtlFreeAnsiString(&v111);
  v22 = v120;
  if ( !v120 )
    goto LABEL_77;
  if ( (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v120, 2u, 131097, 0, (__int64)&Handle, 0LL, 0) < 0 )
  {
    v8 = 0;
  }
  else
  {
    memset(v129, 0, sizeof(v129));
    v129[0] = &DEVPKEY_DeviceClass_Configurable;
    v129[2] = &v90;
    LODWORD(v129[1]) = 17;
    v129[5] = &DEVPKEY_DeviceClass_PolicyExempt;
    LODWORD(v129[3]) = 1;
    v129[7] = &v87;
    v129[10] = &DEVPKEY_DeviceClass_DefaultService;
    v129[12] = &DestinationString;
    v129[15] = &DEVPKEY_DeviceClass_CompatibleFeatureScores;
    v129[17] = &v115;
    LODWORD(v129[6]) = 17;
    LODWORD(v129[8]) = 1;
    LODWORD(v129[11]) = 18;
    HIDWORD(v129[13]) = 6;
    LODWORD(v129[16]) = 4099;
    HIDWORD(v129[18]) = 2;
    DriverConfiguration = PiDevCfgQueryObjectProperties(17, v22, 2, (_DWORD)Handle, (__int64)v129, 4);
    if ( DriverConfiguration < 0 )
      goto LABEL_4;
    v23 = v90;
    if ( SLODWORD(v129[4]) < 0 )
      v23 = 0;
    v90 = v23;
    v24 = v87;
    if ( SLODWORD(v129[9]) < 0 )
      v24 = 0;
    v87 = v24;
    if ( SLODWORD(v129[14]) < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( SLODWORD(v129[19]) < 0 )
    {
      v115 = 0LL;
LABEL_77:
      v8 = v96;
      goto LABEL_78;
    }
    v8 = v129[18];
  }
LABEL_78:
  if ( v90 || (PiDevCfgFlags & 2) == 0 || (PiDevCfgOptions & 1) != 0 )
  {
LABEL_82:
    v25 = v115;
    if ( v115 )
    {
      DriverConfiguration = 0;
      v26 = 0;
      if ( !v8 )
        goto LABEL_87;
      do
      {
        if ( *v25 == *(_BYTE *)(a3 + 110) )
          break;
        ++v26;
        ++v25;
      }
      while ( v26 < v8 );
      if ( v26 >= v8 )
LABEL_87:
        DriverConfiguration = -1073740764;
      if ( DriverConfiguration < 0 )
        goto LABEL_4;
    }
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      memset(v129, 0, sizeof(v129));
      v27 = *(_QWORD *)(a1 + 48);
      v129[2] = &Source2;
      v129[5] = &DEVPKEY_Device_InstallFlags;
      v129[0] = &DEVPKEY_Device_ClassGuid;
      v129[7] = (char *)&v92 + 4;
      v129[10] = &DEVPKEY_Device_DriverNodeStrongName;
      v129[12] = &v112;
      LODWORD(v129[1]) = 13;
      LODWORD(v129[3]) = 16;
      LODWORD(v129[6]) = 7;
      LODWORD(v129[8]) = 4;
      LODWORD(v129[11]) = 18;
      HIDWORD(v129[13]) = 6;
      DriverConfiguration = PiDevCfgQueryObjectProperties(v28, v27, 1, v10, (__int64)v129, 3);
      if ( DriverConfiguration < 0 )
        goto LABEL_4;
      if ( SLODWORD(v129[4]) >= 0 )
      {
        v88 = 1;
      }
      else
      {
        Source2 = 0LL;
        v128 = 0LL;
      }
      v29 = HIDWORD(v92);
      if ( SLODWORD(v129[9]) < 0 )
        v29 = 0;
      HIDWORD(v92) = v29;
      if ( SLODWORD(v129[14]) < 0 )
        RtlInitUnicodeString(&v112, 0LL);
    }
    if ( v87 )
      goto LABEL_113;
    if ( (v92 & 0x400000000LL) == 0 )
      goto LABEL_111;
    if ( !a3 )
      goto LABEL_109;
    memset(v129, 0, sizeof(v129));
    v30 = *(_QWORD *)(a1 + 48);
    v129[2] = &String1;
    v129[0] = &DEVPKEY_Device_DriverInfPath;
    LODWORD(v129[1]) = 18;
    HIDWORD(v129[3]) = 6;
    DriverConfiguration = PiDevCfgQueryObjectProperties(v31, v30, 1, v10, (__int64)v129, 1);
    if ( DriverConfiguration < 0 )
      goto LABEL_4;
    if ( SLODWORD(v129[4]) < 0 )
      RtlInitUnicodeString(&String1, 0LL);
    if ( String1.Buffer && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(a3 + 40), 1u) )
    {
LABEL_109:
      v32 = -1;
      v87 = -1;
    }
    else
    {
      v32 = v87;
    }
    if ( v32 )
    {
LABEL_113:
      v33 = a1;
    }
    else
    {
LABEL_111:
      v33 = a1;
      DriverConfiguration = PiDevCfgEnforceDevicePolicy(a1, a2, v120);
      if ( DriverConfiguration < 0 )
        goto LABEL_4;
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
      v34 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      DriverConfiguration = v34;
      if ( v34 != -1073741772 )
      {
        if ( v34 < 0 )
          goto LABEL_4;
        DriverConfiguration = PiDevCfgVerifyDeviceAllowed(v33, KeyHandle);
        if ( DriverConfiguration < 0 )
          goto LABEL_4;
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 32) + 8LL) + 16LL) & 4) == 0
      || (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 48),
                1u,
                v10,
                0LL,
                (__int64)&DEVPKEY_Device_Reported,
                (__int64)&v118,
                (__int64)&v89,
                1,
                (__int64)&v119,
                0) >= 0
      && v118 == 17
      && v119 == 1 )
    {
      v35 = v89;
    }
    else
    {
      v35 = 0;
      v89 = 0;
    }
    if ( a3 && !v101.Buffer && !DestinationString.Buffer && !v35 && (*(_DWORD *)(v33 + 560) & 0x100) == 0 )
      goto LABEL_55;
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      if ( !a3 )
      {
        v36 = v88;
        if ( !v88 || (*(_DWORD *)(v33 + 560) & 0x100) == 0 )
          CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 17LL);
        CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 18LL);
LABEL_142:
        v39 = 0;
        v40 = a3 == 0;
LABEL_143:
        v41 = a3 + 240;
        if ( v40 )
          v41 = 0;
        if ( (int)PiDevCfgMigrateDevice(v33, a2, v41, v39, (__int64)&v104, (__int64)&v105) >= 0 )
        {
          v9 |= v104;
          P = v9;
          LODWORD(v92) = v105;
        }
        if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          v42 = a3 + 224;
          if ( !a3 )
            v42 = 0;
          PiDevCfgResetDeviceDriverSettings(
            v33,
            a2,
            v42,
            (int)Handle,
            (PGUID)((unsigned __int64)&Source2 & -(__int64)(v36 != 0)));
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
              v75,
              (__int64)&DEVPKEY_Device_ClassGuid,
              0,
              0LL,
              0);
          v44 = 0;
        }
        else
        {
          v43 = PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v75,
                  (__int64)&DEVPKEY_Device_ClassGuid,
                  13,
                  a3 + 224,
                  16);
          v44 = 0;
          DriverConfiguration = v43;
          if ( v43 < 0 )
            goto LABEL_4;
        }
        if ( v101.Buffer )
        {
          if ( v101.Length )
          {
            v45 = PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v75,
                    (__int64)&DEVPKEY_Device_Service,
                    18,
                    (__int64)v101.Buffer,
                    (unsigned int)v101.Length + 2);
            goto LABEL_164;
          }
        }
        else if ( DestinationString.Buffer && DestinationString.Length )
        {
          v45 = PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v75,
                  (__int64)&DEVPKEY_Device_Service,
                  18,
                  (__int64)DestinationString.Buffer,
                  (unsigned int)DestinationString.Length + 2);
LABEL_164:
          v44 = 0;
          DriverConfiguration = v45;
          if ( v45 < 0 )
            goto LABEL_4;
LABEL_171:
          if ( SourceString )
          {
            v46 = PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v75,
                    (__int64)&DEVPKEY_Device_LowerFilters,
                    8210,
                    (__int64)SourceString,
                    v107.Length);
            v44 = 0;
            DriverConfiguration = v46;
            if ( v46 < 0 )
              goto LABEL_4;
          }
          else if ( (*(_DWORD *)a2 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              a2,
              *(_QWORD *)(a1 + 48),
              1,
              v10,
              v75,
              (__int64)&DEVPKEY_Device_LowerFilters,
              0,
              0LL,
              0);
            v44 = 0;
          }
          if ( Buffer )
          {
            v47 = PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v75,
                    (__int64)&DEVPKEY_Device_UpperFilters,
                    8210,
                    (__int64)Buffer,
                    v109.Length);
            v44 = 0;
            DriverConfiguration = v47;
            if ( v47 < 0 )
              goto LABEL_4;
          }
          else if ( (*(_DWORD *)a2 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              a2,
              *(_QWORD *)(a1 + 48),
              1,
              v10,
              v75,
              (__int64)&DEVPKEY_Device_UpperFilters,
              0,
              0LL,
              0);
            v44 = 0;
          }
          if ( a3 && UnicodeString.Buffer )
          {
            DriverConfiguration = PiDevCfgBuildIndirectString(a3, &UnicodeString, &v114, &v124);
            if ( DriverConfiguration < 0 )
              goto LABEL_4;
            if ( (v9 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(a1 + 48),
                                      1,
                                      v10,
                                      v75,
                                      (__int64)&DEVPKEY_Device_DeviceDesc,
                                      18,
                                      (__int64)v114.Buffer,
                                      (unsigned int)v114.Length + 2);
              if ( DriverConfiguration < 0 )
                goto LABEL_4;
            }
            if ( v125 )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(a1 + 48),
                                      1,
                                      v10,
                                      v75,
                                      (__int64)&DEVPKEY_Device_DriverDesc,
                                      18,
                                      v125,
                                      (unsigned int)v124 + 2);
              if ( DriverConfiguration < 0 )
                goto LABEL_4;
            }
            else if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(a1 + 48),
                1,
                v10,
                v75,
                (__int64)&DEVPKEY_Device_DriverDesc,
                0,
                0LL,
                0);
            }
            RtlFreeAnsiString(&v114);
            v44 = 0;
          }
          else if ( (*(_DWORD *)a2 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              a2,
              *(_QWORD *)(a1 + 48),
              1,
              v10,
              v75,
              (__int64)&DEVPKEY_Device_DriverDesc,
              0,
              0LL,
              0);
            v44 = 0;
            if ( a3 )
            {
LABEL_199:
              if ( v111.Buffer )
              {
                DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v111, &v114, 0LL);
                if ( DriverConfiguration < 0 )
                  goto LABEL_4;
                v52 = PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        a2,
                        *(_QWORD *)(a1 + 48),
                        1,
                        v10,
                        v75,
                        (__int64)&DEVPKEY_Device_Manufacturer,
                        18,
                        (__int64)v114.Buffer,
                        (unsigned int)v114.Length + 2);
                v44 = 0;
                DriverConfiguration = v52;
                if ( v52 < 0 )
                  goto LABEL_4;
LABEL_205:
                if ( a3 && (v53 = *(_QWORD *)(a3 + 264)) != 0 )
                {
                  v54 = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(a1 + 48),
                          1,
                          v10,
                          v75,
                          (__int64)&DEVPKEY_Device_DriverProvider,
                          18,
                          v53,
                          (unsigned int)*(unsigned __int16 *)(a3 + 256) + 2);
                  v44 = 0;
                  DriverConfiguration = v54;
                  if ( v54 < 0 )
                    goto LABEL_4;
                }
                else if ( (*(_DWORD *)a2 & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v75,
                    (__int64)&DEVPKEY_Device_DriverProvider,
                    0,
                    0LL,
                    0);
                  v44 = 0;
                }
                if ( a3 )
                {
                  DriverConfiguration = PiDevCfgSetObjectProperty(
                                          PiPnpRtlCtx,
                                          a2,
                                          *(_QWORD *)(a1 + 48),
                                          1,
                                          v10,
                                          v75,
                                          (__int64)&DEVPKEY_Device_DriverDate,
                                          16,
                                          a3 + 112,
                                          8);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_4;
                  v55 = *(unsigned __int16 *)(a3 + 124);
                  v76 = *(unsigned __int16 *)(a3 + 120);
                  LODWORD(Guid) = *(unsigned __int16 *)(a3 + 122);
                  v56 = (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124));
                  v117.Length = 0;
                  DriverConfiguration = RtlUnicodeStringPrintf(&v117, L"%u.%u.%u.%u", v56, v55, Guid);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_4;
                  DriverConfiguration = PiDevCfgSetObjectProperty(
                                          PiPnpRtlCtx,
                                          a2,
                                          *(_QWORD *)(a1 + 48),
                                          1,
                                          v10,
                                          v76,
                                          (__int64)&DEVPKEY_Device_DriverVersion,
                                          18,
                                          (__int64)v117.Buffer,
                                          (unsigned int)v117.Length + 2);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_4;
                  DriverConfiguration = PiDevCfgSetObjectProperty(
                                          PiPnpRtlCtx,
                                          a2,
                                          *(_QWORD *)(a1 + 48),
                                          1,
                                          v10,
                                          v77,
                                          (__int64)&DEVPKEY_Device_DriverInfPath,
                                          18,
                                          *(_QWORD *)(a3 + 48),
                                          (unsigned int)*(unsigned __int16 *)(a3 + 40) + 2);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_4;
                  DriverConfiguration = PiDevCfgSetObjectProperty(
                                          PiPnpRtlCtx,
                                          a2,
                                          *(_QWORD *)(a1 + 48),
                                          1,
                                          v10,
                                          v78,
                                          (__int64)&DEVPKEY_Device_DriverInfSection,
                                          18,
                                          *(_QWORD *)(a3 + 96),
                                          (unsigned int)*(unsigned __int16 *)(a3 + 88) + 2);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_4;
                  DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(a3, &v111, &UnicodeString, &String2);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_4;
                  if ( v112.Buffer && !RtlCompareUnicodeString(&v112, &String2, 1u) )
                    RtlFreeAnsiString(&v112);
                  DriverConfiguration = PiDevCfgSetObjectProperty(
                                          PiPnpRtlCtx,
                                          a2,
                                          *(_QWORD *)(a1 + 48),
                                          1,
                                          v10,
                                          v79,
                                          (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                                          18,
                                          (__int64)String2.Buffer,
                                          (unsigned int)String2.Length + 2);
                  RtlFreeAnsiString(&String2);
                  v44 = 0;
                  if ( DriverConfiguration < 0 )
                    goto LABEL_4;
                }
                else if ( (*(_DWORD *)a2 & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v75,
                    (__int64)&DEVPKEY_Device_DriverDate,
                    0,
                    0LL,
                    0);
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v80,
                    (__int64)&DEVPKEY_Device_DriverVersion,
                    0,
                    0LL,
                    0);
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v81,
                    (__int64)&DEVPKEY_Device_DriverInfPath,
                    0,
                    0LL,
                    0);
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v82,
                    (__int64)&DEVPKEY_Device_DriverInfSection,
                    0,
                    0LL,
                    0);
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v83,
                    (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                    0,
                    0LL,
                    0);
                  v44 = 0;
                }
                if ( !v112.Buffer || (v92 & 0x800000000LL) != 0 || (*(_DWORD *)(v33 + 396) & 0x6000) != 0 )
                {
                  if ( (*(_DWORD *)a2 & 1) == 0 )
                  {
                    PiDevCfgSetObjectProperty(
                      PiPnpRtlCtx,
                      a2,
                      *(_QWORD *)(a1 + 48),
                      1,
                      v10,
                      v75,
                      (__int64)&DEVPKEY_Device_RollbackDriverNode,
                      0,
                      0LL,
                      0);
                    v44 = 0;
                  }
                }
                else
                {
                  v57 = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(a1 + 48),
                          1,
                          v10,
                          v75,
                          (__int64)&DEVPKEY_Device_RollbackDriverNode,
                          18,
                          (__int64)v112.Buffer,
                          (unsigned int)v112.Length + 2);
                  v44 = 0;
                  DriverConfiguration = v57;
                  if ( v57 < 0 )
                    goto LABEL_4;
                }
                if ( v113.Buffer )
                {
                  v58 = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(a1 + 48),
                          1,
                          v10,
                          v75,
                          (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                          8210,
                          (__int64)v113.Buffer,
                          v113.Length);
                  v44 = 0;
                  DriverConfiguration = v58;
                  if ( v58 < 0 )
                    goto LABEL_4;
                }
                else if ( (*(_DWORD *)a2 & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v75,
                    (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                    0,
                    0LL,
                    0);
                  v44 = 0;
                }
                if ( v110.Buffer )
                {
                  v59 = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(a1 + 48),
                          1,
                          v10,
                          v75,
                          (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                          8210,
                          (__int64)v110.Buffer,
                          v110.Length);
                  v44 = 0;
                  DriverConfiguration = v59;
                  if ( v59 < 0 )
                    goto LABEL_4;
                }
                else if ( (*(_DWORD *)a2 & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v75,
                    (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                    0,
                    0LL,
                    0);
                  v44 = 0;
                }
                if ( v123.Buffer )
                {
                  v60 = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(a1 + 48),
                          1,
                          v10,
                          v75,
                          (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                          8210,
                          (__int64)v123.Buffer,
                          v123.Length);
                  v44 = 0;
                  DriverConfiguration = v60;
                  if ( v60 < 0 )
                    goto LABEL_4;
                }
                else if ( (*(_DWORD *)a2 & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v75,
                    (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                    0,
                    0LL,
                    0);
                  v44 = 0;
                }
                if ( !a3 || *(_DWORD *)(a3 + 108) == -1 )
                {
                  if ( (*(_DWORD *)a2 & 1) == 0 )
                  {
                    PiDevCfgSetObjectProperty(
                      PiPnpRtlCtx,
                      a2,
                      *(_QWORD *)(a1 + 48),
                      1,
                      v10,
                      v75,
                      (__int64)&DEVPKEY_Device_MatchingDeviceId,
                      0,
                      0LL,
                      0);
                    PiDevCfgSetObjectProperty(
                      PiPnpRtlCtx,
                      a2,
                      *(_QWORD *)(a1 + 48),
                      1,
                      v10,
                      v85,
                      (__int64)&DEVPKEY_Device_DriverRank,
                      0,
                      0LL,
                      0);
                    v44 = 0;
                  }
                }
                else
                {
                  DriverConfiguration = PiDevCfgSetObjectProperty(
                                          PiPnpRtlCtx,
                                          a2,
                                          *(_QWORD *)(a1 + 48),
                                          1,
                                          v10,
                                          v75,
                                          (__int64)&DEVPKEY_Device_MatchingDeviceId,
                                          18,
                                          *(_QWORD *)(a3 + 80),
                                          (unsigned int)*(unsigned __int16 *)(a3 + 72) + 2);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_4;
                  v61 = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(a1 + 48),
                          1,
                          v10,
                          v84,
                          (__int64)&DEVPKEY_Device_DriverRank,
                          7,
                          a3 + 108,
                          4);
                  v44 = 0;
                  DriverConfiguration = v61;
                  if ( v61 < 0 )
                    goto LABEL_4;
                }
                if ( HIDWORD(v92) )
                {
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v75,
                    (__int64)&DEVPKEY_Device_InstallFlags,
                    0,
                    0LL,
                    0);
                  v44 = 0;
                }
                v62 = v108;
                if ( a3 )
                {
                  *v108 = v9;
                  if ( (*(_BYTE *)(a3 + 168) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
                    *v62 = v9 | 0x400;
                  DriverConfiguration = PiDevCfgConfigureDeviceDriver(a1, a2, a3, (unsigned int)&P, (__int64)&v92);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_4;
                  *v62 |= P;
                  *v98 |= v92;
                  for ( i = *(__int64 **)(a3 + 192); i != (__int64 *)(a3 + 192); i = (__int64 *)*i )
                  {
                    if ( (i[21] & 1) != 0 )
                    {
                      DriverConfiguration = PiDevCfgConfigureDeviceDriver(
                                              a1,
                                              a2,
                                              (_DWORD)i,
                                              (unsigned int)&P,
                                              (__int64)&v92);
                      if ( DriverConfiguration < 0 )
                        goto LABEL_4;
                      *v108 |= P;
                      *v98 |= v92;
                    }
                  }
                  v64 = PiDevCfgConfigureDeviceLocation(a1, a2, &P, &v92);
                  v44 = 0;
                  DriverConfiguration = v64;
                  if ( v64 < 0 )
                    goto LABEL_4;
                  v62 = v108;
                  v65 = v98;
                  *v108 |= P;
                  *v65 |= v92;
                }
                else
                {
                  v66 = a1;
                  if ( (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
                  {
                    v65 = v98;
                    *v108 = 0;
                    goto LABEL_272;
                  }
                  *v108 = 64;
                  PnpDeleteDeviceInterfaces(a1 + 40);
                  v65 = v98;
                  v44 = 0;
                }
                v66 = a1;
LABEL_272:
                if ( v95 && !InitIsWinPEMode && PipIsDevNodeDNStarted(v66) || (v92 & 0x200000000LL) != 0 )
                  *v65 |= 2u;
                if ( v88 != v44 )
                  *v65 |= 1u;
                if ( KeyHandle )
                {
                  DriverConfiguration = PiDevCfgConfigureDeviceKeys(v66, a2, (int)KeyHandle, -1, &P, (__int64)&v92);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_4;
                  *v62 |= P;
                  *v65 |= v92;
                }
                if ( a3 )
                  v67 = *(UNICODE_STRING *)(a3 + 376);
                else
                  v67 = *(UNICODE_STRING *)PiDevCfgEmptyString;
                v68 = *(_QWORD *)(a1 + 48);
                String2 = v67;
                DriverConfiguration = PiDevCfgSetObjectProperty(
                                        PiPnpRtlCtx,
                                        a2,
                                        v68,
                                        1,
                                        v10,
                                        v75,
                                        (__int64)&DEVPKEY_Device_ConfigurationId,
                                        18,
                                        (__int64)v67.Buffer,
                                        (unsigned int)v67.Length + 2);
                if ( DriverConfiguration >= 0 )
                {
                  if ( v122.Buffer )
                  {
                    DriverConfiguration = PiDevCfgSetObjectProperty(
                                            PiPnpRtlCtx,
                                            a2,
                                            *(_QWORD *)(a1 + 48),
                                            1,
                                            v10,
                                            v86,
                                            (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                                            8210,
                                            (__int64)v122.Buffer,
                                            v122.Length);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_4;
                  }
                  else if ( (*(_DWORD *)a2 & 1) == 0 )
                  {
                    PiDevCfgSetObjectProperty(
                      PiPnpRtlCtx,
                      a2,
                      *(_QWORD *)(a1 + 48),
                      1,
                      v10,
                      v86,
                      (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                      0,
                      0LL,
                      0);
                  }
                  if ( a3 && (v69 = *(_QWORD *)(a3 + 136)) != 0 )
                  {
                    DriverConfiguration = PiDevCfgSetObjectProperty(
                                            PiPnpRtlCtx,
                                            a2,
                                            *(_QWORD *)(a1 + 48),
                                            1,
                                            v10,
                                            v86,
                                            (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                                            18,
                                            v69,
                                            (unsigned int)*(unsigned __int16 *)(a3 + 128) + 2);
                    if ( DriverConfiguration < 0 )
                      goto LABEL_4;
                  }
                  else if ( (*(_DWORD *)a2 & 1) == 0 )
                  {
                    PiDevCfgSetObjectProperty(
                      PiPnpRtlCtx,
                      a2,
                      *(_QWORD *)(a1 + 48),
                      1,
                      v10,
                      v86,
                      (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                      0,
                      0LL,
                      0);
                  }
                  if ( v101.Buffer && v101.Length )
                    PipHardwareConfigActivateService(v101.Buffer);
                  v70 = SourceString;
                  if ( SourceString )
                  {
                    while ( *v70 )
                    {
                      PipHardwareConfigActivateService(v70);
                      if ( !PnpBootMode && (*(_DWORD *)(a3 + 168) & 0x10) != 0 )
                        PiDevCfgMakeServiceBootStart(v70);
                      v71 = -1LL;
                      do
                        ++v71;
                      while ( v70[v71] );
                      v70 += v71 + 1;
                    }
                  }
                  v72 = Buffer;
                  if ( Buffer )
                  {
                    while ( *v72 )
                    {
                      PipHardwareConfigActivateService(v72);
                      if ( !PnpBootMode && (*(_DWORD *)(a3 + 168) & 0x10) != 0 )
                        PiDevCfgMakeServiceBootStart(v72);
                      v73 = -1LL;
                      do
                        ++v73;
                      while ( v72[v73] );
                      v72 += v73 + 1;
                    }
                  }
                }
LABEL_4:
                if ( DriverConfiguration == -1073741637 )
                  goto LABEL_5;
                goto LABEL_15;
              }
LABEL_203:
              if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v10,
                  v75,
                  (__int64)&DEVPKEY_Device_Manufacturer,
                  0,
                  0LL,
                  0);
                v44 = 0;
              }
              goto LABEL_205;
            }
            memset(v129, 0, sizeof(v129));
            v48 = *(_QWORD *)(a1 + 48);
            v129[0] = &DEVPKEY_Device_BusReportedDeviceDesc;
            v129[2] = &UnicodeString;
            LODWORD(v129[1]) = 18;
            HIDWORD(v129[3]) = 6;
            ObjectProperties = PiDevCfgQueryObjectProperties(v49, v48, 1, v10, (__int64)v129, 1);
            v44 = 0;
            if ( ObjectProperties < 0 || SLODWORD(v129[4]) < 0 || !UnicodeString.Buffer )
              goto LABEL_203;
            v51 = PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    a2,
                    *(_QWORD *)(a1 + 48),
                    1,
                    v10,
                    v75,
                    (__int64)&DEVPKEY_Device_DeviceDesc,
                    18,
                    (__int64)UnicodeString.Buffer,
                    (unsigned int)UnicodeString.Length + 2);
            v44 = 0;
            DriverConfiguration = v51;
            if ( v51 < 0 )
              goto LABEL_4;
          }
          if ( !a3 )
            goto LABEL_203;
          goto LABEL_199;
        }
        if ( (*(_DWORD *)a2 & 1) == 0 && (v101.Buffer && DestinationString.Buffer || !v89) )
        {
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            a2,
            *(_QWORD *)(a1 + 48),
            1,
            v10,
            v75,
            (__int64)&DEVPKEY_Device_Service,
            0,
            0LL,
            0);
          v44 = 0;
        }
        goto LABEL_171;
      }
      if ( !PnpIsNullGuid(&Source2) )
      {
        v37 = (_QWORD *)(a3 + 224);
        if ( !PnpIsNullGuid((void *)(a3 + 224)) )
        {
          v38 = Source2 - *v37;
          if ( Source2 == *v37 )
            v38 = v128 - *(_QWORD *)(a3 + 232);
          if ( v38 )
            CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 18LL);
        }
      }
    }
    v36 = v88;
    v39 = a3 + 40;
    v40 = a3 == 0;
    if ( a3 )
      goto LABEL_143;
    goto LABEL_142;
  }
  if ( PnpBootMode )
  {
    v9 |= 0x400u;
    P = v9;
    goto LABEL_82;
  }
LABEL_55:
  DriverConfiguration = -1073741637;
LABEL_5:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v111);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v101);
  RtlFreeAnsiString(&v107);
  RtlFreeAnsiString(&v109);
  RtlFreeAnsiString(&v113);
  RtlFreeAnsiString(&v110);
  RtlFreeAnsiString(&v123);
  RtlFreeAnsiString(&v122);
  RtlFreeAnsiString(&v114);
  RtlFreeAnsiString(&String1);
  RtlFreeAnsiString(&v112);
  if ( v117.Buffer )
    ExFreePoolWithTag(v117.Buffer, 0);
  if ( v115 )
    ExFreePoolWithTag(v115, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverConfiguration;
}
