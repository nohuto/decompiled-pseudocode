/*
 * XREFs of ExtractDeviceUsages @ 0x1C01CB53C
 * Callers:
 *     xxxProcessPointerDeviceInput @ 0x1C01CF3C8 (xxxProcessPointerDeviceInput.c)
 *     xxxProcessPTPDeviceInput @ 0x1C01D1AB4 (xxxProcessPTPDeviceInput.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ApplyTransforms @ 0x1C01C3A80 (ApplyTransforms.c)
 *     ?ExtractGeometryPoints@@YAXGPEAUtagHPD_CONTACT_GEOMETRY@@PEAJPEAEK@Z @ 0x1C01C6358 (-ExtractGeometryPoints@@YAXGPEAUtagHPD_CONTACT_GEOMETRY@@PEAJPEAEK@Z.c)
 *     ?GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINFO@@KPEADPEAUtagHPD_CONTACT_GEOMETRY@@@Z @ 0x1C01C6CD8 (-GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINF.c)
 *     ?InsertInPointerDeviceFrameContactIdMgr@@YAHKPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C72B0 (-InsertInPointerDeviceFrameContactIdMgr@@YAHKPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z @ 0x1C01C7698 (-PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z.c)
 *     DoPrediction @ 0x1C01CA000 (DoPrediction.c)
 *     ExtractData @ 0x1C01CB484 (ExtractData.c)
 *     GetPointerDeviceContactState @ 0x1C01CCC50 (GetPointerDeviceContactState.c)
 *     IsFrameReportingPointerDevice @ 0x1C01CDBF0 (IsFrameReportingPointerDevice.c)
 *     DwmAsyncNotifyDigitizerActiveContacts @ 0x1C025EEDC (DwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall ExtractDeviceUsages(
        char *a1,
        ULONG ReportLength,
        USHORT a3,
        struct _HIDP_PREPARSED_DATA *a4,
        struct tagPOINTEREVENTINT *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9,
        int a10)
{
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r11
  ULONG v12; // r10d
  __int64 v13; // rdi
  CHAR *Report; // r14
  int UsageValueArray; // esi
  int v16; // eax
  __int64 v17; // rbx
  unsigned __int8 v18; // al
  int v19; // ecx
  unsigned int v20; // eax
  USHORT v21; // r8
  __int64 v22; // rdx
  USAGE v23; // r9
  int *v24; // r14
  int v25; // r8d
  int v26; // edx
  int v27; // edx
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  void *v36; // rax
  unsigned int v38; // [rsp+90h] [rbp-80h]
  int v40; // [rsp+98h] [rbp-78h]
  int v43; // [rsp+B0h] [rbp-60h] BYREF
  int v44; // [rsp+B4h] [rbp-5Ch] BYREF
  int v45; // [rsp+B8h] [rbp-58h] BYREF
  int v46; // [rsp+BCh] [rbp-54h]
  struct DEVICEINFO *v47; // [rsp+C8h] [rbp-48h]
  CHAR UsageValue[8]; // [rsp+D0h] [rbp-40h] BYREF
  ULONG v49; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v50; // [rsp+DCh] [rbp-34h]
  __int64 v51; // [rsp+ECh] [rbp-24h]
  int v52; // [rsp+F4h] [rbp-1Ch]

  PreparsedData = a4;
  v47 = (struct DEVICEINFO *)a6;
  v12 = ReportLength;
  v13 = *(_QWORD *)(a6 + 416);
  Report = a1;
  UsageValueArray = -1073741811;
  v44 = 0;
  v16 = *(_DWORD *)(v13 + 720);
  v17 = v13 + 336;
  v49 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0;
  v46 = v16;
  v18 = *a1;
  *((_WORD *)a5 + 1) = a3;
  v43 = 0;
  v45 = 0;
  *(_WORD *)(v13 + 1496) = 0;
  v38 = 0;
  if ( *(_DWORD *)(v13 + 728) )
  {
    v19 = v18;
    v40 = v18;
    v20 = 0;
    do
    {
      v21 = a3;
      if ( v19 == *(_DWORD *)(v17 + 4) )
      {
        v22 = *(_QWORD *)(v13 + 712);
        if ( v22 && *(_WORD *)(v22 + 14) && *(_WORD *)v17 == 1 && (unsigned __int16)(*(_WORD *)(v17 + 12) - 48) <= 1u )
        {
          *(_DWORD *)(v17 + 48) = 0;
          v21 = *(_WORD *)(*(_QWORD *)(v22 + 24) + 8LL * a3 + 2);
        }
        if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0
          && *(_WORD *)v17 == 1
          && (v23 = *(_WORD *)(v17 + 12), (unsigned __int16)(v23 - 48) <= 1u) )
        {
          UsageValueArray = HidP_GetUsageValueArray(
                              HidP_Input,
                              1u,
                              v21,
                              v23,
                              UsageValue,
                              8u,
                              PreparsedData,
                              Report,
                              v12);
          if ( UsageValueArray < 0 )
            return (unsigned int)UsageValueArray;
          v24 = (int *)(v17 + 52);
          ExtractGeometryPoints(
            *(_WORD *)(v17 + 12),
            (struct tagHPD_CONTACT_GEOMETRY *)&v49,
            (int *)(v17 + 52),
            (unsigned __int8 *)UsageValue,
            *(unsigned __int16 *)(v17 + 56));
        }
        else
        {
          v24 = (int *)(v17 + 52);
          UsageValueArray = HidP_GetUsageValue(
                              HidP_Input,
                              *(_WORD *)v17,
                              v21,
                              *(_WORD *)(v17 + 12),
                              (PULONG)(v17 + 52),
                              PreparsedData,
                              a1,
                              v12);
        }
        if ( UsageValueArray < 0 )
          return (unsigned int)UsageValueArray;
        if ( *(_DWORD *)(v17 + 16) )
        {
          if ( *(_WORD *)v17 == 1
            && (unsigned __int16)(*(_WORD *)(v17 + 12) - 48) <= 1u
            && *(_DWORD *)(v13 + 24) == 6
            && (*v24 < *(_DWORD *)(v17 + 32) || *v24 > *(_DWORD *)(v17 + 36)) )
          {
            ++*(_WORD *)(v13 + 1496);
          }
          v12 = ReportLength;
          PreparsedData = a4;
          v19 = v40;
        }
        else
        {
          v25 = *(_DWORD *)(v17 + 32);
          if ( v25 < 0 )
          {
            v26 = 1 << (*(_WORD *)(v17 + 56) - 1);
            if ( (v26 & *v24) != 0 )
              v27 = *v24 | -v26;
            else
              v27 = *v24;
            *v24 = v27;
          }
          if ( *v24 < v25 )
            *v24 = v25;
          v28 = *(_DWORD *)(v17 + 36);
          v12 = ReportLength;
          PreparsedData = a4;
          v19 = v40;
          if ( *v24 > v28 )
            *v24 = v28;
        }
        Report = a1;
        v20 = v38;
      }
      ++v20;
      v17 += 60LL;
      v38 = v20;
    }
    while ( v20 < *(_DWORD *)(v13 + 728) );
    if ( UsageValueArray >= 0 )
    {
      if ( HidP_GetUsageValue(HidP_Input, 0xDu, a3, 0x51u, &v49, PreparsedData, Report, v12) >= 0
        && (unsigned int)IsFrameReportingPointerDevice(v13)
        && !(unsigned int)InsertInPointerDeviceFrameContactIdMgr(v49, (struct tagHID_POINTER_DEVICE_INFO *)v13) )
      {
        UsageValueArray = -1073741668;
      }
      if ( UsageValueArray >= 0 )
      {
        if ( (unsigned int)(*(_DWORD *)(v13 + 24) - 6) <= 1 )
        {
          *((_DWORD *)a5 + 28) = ExtractData(v13, 13, 48, 1, (_DWORD *)a5 + 27);
          *((_DWORD *)a5 + 29) = ExtractData(v13, 13, 65, 2, (_DWORD *)a5 + 27);
          *((_DWORD *)a5 + 30) = ExtractData(v13, 13, 61, 4, (_DWORD *)a5 + 27);
          *((_DWORD *)a5 + 31) = ExtractData(v13, 13, 62, 8, (_DWORD *)a5 + 27);
        }
        else
        {
          HIDWORD(v51) = ExtractData(v13, 13, 72, 1, &v44);
          v52 = ExtractData(v13, 13, 73, 1, &v43);
          if ( v44 == v43 && v43 == 1 )
            *((_DWORD *)a5 + 27) |= 1u;
          LODWORD(v51) = 1;
          *((_DWORD *)a5 + 37) = ExtractData(v13, 13, 48, 4, (_DWORD *)a5 + 27);
          *((_DWORD *)a5 + 36) = ExtractData(v13, 13, 63, 2, (_DWORD *)a5 + 27);
        }
        v29 = 1;
        LODWORD(v50) = ExtractData(v13, 1, 48, 0, 0LL);
        DWORD1(v50) = ExtractData(v13, 1, 49, 0, 0LL);
        if ( v46 == 1 && (*(_DWORD *)(v13 + 252) & 0x80u) == 0 )
        {
          v30 = *(_QWORD *)(v13 + 696);
          if ( !*(_DWORD *)(v30 + 2336) )
          {
            *(_DWORD *)(v30 + 2336) = 1;
            ++*(_DWORD *)(v13 + 704);
            PostPointerDeviceArrival((struct tagHID_POINTER_DEVICE_INFO *)v13, 0);
            v29 = 0;
          }
          v31 = *(_QWORD *)(v13 + 696);
          v32 = *(_DWORD *)(v31 + 2392);
          if ( (v32 & 2) != 0 )
            *(_DWORD *)(v31 + 2392) = v32 | 4;
          ApplyTransforms(v13, (__int64)a5, 0, &v49);
          UsageValueArray = GetPointerDeviceContactState(
                              (int)a4,
                              a3,
                              (int)a5,
                              (int)v47,
                              0,
                              ReportLength,
                              (__int64)Report,
                              (__int64)&v49,
                              (__int64)&v45);
          if ( !v45 )
            DoPrediction((_DWORD *)v13, (int *)a5 + 2, (unsigned __int16 *)a5, v29, 0, &v49);
          if ( (unsigned int)(*(_DWORD *)(v13 + 24) - 6) <= 1 && (*((_DWORD *)a5 + 5) & 0x20004) == 0x20004 )
          {
            v36 = (void *)ReferenceDwmApiPort(131076LL, v33, v34, v35);
            DwmAsyncNotifyDigitizerActiveContacts(v36);
          }
        }
        else
        {
          UsageValueArray = GetMultiContactDeviceState(
                              a4,
                              a3,
                              a5,
                              v47,
                              ReportLength,
                              Report,
                              (struct tagHPD_CONTACT_GEOMETRY *)&v49);
        }
        if ( UsageValueArray >= 0 )
        {
          if ( *(_DWORD *)(v13 + 24) == 8 )
            EtwTraceTouchPadHWTimeStamp(
              a7,
              a8,
              a9,
              (unsigned int)v50,
              DWORD1(v50),
              DWORD2(v50),
              HIDWORD(v50),
              *((_DWORD *)a5 + 12),
              *((_DWORD *)a5 + 13),
              *((_DWORD *)a5 + 5) & 0x10,
              a10,
              v49,
              HIDWORD(v51),
              v52,
              *((_DWORD *)a5 + 5) & 0x4000,
              *((_DWORD *)a5 + 37),
              *(_DWORD *)(v13 + 1560));
          else
            EtwTraceTouchHWTimeStamp(
              a7,
              a8,
              a9,
              *((unsigned int *)a5 + 14),
              *((_DWORD *)a5 + 15),
              *((_DWORD *)a5 + 10),
              *((_DWORD *)a5 + 11));
        }
      }
    }
  }
  return (unsigned int)UsageValueArray;
}
