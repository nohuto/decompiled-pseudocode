/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C0007C58
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000F32C (RIMAllocateHidDesc.c)
 * Callees:
 *     IsGetPhysicalSizeFromMonitorSupported_0 @ 0x1C0002CA0 (IsGetPhysicalSizeFromMonitorSupported_0.c)
 *     GetPhysicalSizeFromMonitor_0 @ 0x1C0002CA8 (GetPhysicalSizeFromMonitor_0.c)
 *     IsReadDigitizerToMonitorMappingsSupported_0 @ 0x1C0002DC0 (IsReadDigitizerToMonitorMappingsSupported_0.c)
 *     ReadDigitizerToMonitorMappings_0 @ 0x1C0002DC8 (ReadDigitizerToMonitorMappings_0.c)
 *     IsFindMonitorForDigitizerSupported_0 @ 0x1C0002DD0 (IsFindMonitorForDigitizerSupported_0.c)
 *     FindMonitorForDigitizer_0 @ 0x1C0002DD8 (FindMonitorForDigitizer_0.c)
 *     IsRetrieveCalibrationDataSupported_0 @ 0x1C0002DE0 (IsRetrieveCalibrationDataSupported_0.c)
 *     RetrieveCalibrationData_0 @ 0x1C0002DE8 (RetrieveCalibrationData_0.c)
 *     RIMInitFakeMonitor @ 0x1C0006060 (RIMInitFakeMonitor.c)
 *     RIMFindMonitorForDigitizer @ 0x1C00073E4 (RIMFindMonitorForDigitizer.c)
 *     RIMGetDeviceButtons @ 0x1C0007494 (RIMGetDeviceButtons.c)
 *     RIMAssignTouchType @ 0x1C0007760 (RIMAssignTouchType.c)
 *     RIMGetPropertyCount @ 0x1C0007AD8 (RIMGetPropertyCount.c)
 *     RIMIsEssentialUsage @ 0x1C00086C0 (RIMIsEssentialUsage.c)
 *     RIMCheckPressureUsageStatus @ 0x1C0008768 (RIMCheckPressureUsageStatus.c)
 *     RIMRetrieveNormalizationRange @ 0x1C0008794 (RIMRetrieveNormalizationRange.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0008C68 (rimHidP_GetSpecificValueCaps.c)
 *     RIMGetDeviceParent @ 0x1C0008CB4 (RIMGetDeviceParent.c)
 *     RIMGetContainerId @ 0x1C000988C (RIMGetContainerId.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C0009A58 (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     RIMUpdateMonitorQuirk @ 0x1C0009A78 (RIMUpdateMonitorQuirk.c)
 *     RIMIsDeviceExcluded @ 0x1C0009B88 (RIMIsDeviceExcluded.c)
 *     RIMGetProductString @ 0x1C0009C4C (RIMGetProductString.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0009E00 (RIMReadDigitizerToMonitorMappings.c)
 *     ApiSetValidateDeviceSignature @ 0x1C000A12C (ApiSetValidateDeviceSignature.c)
 *     RIMFreePointerDevice @ 0x1C000AC5C (RIMFreePointerDevice.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C0078B0C (RIMComputeSpecificHighMetricValue.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C00CF45C (RIMComputeVirtualHimetricSize.c)
 *     RIMGetPhysicalSizeFromMonitor @ 0x1C00CF58C (RIMGetPhysicalSizeFromMonitor.c)
 *     RIMValidatePTPProperties @ 0x1C00D2B30 (RIMValidatePTPProperties.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // ecx
  int SpecificValueCaps; // eax
  _DWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // r9d
  int v27; // eax
  int v28; // r10d
  unsigned int v29; // r11d
  __m128i *v30; // r14
  __int16 v31; // r12
  unsigned __int16 v32; // r12
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  __m128i v36; // xmm1
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __m128i v39; // xmm5
  __int64 v40; // xmm0_8
  __m128i v41; // xmm2
  __m128i v42; // xmm3
  __m128i v43; // xmm4
  int v44; // eax
  int v45; // eax
  int v46; // ecx
  int v47; // edx
  int v48; // eax
  __m128i v49; // xmm5
  __m128i v50; // xmm2
  __m128i v51; // xmm3
  __m128i v52; // xmm4
  int v53; // eax
  int v54; // eax
  int v55; // ecx
  int v56; // edx
  int v57; // eax
  int v58; // edx
  int v59; // r8d
  int v60; // r11d
  __int128 v61; // xmm1
  bool v62; // zf
  __int64 v63; // r8
  int v64; // edx
  __int64 v65; // rdi
  __int64 v66; // xmm0_8
  int v67; // eax
  __int128 v68; // xmm6
  __int64 v69; // rax
  __int64 *v70; // rdx
  int v71; // edx
  __int64 v73; // rax
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // r8
  unsigned int v77; // r9d
  unsigned int v78; // r10d
  _BYTE *v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // xmm0_8
  int v82; // edx
  int v83; // eax
  int v84; // r9d
  __int64 v85; // xmm0_8
  unsigned int v86; // [rsp+28h] [rbp-E0h]
  int v87; // [rsp+88h] [rbp-80h]
  unsigned __int16 v88[2]; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned __int16 v89[2]; // [rsp+90h] [rbp-78h] BYREF
  int v90; // [rsp+94h] [rbp-74h] BYREF
  int v91; // [rsp+98h] [rbp-70h]
  int v92; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v93; // [rsp+A0h] [rbp-68h]
  __int64 v94; // [rsp+A8h] [rbp-60h]
  int v95; // [rsp+B0h] [rbp-58h]
  int v96; // [rsp+B4h] [rbp-54h]
  int v97; // [rsp+B8h] [rbp-50h]
  int v98; // [rsp+BCh] [rbp-4Ch]
  int v99; // [rsp+C0h] [rbp-48h]
  int v100; // [rsp+C4h] [rbp-44h]
  int v101; // [rsp+C8h] [rbp-40h]
  int v102; // [rsp+CCh] [rbp-3Ch]
  int v103; // [rsp+D0h] [rbp-38h]
  unsigned int v104; // [rsp+D4h] [rbp-34h]
  int v105; // [rsp+D8h] [rbp-30h]
  int v106; // [rsp+DCh] [rbp-2Ch]
  __int64 v107; // [rsp+E8h] [rbp-20h] BYREF
  int v108; // [rsp+F0h] [rbp-18h]
  __int64 v109; // [rsp+F8h] [rbp-10h]
  unsigned int v110; // [rsp+100h] [rbp-8h]
  __int64 v111; // [rsp+108h] [rbp+0h]
  __int64 v112; // [rsp+110h] [rbp+8h]
  __int64 v113; // [rsp+118h] [rbp+10h]
  __int128 v114; // [rsp+128h] [rbp+20h] BYREF
  _OWORD v115[4]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v116; // [rsp+178h] [rbp+70h]
  _OWORD v117[4]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v118; // [rsp+1C8h] [rbp+C0h]
  _OWORD v119[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v120; // [rsp+218h] [rbp+110h]
  char v121[40]; // [rsp+228h] [rbp+120h] BYREF
  int v122; // [rsp+250h] [rbp+148h]
  int v123; // [rsp+254h] [rbp+14Ch]
  _BYTE v124[144]; // [rsp+278h] [rbp+170h] BYREF

  v7 = a2;
  v8 = a1;
  v106 = -1;
  v10 = a3;
  v87 = -1;
  v107 = a7;
  v111 = a2;
  v113 = a1;
  v88[0] = 0;
  v89[0] = 0;
  v94 = a3;
  v109 = a5;
  v112 = a6;
  v11 = Win32AllocPoolZInit(0x6F8uLL);
  if ( v11 )
  {
    *(_DWORD *)(v11 + 720) = 1;
    *(_DWORD *)(v11 + 724) = 1;
    if ( (int)RIMGetProductString(v11, a5, a6) < 0 )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        3,
        11,
        (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
    }
    *(_DWORD *)(v11 + 256) = 2;
    RIMGetContainerId(a5, v11 + 260);
    v13 = (unsigned __int16)*a4;
    v114 = *(_OWORD *)(v11 + 288);
    if ( !(unsigned int)RIMIsDeviceExcluded(v13, &v114) )
    {
      v14 = *(_DWORD *)(v8 + 76);
      v15 = 1;
      if ( (v14 & 4) != 0 && *a4 == 2 )
      {
        *(_DWORD *)(v11 + 24) = 6;
        *(_DWORD *)(v11 + 1492) = 3;
      }
      else
      {
        if ( (*(_DWORD *)(v8 + 76) & 4) == 0 || *a4 != 1 )
        {
          if ( (v14 & 0x18) != 0 && (unsigned __int16)(*a4 - 4) <= 1u )
          {
            *(_DWORD *)(v11 + 24) = 1;
            *(_DWORD *)(v11 + 1492) = *a4 != 5;
            v16 = RIMAssignTouchType(v8, v11, v10, a4, v109, v112);
            if ( v16 == -1073741668 )
              goto LABEL_84;
            if ( *a4 == 5 )
            {
              v110 = *(_DWORD *)(v11 + 24);
              *(_DWORD *)(v11 + 24) = 8;
            }
            v17 = *(_DWORD *)(v8 + 76);
            if ( (v17 & 4) != 0 && (unsigned int)(*(_DWORD *)(v11 + 24) - 6) <= 1 )
              v15 = 0;
            if ( (v17 & 8) != 0 && *(_DWORD *)(v11 + 24) == 8 )
              v15 = 0;
            v10 = v94;
            if ( (v17 & 0x10) == 0 || (unsigned int)(*(_DWORD *)(v11 + 24) - 1) > 4 )
            {
LABEL_23:
              if ( v15 != 1 )
                goto LABEL_24;
LABEL_108:
              v16 = -1073741808;
              goto LABEL_109;
            }
          }
          else if ( (v14 & 0x20) == 0 || (*(_DWORD *)(v7 + 176) & 0x2000) == 0 )
          {
            goto LABEL_108;
          }
          v15 = 0;
          goto LABEL_23;
        }
        *(_DWORD *)(v11 + 24) = 7;
        *(_DWORD *)(v11 + 1492) = 2;
      }
    }
LABEL_24:
    v88[0] = 1;
    if ( (int)rimHidP_GetSpecificValueCaps(0, 13, 0, 86, (__int64)v121, (__int64)v88, v10) >= 0 )
    {
      if ( v122 >= v123 || v122 < 0 || v123 < 0xFFFF )
        goto LABEL_114;
      *(_DWORD *)(v11 + 252) |= 0x200u;
      *(_DWORD *)(v11 + 1488) = v123;
    }
    v88[0] = 0;
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v11 + 732), 0, 0LL, (__int64)v88, v10);
    v16 = SpecificValueCaps;
    if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
      goto LABEL_84;
    v19 = (_DWORD *)(v11 + 32);
    v20 = 6LL;
    do
    {
      *v19 = -1;
      v19 += 4;
      --v20;
    }
    while ( v20 );
    v21 = Win32AllocPoolZInit(2400LL * *(unsigned int *)(v11 + 720));
    *(_QWORD *)(v11 + 696) = v21;
    if ( !v21 )
      goto LABEL_84;
    if ( (*(_DWORD *)(v11 + 252) & 8) == 0
      || !*(_WORD *)(*(_QWORD *)(v11 + 712) + 14LL)
      || (v89[0] = 2,
          v75 = rimHidP_GetSpecificValueCaps(
                  0,
                  0,
                  *(unsigned __int16 *)(*(_QWORD *)(v11 + 712) + 14LL),
                  0,
                  (__int64)v124,
                  (__int64)v89,
                  v94),
          v16 = v75,
          v75 >= 0) )
    {
      v104 = v88[0] + v89[0];
      v22 = Win32AllocPool(72LL * v104, 2020635474LL);
      if ( v22 )
      {
        v16 = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v11 + 732), 0, v22, (__int64)v88, v94);
        if ( v16 < 0 )
          goto LABEL_83;
        if ( (*(_DWORD *)(v11 + 252) & 8) == 0 )
        {
          v23 = RIMGetPropertyCount(v11, *(_WORD *)(v11 + 732), v88[0], v94);
          v24 = 0;
          if ( !v23 )
          {
            LOBYTE(v24) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v24,
              3,
              12,
              (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
          }
        }
        if ( v89[0] )
        {
          v76 = v88[0];
          v77 = 0;
          v78 = v104;
          v79 = v124;
          do
          {
            if ( (unsigned int)v76 >= v78 )
              break;
            v80 = 9 * v76;
            ++v77;
            v76 = (unsigned int)(v76 + 1);
            *(_OWORD *)(v22 + 8 * v80) = *(_OWORD *)v79;
            *(_OWORD *)(v22 + 8 * v80 + 16) = *((_OWORD *)v79 + 1);
            *(_OWORD *)(v22 + 8 * v80 + 32) = *((_OWORD *)v79 + 2);
            *(_OWORD *)(v22 + 8 * v80 + 48) = *((_OWORD *)v79 + 3);
            v81 = *((_QWORD *)v79 + 8);
            v79 += 72;
            *(_QWORD *)(v22 + 8 * v80 + 64) = v81;
          }
          while ( v77 < 2 );
        }
        v25 = 0;
        v26 = -1;
        v27 = 0;
        v28 = -1;
        v29 = 0;
        v91 = 0;
        v92 = 0;
        v96 = 0;
        v93 = 0;
        if ( v104 )
        {
          v30 = (__m128i *)(v22 + 16);
          v90 = -1;
          v101 = -1;
          v103 = -1;
          v99 = -1;
          v105 = -1;
          v102 = -1;
          v100 = -1;
          v97 = -1;
          v95 = -1;
          v98 = -1;
          while ( v29 < 6 )
          {
            if ( *(_DWORD *)(v11 + 24) == 4 && !v30->m128i_i8[0] )
            {
              v16 = -1073741668;
              break;
            }
            v31 = *a4;
            if ( *a4 == 2 )
              v31 = 1;
            v32 = v30[2].m128i_i16[4] | ((v30[-1].m128i_i16[0] | (unsigned __int16)(16 * v31)) << 8);
            if ( (unsigned int)RIMIsEssentialUsage(v32) )
            {
              v33 = v93;
              v34 = 60LL * v93;
              v35 = 16LL * v93;
              *(_WORD *)(v34 + v11 + 336) = v30[-1].m128i_i16[0];
              *(_WORD *)(v34 + v11 + 348) = v30[2].m128i_i16[4];
              *(_DWORD *)(v34 + v11 + 340) = v30[-1].m128i_u8[2];
              *(_WORD *)(v34 + v11 + 346) = v30[-1].m128i_i16[5];
              *(_DWORD *)(v34 + v11 + 352) = v30->m128i_u8[0];
              *(_DWORD *)(v34 + v11 + 368) = v30[1].m128i_i32[2];
              *(_DWORD *)(v34 + v11 + 372) = v30[1].m128i_i32[3];
              *(_DWORD *)(v34 + v11 + 376) = v30[2].m128i_i32[0];
              *(_DWORD *)(v34 + v11 + 380) = v30[2].m128i_i32[1];
              *(_WORD *)(v34 + v11 + 392) = v30->m128i_i16[1];
              *(_DWORD *)(v11 + 16 * (v33 + 2)) = v33;
              *(_WORD *)(v35 + v11 + 28) = v30[-1].m128i_i16[0];
              *(_WORD *)(v35 + v11 + 30) = v30[2].m128i_i16[4];
              v36 = *v30;
              v117[0] = v30[-1];
              v37 = v30[1];
              v117[1] = v36;
              v38 = v30[2];
              v117[2] = v37;
              v118 = v30[3].m128i_i64[0];
              v117[3] = v38;
              RIMRetrieveNormalizationRange(v34, v117, v11 + v35 + 36);
              ++v93;
              if ( v30[2].m128i_i16[4] == 48 && v30[-1].m128i_i16[0] == 1 )
              {
                v39 = v30[2];
                v40 = v30[3].m128i_i64[0];
                v41 = v30[-1];
                v106 = v96;
                v42 = *v30;
                v43 = v30[1];
                v120 = v40;
                v119[0] = v41;
                v119[1] = v42;
                v119[2] = v43;
                v119[3] = v39;
                *(_DWORD *)(v11 + 164) = RIMComputeSpecificHighMetricValue(
                                           (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v39, 4))
                                                        - _mm_cvtsi128_si32(v39)),
                                           v119);
                v44 = v30[1].m128i_i32[2];
                *(_DWORD *)(v11 + 172) = v44;
                v90 = v44;
                v45 = v30[1].m128i_i32[3];
                *(_DWORD *)(v11 + 180) = v45;
                v46 = v30[1].m128i_i32[1];
                v47 = v30[2].m128i_i32[1];
                v101 = v45;
                v103 = v30[1].m128i_i32[0];
                v100 = v46;
                v97 = v47;
                if ( (v103 & 0xF) == 0xE )
                {
                  v48 = v91;
                  if ( (_BYTE)v46 == 51 )
                    v48 = v47;
                  v91 = v48;
                }
              }
              if ( v30[2].m128i_i16[4] == 49 && v30[-1].m128i_i16[0] == 1 )
              {
                v49 = v30[2];
                v50 = v30[-1];
                v87 = v96;
                v51 = *v30;
                v52 = v30[1];
                v116 = v30[3].m128i_i64[0];
                v115[0] = v50;
                v115[1] = v51;
                v115[2] = v52;
                v115[3] = v49;
                *(_DWORD *)(v11 + 168) = RIMComputeSpecificHighMetricValue(
                                           (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v49, 4))
                                                        - _mm_cvtsi128_si32(v49)),
                                           v115);
                v53 = v30[1].m128i_i32[2];
                *(_DWORD *)(v11 + 176) = v53;
                v99 = v53;
                v54 = v30[1].m128i_i32[3];
                *(_DWORD *)(v11 + 184) = v54;
                v55 = v30[1].m128i_i32[1];
                v56 = v30[2].m128i_i32[1];
                v105 = v54;
                v102 = v30[1].m128i_i32[0];
                v95 = v55;
                v98 = v56;
                if ( (v102 & 0xF) == 0xE )
                {
                  v57 = v92;
                  if ( (_BYTE)v55 == 51 )
                    v57 = v56;
                  v92 = v57;
                }
              }
              RIMCheckPressureUsageStatus(v113, v11, v32);
            }
            v30 = (__m128i *)((char *)v30 + 72);
            if ( ++v96 >= v104 )
              break;
            v29 = v93;
          }
          v7 = v111;
          v27 = v92;
          v25 = v91;
          v58 = v95;
          v59 = v98;
          v26 = v100;
          v28 = v97;
          v60 = v99;
        }
        else
        {
          v60 = -1;
          v90 = -1;
          v101 = -1;
          v103 = -1;
          v105 = -1;
          v58 = -1;
          v102 = -1;
          v59 = -1;
        }
        v8 = v113;
        RIMUpdateMonitorQuirk(
          v113,
          v7,
          *(_DWORD *)(v11 + 24),
          v90,
          v101,
          v60,
          v105,
          v28,
          v59,
          v25,
          v27,
          v26,
          v103,
          v58,
          v102);
        *(_DWORD *)(v11 + 728) = v93;
        v61 = *(_OWORD *)(v11 + 172);
        *(_OWORD *)(v11 + 140) = *(_OWORD *)(v11 + 156);
        *(_OWORD *)(v11 + 188) = v61;
        if ( v16 < 0 )
          goto LABEL_83;
        if ( v106 != -1
          && v87 != -1
          && *(_DWORD *)(v22 + 72LL * v106 + 44) != *(_DWORD *)(v22 + 72LL * v106 + 40)
          && *(_DWORD *)(v22 + 72LL * v87 + 44) != *(_DWORD *)(v22 + 72LL * v87 + 40) )
        {
          if ( *(_DWORD *)(v22 + 72LL * v106 + 52) <= *(_DWORD *)(v22 + 72LL * v106 + 48)
            || *(_DWORD *)(v22 + 72LL * v87 + 52) <= *(_DWORD *)(v22 + 72LL * v87 + 48)
            || *(_DWORD *)(v11 + 164) <= *(_DWORD *)(v11 + 156)
            || *(_DWORD *)(v11 + 168) <= *(_DWORD *)(v11 + 160) )
          {
            if ( (*(_DWORD *)(v7 + 176) & 0x200000) != 0 )
              v83 = (int)IsGetPhysicalSizeFromMonitorSupported_0() < 0 ? 0 : GetPhysicalSizeFromMonitor_0();
            else
              v83 = RIMGetPhysicalSizeFromMonitor(v11);
            if ( !v83 )
            {
              LOBYTE(v82) = 3;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v82,
                3,
                13,
                (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
            }
          }
          if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 7) > 1 )
          {
            v62 = (*(_DWORD *)(v7 + 176) & 0x200000) == 0;
            v90 = 0;
            if ( v62 )
            {
              RIMReadDigitizerToMonitorMappings(v7, v11);
              RIMFindMonitorForDigitizer(v8, v11, v63, (__int64)&v90);
            }
            else
            {
              if ( (int)IsReadDigitizerToMonitorMappingsSupported_0() >= 0 )
                ReadDigitizerToMonitorMappings_0();
              if ( (int)IsFindMonitorForDigitizerSupported_0() >= 0 )
                FindMonitorForDigitizer_0();
            }
            v65 = v94;
            if ( *a4 == 4 )
            {
              v66 = *(_QWORD *)v107;
              v108 = *(_DWORD *)(v107 + 8);
              v107 = v66;
              if ( (int)ApiSetValidateDeviceSignature(v109, v112, v94, (_DWORD)a4, v11, (__int64)&v107, v90) < 0 )
              {
                v16 = -1073741668;
                v84 = 14;
LABEL_137:
                LOBYTE(v64) = 3;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v64,
                  3,
                  v84,
                  (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
                goto LABEL_83;
              }
              v67 = *(_DWORD *)(v11 + 252);
              if ( (v67 & 0x400) == 0 )
                *(_DWORD *)(v11 + 252) = v67 & 0xFFFFFDFF;
            }
LABEL_77:
            if ( !*(_QWORD *)(v11 + 280) )
            {
              LOBYTE(v64) = 3;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v64,
                3,
                15,
                (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
            }
            v16 = RIMGetDeviceButtons(v8, v11, v65, a4, v86);
            if ( v16 >= 0 )
            {
              if ( *(_DWORD *)(v11 + 24) != 8 )
              {
                v68 = *(_OWORD *)(v7 + 200);
                if ( (int)IsRetrieveCalibrationDataSupported_0() >= 0 )
                {
                  v114 = v68;
                  RetrieveCalibrationData_0();
                }
              }
              goto LABEL_83;
            }
            v84 = 16;
            goto LABEL_137;
          }
          v73 = Win32AllocPoolZInit(0x248uLL);
          *(_QWORD *)(v11 + 280) = v73;
          if ( v73 )
          {
            RIMInitFakeMonitor(v11);
            if ( *(_DWORD *)(v11 + 24) != 8 )
            {
              v65 = v94;
              goto LABEL_77;
            }
            RIMComputeVirtualHimetricSize(v74, 1LL);
            v85 = *(_QWORD *)v107;
            v65 = v94;
            v108 = *(_DWORD *)(v107 + 8);
            v107 = v85;
            if ( (int)ApiSetValidateDeviceSignature(v109, v112, v94, (_DWORD)a4, v11, (__int64)&v107, 0) >= 0 )
              goto LABEL_77;
          }
        }
        v16 = -1073741668;
LABEL_83:
        Win32FreePool(v22);
      }
LABEL_84:
      if ( v16 >= 0 )
      {
        if ( *(_DWORD *)(v11 + 24) == 8 )
          v16 = RIMValidatePTPProperties(v110, v11);
        if ( v16 >= 0 )
        {
          *(_DWORD *)(v7 + 308) = 1;
          if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 1) <= 4 )
          {
            *(_DWORD *)(v8 + 700) += *(_DWORD *)(v11 + 720);
            *(_DWORD *)(v11 + 252) |= 0x1000u;
          }
          if ( *(_DWORD *)(v11 + 24) != 8 )
            ApiSetUpdatePointerDeviceSystemMetrics(v11);
          *(_DWORD *)(v11 + 880) = 100;
          v69 = v11 + 1520;
          *(_QWORD *)(v11 + 888) = 100 * gliQpcFreq.QuadPart / 1000;
          *(_QWORD *)(v7 + 416) = v11;
          *(_QWORD *)(v11 + 16) = v7;
          v70 = *(__int64 **)(v8 + 560);
          *(_QWORD *)(v11 + 1520) = v8 + 552;
          *(_QWORD *)(v11 + 1528) = v70;
          if ( *v70 != v8 + 552 )
            __fastfail(3u);
          *v70 = v69;
          *(_QWORD *)(v8 + 560) = v69;
          *(_QWORD *)(v11 + 736) = -1LL;
          if ( !(unsigned int)RIMGetDeviceParent(v8 + 552, v7) )
          {
            LOBYTE(v71) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v71,
              3,
              17,
              (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
          }
          return (unsigned int)v16;
        }
      }
LABEL_109:
      RIMFreePointerDevice(v8, v11);
      return (unsigned int)v16;
    }
LABEL_114:
    v16 = -1073741668;
    goto LABEL_109;
  }
  return 3221225628LL;
}
