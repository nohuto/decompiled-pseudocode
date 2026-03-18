/*
 * XREFs of RIMExtractDeviceUsages @ 0x1C00CA2A0
 * Callers:
 *     rimProcessPTPDeviceInput @ 0x1C00CC708 (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CCB80 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     RIMIsPenPointerDevice @ 0x1C001A8E4 (RIMIsPenPointerDevice.c)
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     rimHidP_GetUsageValue @ 0x1C007308C (rimHidP_GetUsageValue.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     EtwTraceTouchHWTimeStamp @ 0x1C00A7EF0 (EtwTraceTouchHWTimeStamp.c)
 *     EtwTraceTouchPadHWTimeStamp @ 0x1C00A8150 (EtwTraceTouchPadHWTimeStamp.c)
 *     DbgPrintRIMAlways @ 0x1C00B3870 (DbgPrintRIMAlways.c)
 *     rimHidP_GetUsageValueArray @ 0x1C00C3680 (rimHidP_GetUsageValueArray.c)
 *     RIMAddToActiveDevices @ 0x1C00C3B84 (RIMAddToActiveDevices.c)
 *     RIMInsertInPointerDeviceFrameContactIdMgr @ 0x1C00C3FB0 (RIMInsertInPointerDeviceFrameContactIdMgr.c)
 *     RIMIsFrameReportingPointerDevice @ 0x1C00C40DC (RIMIsFrameReportingPointerDevice.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00C9A94 (WPP_RECORDER_SF_qd.c)
 *     RIMEnsureUsageWithinLogicalBoundary @ 0x1C00CA19C (RIMEnsureUsageWithinLogicalBoundary.c)
 *     RIMExtractData @ 0x1C00CA1E8 (RIMExtractData.c)
 *     RIMExtractGeometryPoints @ 0x1C00CAAB8 (RIMExtractGeometryPoints.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CABDC (RIMGetMultiContactDeviceState.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CB12C (RIMGetPointerDeviceContactState.c)
 *     ApiSetApplyTransforms @ 0x1C00CD3E8 (ApiSetApplyTransforms.c)
 *     ApiSetDoPrediction @ 0x1C00CD438 (ApiSetDoPrediction.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CD49C (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     ApiSetPostPointerDeviceArrival @ 0x1C00CD53C (ApiSetPostPointerDeviceArrival.c)
 *     RIMApplyTransforms @ 0x1C00CD848 (RIMApplyTransforms.c)
 *     RIMABArbitratePrimaryStatus @ 0x1C00D2118 (RIMABArbitratePrimaryStatus.c)
 *     RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D272C (RIMABSeekAndAbortLowerRankedActivity.c)
 *     RIMICComputeMechanics @ 0x1C00D2CCC (RIMICComputeMechanics.c)
 *     RIMICUpdateDeadZone @ 0x1C00D2DF0 (RIMICUpdateDeadZone.c)
 */

__int64 __fastcall RIMExtractDeviceUsages(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        struct _HIDP_PREPARSED_DATA *a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        char a11)
{
  __int64 v11; // rbx
  int UsageValueArray; // esi
  unsigned __int8 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int16 v18; // r12
  int v19; // r11d
  unsigned __int16 v20; // r8
  __int64 v21; // rdx
  unsigned __int16 v22; // r9
  _DWORD *v23; // r12
  __int64 v24; // rcx
  bool v25; // zf
  _DWORD *v26; // rdi
  _DWORD *v27; // rdi
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r10
  int v33; // eax
  __int64 v35; // [rsp+28h] [rbp-D1h]
  __int64 v36; // [rsp+30h] [rbp-C9h]
  int v37; // [rsp+94h] [rbp-65h]
  int v39; // [rsp+9Ch] [rbp-5Dh] BYREF
  unsigned int v40; // [rsp+A0h] [rbp-59h]
  int v41; // [rsp+A4h] [rbp-55h]
  int v42; // [rsp+A8h] [rbp-51h] BYREF
  int v43; // [rsp+ACh] [rbp-4Dh] BYREF
  struct _HIDP_PREPARSED_DATA *v44; // [rsp+B0h] [rbp-49h]
  char *v45; // [rsp+B8h] [rbp-41h]
  int v46; // [rsp+C0h] [rbp-39h]
  __int64 v47; // [rsp+C8h] [rbp-31h]
  char v48[8]; // [rsp+D0h] [rbp-29h] BYREF
  unsigned int v49; // [rsp+D8h] [rbp-21h] BYREF
  __int128 v50; // [rsp+DCh] [rbp-1Dh]
  __int64 v51; // [rsp+ECh] [rbp-Dh]
  int v52; // [rsp+F4h] [rbp-5h]

  v11 = *(_QWORD *)(a2 + 416);
  UsageValueArray = -1073741811;
  v14 = *a3;
  v44 = a6;
  v46 = *(_DWORD *)(v11 + 704);
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v39 = 0;
  v49 = 0;
  v51 = 0LL;
  v52 = 0;
  v45 = a3;
  v47 = a2;
  v50 = 0LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x15u,
    (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids);
  v15 = v11 + 320;
  v16 = 0LL;
  *(_WORD *)(a7 + 2) = a5;
  *(_WORD *)(v11 + 1480) = 0;
  v40 = 0;
  if ( !*(_DWORD *)(v11 + 712) )
    goto LABEL_79;
  v17 = v14;
  v18 = a5;
  v19 = 1;
  v37 = v17;
  while ( 1 )
  {
    v20 = v18;
    if ( v17 == *(_DWORD *)(v15 + 4) )
      break;
LABEL_29:
    v15 += 60LL;
    v40 += v19;
    if ( v40 >= *(_DWORD *)(v11 + 712) )
      goto LABEL_33;
  }
  v21 = *(_QWORD *)(v11 + 696);
  if ( v21 && *(_WORD *)(v21 + 14) && *(_WORD *)v15 == 1 && (unsigned __int16)(*(_WORD *)(v15 + 12) - 48) <= 1u )
  {
    *(_DWORD *)(v15 + 48) = 0;
    v16 = v18;
    v20 = *(_WORD *)(*(_QWORD *)(v21 + 24) + 8LL * v18 + 2);
  }
  if ( (*(_DWORD *)(v11 + 236) & 0x200) != 0
    && *(_WORD *)v15 == 1
    && (v22 = *(_WORD *)(v15 + 12), (unsigned __int16)(v22 - 48) <= 1u) )
  {
    UsageValueArray = rimHidP_GetUsageValueArray(v16, 1u, v20, v22, v48, v35, v44, v45, a4);
    if ( UsageValueArray < 0 )
      goto LABEL_32;
    v23 = (_DWORD *)(v15 + 52);
    RIMExtractGeometryPoints(
      *(unsigned __int16 *)(v15 + 12),
      (unsigned int)&v49,
      v15 + 52,
      (unsigned int)v48,
      *(unsigned __int16 *)(v15 + 56));
  }
  else
  {
    v23 = (_DWORD *)(v15 + 52);
    UsageValueArray = rimHidP_GetUsageValue(
                        HidP_Input,
                        *(_WORD *)v15,
                        v20,
                        *(_WORD *)(v15 + 12),
                        (unsigned int *)(v15 + 52),
                        v44,
                        v45,
                        a4);
  }
  v16 = 0LL;
  if ( UsageValueArray >= 0 )
  {
    if ( *(_DWORD *)(v15 + 16) )
    {
      if ( *(_WORD *)v15 == 1 )
      {
        if ( (unsigned __int16)(*(_WORD *)(v15 + 12) - 48) <= 1u
          && *(_DWORD *)(v11 + 24) == 6
          && (*v23 < *(_DWORD *)(v15 + 32) || *v23 > *(_DWORD *)(v15 + 36)) )
        {
          ++*(_WORD *)(v11 + 1480);
        }
        v19 = 1;
      }
      else
      {
        v19 = 1;
      }
    }
    else
    {
      v19 = 1;
      if ( !*(_QWORD *)(a1 + 760) || (unsigned __int16)(*(_WORD *)(v15 + 12) - 48) > 1u )
      {
        RIMEnsureUsageWithinLogicalBoundary(v15);
        v16 = 0LL;
      }
    }
    v17 = v37;
    v18 = a5;
    goto LABEL_29;
  }
  v18 = a5;
LABEL_32:
  LODWORD(v35) = UsageValueArray;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    3u,
    0x16u,
    (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids,
    v35);
LABEL_33:
  if ( UsageValueArray >= 0 )
  {
    if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, v18, 0x51u, &v49, v44, v45, a4) >= 0
      && (unsigned int)RIMIsFrameReportingPointerDevice(v11)
      && !(unsigned int)RIMInsertInPointerDeviceFrameContactIdMgr(v24, v49, v11) )
    {
      UsageValueArray = -1073741668;
    }
    if ( UsageValueArray >= 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 6) <= 1 )
      {
        if ( !*(_BYTE *)(a1 + 953) || (*(_DWORD *)(v11 + 236) & 0x10000) != 0 )
        {
          v27 = (_DWORD *)(a7 + 108);
          *(_DWORD *)(a7 + 112) = RIMExtractData(v11, 13, 48, 1, (_DWORD *)(a7 + 108));
        }
        else
        {
          v27 = (_DWORD *)(a7 + 108);
          *(_DWORD *)(a7 + 108) |= 1u;
        }
        *(_DWORD *)(a7 + 116) = RIMExtractData(v11, 13, 65, 2, v27);
        *(_DWORD *)(a7 + 120) = RIMExtractData(v11, 13, 61, 4, v27);
        *(_DWORD *)(a7 + 124) = RIMExtractData(v11, 13, 62, 8, v27);
      }
      else
      {
        HIDWORD(v51) = RIMExtractData(v11, 13, 72, 1, &v42);
        v52 = RIMExtractData(v11, 13, 73, 1, &v43);
        if ( v42 == v43 && v43 == 1 )
          *(_DWORD *)(a7 + 108) |= 1u;
        v25 = *(_BYTE *)(a1 + 953) == 0;
        LODWORD(v51) = 1;
        if ( v25 || (*(_DWORD *)(v11 + 236) & 0x10000) != 0 )
        {
          v26 = (_DWORD *)(a7 + 108);
          *(_DWORD *)(a7 + 148) = RIMExtractData(v11, 13, 48, 4, (_DWORD *)(a7 + 108));
        }
        else
        {
          v26 = (_DWORD *)(a7 + 108);
          *(_DWORD *)(a7 + 108) |= 4u;
        }
        *(_DWORD *)(a7 + 144) = RIMExtractData(v11, 13, 63, 2, v26);
      }
      LODWORD(v50) = RIMExtractData(v11, 1, 48, 0, 0LL);
      DWORD1(v50) = RIMExtractData(v11, 1, 49, 0, 0LL);
      if ( v46 != 1 || (*(_DWORD *)(v11 + 236) & 0x20) != 0 )
      {
        UsageValueArray = RIMGetMultiContactDeviceState(a1, v47, (_DWORD)v44, v18, a7, a4, (__int64)v45, (__int64)&v49);
        goto LABEL_75;
      }
      v28 = v47;
      if ( (*(_DWORD *)(v47 + 184) & 0x200000) != 0 )
      {
        ApiSetApplyTransforms(v11, a7, 0LL, &v49);
LABEL_59:
        *(_QWORD *)(*(_QWORD *)(v11 + 680) + 2292LL) = *(_QWORD *)(a7 + 64);
        RIMICComputeMechanics(v11, 0LL);
        if ( gFastSwitchingEnabled && RIMIsPenPointerDevice(v11) )
          RIMICUpdateDeadZone(a1, v11);
        v31 = *(_QWORD *)(v11 + 680);
        if ( *(_DWORD *)(v31 + 2336) )
        {
          v41 = 1;
        }
        else
        {
          *(_DWORD *)(v31 + 2336) = 1;
          ++*(_DWORD *)(v11 + 688);
          *(_DWORD *)(*(_QWORD *)(v11 + 680) + 2348LL) = (MEMORY[0xFFFFF78000000320]
                                                        * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          ApiSetPostPointerDeviceArrival(v11);
          if ( RIMIsPenPointerDevice(v11) )
            RIMABSeekAndAbortLowerRankedActivity(a1, v11, 0LL);
          RIMABArbitratePrimaryStatus(a1, v11, 0LL);
          RIMAddToActiveDevices((LARGE_INTEGER *)a1, v11);
        }
        v32 = *(_QWORD *)(v11 + 680);
        v33 = *(_DWORD *)(v32 + 2392);
        if ( (v33 & 2) != 0 )
          *(_DWORD *)(v32 + 2392) = v33 | 4;
        UsageValueArray = RIMGetPointerDeviceContactState(
                            a1,
                            v28,
                            (_DWORD)v44,
                            v18,
                            a7,
                            0,
                            a4,
                            (__int64)v45,
                            (__int64)&v49,
                            (__int64)&v39);
        if ( !v39 )
          ApiSetDoPrediction(v11, a7 + 8, a7, v41, 0, (__int64)&v49);
        if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 6) <= 1 && (*(_DWORD *)(a7 + 20) & 0x20004) == 0x20004 )
          ApiSetDwmAsyncNotifyDigitizerActiveContacts(1LL, 0LL);
LABEL_75:
        if ( UsageValueArray >= 0 )
        {
          if ( *(_DWORD *)(v11 + 24) == 8 )
            EtwTraceTouchPadHWTimeStamp(
              a8,
              a9,
              a10,
              v50,
              SBYTE4(v50),
              SBYTE8(v50),
              SBYTE12(v50),
              *(_DWORD *)(a7 + 48),
              *(_DWORD *)(a7 + 52),
              *(_BYTE *)(a7 + 20) & 0x10,
              a11,
              v49,
              SBYTE4(v51),
              v52,
              0,
              *(_DWORD *)(a7 + 148),
              *(_DWORD *)(v11 + 1544));
          else
            EtwTraceTouchHWTimeStamp(
              a8,
              a9,
              a10,
              *(_DWORD *)(a7 + 56),
              *(_DWORD *)(a7 + 60),
              *(_DWORD *)(a7 + 40),
              *(_DWORD *)(a7 + 44));
        }
      }
      else
      {
        UsageValueArray = RIMApplyTransforms(v11, a7, 0LL, &v49);
        if ( UsageValueArray >= 0 )
          goto LABEL_59;
        LODWORD(v36) = *(_DWORD *)(v11 + 24);
        WPP_RECORDER_SF_qd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v29,
          v30,
          0x17u,
          (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids,
          *(_QWORD *)(v11 + 16),
          v36);
        DbgPrintRIMAlways(
          "rimfram0:RIMExtractDeviceUsages: RIMApplyTransforms failed for pRimDev:%p HPD_TYPE:%d\n",
          *(const void **)(v11 + 16),
          *(_DWORD *)(v11 + 24));
      }
    }
  }
LABEL_79:
  LODWORD(v35) = UsageValueArray;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x18u,
    (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids,
    v35);
  return (unsigned int)UsageValueArray;
}
