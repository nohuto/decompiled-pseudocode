/*
 * XREFs of GetPointerDeviceContactState @ 0x1C01CB070
 * Callers:
 *     ?GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINFO@@KPEADPEAUtagHPD_CONTACT_GEOMETRY@@@Z @ 0x1C01C5118 (-GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINF.c)
 *     ExtractDeviceUsages @ 0x1C01C995C (ExtractDeviceUsages.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C0105EDC (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??0tagMedianSmoother@Prediction@@QEAA@XZ @ 0x1C01C405C (--0tagMedianSmoother@Prediction@@QEAA@XZ.c)
 *     ??0tagRlsFilter@Prediction@@QEAA@XZ @ 0x1C01C4088 (--0tagRlsFilter@Prediction@@QEAA@XZ.c)
 *     ?ReassessContactDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTER_INFO@@H@Z @ 0x1C01C5CD0 (-ReassessContactDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTER_INFO@@H@Z.c)
 *     ArbitratePrimaryStatus @ 0x1C01C7398 (ArbitratePrimaryStatus.c)
 *     DecActiveContacts @ 0x1C01C83FC (DecActiveContacts.c)
 *     IncActiveContacts @ 0x1C01CBD8C (IncActiveContacts.c)
 *     IsFrameReportingPointerDevice @ 0x1C01CC010 (IsFrameReportingPointerDevice.c)
 *     RemoveContactFromActiveList @ 0x1C01CC48C (RemoveContactFromActiveList.c)
 *     SqmPointerDeviceDown @ 0x1C01CC9D0 (SqmPointerDeviceDown.c)
 *     UseLastContactPosition @ 0x1C01CCD90 (UseLastContactPosition.c)
 *     ValidatePointerDeviceCurrentState @ 0x1C01CD2A4 (ValidatePointerDeviceCurrentState.c)
 *     xxxAssessPointerContactState @ 0x1C01CD534 (xxxAssessPointerContactState.c)
 */

__int64 __fastcall GetPointerDeviceContactState(
        struct _HIDP_PREPARSED_DATA *a1,
        USHORT a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        ULONG ReportLength,
        CHAR *a7,
        __int64 a8,
        _DWORD *a9)
{
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  _WORD *v14; // r12
  NTSTATUS Usages; // ebx
  ULONG v16; // r8d
  __int64 v17; // r12
  int i; // ecx
  __int64 v19; // rax
  int v20; // ecx
  ULONG v21; // eax
  bool v22; // zf
  int v23; // r9d
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  int v35; // ecx
  int v36; // r12d
  int v37; // ecx
  int v38; // eax
  __int64 v39; // rcx
  USHORT UsageList[2]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v42; // [rsp+44h] [rbp-BCh] BYREF
  int v43; // [rsp+48h] [rbp-B8h]
  USHORT v44; // [rsp+4Ch] [rbp-B4h]
  ULONG UsageLength; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+54h] [rbp-ACh]
  _WORD *v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  _DWORD *v49; // [rsp+68h] [rbp-98h]
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+70h] [rbp-90h]
  PCHAR Report; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h]
  _BYTE v53[440]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v54[432]; // [rsp+248h] [rbp+148h] BYREF
  _BYTE v55[432]; // [rsp+3F8h] [rbp+2F8h] BYREF
  _BYTE v56[432]; // [rsp+5A8h] [rbp+4A8h] BYREF
  _BYTE v57[32]; // [rsp+758h] [rbp+658h] BYREF
  _BYTE v58[32]; // [rsp+778h] [rbp+678h] BYREF
  _BYTE v59[32]; // [rsp+798h] [rbp+698h] BYREF
  _BYTE v60[32]; // [rsp+7B8h] [rbp+6B8h] BYREF
  __int64 v61; // [rsp+7D8h] [rbp+6D8h]
  __int64 v62; // [rsp+7E0h] [rbp+6E0h]
  __int64 v63; // [rsp+7E8h] [rbp+6E8h]
  __int64 v64; // [rsp+7F0h] [rbp+6F0h]
  __int64 v65; // [rsp+7F8h] [rbp+6F8h]
  __int64 v66; // [rsp+800h] [rbp+700h]
  __int64 v67; // [rsp+808h] [rbp+708h]
  __int64 v68; // [rsp+810h] [rbp+710h]
  _DWORD v69[118]; // [rsp+818h] [rbp+718h] BYREF

  v10 = *(_QWORD *)(a4 + 416);
  Report = a7;
  v48 = a8;
  v49 = a9;
  PreparsedData = a1;
  v44 = a2;
  v52 = a4;
  v46 = 0;
  v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v43 = 0;
  memset(v53, 0, sizeof(v53));
  Prediction::tagRlsFilter::tagRlsFilter((Prediction::tagRlsFilter *)&v53[8]);
  memset(v54, 0, sizeof(v54));
  Prediction::tagRlsFilter::tagRlsFilter((Prediction::tagRlsFilter *)v54);
  memset(v55, 0, sizeof(v55));
  Prediction::tagRlsFilter::tagRlsFilter((Prediction::tagRlsFilter *)v55);
  memset(v56, 0, sizeof(v56));
  Prediction::tagRlsFilter::tagRlsFilter((Prediction::tagRlsFilter *)v56);
  memset(v57, 0, sizeof(v57));
  Prediction::tagMedianSmoother::tagMedianSmoother((Prediction::tagMedianSmoother *)v57);
  memset(v58, 0, sizeof(v58));
  Prediction::tagMedianSmoother::tagMedianSmoother((Prediction::tagMedianSmoother *)v58);
  memset(v59, 0, sizeof(v59));
  Prediction::tagMedianSmoother::tagMedianSmoother((Prediction::tagMedianSmoother *)v59);
  memset(v60, 0, sizeof(v60));
  Prediction::tagMedianSmoother::tagMedianSmoother((Prediction::tagMedianSmoother *)v60);
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  memset(v69, 0, 0x58uLL);
  `vector constructor iterator'((char *)&v69[2], 8LL, 10, (void (__fastcall *)(char *))Prediction::CFixPred::CFixPred);
  memset(&v69[22], 0, 0x58uLL);
  `vector constructor iterator'((char *)&v69[24], 8LL, 10, (void (__fastcall *)(char *))Prediction::CFixPred::CFixPred);
  memset(&v69[44], 0, 0x128uLL);
  UsageLength = *(_DWORD *)(v10 + 296);
  v12 = *(_QWORD *)(v10 + 680);
  v13 = 2400LL * a5;
  *(_DWORD *)UsageList = 0;
  v42 = 0;
  v14 = *(_WORD **)(v10 + 1400);
  v47 = v14;
  *(_DWORD *)(v13 + v12 + 2248) = v11;
  if ( *(_DWORD *)(v10 + 704) == 1 && (*(_DWORD *)(v10 + 236) & 0x20) == 0 )
    *a3 = *(_WORD *)(*(_QWORD *)(v10 + 312) + 4LL);
  memset(v14, 0, 2LL * UsageLength);
  Usages = HidP_GetUsages(HidP_Input, 0xDu, v44, v14, &UsageLength, PreparsedData, Report, ReportLength);
  if ( Usages >= 0 )
  {
    v16 = UsageLength;
    v17 = 0LL;
    for ( i = v69[116]; (unsigned int)v17 < v16; v17 = (unsigned int)(v17 + 1) )
    {
      if ( (unsigned int)v17 >= 6 )
        break;
      switch ( v47[v17] )
      {
        case '2':
          v43 |= 1u;
          *((_DWORD *)a3 + 5) |= 2u;
          break;
        case '<':
          i |= 8u;
          v69[116] = i;
          break;
        case 'B':
          goto LABEL_15;
        case 'D':
          *((_DWORD *)a3 + 26) |= 1u;
          break;
        case 'E':
          *((_DWORD *)a3 + 26) |= 4u;
          v69[116] = i | 8;
LABEL_15:
          *((_DWORD *)a3 + 5) |= 2u;
          v19 = *(_QWORD *)(v10 + 680);
          v43 |= 2u;
          *(_DWORD *)(v13 + v19 + 2392) |= 2u;
          v20 = *(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392);
          if ( (v20 & 4) != 0 || (v20 & 0x20) != 0 )
          {
            *((_DWORD *)a3 + 5) |= 0x20014u;
          }
          else
          {
            IncActiveContacts(&gActivePointerDeviceList);
            SqmPointerDeviceDown(v10);
            *((_DWORD *)a3 + 5) |= 0x10014u;
            if ( (*(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) & 1) != 0 )
              dword_1C032CB1C = 1;
            else
              ArbitratePrimaryStatus((struct tagHID_POINTER_DEVICE_INFO *)v10, a5);
          }
          v21 = v42;
          v16 = UsageLength;
          v22 = v47[v17] == 66;
          v46 = 1;
          if ( v22 )
            v21 = 1;
          i = v69[116];
          v42 = v21;
          continue;
        case 'G':
          *((_DWORD *)a3 + 5) |= 0x4000u;
          break;
      }
    }
    v23 = 1;
    if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 1) <= 4 && (*(_DWORD *)(v10 + 236) & 4) == 0 )
      *((_DWORD *)a3 + 5) |= 0x4000u;
    if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 6) > 1 )
    {
LABEL_45:
      if ( *(_DWORD *)(v10 + 704) == 1 && (*(_DWORD *)(v10 + 236) & 0x20) == 0 )
        *(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2332) = *a3;
      if ( !v46 )
      {
        if ( (*(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) & 4) != 0 )
        {
          if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 6) <= 1 && gSqmPenDownCount )
            --gSqmPenDownCount;
          *((_DWORD *)a3 + 5) |= 0x40000u;
          if ( (unsigned int)IsFrameReportingPointerDevice(v10)
            && ((unsigned __int8)*(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) & (unsigned __int8)v27) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v10 + 696) + 56LL) = v27;
          }
          *(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) &= ~2u;
          v28 = *(unsigned int *)(v13 + *(_QWORD *)(v10 + 680) + 2392);
          if ( (v28 & 0x20) == 0 && (v28 & 0x80u) == 0LL )
            DecActiveContacts((__int64)&gActivePointerDeviceList, v28, v26, v27);
          UseLastContactPosition(v10, a3, v48, a5);
          v23 = 1;
          *v49 = 1;
        }
        if ( (*(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) & 4) == 0 )
          *((_DWORD *)a3 + 5) |= 0x20000u;
        v29 = *(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392);
        if ( (v29 & 4) == 0 && (v29 & 1) != 0 && !dword_1C0324794 )
          dword_1C032CB1C = 0;
        *(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) &= ~4u;
      }
      if ( (*(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) & 1) != 0 )
        *((_DWORD *)a3 + 5) |= 0x2000u;
      v30 = 0x10000LL;
      v31 = gPowerTransitionsState[0] == 0;
      if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 6) <= 1 )
      {
        v32 = *((_DWORD *)a3 + 5);
        if ( (v32 & 0x10000) != 0 )
        {
          *(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) ^= (*(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) ^ (16 * (a3[52] & 1))) & 0x10;
        }
        else if ( (v32 & 0x40000) != 0 )
        {
          *(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) &= ~0x10u;
        }
        if ( (*(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) & 0x10) != 0 )
        {
          v33 = *((_DWORD *)a3 + 5);
          if ( (v33 & 4) != 0 )
            *((_DWORD *)a3 + 5) = v33 & 0xFFFFFFCF | 0x20;
        }
      }
      v34 = *(_QWORD *)(v10 + 680);
      v35 = *(_DWORD *)(v13 + v34 + 2392);
      if ( (v35 & 0x80u) != 0 && *(_DWORD *)(v13 + v34 + 2340) )
      {
        if ( (v35 & 0x20) != 0 )
        {
LABEL_83:
          if ( (v35 & 0x100) == 0 )
          {
            *((_DWORD *)a3 + 5) = 0;
            v36 = 1;
            Usages = -1073741668;
            goto LABEL_96;
          }
          v23 = 0;
          goto LABEL_81;
        }
        if ( (*((_DWORD *)a3 + 5) & 0x10000) == 0 )
        {
LABEL_81:
          ReassessContactDelivery((struct _LIST_ENTRY *)v10, a5, (struct tagPOINTER_INFO *)(a3 + 4), v23);
LABEL_95:
          v36 = *(_DWORD *)UsageList;
LABEL_96:
          if ( (*(_BYTE *)(v52 + 64) & 0x40) != 0 && (*((_DWORD *)a3 + 5) & 0x60000) != 0 )
          {
            UsageList[0] = 0;
            v42 = 1;
            Usages = HidP_GetUsages(HidP_Input, 0xFF00u, v44, UsageList, &v42, PreparsedData, Report, ReportLength);
            if ( Usages >= 0 && v42 == 1 && UsageList[0] == 207 )
              *((_DWORD *)a3 + 5) |= 0x8000u;
          }
          v38 = *((_DWORD *)a3 + 5);
          if ( (v38 & 2) == 0 && !v36 )
          {
            if ( (v38 & 0x40000) == 0 )
              UseLastContactPosition(v10, a3, v48, a5);
            v22 = gbPointerSendLastPending == 0;
            *v49 = 1;
            if ( !v22 )
            {
              v39 = gptiRit;
              if ( gptiCurrent == gptiRit || (unsigned int)IsDwmInputThread(gptiRit, v31, v30, 1LL) )
                xxxAssessPointerContactState(v39, v31, v30);
            }
            if ( *(_QWORD *)(v10 + 696) )
              *(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) |= 0x400u;
            else
              RemoveContactFromActiveList((struct tagHID_POINTER_DEVICE_INFO *)v10);
          }
          return (unsigned int)Usages;
        }
      }
      if ( (v35 & 0x20) == 0 )
      {
        ValidatePointerDeviceCurrentState((struct tagHID_POINTER_DEVICE_INFO *)v10, a5, v31);
        v31 = (unsigned int)Usages;
        v30 = *((unsigned int *)a3 + 5);
        if ( !(_DWORD)v30 )
          v31 = 3221225628LL;
        if ( (*(_DWORD *)(v13 + *(_QWORD *)(v10 + 680) + 2392) & 0x20) != 0 )
        {
          v37 = *(_DWORD *)UsageList;
          LOBYTE(v30) = v30 & 2;
          if ( (_BYTE)v30 )
            v37 = 1;
          *((_DWORD *)a3 + 5) = 0;
          *(_DWORD *)UsageList = v37;
        }
        if ( *(_WORD *)(v10 + 1480) == 2 )
          v31 = 3221225628LL;
        Usages = v31;
        goto LABEL_95;
      }
      goto LABEL_83;
    }
    v24 = *(_QWORD *)(v10 + 680);
    if ( *(_DWORD *)(v13 + v24 + 2340) )
    {
      v25 = *(_DWORD *)(v13 + v24 + 2392);
      if ( (((unsigned __int8)v25 ^ (unsigned __int8)i) & 8) == 0 )
        goto LABEL_40;
      i ^= ((unsigned __int8)v25 ^ (unsigned __int8)i) & 8;
    }
    else
    {
      if ( !v42 || (i & 8) == 0 )
      {
LABEL_40:
        if ( (i & 8) != 0 )
        {
          *((_DWORD *)a3 + 26) |= 2u;
          if ( *(_DWORD *)(v13 + v24 + 2340) == 2 )
            *((_DWORD *)a3 + 26) |= 4u;
          *a3 = *(_WORD *)(*(_QWORD *)(v10 + 312) + 16LL);
          *(_DWORD *)(v13 + v24 + 2392) |= 8u;
        }
        else
        {
          *((_DWORD *)a3 + 26) &= ~4u;
        }
        goto LABEL_45;
      }
      i &= ~8u;
    }
    v69[116] = i;
    goto LABEL_40;
  }
  return (unsigned int)Usages;
}
