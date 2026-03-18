/*
 * XREFs of RIMGetPointerDeviceContactState @ 0x1C00CB12C
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CABDC (RIMGetMultiContactDeviceState.c)
 * Callees:
 *     IsSqmPointerDeviceDownSupported_0 @ 0x1C0002D10 (IsSqmPointerDeviceDownSupported_0.c)
 *     SqmPointerDeviceDown_0 @ 0x1C0002D18 (SqmPointerDeviceDown_0.c)
 *     RIMIsPenPointerDevice @ 0x1C001A8E4 (RIMIsPenPointerDevice.c)
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     DbgPrintRIM @ 0x1C0077BB4 (DbgPrintRIM.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     rimHidP_GetUsages @ 0x1C00C36E4 (rimHidP_GetUsages.c)
 *     RIMAbortDeviceActivity @ 0x1C00C37A4 (RIMAbortDeviceActivity.c)
 *     RIMAssignPointerDeviceInvertedState @ 0x1C00C3CF0 (RIMAssignPointerDeviceInvertedState.c)
 *     RIMIsFrameReportingPointerDevice @ 0x1C00C40DC (RIMIsFrameReportingPointerDevice.c)
 *     ??0tagRlsFilter@Prediction@@QEAA@XZ @ 0x1C00C9DE0 (--0tagRlsFilter@Prediction@@QEAA@XZ.c)
 *     RIMAssessPointerContactState @ 0x1C00C9EAC (RIMAssessPointerContactState.c)
 *     RIMReassessContactDelivery @ 0x1C00CBEA0 (RIMReassessContactDelivery.c)
 *     RIMUseLastContactPosition @ 0x1C00CC168 (RIMUseLastContactPosition.c)
 *     RIMValidatePointerDeviceCurrentState @ 0x1C00CC210 (RIMValidatePointerDeviceCurrentState.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CD49C (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CD4F0 (ApiSetGetPowerTransitionsState.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D1C4C (RIMRemoveContactFromActiveList.c)
 *     RIMABArbitratePrimaryStatus @ 0x1C00D2118 (RIMABArbitratePrimaryStatus.c)
 *     RIMABAssessContactForArbitrationSuspension @ 0x1C00D2328 (RIMABAssessContactForArbitrationSuspension.c)
 *     RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D272C (RIMABSeekAndAbortLowerRankedActivity.c)
 *     RIMICUpdateDeviceRank @ 0x1C00D2ED8 (RIMICUpdateDeviceRank.c)
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
  __int64 v16; // rcx
  int v17; // ebx
  unsigned int v18; // eax
  int v19; // r8d
  int v20; // ebx
  int v21; // ecx
  unsigned int v22; // edx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r9
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // r8d
  unsigned int v31; // r9d
  int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
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
    0x19u,
    (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids);
  v48 = *(_DWORD *)(v11 + 296);
  v13 = *(_QWORD *)(v11 + 680);
  v14 = *(unsigned __int16 **)(v11 + 1400);
  v15 = 2400LL * a6;
  v51 = v14;
  *(_DWORD *)(v15 + v13 + 2248) = v12;
  if ( *(_DWORD *)(v11 + 704) == 1 && (*(_DWORD *)(v11 + 236) & 0x20) == 0 )
    *a5 = *(_WORD *)(*(_QWORD *)(v11 + 312) + 4LL);
  memset(v14, 0, 2LL * v48);
  Usages = rimHidP_GetUsages(v16, 0xDu, v47, v51, &v48, v53, v54, a7);
  v17 = Usages;
  if ( Usages >= 0 )
  {
    v18 = 0;
    v46 = 0;
    v19 = 1;
    if ( v48 )
    {
      v20 = v86[116];
      while ( 1 )
      {
        if ( v18 >= 6 )
        {
LABEL_55:
          v17 = Usages;
          break;
        }
        v55 = v18;
        switch ( v51[v18] )
        {
          case 0x32u:
            v43 |= 1u;
            *((_DWORD *)a5 + 5) |= 2u;
            goto LABEL_53;
          case 0x3Cu:
            v20 |= 8u;
            v86[116] = v20;
            break;
          case 0x42u:
            goto LABEL_20;
          case 0x44u:
            *((_DWORD *)a5 + 26) |= 1u;
            v19 = 1;
            break;
          case 0x45u:
            v20 |= 8u;
            *((_DWORD *)a5 + 26) |= 4u;
            v86[116] = v20;
LABEL_20:
            *((_DWORD *)a5 + 5) |= 2u;
            v43 |= 2u;
            *(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) |= 2u;
            if ( *(_BYTE *)(a1 + 953) && (*(_DWORD *)(v11 + 236) & 0x10000) == 0 )
            {
              if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 1) > 4 )
                *((_DWORD *)a5 + 28) = 512;
              else
                *((_DWORD *)a5 + 37) = 512;
            }
            v21 = *(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392);
            if ( (v21 & 4) != 0 || (v21 & 0x20) != 0 && !RIMIsPenPointerDevice(v11) )
            {
              *((_DWORD *)a5 + 5) |= 0x20014u;
            }
            else
            {
              ApiSetDwmAsyncNotifyDigitizerActiveContacts(0LL, (unsigned int)++*(_DWORD *)(a1 + 556));
              if ( (int)IsSqmPointerDeviceDownSupported_0() >= 0 )
                SqmPointerDeviceDown_0();
              *((_DWORD *)a5 + 5) |= 0x10014u;
              if ( gFastSwitchingEnabled )
              {
                if ( RIMIsPenPointerDevice(v11) )
                {
                  RIMICUpdateDeviceRank(v11, 1LL);
                  RIMABSeekAndAbortLowerRankedActivity(a1, v11, v22);
                  v23 = *(_QWORD *)(v11 + 680);
                  v24 = *(_DWORD *)(v15 + v23 + 2392);
                  if ( (v24 & 0x20) != 0 )
                    *(_DWORD *)(v15 + v23 + 2392) = v24 | 0x100;
                }
                else if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 1) <= 4 )
                {
                  if ( !*(_QWORD *)(a1 + 568) || !RIMIsPenPointerDevice(*(_QWORD *)(a1 + 568)) )
                    v25 = 0LL;
                  RIMABAssessContactForArbitrationSuspension(a1, v11, a6, v25);
                }
              }
              v26 = *(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392);
              if ( (v26 & 1) != 0 )
                goto LABEL_49;
              if ( (v26 & 0x20) == 0 || (v26 & 0x100) != 0 )
              {
                RIMABArbitratePrimaryStatus(a1, v11, a6);
                goto LABEL_44;
              }
              if ( (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) & 1) != 0 )
LABEL_49:
                *(_DWORD *)(a1 + 580) = 1;
LABEL_44:
              v19 = 1;
            }
            v27 = v44;
            v49 = 1;
            if ( v51[v55] == 66 )
              v27 = v19;
            v44 = v27;
            goto LABEL_53;
          case 0x47u:
            *((_DWORD *)a5 + 5) |= 0x4000u;
            break;
          case 0xFEu:
            *((_DWORD *)a5 + 38) = 1;
            DbgPrintRIM("Found TESTSYNCFLAG\n", 2LL, 1LL);
            goto LABEL_53;
          case 0xFFu:
            *((_DWORD *)a5 + 39) = 1;
            DbgPrintRIM("Found TESTINJECTFLAG\n", 2LL, 1LL);
LABEL_53:
            v19 = 1;
            break;
        }
        v18 = v46 + 1;
        v46 = v18;
        if ( v18 >= v48 )
          goto LABEL_55;
      }
    }
    if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 1) <= 4 && (*(_DWORD *)(v11 + 236) & 4) == 0 )
      *((_DWORD *)a5 + 5) |= 0x4000u;
    if ( RIMIsPenPointerDevice(v11) )
      RIMAssignPointerDeviceInvertedState(
        v15 + *(_QWORD *)(v11 + 680),
        v11,
        (__int64)v58,
        (__int64)a5,
        v15 + *(_QWORD *)(v11 + 680),
        v44);
    if ( *(_DWORD *)(v11 + 704) == 1 && (*(_DWORD *)(v11 + 236) & 0x20) == 0 )
      *(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2332) = *a5;
    if ( !v49 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x1Au,
        (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids);
      if ( (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) & 4) != 0 )
      {
        *((_DWORD *)a5 + 5) |= 0x40000u;
        if ( RIMIsPenPointerDevice(v11) )
          RIMICUpdateDeviceRank(v11, 0LL);
        if ( (unsigned int)RIMIsFrameReportingPointerDevice(v11)
          && (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) & 1) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v11 + 696) + 56LL) = 1;
        }
        *(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) &= ~2u;
        v28 = *(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392);
        if ( (v28 & 0x20) == 0 && (v28 & 0x80u) == 0 )
          ApiSetDwmAsyncNotifyDigitizerActiveContacts(0LL, (unsigned int)--*(_DWORD *)(a1 + 556));
        RIMUseLastContactPosition(v11, a5, a9, a6);
        *v52 = 1;
      }
      else
      {
        *((_DWORD *)a5 + 5) |= 0x20000u;
        if ( gFastSwitchingEnabled && RIMIsPenPointerDevice(v11) && *(_QWORD *)(a1 + 568) != v11 )
          RIMAbortDeviceActivity(a1, v11);
      }
      v29 = *(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392);
      if ( (v29 & 4) == 0 && (v29 & 1) != 0 && !*(_DWORD *)(a1 + 556) )
        *(_DWORD *)(a1 + 580) = 0;
      *(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) &= ~4u;
    }
    if ( (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) & 1) != 0 )
      *((_DWORD *)a5 + 5) |= 0x2000u;
    ApiSetGetPowerTransitionsState(v57);
    if ( RIMIsPenPointerDevice(v11) )
    {
      v32 = *((_DWORD *)a5 + 5);
      if ( (v32 & 0x10000) != 0 )
      {
        *(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) ^= (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) ^ (16 * (v31 & (_BYTE)a5[52]))) & 0x10;
      }
      else if ( (v32 & 0x40000) != 0 )
      {
        *(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) &= ~0x10u;
      }
      if ( (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) & 0x10) != 0 )
      {
        v33 = *((_DWORD *)a5 + 5);
        if ( (v33 & 4) != 0 )
          *((_DWORD *)a5 + 5) = v33 & 0xFFFFFFCF | 0x20;
      }
    }
    v34 = *(_QWORD *)(v11 + 680);
    v35 = *(unsigned int *)(v15 + v34 + 2392);
    if ( (v35 & 0x80u) != 0LL && *(_DWORD *)(v15 + v34 + 2340) )
    {
      if ( (v35 & 0x20) != 0 )
        goto LABEL_101;
      if ( (*((_DWORD *)a5 + 5) & 0x10000) == 0 )
      {
        LODWORD(v41) = v31;
        RIMReassessContactDelivery(a1, v11, a6, (_DWORD)a5 + 8, v41);
LABEL_99:
        v31 = 1;
        goto LABEL_117;
      }
    }
    if ( (v35 & 0x20) == 0 )
    {
      RIMValidatePointerDeviceCurrentState(a1, v11, a6, v43, (__int64)(a5 + 10), v30);
      v36 = v17;
      v37 = *((_DWORD *)a5 + 5);
      v31 = 1;
      if ( !v37 )
        v36 = -1073741668;
      v35 = 2LL;
      if ( (*(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) & 0x20) != 0 )
      {
        v38 = v45;
        if ( (v37 & 2) != 0 )
          v38 = 1;
        *((_DWORD *)a5 + 5) = 0;
        v45 = v38;
      }
      if ( *(_WORD *)(v11 + 1480) == 2 )
        v36 = -1073741668;
      v17 = v36;
      goto LABEL_117;
    }
LABEL_101:
    if ( (v35 & 0x100) != 0 )
    {
      LODWORD(v41) = 0;
      RIMReassessContactDelivery(a1, v11, a6, (_DWORD)a5 + 8, v41);
      *(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) &= ~0x100u;
      goto LABEL_99;
    }
    if ( v49 || gFastSwitchingEnabled && RIMIsPenPointerDevice(v11) )
      v45 = v31;
    *((_DWORD *)a5 + 5) = 0;
    v17 = -1073741668;
LABEL_117:
    if ( (*(_DWORD *)(v56 + 184) & 0x800) != 0 && (*((_DWORD *)a5 + 5) & 0x60000) != 0 )
    {
      LOWORD(v44) = 0;
      v46 = v31;
      v17 = rimHidP_GetUsages(v35, 0xFF00u, v47, (unsigned __int16 *)&v44, &v46, v53, v54, a7);
      if ( v17 < 0 )
      {
        v17 = 0;
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
        goto LABEL_135;
    }
    else if ( !v45 )
    {
      if ( (v39 & 0x40000) == 0 )
        RIMUseLastContactPosition(v11, a5, a9, a6);
      *v52 = 1;
      if ( *(_BYTE *)(a1 + 649) )
        RIMAssessPointerContactState(a1);
      if ( (*(_DWORD *)(v11 + 236) & 2) != 0 )
      {
        *(_DWORD *)(v15 + *(_QWORD *)(v11 + 680) + 2392) |= 0x400u;
        goto LABEL_135;
      }
LABEL_134:
      RIMRemoveContactFromActiveList(a1, v11, a6, a5);
      goto LABEL_135;
    }
    if ( v43 )
      goto LABEL_135;
    goto LABEL_134;
  }
LABEL_135:
  LODWORD(v42) = v17;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x1Bu,
    (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids,
    v42);
  return (unsigned int)v17;
}
