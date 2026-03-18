/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C0008C38
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 * Callees:
 *     IsGetPhysicalSizeFromMonitorSupported_0 @ 0x1C0002CA0 (IsGetPhysicalSizeFromMonitorSupported_0.c)
 *     GetPhysicalSizeFromMonitor_0 @ 0x1C0002CA8 (GetPhysicalSizeFromMonitor_0.c)
 *     IsReadDigitizerToMonitorMappingsSupported_0 @ 0x1C0002DA0 (IsReadDigitizerToMonitorMappingsSupported_0.c)
 *     ReadDigitizerToMonitorMappings_0 @ 0x1C0002DA8 (ReadDigitizerToMonitorMappings_0.c)
 *     IsFindMonitorForDigitizerSupported_0 @ 0x1C0002DB0 (IsFindMonitorForDigitizerSupported_0.c)
 *     FindMonitorForDigitizer_0 @ 0x1C0002DB8 (FindMonitorForDigitizer_0.c)
 *     IsRetrieveCalibrationDataSupported_0 @ 0x1C0002DC0 (IsRetrieveCalibrationDataSupported_0.c)
 *     RetrieveCalibrationData_0 @ 0x1C0002DC8 (RetrieveCalibrationData_0.c)
 *     RIMAbIsDeviceArbitrationSupported @ 0x1C00054AC (RIMAbIsDeviceArbitrationSupported.c)
 *     rimSetupPalmTelemetry @ 0x1C0005530 (rimSetupPalmTelemetry.c)
 *     RIMInitializeDeadzone @ 0x1C0005588 (RIMInitializeDeadzone.c)
 *     RIMInitFakeMonitor @ 0x1C0005C08 (RIMInitFakeMonitor.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C0005C6C (RIMComputeVirtualHimetricSize.c)
 *     ApiSetValidateDeviceSignature @ 0x1C000622C (ApiSetValidateDeviceSignature.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00062DC (RIMGetMaxCountFeatureDetails.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0006568 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMFindMonitorForDigitizer @ 0x1C00066B4 (RIMFindMonitorForDigitizer.c)
 *     RIMFreePointerDevice @ 0x1C0006844 (RIMFreePointerDevice.c)
 *     RIMGetProductString @ 0x1C0006B34 (RIMGetProductString.c)
 *     RIMIsDeviceExcluded @ 0x1C0006C94 (RIMIsDeviceExcluded.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C0006D58 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMUpdateMonitorQuirk @ 0x1C0006E58 (RIMUpdateMonitorQuirk.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C000759C (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     RIMGetDeviceButtons @ 0x1C0007734 (RIMGetDeviceButtons.c)
 *     RIMAssignTouchType @ 0x1C0007A34 (RIMAssignTouchType.c)
 *     RIMGetDeviceParent @ 0x1C0007BC8 (RIMGetDeviceParent.c)
 *     RIMGetContainerId @ 0x1C000876C (RIMGetContainerId.c)
 *     RIMGetPropertyCount @ 0x1C0008AB8 (RIMGetPropertyCount.c)
 *     RIMIsEssentialUsage @ 0x1C00096CC (RIMIsEssentialUsage.c)
 *     RIMCheckPressureUsageStatus @ 0x1C0009774 (RIMCheckPressureUsageStatus.c)
 *     RIMRetrieveNormalizationRange @ 0x1C00097A0 (RIMRetrieveNormalizationRange.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0009C68 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C007C4F8 (RIMComputeSpecificHighMetricValue.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     RIMGetPhysicalSizeFromMonitor @ 0x1C00D39B0 (RIMGetPhysicalSizeFromMonitor.c)
 *     RIMValidatePTPProperties @ 0x1C00E262C (RIMValidatePTPProperties.c)
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
  __int64 v7; // r12
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // edx
  __int16 v14; // cx
  int v15; // ecx
  int v16; // esi
  int v17; // edi
  int v18; // edx
  int SpecificValueCaps; // eax
  __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // rsi
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // r9d
  int v27; // eax
  int v28; // r10d
  unsigned int v29; // r11d
  __m128i *v30; // r15
  __int16 v31; // r12
  unsigned __int16 v32; // r12
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  __m128i v37; // xmm1
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __m128i v40; // xmm5
  __int64 v41; // xmm0_8
  __m128i v42; // xmm2
  __m128i v43; // xmm3
  __m128i v44; // xmm4
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  int v49; // eax
  __m128i v50; // xmm5
  __m128i v51; // xmm2
  __m128i v52; // xmm3
  __m128i v53; // xmm4
  int v54; // eax
  int v55; // eax
  int v56; // ecx
  int v57; // edx
  int v58; // eax
  int v59; // edx
  int v60; // r8d
  int v61; // r11d
  __int16 *v62; // r15
  __int128 v63; // xmm1
  bool v64; // zf
  __int64 v65; // r8
  int v66; // edx
  __int64 v67; // rdi
  __int64 v68; // xmm0_8
  int v69; // eax
  struct _UNICODE_STRING v70; // xmm6
  _QWORD *v71; // rcx
  int v72; // edx
  int v74; // edx
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // eax
  __int64 v78; // r8
  unsigned int v79; // r9d
  unsigned int v80; // r10d
  _BYTE *v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // xmm0_8
  int v84; // edx
  int v85; // eax
  int v86; // r9d
  __int64 v87; // xmm0_8
  unsigned int v88; // [rsp+28h] [rbp-E0h]
  int v89; // [rsp+88h] [rbp-80h]
  unsigned __int16 v90[2]; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned __int16 v91[2]; // [rsp+90h] [rbp-78h] BYREF
  int v92; // [rsp+94h] [rbp-74h] BYREF
  int v93; // [rsp+98h] [rbp-70h]
  int v94; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v95; // [rsp+A0h] [rbp-68h]
  __int64 v96; // [rsp+A8h] [rbp-60h]
  int v97; // [rsp+B0h] [rbp-58h]
  int v98; // [rsp+B4h] [rbp-54h]
  int v99; // [rsp+B8h] [rbp-50h]
  int v100; // [rsp+BCh] [rbp-4Ch]
  int v101; // [rsp+C0h] [rbp-48h]
  int v102; // [rsp+C4h] [rbp-44h]
  unsigned int v103; // [rsp+C8h] [rbp-40h]
  int v104; // [rsp+CCh] [rbp-3Ch]
  int v105; // [rsp+D0h] [rbp-38h]
  int v106; // [rsp+D4h] [rbp-34h]
  int v107; // [rsp+D8h] [rbp-30h]
  int v108; // [rsp+DCh] [rbp-2Ch]
  __int64 v109; // [rsp+E8h] [rbp-20h]
  int v110; // [rsp+F0h] [rbp-18h]
  unsigned int v111; // [rsp+F8h] [rbp-10h]
  __int64 v112; // [rsp+100h] [rbp-8h]
  struct _FILE_OBJECT *v113; // [rsp+108h] [rbp+0h]
  struct _DEVICE_OBJECT *v114; // [rsp+110h] [rbp+8h]
  __int16 *v115; // [rsp+118h] [rbp+10h]
  struct _UNICODE_STRING v116; // [rsp+128h] [rbp+20h] BYREF
  _OWORD v117[4]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v118; // [rsp+178h] [rbp+70h]
  _OWORD v119[4]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v120; // [rsp+1C8h] [rbp+C0h]
  _OWORD v121[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v122; // [rsp+218h] [rbp+110h]
  char v123[40]; // [rsp+228h] [rbp+120h] BYREF
  int v124; // [rsp+250h] [rbp+148h]
  int v125; // [rsp+254h] [rbp+14Ch]
  _BYTE v126[144]; // [rsp+278h] [rbp+170h] BYREF

  v7 = a2;
  v108 = -1;
  v89 = -1;
  v10 = a3;
  v109 = a7;
  v112 = a2;
  v90[0] = 0;
  v91[0] = 0;
  v115 = a4;
  v96 = a3;
  v114 = a5;
  v113 = a6;
  v11 = Win32AllocPoolZInit(0x728uLL);
  v12 = v11;
  if ( v11 )
  {
    *(_DWORD *)(v11 + 688) = 1;
    *(_DWORD *)(v11 + 692) = 1;
    *(_QWORD *)(v11 + 1488) = v11 + 1480;
    *(_QWORD *)(v11 + 1480) = v11 + 1480;
    if ( (int)RIMGetProductString(v11, a5, a6) < 0 )
    {
      LOBYTE(v13) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        3,
        14,
        (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
    }
    *(_DWORD *)(v12 + 256) = 2;
    RIMGetContainerId(a5, (void *)(v12 + 260), (_DWORD *)(v12 + 256));
    v14 = *a4;
    v116 = *(struct _UNICODE_STRING *)(v12 + 288);
    if ( !RIMIsDeviceExcluded(v14, &v116) )
    {
      v15 = *(_DWORD *)(a1 + 76);
      v16 = 1;
      if ( (v15 & 4) != 0 && *a4 == 2 )
      {
        *(_DWORD *)(v12 + 24) = 5;
        if ( RIMAbIsDeviceArbitrationSupported() )
        {
          rimSetupPalmTelemetry(a1);
          if ( (int)RIMInitializeDeadzone() < 0 )
          {
            LOBYTE(v74) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v74,
              3,
              15,
              (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
            gDeviceArbitrationType = 1;
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 76) & 4) == 0 || *a4 != 1 )
        {
          if ( (v15 & 0x18) != 0 && (unsigned __int16)(*a4 - 4) <= 1u )
          {
            *(_DWORD *)(v12 + 24) = 1;
            v17 = RIMAssignTouchType(v12, v10);
            if ( v17 == -1073741668 )
              goto LABEL_87;
            if ( *a4 == 5 )
            {
              v111 = *(_DWORD *)(v12 + 24);
              *(_DWORD *)(v12 + 24) = 7;
            }
            v18 = *(_DWORD *)(a1 + 76);
            if ( (v18 & 4) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 5) <= 1 )
              v16 = 0;
            if ( (v18 & 8) != 0 && *(_DWORD *)(v12 + 24) == 7 )
              v16 = 0;
            if ( (v18 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
              v16 = 0;
            if ( !v16 )
            {
              v17 = RIMGetMaxCountFeatureDetails(a1, v12, v96, a4, (__int64)v114, (__int64)v113);
              if ( v17 == -1073741668 )
                goto LABEL_87;
            }
            v10 = v96;
          }
          else
          {
            if ( (v15 & 0x20) == 0 || (*(_DWORD *)(v7 + 184) & 0x2000) == 0 )
              goto LABEL_117;
            v16 = 0;
          }
          if ( v16 != 1 )
            goto LABEL_27;
LABEL_117:
          v17 = -1073741808;
          goto LABEL_118;
        }
        *(_DWORD *)(v12 + 24) = 6;
      }
    }
LABEL_27:
    v90[0] = 1;
    if ( (int)rimHidP_GetSpecificValueCaps(0, 13, 0, 86, (__int64)v123, (__int64)v90, v10) >= 0 )
    {
      if ( v124 >= v125 || v124 < 0 || v125 < 0xFFFF )
        goto LABEL_123;
      *(_DWORD *)(v12 + 252) |= 0x200u;
      *(_DWORD *)(v12 + 1456) = v125;
    }
    v90[0] = 0;
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v12 + 700), 0, 0LL, (__int64)v90, v10);
    v17 = SpecificValueCaps;
    if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
      goto LABEL_87;
    v20 = 6LL;
    v21 = (_DWORD *)(v12 + 32);
    do
    {
      *v21 = -1;
      v21 += 4;
      --v20;
    }
    while ( v20 );
    if ( (int)RIMCmAllocPointerDeviceContacts(v12) < 0 )
      goto LABEL_87;
    if ( (*(_DWORD *)(v12 + 252) & 8) == 0
      || !*(_WORD *)(*(_QWORD *)(v12 + 680) + 8LL)
      || (v91[0] = 2,
          v77 = rimHidP_GetSpecificValueCaps(
                  0,
                  0,
                  *(unsigned __int16 *)(*(_QWORD *)(v12 + 680) + 8LL),
                  0,
                  (__int64)v126,
                  (__int64)v91,
                  v96),
          v17 = v77,
          v77 >= 0) )
    {
      v103 = v90[0] + v91[0];
      v22 = Win32AllocPool(72LL * v103, 2020635474LL);
      if ( v22 )
      {
        v17 = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v12 + 700), 0, v22, (__int64)v90, v96);
        if ( v17 < 0 )
          goto LABEL_86;
        if ( (*(_DWORD *)(v12 + 252) & 8) == 0 )
        {
          v23 = RIMGetPropertyCount(v12, *(_WORD *)(v12 + 700), v90[0], v96);
          v24 = 0;
          if ( !v23 )
          {
            LOBYTE(v24) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v24,
              3,
              16,
              (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
          }
        }
        if ( v91[0] )
        {
          v78 = v90[0];
          v79 = 0;
          v80 = v103;
          v81 = v126;
          do
          {
            if ( (unsigned int)v78 >= v80 )
              break;
            v82 = 9 * v78;
            ++v79;
            v78 = (unsigned int)(v78 + 1);
            *(_OWORD *)(v22 + 8 * v82) = *(_OWORD *)v81;
            *(_OWORD *)(v22 + 8 * v82 + 16) = *((_OWORD *)v81 + 1);
            *(_OWORD *)(v22 + 8 * v82 + 32) = *((_OWORD *)v81 + 2);
            *(_OWORD *)(v22 + 8 * v82 + 48) = *((_OWORD *)v81 + 3);
            v83 = *((_QWORD *)v81 + 8);
            v81 += 72;
            *(_QWORD *)(v22 + 8 * v82 + 64) = v83;
          }
          while ( v79 < 2 );
        }
        v25 = 0;
        v26 = -1;
        v27 = 0;
        v28 = -1;
        v29 = 0;
        v94 = 0;
        v93 = 0;
        v97 = 0;
        v95 = 0;
        if ( v103 )
        {
          v30 = (__m128i *)(v22 + 16);
          v92 = -1;
          v107 = -1;
          v105 = -1;
          v102 = -1;
          v106 = -1;
          v104 = -1;
          v100 = -1;
          v101 = -1;
          v98 = -1;
          v99 = -1;
          while ( v29 < 6 )
          {
            if ( *(_DWORD *)(v12 + 24) == 4 && !v30->m128i_i8[0] )
            {
              v17 = -1073741668;
              break;
            }
            v31 = *v115;
            if ( *v115 == 2 )
              v31 = 1;
            v32 = v30[2].m128i_i16[4] | ((v30[-1].m128i_i16[0] | (unsigned __int16)(16 * v31)) << 8);
            if ( (unsigned int)RIMIsEssentialUsage(v32) )
            {
              v33 = v95;
              v34 = 60LL * v95;
              v35 = 16LL * v95;
              *(_WORD *)(v34 + v12 + 320) = v30[-1].m128i_i16[0];
              *(_WORD *)(v34 + v12 + 332) = v30[2].m128i_i16[4];
              *(_DWORD *)(v34 + v12 + 324) = v30[-1].m128i_u8[2];
              *(_WORD *)(v34 + v12 + 330) = v30[-1].m128i_i16[5];
              *(_DWORD *)(v34 + v12 + 336) = v30->m128i_u8[0];
              *(_DWORD *)(v34 + v12 + 352) = v30[1].m128i_i32[2];
              *(_DWORD *)(v34 + v12 + 356) = v30[1].m128i_i32[3];
              v36 = 60 * (v33 + 6);
              *(_DWORD *)(v36 + v12) = v30[2].m128i_i32[0];
              *(_DWORD *)(v34 + v12 + 364) = v30[2].m128i_i32[1];
              *(_WORD *)(v34 + v12 + 376) = v30->m128i_i16[1];
              *(_DWORD *)(v12 + 16 * (v33 + 2)) = v33;
              *(_WORD *)(v35 + v12 + 28) = v30[-1].m128i_i16[0];
              *(_WORD *)(v35 + v12 + 30) = v30[2].m128i_i16[4];
              v37 = *v30;
              v117[0] = v30[-1];
              v38 = v30[1];
              v117[1] = v37;
              v39 = v30[2];
              v117[2] = v38;
              v118 = v30[3].m128i_i64[0];
              v117[3] = v39;
              RIMRetrieveNormalizationRange(v36, v117, v12 + v35 + 36);
              ++v95;
              if ( v30[2].m128i_i16[4] == 48 && v30[-1].m128i_i16[0] == 1 )
              {
                v40 = v30[2];
                v41 = v30[3].m128i_i64[0];
                v42 = v30[-1];
                v108 = v97;
                v43 = *v30;
                v44 = v30[1];
                v120 = v41;
                v119[0] = v42;
                v119[1] = v43;
                v119[2] = v44;
                v119[3] = v40;
                *(_DWORD *)(v12 + 164) = RIMComputeSpecificHighMetricValue(
                                           (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v40, 4))
                                                        - _mm_cvtsi128_si32(v40)),
                                           v119);
                v45 = v30[1].m128i_i32[2];
                *(_DWORD *)(v12 + 172) = v45;
                v92 = v45;
                v46 = v30[1].m128i_i32[3];
                *(_DWORD *)(v12 + 180) = v46;
                v47 = v30[1].m128i_i32[1];
                v48 = v30[2].m128i_i32[1];
                v107 = v46;
                v105 = v30[1].m128i_i32[0];
                v100 = v47;
                v101 = v48;
                if ( (v105 & 0xF) == 0xE )
                {
                  v49 = v94;
                  if ( (_BYTE)v47 == 51 )
                    v49 = v48;
                  v94 = v49;
                }
              }
              if ( v30[2].m128i_i16[4] == 49 && v30[-1].m128i_i16[0] == 1 )
              {
                v50 = v30[2];
                v51 = v30[-1];
                v89 = v97;
                v52 = *v30;
                v53 = v30[1];
                v122 = v30[3].m128i_i64[0];
                v121[0] = v51;
                v121[1] = v52;
                v121[2] = v53;
                v121[3] = v50;
                *(_DWORD *)(v12 + 168) = RIMComputeSpecificHighMetricValue(
                                           (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v50, 4))
                                                        - _mm_cvtsi128_si32(v50)),
                                           v121);
                v54 = v30[1].m128i_i32[2];
                *(_DWORD *)(v12 + 176) = v54;
                v102 = v54;
                v55 = v30[1].m128i_i32[3];
                *(_DWORD *)(v12 + 184) = v55;
                v56 = v30[1].m128i_i32[1];
                v57 = v30[2].m128i_i32[1];
                v106 = v55;
                v104 = v30[1].m128i_i32[0];
                v98 = v56;
                v99 = v57;
                if ( (v104 & 0xF) == 0xE )
                {
                  v58 = v93;
                  if ( (_BYTE)v56 == 51 )
                    v58 = v57;
                  v93 = v58;
                }
              }
              RIMCheckPressureUsageStatus(a1, v12, v32);
            }
            v30 = (__m128i *)((char *)v30 + 72);
            if ( ++v97 >= v103 )
              break;
            v29 = v95;
          }
          v7 = v112;
          v27 = v93;
          v25 = v94;
          v59 = v98;
          v60 = v99;
          v26 = v100;
          v28 = v101;
          v61 = v102;
        }
        else
        {
          v61 = -1;
          v92 = -1;
          v107 = -1;
          v105 = -1;
          v106 = -1;
          v59 = -1;
          v104 = -1;
          v60 = -1;
        }
        RIMUpdateMonitorQuirk(
          a1,
          v7,
          *(_DWORD *)(v12 + 24),
          v92,
          v107,
          v61,
          v106,
          v28,
          v60,
          v25,
          v27,
          v26,
          v105,
          v59,
          v104);
        v62 = v115;
        *(_DWORD *)(v12 + 696) = v95;
        v63 = *(_OWORD *)(v12 + 172);
        *(_OWORD *)(v12 + 140) = *(_OWORD *)(v12 + 156);
        *(_OWORD *)(v12 + 188) = v63;
        if ( v17 < 0 )
          goto LABEL_86;
        if ( v108 != -1
          && v89 != -1
          && *(_DWORD *)(v22 + 72LL * v108 + 44) != *(_DWORD *)(v22 + 72LL * v108 + 40)
          && *(_DWORD *)(v22 + 72LL * v89 + 44) != *(_DWORD *)(v22 + 72LL * v89 + 40) )
        {
          if ( *(_DWORD *)(v22 + 72LL * v108 + 52) <= *(_DWORD *)(v22 + 72LL * v108 + 48)
            || *(_DWORD *)(v22 + 72LL * v89 + 52) <= *(_DWORD *)(v22 + 72LL * v89 + 48)
            || *(_DWORD *)(v12 + 164) <= *(_DWORD *)(v12 + 156)
            || *(_DWORD *)(v12 + 168) <= *(_DWORD *)(v12 + 160) )
          {
            if ( (*(_DWORD *)(v7 + 184) & 0x200000) != 0 )
              v85 = (int)IsGetPhysicalSizeFromMonitorSupported_0() < 0 ? 0 : GetPhysicalSizeFromMonitor_0();
            else
              v85 = RIMGetPhysicalSizeFromMonitor(v12);
            if ( !v85 )
            {
              LOBYTE(v84) = 3;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v84,
                3,
                17,
                (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
            }
          }
          if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 6) > 1 )
          {
            v64 = (*(_DWORD *)(v7 + 184) & 0x200000) == 0;
            v92 = 0;
            if ( v64 )
            {
              RIMReadDigitizerToMonitorMappings(v7);
              RIMFindMonitorForDigitizer(a1, v12, v65, (__int64)&v92);
            }
            else
            {
              if ( (int)IsReadDigitizerToMonitorMappingsSupported_0() >= 0 )
                ReadDigitizerToMonitorMappings_0();
              if ( (int)IsFindMonitorForDigitizerSupported_0() >= 0 )
                FindMonitorForDigitizer_0();
            }
            v67 = v96;
            if ( *v62 == 4 )
            {
              v68 = *(_QWORD *)v109;
              v110 = *(_DWORD *)(v109 + 8);
              v88 = v12;
              v109 = v68;
              if ( (int)ApiSetValidateDeviceSignature() < 0 )
              {
                v17 = -1073741668;
                v86 = 18;
LABEL_146:
                LOBYTE(v66) = 3;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v66,
                  3,
                  v86,
                  (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
                goto LABEL_86;
              }
              v69 = *(_DWORD *)(v12 + 252);
              if ( (v69 & 0x400) == 0 )
                *(_DWORD *)(v12 + 252) = v69 & 0xFFFFFDFF;
            }
LABEL_80:
            if ( !*(_QWORD *)(v12 + 280) )
            {
              LOBYTE(v66) = 3;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v66,
                3,
                19,
                (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
            }
            v17 = RIMGetDeviceButtons(a1, v12, v67, v62, v88);
            if ( v17 >= 0 )
            {
              if ( *(_DWORD *)(v12 + 24) != 7 )
              {
                v70 = *(struct _UNICODE_STRING *)(v7 + 208);
                if ( (int)IsRetrieveCalibrationDataSupported_0() >= 0 )
                {
                  v116 = v70;
                  RetrieveCalibrationData_0();
                }
              }
              goto LABEL_86;
            }
            v86 = 20;
            goto LABEL_146;
          }
          v75 = Win32AllocPoolZInit(0x248uLL);
          *(_QWORD *)(v12 + 280) = v75;
          if ( v75 )
          {
            RIMInitFakeMonitor(v12);
            if ( *(_DWORD *)(v12 + 24) != 7 )
            {
              v67 = v96;
              goto LABEL_80;
            }
            RIMComputeVirtualHimetricSize(v76, 1);
            v87 = *(_QWORD *)v109;
            v67 = v96;
            v110 = *(_DWORD *)(v109 + 8);
            v109 = v87;
            v88 = v12;
            if ( (int)ApiSetValidateDeviceSignature() >= 0 )
              goto LABEL_80;
          }
        }
        v17 = -1073741668;
LABEL_86:
        Win32FreePool(v22);
      }
LABEL_87:
      if ( v17 >= 0 )
      {
        if ( *(_DWORD *)(v12 + 24) == 7 )
          v17 = RIMValidatePTPProperties(v111, v12);
        if ( v17 >= 0 )
        {
          *(_DWORD *)(v7 + 316) = 1;
          if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
          {
            *(_DWORD *)(a1 + 660) += *(_DWORD *)(v12 + 688);
            *(_DWORD *)(v12 + 252) |= 0x1000u;
          }
          if ( *(_DWORD *)(v12 + 24) != 7 )
            ApiSetUpdatePointerDeviceSystemMetrics();
          *(_DWORD *)(v12 + 848) = 100;
          *(_QWORD *)(v12 + 856) = 100 * gliQpcFreq.QuadPart / 1000;
          *(_QWORD *)(v7 + 480) = v12;
          *(_QWORD *)(v12 + 16) = v7;
          v71 = *(_QWORD **)(a1 + 568);
          if ( *v71 != a1 + 560 )
            __fastfail(3u);
          *(_QWORD *)(v12 + 1480) = a1 + 560;
          *(_QWORD *)(v12 + 1488) = v71;
          *v71 = v12 + 1480;
          *(_QWORD *)(a1 + 568) = v12 + 1480;
          *(_QWORD *)(v12 + 704) = -1LL;
          if ( !(unsigned int)RIMGetDeviceParent((__int64)v71, v7, (int)v12 + 1480) )
          {
            LOBYTE(v72) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v72,
              3,
              21,
              (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
          }
          return (unsigned int)v17;
        }
      }
LABEL_118:
      RIMFreePointerDevice(a1, v12);
      return (unsigned int)v17;
    }
LABEL_123:
    v17 = -1073741668;
    goto LABEL_118;
  }
  return 3221225628LL;
}
