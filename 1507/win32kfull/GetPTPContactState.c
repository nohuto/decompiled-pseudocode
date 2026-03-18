/*
 * XREFs of GetPTPContactState @ 0x1C01CF2F0
 * Callers:
 *     ?GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINFO@@KPEADPEAUtagHPD_CONTACT_GEOMETRY@@@Z @ 0x1C01C5118 (-GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINF.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C0105EDC (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??0tagMedianSmoother@Prediction@@QEAA@XZ @ 0x1C01C405C (--0tagMedianSmoother@Prediction@@QEAA@XZ.c)
 *     ??0tagRlsFilter@Prediction@@QEAA@XZ @ 0x1C01C4088 (--0tagRlsFilter@Prediction@@QEAA@XZ.c)
 *     ArbitratePrimaryStatus @ 0x1C01C7398 (ArbitratePrimaryStatus.c)
 *     DecActiveContacts @ 0x1C01C83FC (DecActiveContacts.c)
 *     IncActiveContacts @ 0x1C01CBD8C (IncActiveContacts.c)
 *     IsFrameReportingPointerDevice @ 0x1C01CC010 (IsFrameReportingPointerDevice.c)
 *     UseLastContactPosition @ 0x1C01CCD90 (UseLastContactPosition.c)
 *     ValidatePointerDeviceCurrentState @ 0x1C01CD2A4 (ValidatePointerDeviceCurrentState.c)
 *     ?GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@Z @ 0x1C01CE218 (-GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@.c)
 *     CheckPTPConfidenceBit @ 0x1C01CED4C (CheckPTPConfidenceBit.c)
 */

__int64 __fastcall GetPTPContactState(
        struct _HIDP_PREPARSED_DATA *a1,
        USHORT a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        ULONG ReportLength,
        CHAR *a7,
        unsigned int *a8)
{
  __int64 v10; // rsi
  unsigned int v11; // r13d
  unsigned __int64 v12; // rbx
  PUSAGE v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r9
  unsigned int v17; // ebx
  ULONG v18; // ecx
  __int64 v19; // rdi
  PUSAGE v20; // rbx
  __int64 v21; // rdx
  int v22; // ecx
  struct _HIDP_PREPARSED_DATA *v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rax
  ULONG UsageLength; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh]
  PCHAR Report; // [rsp+48h] [rbp-B8h]
  ULONG UsageValue; // [rsp+50h] [rbp-B0h] BYREF
  NTSTATUS Usages; // [rsp+54h] [rbp-ACh]
  PUSAGE UsageList; // [rsp+58h] [rbp-A8h]
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+60h] [rbp-A0h]
  unsigned int *v39; // [rsp+68h] [rbp-98h]
  _BYTE v40[440]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v41[432]; // [rsp+228h] [rbp+128h] BYREF
  _BYTE v42[432]; // [rsp+3D8h] [rbp+2D8h] BYREF
  _BYTE v43[432]; // [rsp+588h] [rbp+488h] BYREF
  _BYTE v44[32]; // [rsp+738h] [rbp+638h] BYREF
  _BYTE v45[32]; // [rsp+758h] [rbp+658h] BYREF
  _BYTE v46[32]; // [rsp+778h] [rbp+678h] BYREF
  _BYTE v47[32]; // [rsp+798h] [rbp+698h] BYREF
  __int64 v48; // [rsp+7B8h] [rbp+6B8h]
  __int64 v49; // [rsp+7C0h] [rbp+6C0h]
  __int64 v50; // [rsp+7C8h] [rbp+6C8h]
  __int64 v51; // [rsp+7D0h] [rbp+6D0h]
  __int64 v52; // [rsp+7D8h] [rbp+6D8h]
  __int64 v53; // [rsp+7E0h] [rbp+6E0h]
  __int64 v54; // [rsp+7E8h] [rbp+6E8h]
  __int64 v55; // [rsp+7F0h] [rbp+6F0h]
  char v56[472]; // [rsp+7F8h] [rbp+6F8h] BYREF

  v33 = 0;
  v10 = *(_QWORD *)(a4 + 416);
  Report = a7;
  v11 = 0;
  v39 = a8;
  PreparsedData = a1;
  v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  memset(v40, 0, sizeof(v40));
  Prediction::tagRlsFilter::tagRlsFilter((Prediction::tagRlsFilter *)&v40[8]);
  memset(v41, 0, sizeof(v41));
  Prediction::tagRlsFilter::tagRlsFilter((Prediction::tagRlsFilter *)v41);
  memset(v42, 0, sizeof(v42));
  Prediction::tagRlsFilter::tagRlsFilter((Prediction::tagRlsFilter *)v42);
  memset(v43, 0, sizeof(v43));
  Prediction::tagRlsFilter::tagRlsFilter((Prediction::tagRlsFilter *)v43);
  memset(v44, 0, sizeof(v44));
  Prediction::tagMedianSmoother::tagMedianSmoother((Prediction::tagMedianSmoother *)v44);
  memset(v45, 0, sizeof(v45));
  Prediction::tagMedianSmoother::tagMedianSmoother((Prediction::tagMedianSmoother *)v45);
  memset(v46, 0, sizeof(v46));
  Prediction::tagMedianSmoother::tagMedianSmoother((Prediction::tagMedianSmoother *)v46);
  memset(v47, 0, sizeof(v47));
  Prediction::tagMedianSmoother::tagMedianSmoother((Prediction::tagMedianSmoother *)v47);
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  memset(v56, 0, 0x58uLL);
  `vector constructor iterator'(&v56[8], 8LL, 10, (void (__fastcall *)(char *))Prediction::CFixPred::CFixPred);
  memset(&v56[88], 0, 0x58uLL);
  `vector constructor iterator'(&v56[96], 8LL, 10, (void (__fastcall *)(char *))Prediction::CFixPred::CFixPred);
  memset(&v56[176], 0, 0x128uLL);
  UsageLength = *(_DWORD *)(v10 + 296);
  v14 = *(_QWORD *)(v10 + 680);
  v15 = 2400LL * a5;
  UsageList = *(PUSAGE *)(v10 + 1400);
  v13 = UsageList;
  *(_DWORD *)(v14 + v15 + 2248) = v12;
  memset(v13, 0, 2LL * UsageLength);
  Usages = HidP_GetUsages(HidP_Input, 0xDu, a2, UsageList, &UsageLength, PreparsedData, Report, ReportLength);
  v17 = Usages;
  if ( Usages < 0 )
    return v17;
  v18 = UsageLength;
  v19 = 0LL;
  if ( UsageLength )
  {
    v20 = UsageList;
    do
    {
      v21 = v20[v19];
      if ( (_DWORD)v21 == 66 )
      {
        v11 |= 2u;
        *(_DWORD *)(*(_QWORD *)(v10 + 680) + v15 + 2392) |= 2u;
        v22 = *(_DWORD *)(*(_QWORD *)(v10 + 680) + v15 + 2392);
        if ( (v22 & 4) != 0 || (v22 & 0x20) != 0 )
        {
          *(_DWORD *)(a3 + 20) |= 0x20006u;
        }
        else
        {
          IncActiveContacts((__int64)&gActivePointerDeviceList, v21, 1LL, v16);
          *(_DWORD *)(a3 + 20) |= 0x10006u;
          if ( (*(_DWORD *)(*(_QWORD *)(v10 + 680) + v15 + 2392) & 1) != 0 )
            dword_1C032CB1C = 1;
          else
            ArbitratePrimaryStatus((struct tagHID_POINTER_DEVICE_INFO *)v10, a5);
        }
        v18 = UsageLength;
        v33 = 1;
      }
      else if ( (_DWORD)v21 == 71 )
      {
        *(_DWORD *)(a3 + 20) |= 0x4000u;
      }
      v19 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v19 < v18 );
    v17 = Usages;
  }
  v23 = PreparsedData;
  HidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, &UsageValue, PreparsedData, Report, ReportLength);
  if ( UsageValue )
    GetPTPClickButtonState((struct tagHID_POINTER_DEVICE_INFO *)v10, v23, ReportLength, Report, 0LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 696) + 4LL) & 4) != 0 )
    *(_DWORD *)(a3 + 20) |= 0x10u;
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 696) + 4LL) & 8) != 0 )
    *(_DWORD *)(a3 + 20) |= 0x20u;
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 696) + 4LL) & 0x10) != 0 )
    *(_DWORD *)(a3 + 20) |= 0x40u;
  if ( !v33 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v10 + 680) + v15 + 2392) & 4) != 0 )
    {
      *(_DWORD *)(a3 + 20) |= 0x40000u;
      if ( (unsigned int)IsFrameReportingPointerDevice(v10)
        && (*(_DWORD *)(*(_QWORD *)(v10 + 680) + v15 + 2392) & 1) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v10 + 696) + 56LL) = 1;
      }
      *(_DWORD *)(*(_QWORD *)(v10 + 680) + v15 + 2392) &= ~2u;
      v26 = *(unsigned int *)(*(_QWORD *)(v10 + 680) + v15 + 2392);
      if ( (v26 & 0x20) == 0 )
        DecActiveContacts((__int64)&gActivePointerDeviceList, v26, v24, v25);
      UseLastContactPosition(v10, (_QWORD *)a3, v39, a5);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v10 + 680) + v15 + 2392) & 4) == 0 )
      *(_DWORD *)(a3 + 20) |= 0x20000u;
    v27 = *(_DWORD *)(*(_QWORD *)(v10 + 680) + v15 + 2392);
    if ( (v27 & 4) == 0 && (v27 & 1) != 0 && !dword_1C0324794 )
      dword_1C032CB1C = 0;
    *(_DWORD *)(*(_QWORD *)(v10 + 680) + v15 + 2392) &= ~4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 680) + v15 + 2392) & 1) != 0 )
    *(_DWORD *)(a3 + 20) |= 0x2000u;
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 680) + v15 + 2392) & 0x20) != 0 )
  {
    v17 = -1073741668;
  }
  else
  {
    ValidatePointerDeviceCurrentState(
      (struct _LIST_ENTRY *)v10,
      a5,
      v11,
      (_DWORD *)(a3 + 20),
      gPowerTransitionsState[0] == 0);
    CheckPTPConfidenceBit(v10, a5, (int *)(a3 + 20));
    v28 = v17;
    if ( !*(_DWORD *)(a3 + 20) )
      v28 = -1073741668;
    v17 = v28;
    v29 = *(_DWORD *)(*(_QWORD *)(v10 + 680) + v15 + 2392);
    if ( (v29 & 0x20) == 0 && (v29 & 0x800) == 0 )
      goto LABEL_48;
  }
  *(_DWORD *)(a3 + 20) = 0;
LABEL_48:
  v30 = *(_QWORD *)(v10 + 680);
  if ( !*(_DWORD *)(v30 + v15 + 2344) )
    *(_DWORD *)(v30 + v15 + 2392) |= 0x400u;
  return v17;
}
