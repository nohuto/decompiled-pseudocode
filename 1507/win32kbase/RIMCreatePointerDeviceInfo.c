/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C0073F6C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0077398 (RIMAllocateHidDesc.c)
 * Callees:
 *     IsGetPhysicalSizeFromMonitorSupported_0 @ 0x1C0002C70 (IsGetPhysicalSizeFromMonitorSupported_0.c)
 *     GetPhysicalSizeFromMonitor_0 @ 0x1C0002C78 (GetPhysicalSizeFromMonitor_0.c)
 *     IsReadDigitizerToMonitorMappingsSupported_0 @ 0x1C0002D90 (IsReadDigitizerToMonitorMappingsSupported_0.c)
 *     ReadDigitizerToMonitorMappings_0 @ 0x1C0002D98 (ReadDigitizerToMonitorMappings_0.c)
 *     IsFindMonitorForDigitizerSupported_0 @ 0x1C0002DA0 (IsFindMonitorForDigitizerSupported_0.c)
 *     FindMonitorForDigitizer_0 @ 0x1C0002DA8 (FindMonitorForDigitizer_0.c)
 *     IsRetrieveCalibrationDataSupported_0 @ 0x1C0002DB0 (IsRetrieveCalibrationDataSupported_0.c)
 *     RetrieveCalibrationData_0 @ 0x1C0002DB8 (RetrieveCalibrationData_0.c)
 *     RIMInitFakeMonitor @ 0x1C001936C (RIMInitFakeMonitor.c)
 *     RIMGetContainerId @ 0x1C001A4DC (RIMGetContainerId.c)
 *     RIMGetPointerDevicePDO @ 0x1C001A5C8 (RIMGetPointerDevicePDO.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     _TlgKeywordOn @ 0x1C0057B54 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0057B78 (_TlgWrite.c)
 *     ApiSetValidateDeviceSignature @ 0x1C0072D34 (ApiSetValidateDeviceSignature.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0073110 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMFindMonitorForDigitizer @ 0x1C00731A0 (RIMFindMonitorForDigitizer.c)
 *     RIMGetProductString @ 0x1C0073538 (RIMGetProductString.c)
 *     RIMIsDeviceExcluded @ 0x1C0073698 (RIMIsDeviceExcluded.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C007375C (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     RIMGetDeviceButtons @ 0x1C00737A8 (RIMGetDeviceButtons.c)
 *     RIMAssignTouchType @ 0x1C0073A74 (RIMAssignTouchType.c)
 *     RIMGetPropertyCount @ 0x1C0073DEC (RIMGetPropertyCount.c)
 *     RIMIsEssentialUsage @ 0x1C00749D8 (RIMIsEssentialUsage.c)
 *     RIMCheckPressureUsageStatus @ 0x1C0074A80 (RIMCheckPressureUsageStatus.c)
 *     RIMRetrieveNormalizationRange @ 0x1C0074AAC (RIMRetrieveNormalizationRange.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0074F80 (rimHidP_GetSpecificValueCaps.c)
 *     RIMComputeHighMetricValue @ 0x1C0074FCC (RIMComputeHighMetricValue.c)
 *     RIMGetDeviceParent @ 0x1C00751F0 (RIMGetDeviceParent.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0077D50 (RIMGetDeviceObjectPointer.c)
 *     RIMFreePointerDevice @ 0x1C0078334 (RIMFreePointerDevice.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C00CE0EC (RIMComputeVirtualHimetricSize.c)
 *     RIMGetPhysicalSizeFromMonitor @ 0x1C00CE218 (RIMGetPhysicalSizeFromMonitor.c)
 *     RIMValidatePTPProperties @ 0x1C00D10B8 (RIMValidatePTPProperties.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 *a4,
        struct _DEVICE_OBJECT *a5,
        struct _FILE_OBJECT *a6,
        __int64 a7)
{
  __int64 v8; // r15
  __int16 *v9; // r12
  __int64 v10; // rdi
  char *v11; // rbx
  __int16 v12; // cx
  int v13; // ecx
  int v14; // esi
  int v15; // edi
  int v16; // ecx
  int SpecificValueCaps; // eax
  __int64 v18; // rcx
  _DWORD *v19; // rax
  void *v20; // rax
  unsigned int v21; // esi
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // r9d
  unsigned __int8 *v26; // rsi
  __int16 v27; // r12
  unsigned __int16 v28; // r12
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  int v43; // edx
  int v44; // eax
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  int v51; // edx
  int v52; // eax
  int v53; // eax
  int v54; // esi
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  bool v57; // zf
  __int64 v58; // r8
  __int64 v59; // rdi
  __int64 v60; // xmm0_8
  int v61; // eax
  struct _UNICODE_STRING v62; // xmm6
  char *v63; // rax
  _QWORD *v64; // rdx
  void *v66; // rax
  int v67; // eax
  __int64 v68; // r8
  _BYTE *v69; // rdx
  unsigned int v70; // r9d
  __int64 v71; // rcx
  __int64 v72; // xmm0_8
  int v73; // eax
  const GUID *v74; // r9
  int v75; // ecx
  int v76; // eax
  unsigned int v77; // eax
  int v78; // eax
  unsigned __int16 v79; // r9
  __int64 v80; // xmm0_8
  unsigned int Length; // [rsp+28h] [rbp-E0h]
  int v82; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v83[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v84; // [rsp+50h] [rbp-B8h] BYREF
  int v85; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v86; // [rsp+58h] [rbp-B0h] BYREF
  int v87; // [rsp+5Ch] [rbp-ACh] BYREF
  int v88; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v89; // [rsp+64h] [rbp-A4h] BYREF
  int v90; // [rsp+68h] [rbp-A0h] BYREF
  int v91; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v92; // [rsp+70h] [rbp-98h]
  int v93; // [rsp+74h] [rbp-94h] BYREF
  int v94; // [rsp+78h] [rbp-90h] BYREF
  int v95; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v96; // [rsp+80h] [rbp-88h] BYREF
  int v97; // [rsp+84h] [rbp-84h] BYREF
  int v98; // [rsp+88h] [rbp-80h] BYREF
  int v99; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v100; // [rsp+90h] [rbp-78h] BYREF
  void *DeviceRegKey; // [rsp+98h] [rbp-70h] BYREF
  __int64 v102; // [rsp+A0h] [rbp-68h]
  __int64 v103; // [rsp+A8h] [rbp-60h]
  PVOID Object; // [rsp+B0h] [rbp-58h] BYREF
  int v105; // [rsp+B8h] [rbp-50h]
  __int64 v106; // [rsp+C8h] [rbp-40h]
  int v107; // [rsp+D0h] [rbp-38h]
  ULONG ResultLength; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v109; // [rsp+E0h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  struct _FILE_OBJECT *v111; // [rsp+F8h] [rbp-10h]
  unsigned int v112; // [rsp+100h] [rbp-8h]
  struct _DEVICE_OBJECT *v113; // [rsp+108h] [rbp+0h]
  HANDLE Handle; // [rsp+110h] [rbp+8h] BYREF
  struct _UNICODE_STRING v115; // [rsp+118h] [rbp+10h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+128h] [rbp+20h] BYREF
  __int128 v117; // [rsp+158h] [rbp+50h]
  __int64 v118; // [rsp+168h] [rbp+60h]
  _OWORD v119[4]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v120; // [rsp+1B8h] [rbp+B0h]
  _OWORD v121[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v122; // [rsp+208h] [rbp+100h]
  char v123[40]; // [rsp+218h] [rbp+110h] BYREF
  int v124; // [rsp+240h] [rbp+138h]
  int v125; // [rsp+244h] [rbp+13Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+268h] [rbp+160h] BYREF
  _DWORD *v127; // [rsp+288h] [rbp+180h]
  __int64 v128; // [rsp+290h] [rbp+188h]
  __int64 v129; // [rsp+298h] [rbp+190h]
  _DWORD v130[2]; // [rsp+2A0h] [rbp+198h] BYREF
  int *v131; // [rsp+2A8h] [rbp+1A0h]
  __int64 v132; // [rsp+2B0h] [rbp+1A8h]
  int *v133; // [rsp+2B8h] [rbp+1B0h]
  __int64 v134; // [rsp+2C0h] [rbp+1B8h]
  int *v135; // [rsp+2C8h] [rbp+1C0h]
  __int64 v136; // [rsp+2D0h] [rbp+1C8h]
  int *v137; // [rsp+2D8h] [rbp+1D0h]
  __int64 v138; // [rsp+2E0h] [rbp+1D8h]
  int *v139; // [rsp+2E8h] [rbp+1E0h]
  __int64 v140; // [rsp+2F0h] [rbp+1E8h]
  int *v141; // [rsp+2F8h] [rbp+1F0h]
  __int64 v142; // [rsp+300h] [rbp+1F8h]
  int *v143; // [rsp+308h] [rbp+200h]
  __int64 v144; // [rsp+310h] [rbp+208h]
  int *v145; // [rsp+318h] [rbp+210h]
  __int64 v146; // [rsp+320h] [rbp+218h]
  int *v147; // [rsp+328h] [rbp+220h]
  __int64 v148; // [rsp+330h] [rbp+228h]
  unsigned int *v149; // [rsp+338h] [rbp+230h]
  __int64 v150; // [rsp+340h] [rbp+238h]
  int *v151; // [rsp+348h] [rbp+240h]
  __int64 v152; // [rsp+350h] [rbp+248h]
  int *v153; // [rsp+358h] [rbp+250h]
  __int64 v154; // [rsp+360h] [rbp+258h]
  unsigned int *v155; // [rsp+368h] [rbp+260h]
  __int64 v156; // [rsp+370h] [rbp+268h]
  int *v157; // [rsp+378h] [rbp+270h]
  __int64 v158; // [rsp+380h] [rbp+278h]
  PVOID *v159; // [rsp+388h] [rbp+280h]
  __int64 v160; // [rsp+390h] [rbp+288h]
  PVOID *p_Object; // [rsp+398h] [rbp+290h]
  __int64 v162; // [rsp+3A0h] [rbp+298h]
  _BYTE v163[144]; // [rsp+3A8h] [rbp+2A0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+438h] [rbp+330h] BYREF
  int v165; // [rsp+43Ch] [rbp+334h]
  int v166; // [rsp+444h] [rbp+33Ch]

  v8 = a1;
  v105 = -1;
  v9 = a4;
  v82 = -1;
  v10 = a3;
  v106 = a7;
  v103 = a1;
  v83[0] = 0;
  LOWORD(v85) = 0;
  DeviceRegKey = a4;
  v102 = a3;
  v113 = a5;
  v111 = a6;
  v11 = (char *)Win32AllocPoolZInit(0x6E8uLL);
  if ( v11 )
  {
    *((_DWORD *)v11 + 176) = 1;
    *((_DWORD *)v11 + 177) = 1;
    if ( (int)RIMGetProductString((__int64)v11, a5, a6) < 0 )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
    *((_DWORD *)v11 + 60) = 2;
    RIMGetContainerId(a5, v11 + 244, (_DWORD *)v11 + 60);
    v12 = *v9;
    DestinationString = (struct _UNICODE_STRING)*((_OWORD *)v11 + 17);
    if ( !RIMIsDeviceExcluded(v12, &DestinationString) )
    {
      v13 = *(_DWORD *)(v8 + 76);
      v14 = 1;
      if ( (v13 & 4) != 0 && *v9 == 2 )
      {
        *((_DWORD *)v11 + 6) = 6;
        *((_DWORD *)v11 + 369) = 3;
      }
      else
      {
        if ( (*(_DWORD *)(v8 + 76) & 4) == 0 || *v9 != 1 )
        {
          if ( (v13 & 0x18) != 0 && (unsigned __int16)(*v9 - 4) <= 1u )
          {
            *((_DWORD *)v11 + 6) = 1;
            *((_DWORD *)v11 + 369) = *v9 != 5;
            v15 = RIMAssignTouchType(v8, (__int64)v11, v10, v9, v113, v111);
            if ( v15 == -1073741668 )
            {
LABEL_87:
              if ( v15 >= 0 )
              {
                if ( *((_DWORD *)v11 + 6) == 8 )
                  v15 = RIMValidatePTPProperties(v112, v11);
                if ( v15 >= 0 )
                {
                  *(_DWORD *)(a2 + 316) = 1;
                  if ( (unsigned int)(*((_DWORD *)v11 + 6) - 1) <= 4 )
                  {
                    *(_DWORD *)(v8 + 668) += *((_DWORD *)v11 + 176);
                    *((_DWORD *)v11 + 59) |= 0x400u;
                  }
                  if ( *((_DWORD *)v11 + 6) != 8 )
                    ApiSetUpdatePointerDeviceSystemMetrics();
                  *((_DWORD *)v11 + 216) = 100;
                  v63 = v11 + 1504;
                  *((_QWORD *)v11 + 109) = 100 * gliQpcFreq.QuadPart / 1000;
                  *(_QWORD *)(a2 + 416) = v11;
                  *((_QWORD *)v11 + 2) = a2;
                  v64 = *(_QWORD **)(v8 + 528);
                  *((_QWORD *)v11 + 188) = v8 + 520;
                  *((_QWORD *)v11 + 189) = v64;
                  if ( *v64 != v8 + 520 )
                    __fastfail(3u);
                  *v64 = v63;
                  *(_QWORD *)(v8 + 528) = v63;
                  *((_QWORD *)v11 + 90) = -1LL;
                  if ( !(unsigned int)RIMGetDeviceParent(v8 + 520, a2) )
                    WPP_RECORDER_SF_(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      3u,
                      3u,
                      0x11u,
                      (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
                  return (unsigned int)v15;
                }
              }
LABEL_112:
              RIMFreePointerDevice(v8, v11);
              return (unsigned int)v15;
            }
            if ( *v9 == 5 )
            {
              v112 = *((_DWORD *)v11 + 6);
              *((_DWORD *)v11 + 6) = 8;
            }
            v16 = *(_DWORD *)(v8 + 76);
            if ( (v16 & 4) != 0 && (unsigned int)(*((_DWORD *)v11 + 6) - 6) <= 1 )
              v14 = 0;
            if ( (v16 & 8) != 0 && *((_DWORD *)v11 + 6) == 8 )
              v14 = 0;
            v10 = v102;
            if ( (v16 & 0x10) == 0 || (unsigned int)(*((_DWORD *)v11 + 6) - 1) > 4 )
            {
LABEL_23:
              if ( v14 != 1 )
                goto LABEL_24;
LABEL_111:
              v15 = -1073741808;
              goto LABEL_112;
            }
          }
          else if ( (v13 & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
          {
            goto LABEL_111;
          }
          v14 = 0;
          goto LABEL_23;
        }
        *((_DWORD *)v11 + 6) = 7;
        *((_DWORD *)v11 + 369) = 2;
      }
    }
LABEL_24:
    v83[0] = 1;
    if ( (int)rimHidP_GetSpecificValueCaps(0, 13, 0, 86, (__int64)v123, (__int64)v83, v10) >= 0 )
    {
      if ( v124 >= v125 || v124 < 0 || v125 < 0xFFFF )
        goto LABEL_117;
      *((_DWORD *)v11 + 59) |= 0x80u;
      *((_DWORD *)v11 + 368) = v125;
    }
    v83[0] = 0;
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, *((unsigned __int16 *)v11 + 358), 0, 0LL, (__int64)v83, v10);
    v15 = SpecificValueCaps;
    if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
      goto LABEL_87;
    v18 = 6LL;
    v19 = v11 + 32;
    do
    {
      *v19 = -1;
      v19 += 4;
      --v18;
    }
    while ( v18 );
    v20 = Win32AllocPoolZInit(2400LL * *((unsigned int *)v11 + 176));
    *((_QWORD *)v11 + 85) = v20;
    if ( !v20 )
      goto LABEL_87;
    if ( (*((_DWORD *)v11 + 59) & 2) == 0
      || !*(_WORD *)(*((_QWORD *)v11 + 87) + 14LL)
      || (LOWORD(v85) = 2,
          v67 = rimHidP_GetSpecificValueCaps(
                  0,
                  0,
                  *(unsigned __int16 *)(*((_QWORD *)v11 + 87) + 14LL),
                  0,
                  (__int64)v163,
                  (__int64)&v85,
                  v102),
          v15 = v67,
          v67 >= 0) )
    {
      v21 = v83[0] + (unsigned __int16)v85;
      v89 = v21;
      v22 = Win32AllocPool();
      if ( !v22 )
      {
LABEL_86:
        v8 = v103;
        goto LABEL_87;
      }
      v15 = rimHidP_GetSpecificValueCaps(0, 0, *((unsigned __int16 *)v11 + 358), 0, v22, (__int64)v83, v102);
      if ( v15 < 0 )
        goto LABEL_85;
      if ( (*((_DWORD *)v11 + 59) & 2) == 0
        && !(unsigned int)RIMGetPropertyCount((__int64)v11, *((_WORD *)v11 + 358), v83[0], v102) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xCu,
          (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
      }
      if ( (_WORD)v85 )
      {
        v68 = v83[0];
        v69 = v163;
        v70 = 0;
        do
        {
          if ( (unsigned int)v68 >= v21 )
            break;
          v71 = 9 * v68;
          ++v70;
          v68 = (unsigned int)(v68 + 1);
          *(_OWORD *)(v22 + 8 * v71) = *(_OWORD *)v69;
          *(_OWORD *)(v22 + 8 * v71 + 16) = *((_OWORD *)v69 + 1);
          *(_OWORD *)(v22 + 8 * v71 + 32) = *((_OWORD *)v69 + 2);
          *(_OWORD *)(v22 + 8 * v71 + 48) = *((_OWORD *)v69 + 3);
          v72 = *((_QWORD *)v69 + 8);
          v69 += 72;
          *(_QWORD *)(v22 + 8 * v71 + 64) = v72;
        }
        while ( v70 < 2 );
      }
      v23 = 0LL;
      v94 = -1;
      v24 = 0LL;
      v25 = 0;
      v86 = 0;
      v87 = 0;
      v84 = 0;
      v92 = 0;
      if ( v21 )
      {
        v26 = (unsigned __int8 *)(v22 + 16);
        v90 = -1;
        v93 = -1;
        v96 = -1;
        v99 = -1;
        v95 = -1;
        v97 = -1;
        v98 = -1;
        v100 = -1;
        v91 = -1;
        while ( v25 < 6 )
        {
          if ( *((_DWORD *)v11 + 6) == 4 && !*v26 )
          {
            v15 = -1073741668;
            break;
          }
          v27 = *v9;
          if ( v27 == 2 )
            v27 = 1;
          v28 = *((_WORD *)v26 + 20) | ((*((_WORD *)v26 - 8) | (unsigned __int16)(16 * v27)) << 8);
          if ( (unsigned int)RIMIsEssentialUsage(v28, v23, v24) )
          {
            v29 = v92;
            v30 = 60LL * v92;
            v31 = 16LL * v92;
            *(_WORD *)&v11[v30 + 320] = *((_WORD *)v26 - 8);
            *(_WORD *)&v11[v30 + 332] = *((_WORD *)v26 + 20);
            *(_DWORD *)&v11[v30 + 324] = *(v26 - 14);
            *(_WORD *)&v11[v30 + 330] = *((_WORD *)v26 - 3);
            *(_DWORD *)&v11[v30 + 336] = *v26;
            *(_DWORD *)&v11[v30 + 352] = *((_DWORD *)v26 + 6);
            *(_DWORD *)&v11[v30 + 356] = *((_DWORD *)v26 + 7);
            v32 = 60 * (v29 + 6);
            *(_DWORD *)&v11[v32] = *((_DWORD *)v26 + 8);
            *(_DWORD *)&v11[v30 + 364] = *((_DWORD *)v26 + 9);
            *(_WORD *)&v11[v30 + 376] = *((_WORD *)v26 + 1);
            *(_DWORD *)&v11[16 * v29 + 32] = v29;
            *(_WORD *)&v11[v31 + 28] = *((_WORD *)v26 - 8);
            *(_WORD *)&v11[v31 + 30] = *((_WORD *)v26 + 20);
            v33 = *(_OWORD *)v26;
            *(_OWORD *)&ObjectAttributes.Length = *((_OWORD *)v26 - 1);
            v34 = *((_OWORD *)v26 + 1);
            *(_OWORD *)&ObjectAttributes.ObjectName = v33;
            v35 = *((_OWORD *)v26 + 2);
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = v34;
            v118 = *((_QWORD *)v26 + 6);
            v117 = v35;
            RIMRetrieveNormalizationRange(v32, &ObjectAttributes, &v11[v31 + 36]);
            ++v92;
            if ( *((_WORD *)v26 + 20) == 48 && *((_WORD *)v26 - 8) == 1 )
            {
              v36 = *((_OWORD *)v26 - 1);
              v37 = *(_OWORD *)v26;
              v105 = v84;
              v119[0] = v36;
              v38 = *((_OWORD *)v26 + 1);
              v119[1] = v37;
              v39 = *((_OWORD *)v26 + 2);
              v119[2] = v38;
              v120 = *((_QWORD *)v26 + 6);
              v119[3] = v39;
              *((_DWORD *)v11 + 41) = RIMComputeHighMetricValue(v119);
              v40 = *((_DWORD *)v26 + 6);
              *((_DWORD *)v11 + 43) = v40;
              v94 = v40;
              v41 = *((_DWORD *)v26 + 7);
              *((_DWORD *)v11 + 45) = v41;
              v42 = *((_DWORD *)v26 + 5);
              v43 = *((_DWORD *)v26 + 9);
              v96 = v41;
              v95 = *((_DWORD *)v26 + 4);
              v90 = v42;
              v93 = v43;
              if ( (v95 & 0xF) == 0xE )
              {
                v44 = v87;
                if ( (_BYTE)v42 == 51 )
                  v44 = v43;
                v87 = v44;
              }
            }
            if ( *((_WORD *)v26 + 20) == 49 && *((_WORD *)v26 - 8) == 1 )
            {
              v45 = *(_OWORD *)v26;
              v82 = v84;
              v121[0] = *((_OWORD *)v26 - 1);
              v46 = *((_OWORD *)v26 + 1);
              v121[1] = v45;
              v47 = *((_OWORD *)v26 + 2);
              v121[2] = v46;
              v122 = *((_QWORD *)v26 + 6);
              v121[3] = v47;
              *((_DWORD *)v11 + 42) = RIMComputeHighMetricValue(v121);
              v48 = *((_DWORD *)v26 + 6);
              *((_DWORD *)v11 + 44) = v48;
              v98 = v48;
              v49 = *((_DWORD *)v26 + 7);
              *((_DWORD *)v11 + 46) = v49;
              v50 = *((_DWORD *)v26 + 5);
              v51 = *((_DWORD *)v26 + 9);
              v99 = v49;
              v91 = *((_DWORD *)v26 + 4);
              v97 = v50;
              v100 = v51;
              if ( (v91 & 0xF) == 0xE )
              {
                v52 = v86;
                if ( (_BYTE)v50 == 51 )
                  v52 = v51;
                v86 = v52;
              }
            }
            RIMCheckPressureUsageStatus(v103, v11, v28);
          }
          v9 = (__int16 *)DeviceRegKey;
          v26 += 72;
          if ( ++v84 >= v89 )
          {
            v23 = v86;
            LODWORD(v24) = v87;
            goto LABEL_61;
          }
          v25 = v92;
        }
        LODWORD(v24) = v87;
        v23 = v86;
      }
      else
      {
        v96 = -1;
        v90 = -1;
        v95 = -1;
        v93 = -1;
        v98 = -1;
        v99 = -1;
        v97 = -1;
        v91 = -1;
        v100 = -1;
      }
LABEL_61:
      v53 = *((_DWORD *)v11 + 6);
      v89 = -1;
      v54 = -1;
      v84 = -1;
      v88 = -1;
      Object = 0LL;
      *(_QWORD *)&v115.Length = 0LL;
      Handle = 0LL;
      v109 = 0LL;
      DeviceRegKey = 0LL;
      if ( !*(_QWORD *)(v103 + 760) || (unsigned int)(v53 - 6) <= 2 )
      {
        *(_DWORD *)(a2 + 184) &= ~0x200000u;
        goto LABEL_63;
      }
      if ( (_DWORD)v24
        && (_DWORD)v23
        && ((_DWORD)v24 == 1205 && (_DWORD)v23 == 906 || (_DWORD)v24 == 1080 && (_DWORD)v23 == 1920) )
      {
        v89 = 1;
      }
      if ( (int)RIMGetDeviceObjectPointer(a2 + 208, v23, 3LL, &Handle, &v115, &Object) >= 0 )
      {
        ObfReferenceObject(Object);
        if ( (int)RIMGetPointerDevicePDO((PDEVICE_OBJECT)Object, &v109) >= 0
          && IoOpenDeviceRegistryKey(**((PDEVICE_OBJECT **)v109 + 8), 1u, 0x20019u, &DeviceRegKey) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"EnhancedPowerManagementNoDelay");
          if ( ZwQueryValueKey(
                 DeviceRegKey,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x400u,
                 &ResultLength) >= 0
            && v165 == 4 )
          {
            v73 = -1;
            if ( v166 )
              v73 = 1;
            v84 = v73;
          }
          RtlInitUnicodeString(&DestinationString, L"LegacyTouchScaling");
          if ( ZwQueryValueKey(
                 DeviceRegKey,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x400u,
                 &ResultLength) >= 0
            && v165 == 4 )
          {
            v88 = v166 != 0;
          }
          ZwClose(DeviceRegKey);
        }
        ObfDereferenceObject(v109);
        ZwClose(Handle);
        ObfDereferenceObject(*(PVOID *)&v115.Length);
        ObfDereferenceObject(Object);
      }
      RtlInitUnicodeString(
        &v115,
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\LegacyTouchScaling");
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &v115;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&DeviceRegKey, 0x20019u, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Enable");
        if ( ZwQueryValueKey(
               DeviceRegKey,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x400u,
               &ResultLength) >= 0
          && v165 == 4 )
        {
          v54 = v166 != 0;
        }
        ZwClose(DeviceRegKey);
      }
      if ( dword_1C00FE990 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00FE990, 0x400000000000uLL) )
      {
        v128 = 2LL;
        v130[1] = 0;
        v127 = v130;
        v129 = *(_QWORD *)(a2 + 216);
        v130[0] = *(unsigned __int16 *)(a2 + 208);
        v131 = &v94;
        v133 = &v96;
        v135 = &v98;
        v137 = &v99;
        v139 = &v93;
        v141 = &v87;
        v143 = &v90;
        v145 = &v95;
        v147 = &v100;
        v149 = &v86;
        v151 = &v97;
        v153 = &v91;
        v155 = &v89;
        v157 = &v84;
        LODWORD(v109) = v88;
        v132 = 4LL;
        v134 = 4LL;
        v136 = 4LL;
        v138 = 4LL;
        v140 = 4LL;
        v142 = 4LL;
        v144 = 4LL;
        v146 = 4LL;
        v148 = 4LL;
        v150 = 4LL;
        v152 = 4LL;
        v154 = 4LL;
        v156 = 4LL;
        v158 = 4LL;
        v160 = 4LL;
        v159 = &v109;
        p_Object = &Object;
        LODWORD(Object) = v54;
        v162 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C00FE990, &unk_1C00EADB0, 0LL, v74, 0x14u, &pData);
      }
      v75 = v88;
      v76 = *(_DWORD *)(a2 + 184) | 0x200000;
      *(_DWORD *)(a2 + 184) = v76;
      if ( v75 == -1 )
      {
        if ( v54 == -1 )
          goto LABEL_63;
        if ( !v54 )
          goto LABEL_159;
      }
      else if ( !v75 )
      {
LABEL_159:
        v77 = v76 & 0xFFDFFFFF;
LABEL_163:
        *(_DWORD *)(a2 + 184) = v77;
LABEL_63:
        v55 = *(_OWORD *)(v11 + 156);
        *((_DWORD *)v11 + 178) = v92;
        v56 = *(_OWORD *)(v11 + 172);
        *(_OWORD *)(v11 + 140) = v55;
        *(_OWORD *)(v11 + 188) = v56;
        if ( v15 >= 0 )
        {
          if ( v105 != -1
            && v82 != -1
            && *(_DWORD *)(v22 + 72LL * v105 + 44) != *(_DWORD *)(v22 + 72LL * v105 + 40)
            && *(_DWORD *)(v22 + 72LL * v82 + 44) != *(_DWORD *)(v22 + 72LL * v82 + 40) )
          {
            if ( *(_DWORD *)(v22 + 72LL * v105 + 52) <= *(_DWORD *)(v22 + 72LL * v105 + 48)
              || *(_DWORD *)(v22 + 72LL * v82 + 52) <= *(_DWORD *)(v22 + 72LL * v82 + 48)
              || *((_DWORD *)v11 + 41) <= *((_DWORD *)v11 + 39)
              || *((_DWORD *)v11 + 42) <= *((_DWORD *)v11 + 40) )
            {
              if ( (*(_DWORD *)(a2 + 184) & 0x200000) != 0 )
                v78 = (int)IsGetPhysicalSizeFromMonitorSupported_0() < 0 ? 0 : GetPhysicalSizeFromMonitor_0();
              else
                v78 = RIMGetPhysicalSizeFromMonitor(v11);
              if ( !v78 )
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  3u,
                  0xDu,
                  (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
            }
            if ( (unsigned int)(*((_DWORD *)v11 + 6) - 7) > 1 )
            {
              v57 = (*(_DWORD *)(a2 + 184) & 0x200000) == 0;
              v88 = 0;
              if ( v57 )
              {
                RIMReadDigitizerToMonitorMappings(a2);
                RIMFindMonitorForDigitizer(v103, (__int64)v11, v58, &v88);
              }
              else
              {
                if ( (int)IsReadDigitizerToMonitorMappingsSupported_0() >= 0 )
                  ReadDigitizerToMonitorMappings_0();
                if ( (int)IsFindMonitorForDigitizerSupported_0() >= 0 )
                  FindMonitorForDigitizer_0();
              }
              v59 = v102;
              if ( *v9 == 4 )
              {
                v60 = *(_QWORD *)v106;
                v107 = *(_DWORD *)(v106 + 8);
                Length = (unsigned int)v11;
                v106 = v60;
                if ( (int)ApiSetValidateDeviceSignature() < 0 )
                {
                  v15 = -1073741668;
                  v79 = 14;
LABEL_177:
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    3u,
                    3u,
                    v79,
                    (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
                  goto LABEL_85;
                }
                v61 = *((_DWORD *)v11 + 59);
                if ( (v61 & 0x100) == 0 )
                  *((_DWORD *)v11 + 59) = v61 & 0xFFFFFF7F;
              }
LABEL_79:
              if ( !*((_QWORD *)v11 + 33) )
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  3u,
                  0xFu,
                  (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
              v15 = RIMGetDeviceButtons(v103, (__int64)v11, v59, v9, Length);
              if ( v15 >= 0 )
              {
                if ( *((_DWORD *)v11 + 6) != 8 )
                {
                  v62 = *(struct _UNICODE_STRING *)(a2 + 208);
                  if ( (int)IsRetrieveCalibrationDataSupported_0() >= 0 )
                  {
                    DestinationString = v62;
                    RetrieveCalibrationData_0();
                  }
                }
                goto LABEL_85;
              }
              v79 = 16;
              goto LABEL_177;
            }
            v66 = Win32AllocPoolZInit(0x248uLL);
            *((_QWORD *)v11 + 33) = v66;
            if ( v66 )
            {
              RIMInitFakeMonitor((__int64)v11);
              if ( *((_DWORD *)v11 + 6) != 8 )
              {
                v59 = v102;
                goto LABEL_79;
              }
              RIMComputeVirtualHimetricSize();
              v59 = v102;
              v80 = *(_QWORD *)v106;
              v107 = *(_DWORD *)(v106 + 8);
              Length = (unsigned int)v11;
              v106 = v80;
              if ( (int)ApiSetValidateDeviceSignature() >= 0 )
                goto LABEL_79;
            }
          }
          v15 = -1073741668;
        }
LABEL_85:
        Win32FreePool();
        goto LABEL_86;
      }
      v77 = v76 | 0x200000;
      goto LABEL_163;
    }
LABEL_117:
    v15 = -1073741668;
    goto LABEL_112;
  }
  return 3221225628LL;
}
