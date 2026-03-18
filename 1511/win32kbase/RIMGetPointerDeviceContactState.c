/*
 * XREFs of RIMGetPointerDeviceContactState @ 0x1C00CC1F4
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CBCA4 (RIMGetMultiContactDeviceState.c)
 * Callees:
 *     IsSqmPointerDeviceDownSupported_0 @ 0x1C0002D40 (IsSqmPointerDeviceDownSupported_0.c)
 *     SqmPointerDeviceDown_0 @ 0x1C0002D48 (SqmPointerDeviceDown_0.c)
 *     DbgPrintRIM @ 0x1C000FB48 (DbgPrintRIM.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     rimHidP_GetUsages @ 0x1C00C4514 (rimHidP_GetUsages.c)
 *     RIMAbortDeviceActivity @ 0x1C00C45E4 (RIMAbortDeviceActivity.c)
 *     RIMAssignPointerDeviceInvertedState @ 0x1C00C4B30 (RIMAssignPointerDeviceInvertedState.c)
 *     RIMIsFrameReportingPointerDevice @ 0x1C00C4F70 (RIMIsFrameReportingPointerDevice.c)
 *     ??0tagRlsFilter@Prediction@@QEAA@XZ @ 0x1C00CAEB4 (--0tagRlsFilter@Prediction@@QEAA@XZ.c)
 *     RIMAssessPointerContactState @ 0x1C00CAF80 (RIMAssessPointerContactState.c)
 *     RIMReassessContactDelivery @ 0x1C00CCFC4 (RIMReassessContactDelivery.c)
 *     RIMUseLastContactPosition @ 0x1C00CD328 (RIMUseLastContactPosition.c)
 *     RIMValidatePointerDeviceCurrentState @ 0x1C00CD3D0 (RIMValidatePointerDeviceCurrentState.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CE7D8 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CE82C (ApiSetGetPowerTransitionsState.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D3A74 (RIMRemoveContactFromActiveList.c)
 *     RIMABArbitratePrimaryStatus @ 0x1C00D3F3C (RIMABArbitratePrimaryStatus.c)
 *     RIMABAssessContactForArbitrationSuspension @ 0x1C00D414C (RIMABAssessContactForArbitrationSuspension.c)
 *     RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D4550 (RIMABSeekAndAbortLowerRankedActivity.c)
 *     RIMICUpdateDeviceRank @ 0x1C00D4CF8 (RIMICUpdateDeviceRank.c)
 */

__int64 __fastcall RIMGetPointerDeviceContactState(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5,
        unsigned int a6,
        unsigned int a7,
        char *a8,
        __int64 a9,
        _DWORD *a10)
{
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int16 *v14; // r9
  __int64 v15; // r14
  int v16; // ebx
  unsigned int v17; // eax
  int v18; // ebx
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // edx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r9
  int v25; // ecx
  int v26; // eax
  bool v27; // zf
  int v28; // r9d
  int v29; // ecx
  int v30; // ecx
  BOOL v31; // edx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  int v35; // ecx
  int v36; // edx
  int v37; // r8d
  int v38; // eax
  int v39; // eax
  __int64 v41; // [rsp+20h] [rbp-E0h]
  __int64 v42; // [rsp+28h] [rbp-D8h]
  int v43; // [rsp+40h] [rbp-C0h]
  int v44; // [rsp+44h] [rbp-BCh] BYREF
  int v45; // [rsp+48h] [rbp-B8h]
  unsigned int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int16 v47; // [rsp+50h] [rbp-B0h]
  unsigned int v48; // [rsp+54h] [rbp-ACh] BYREF
  int v49; // [rsp+58h] [rbp-A8h]
  int Usages; // [rsp+5Ch] [rbp-A4h]
  unsigned __int16 *v51; // [rsp+60h] [rbp-A0h]
  _DWORD *v52; // [rsp+68h] [rbp-98h]
  struct _HIDP_PREPARSED_DATA *v53; // [rsp+70h] [rbp-90h]
  char *v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h]
  _DWORD v57[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v58[440]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v59[432]; // [rsp+288h] [rbp+188h] BYREF
  _BYTE v60[432]; // [rsp+438h] [rbp+338h] BYREF
  _BYTE v61[432]; // [rsp+5E8h] [rbp+4E8h] BYREF
  __int64 v62; // [rsp+798h] [rbp+698h]
  __int64 v63; // [rsp+7A0h] [rbp+6A0h]
  __int64 v64; // [rsp+7A8h] [rbp+6A8h]
  __int64 v65; // [rsp+7B0h] [rbp+6B0h]
  __int64 v66; // [rsp+7B8h] [rbp+6B8h]
  __int64 v67; // [rsp+7C0h] [rbp+6C0h]
  __int64 v68; // [rsp+7C8h] [rbp+6C8h]
  __int64 v69; // [rsp+7D0h] [rbp+6D0h]
  __int64 v70; // [rsp+7D8h] [rbp+6D8h]
  __int64 v71; // [rsp+7E0h] [rbp+6E0h]
  __int64 v72; // [rsp+7E8h] [rbp+6E8h]
  __int64 v73; // [rsp+7F0h] [rbp+6F0h]
  __int64 v74; // [rsp+7F8h] [rbp+6F8h]
  __int64 v75; // [rsp+800h] [rbp+700h]
  __int64 v76; // [rsp+808h] [rbp+708h]
  __int64 v77; // [rsp+810h] [rbp+710h]
  __int64 v78; // [rsp+818h] [rbp+718h]
  __int64 v79; // [rsp+820h] [rbp+720h]
  __int64 v80; // [rsp+828h] [rbp+728h]
  __int64 v81; // [rsp+830h] [rbp+730h]
  __int64 v82; // [rsp+838h] [rbp+738h]
  __int64 v83; // [rsp+840h] [rbp+740h]
  __int64 v84; // [rsp+848h] [rbp+748h]
  __int64 v85; // [rsp+850h] [rbp+750h]
  _DWORD v86[118]; // [rsp+858h] [rbp+758h] BYREF

  v11 = *(_QWORD *)(a2 + 416);
  v49 = 0;
  v43 = 0;
  v54 = a8;
  v52 = a10;
  v53 = a3;
  v56 = a2;
  v47 = a4;
  v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  memset(v58, 0, sizeof(v58));
  Prediction::tagRlsFilter::tagRlsFilter((Prediction::tagRlsFilter *)&v58[8]);
  memset(v59, 0, sizeof(v59));
  Prediction::tagRlsFilter::tagRlsFilter((Prediction::tagRlsFilter *)v59);
  memset(v60, 0, sizeof(v60));
  Prediction::tagRlsFilter::tagRlsFilter((Prediction::tagRlsFilter *)v60);
  memset(v61, 0, sizeof(v61));
  Prediction::tagRlsFilter::tagRlsFilter((Prediction::tagRlsFilter *)v61);
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  memset(v86, 0, sizeof(v86));
  v45 = 0;
  v44 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x1Eu,
    (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
  v48 = *(_DWORD *)(v11 + 312);
  v13 = *(_QWORD *)(v11 + 696);
  v14 = *(unsigned __int16 **)(v11 + 1416);
  v15 = 2400LL * a6;
  v51 = v14;
  *(_DWORD *)(v15 + v13 + 2248) = v12;
  if ( *(_DWORD *)(v11 + 720) == 1 && (*(_DWORD *)(v11 + 252) & 0x80u) == 0 )
    *a5 = *(_WORD *)(*(_QWORD *)(v11 + 328) + 4LL);
  memset(v14, 0, 2LL * v48);
  Usages = rimHidP_GetUsages(HidP_Input, 0xDu, v47, v51, &v48, v53, v54, a7);
  v16 = Usages;
  if ( Usages >= 0 )
  {
    v17 = 0;
    v46 = 0;
    if ( v48 )
    {
      v18 = v86[116];
      while ( 1 )
      {
        if ( v17 >= 6 )
        {
LABEL_53:
          v16 = Usages;
          break;
        }
        v55 = v17;
        switch ( v51[v17] )
        {
          case 0x32u:
            v43 |= 1u;
            *((_DWORD *)a5 + 5) |= 2u;
            break;
          case 0x3Cu:
            v18 |= 8u;
            v86[116] = v18;
            break;
          case 0x42u:
            goto LABEL_20;
          case 0x44u:
            *((_DWORD *)a5 + 26) |= 1u;
            break;
          case 0x45u:
            v18 |= 8u;
            *((_DWORD *)a5 + 26) |= 4u;
            v86[116] = v18;
LABEL_20:
            *((_DWORD *)a5 + 5) |= 2u;
            v43 |= 2u;
            *(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) |= 2u;
            if ( *(_BYTE *)(a1 + 1001) && (*(_DWORD *)(v11 + 252) & 0x40000) == 0 )
            {
              if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 1) > 4 )
                *((_DWORD *)a5 + 28) = 512;
              else
                *((_DWORD *)a5 + 37) = 512;
            }
            v19 = *(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392);
            if ( (v19 & 4) != 0 || (v19 & 0x20) != 0 && (unsigned int)(*(_DWORD *)(v11 + 24) - 6) > 1 )
            {
              *((_DWORD *)a5 + 5) |= 0x20014u;
              goto LABEL_47;
            }
            ApiSetDwmAsyncNotifyDigitizerActiveContacts(0LL, (unsigned int)++*(_DWORD *)(a1 + 588));
            if ( (int)IsSqmPointerDeviceDownSupported_0() >= 0 )
              SqmPointerDeviceDown_0();
            *((_DWORD *)a5 + 5) |= 0x10014u;
            if ( gFastSwitchingEnabled )
            {
              v20 = *(_DWORD *)(v11 + 24);
              if ( (unsigned int)(v20 - 6) > 1 )
              {
                if ( (unsigned int)(v20 - 1) <= 4 )
                {
                  v24 = *(_QWORD *)(a1 + 600);
                  if ( !v24 || (unsigned int)(*(_DWORD *)(v24 + 24) - 6) > 1 )
                    v24 = 0LL;
                  RIMABAssessContactForArbitrationSuspension(a1, v11, a6, v24);
                }
              }
              else
              {
                RIMICUpdateDeviceRank(v11, 1LL);
                RIMABSeekAndAbortLowerRankedActivity(a1, v11, v21);
                v22 = *(_QWORD *)(v11 + 696);
                v23 = *(_DWORD *)(v15 + v22 + 2392);
                if ( (v23 & 0x20) != 0 )
                  *(_DWORD *)(v15 + v22 + 2392) = v23 | 0x100;
              }
            }
            v25 = *(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392);
            if ( (v25 & 1) == 0 )
            {
              if ( (v25 & 0x20) == 0 || (v25 & 0x100) != 0 )
              {
                RIMABArbitratePrimaryStatus(a1, v11, a6);
LABEL_47:
                v26 = v44;
                v27 = v51[v55] == 66;
                v49 = 1;
                if ( v27 )
                  v26 = 1;
                v44 = v26;
                break;
              }
              if ( (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) & 1) == 0 )
                goto LABEL_47;
            }
            *(_DWORD *)(a1 + 612) = 1;
            goto LABEL_47;
          case 0x47u:
            *((_DWORD *)a5 + 5) |= 0x4000u;
            break;
          case 0xFEu:
            *((_DWORD *)a5 + 38) = 1;
            DbgPrintRIM("Found TESTSYNCFLAG\n", 1LL, 2LL);
            break;
          case 0xFFu:
            *((_DWORD *)a5 + 39) = 1;
            DbgPrintRIM("Found TESTINJECTFLAG\n", 1LL, 2LL);
            break;
        }
        v17 = v46 + 1;
        v46 = v17;
        if ( v17 >= v48 )
          goto LABEL_53;
      }
    }
    if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 1) <= 4 && (*(_DWORD *)(v11 + 252) & 0x10) == 0 )
      *((_DWORD *)a5 + 5) |= 0x4000u;
    if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 6) <= 1 )
      RIMAssignPointerDeviceInvertedState(
        v15 + *(_QWORD *)(v11 + 696),
        v11,
        (__int64)v58,
        (__int64)a5,
        v15 + *(_QWORD *)(v11 + 696),
        v44);
    if ( *(_DWORD *)(v11 + 720) == 1 && (*(_DWORD *)(v11 + 252) & 0x80u) == 0 )
      *(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2332) = *a5;
    if ( !v49 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x1Fu,
        (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
      if ( (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) & 4) != 0 )
      {
        *((_DWORD *)a5 + 5) |= 0x40000u;
        if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 6) <= 1 )
          RIMICUpdateDeviceRank(v11, 0LL);
        if ( (unsigned int)RIMIsFrameReportingPointerDevice(v11)
          && ((unsigned __int8)*(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) & (unsigned __int8)v28) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v11 + 712) + 56LL) = v28;
        }
        *(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) &= ~2u;
        v29 = *(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392);
        if ( (v29 & 0x20) == 0 && (v29 & 0x80u) == 0 )
          ApiSetDwmAsyncNotifyDigitizerActiveContacts(0LL, (unsigned int)--*(_DWORD *)(a1 + 588));
        RIMUseLastContactPosition(v11, a5, a9, a6);
        *v52 = 1;
      }
      else
      {
        *((_DWORD *)a5 + 5) |= 0x20000u;
        if ( gFastSwitchingEnabled && (unsigned int)(*(_DWORD *)(v11 + 24) - 6) <= 1 && *(_QWORD *)(a1 + 600) != v11 )
          RIMAbortDeviceActivity(a1, v11);
      }
      v30 = *(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392);
      if ( (v30 & 4) == 0 && (v30 & 1) != 0 && !*(_DWORD *)(a1 + 588) )
        *(_DWORD *)(a1 + 612) = 0;
      *(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) &= ~4u;
    }
    if ( (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) & 1) != 0 )
      *((_DWORD *)a5 + 5) |= 0x2000u;
    ApiSetGetPowerTransitionsState(v57);
    v31 = v57[0] == 0;
    if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 6) <= 1 )
    {
      v32 = *((_DWORD *)a5 + 5);
      if ( (v32 & 0x10000) != 0 )
      {
        *(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) ^= (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) ^ (16 * (a5[52] & 1))) & 0x10;
      }
      else if ( (v32 & 0x40000) != 0 )
      {
        *(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) &= ~0x10u;
      }
      if ( (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) & 0x10) != 0 )
      {
        v33 = *((_DWORD *)a5 + 5);
        if ( (v33 & 4) != 0 )
          *((_DWORD *)a5 + 5) = v33 & 0xFFFFFFCF | 0x20;
      }
    }
    v34 = *(_QWORD *)(v11 + 696);
    v35 = *(_DWORD *)(v15 + v34 + 2392);
    if ( (v35 & 0x80u) != 0 && *(_DWORD *)(v15 + v34 + 2340) )
    {
      if ( (v35 & 0x20) != 0 )
        goto LABEL_98;
      if ( (*((_DWORD *)a5 + 5) & 0x10000) == 0 )
      {
        LODWORD(v41) = 1;
        RIMReassessContactDelivery(a1, v11, a6, (_DWORD)a5 + 8, v41);
        goto LABEL_114;
      }
    }
    if ( (v35 & 0x20) == 0 )
    {
      RIMValidatePointerDeviceCurrentState(a1, v11, a6, v43, (__int64)(a5 + 10), v31);
      v36 = v16;
      v37 = *((_DWORD *)a5 + 5);
      if ( !v37 )
        v36 = -1073741668;
      if ( (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) & 0x20) != 0 )
      {
        v38 = v45;
        if ( (v37 & 2) != 0 )
          v38 = 1;
        *((_DWORD *)a5 + 5) = 0;
        v45 = v38;
      }
      if ( *(_WORD *)(v11 + 1496) == 2 )
        v36 = -1073741668;
      v16 = v36;
LABEL_114:
      if ( (*(_DWORD *)(v56 + 176) & 0x800) != 0 && (*((_DWORD *)a5 + 5) & 0x60000) != 0 )
      {
        v46 = 1;
        LOWORD(v44) = 0;
        v16 = rimHidP_GetUsages(HidP_Input, 0xFF00u, v47, (unsigned __int16 *)&v44, &v46, v53, v54, a7);
        if ( v16 < 0 )
        {
          v16 = 0;
        }
        else if ( v46 == 1 && (_WORD)v44 == 207 )
        {
          *((_DWORD *)a5 + 5) |= 0x8000u;
        }
      }
      v39 = *((_DWORD *)a5 + 5);
      if ( (v39 & 2) != 0 )
      {
        if ( !v45 )
          goto LABEL_132;
      }
      else if ( !v45 )
      {
        if ( (v39 & 0x40000) == 0 )
          RIMUseLastContactPosition(v11, a5, a9, a6);
        *v52 = 1;
        if ( *(_BYTE *)(a1 + 681) )
          RIMAssessPointerContactState(a1);
        if ( (*(_DWORD *)(v11 + 252) & 8) != 0 )
        {
          *(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) |= 0x400u;
          goto LABEL_132;
        }
LABEL_131:
        RIMRemoveContactFromActiveList(a1, v11, a6, a5);
        goto LABEL_132;
      }
      if ( v43 )
        goto LABEL_132;
      goto LABEL_131;
    }
LABEL_98:
    if ( (v35 & 0x100) != 0 )
    {
      LODWORD(v41) = 0;
      RIMReassessContactDelivery(a1, v11, a6, (_DWORD)a5 + 8, v41);
      *(_DWORD *)(v15 + *(_QWORD *)(v11 + 696) + 2392) &= ~0x100u;
    }
    else
    {
      if ( v49 || gFastSwitchingEnabled && (unsigned int)(*(_DWORD *)(v11 + 24) - 6) <= 1 )
        v45 = 1;
      *((_DWORD *)a5 + 5) = 0;
      v16 = -1073741668;
    }
    goto LABEL_114;
  }
LABEL_132:
  LODWORD(v42) = v16;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x20u,
    (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids,
    v42);
  return (unsigned int)v16;
}
