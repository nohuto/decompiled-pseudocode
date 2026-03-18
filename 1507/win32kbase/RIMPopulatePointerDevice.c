/*
 * XREFs of RIMPopulatePointerDevice @ 0x1C00C304C
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     RIMGetDeviceButtons @ 0x1C00737A8 (RIMGetDeviceButtons.c)
 *     RIMIsEssentialUsage @ 0x1C00749D8 (RIMIsEssentialUsage.c)
 *     RIMCheckPressureUsageStatus @ 0x1C0074A80 (RIMCheckPressureUsageStatus.c)
 *     RIMRetrieveNormalizationRange @ 0x1C0074AAC (RIMRetrieveNormalizationRange.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0074F80 (rimHidP_GetSpecificValueCaps.c)
 *     RIMComputeHighMetricValue @ 0x1C0074FCC (RIMComputeHighMetricValue.c)
 *     RIMIDEValidateDeviceSize @ 0x1C00C6BAC (RIMIDEValidateDeviceSize.c)
 */

__int64 __fastcall RIMPopulatePointerDevice(__int64 a1, __int64 a2, struct _HIDP_PREPARSED_DATA *a3, __int16 *a4)
{
  struct _HIDP_PREPARSED_DATA *v5; // r15
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned __int16 v8; // r8
  int SpecificValueCaps; // eax
  __int64 v11; // rcx
  _DWORD *v12; // rax
  struct _HIDP_VALUE_CAPS *v13; // rbx
  int v14; // ecx
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  __int16 v17; // r15
  __int16 v18; // r15
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  bool v31; // zf
  unsigned int v32; // [rsp+20h] [rbp-E0h]
  unsigned int v34; // [rsp+40h] [rbp-C0h]
  int v35; // [rsp+44h] [rbp-BCh]
  int v36; // [rsp+48h] [rbp-B8h]
  _OWORD v37[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h]
  _OWORD v39[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v40; // [rsp+F0h] [rbp-10h]
  _OWORD v41[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v42; // [rsp+140h] [rbp+40h]
  unsigned __int16 v44; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _HIDP_PREPARSED_DATA *v45; // [rsp+1B0h] [rbp+B0h]
  __int16 *v46; // [rsp+1B8h] [rbp+B8h]

  v46 = a4;
  v45 = a3;
  v5 = a3;
  v6 = -1;
  v7 = 0;
  v35 = -1;
  v34 = -1;
  v8 = *(_WORD *)(a2 + 716);
  v44 = 0;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v8, 0, 0LL, &v44, a3);
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    return 0LL;
  v11 = 6LL;
  v12 = (_DWORD *)(a2 + 32);
  do
  {
    *v12 = -1;
    v12 += 4;
    --v11;
  }
  while ( v11 );
  v13 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool();
  if ( !v13 )
    return 0LL;
  v36 = rimHidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(a2 + 716), 0, v13, &v44, v5);
  v14 = v36;
  if ( v36 >= 0 )
  {
    v15 = 0;
    v16 = 0;
    if ( v44 )
    {
      do
      {
        if ( v16 >= 6 )
          break;
        v17 = *v46;
        if ( *v46 == 2 )
          v17 = 1;
        v18 = v13[v15].Range.UsageMin | ((v13[v15].UsagePage | (unsigned __int16)(16 * v17)) << 8);
        if ( (unsigned int)RIMIsEssentialUsage(v18) )
        {
          v19 = 60LL * v16;
          *(_WORD *)(v19 + a2 + 320) = v13[v15].UsagePage;
          *(_WORD *)(v19 + a2 + 332) = v13[v15].Range.UsageMin;
          *(_DWORD *)(v19 + a2 + 324) = v13[v15].ReportID;
          *(_WORD *)(v19 + a2 + 330) = v13[v15].LinkUsagePage;
          *(_DWORD *)(v19 + a2 + 336) = v13[v15].HasNull;
          *(_DWORD *)(v19 + a2 + 352) = v13[v15].LogicalMin;
          *(_DWORD *)(v19 + a2 + 356) = v13[v15].LogicalMax;
          *(_DWORD *)(60 * (v16 + 6LL) + a2) = v13[v15].PhysicalMin;
          *(_DWORD *)(v19 + a2 + 364) = v13[v15].PhysicalMax;
          *(_WORD *)(v19 + a2 + 376) = v13[v15].BitSize;
          if ( (*(_DWORD *)(a2 + 236) & 0x4000) != 0 )
          {
            if ( v13[v15].Range.UsageMin == 48 && v13[v15].UsagePage == 1 )
            {
              v35 = v15;
              v20 = *(_OWORD *)&v13[v15].HasNull;
              v39[0] = *(_OWORD *)&v13[v15].UsagePage;
              v21 = *(_OWORD *)&v13[v15].UnitsExp;
              v39[1] = v20;
              v22 = *(_OWORD *)&v13[v15].PhysicalMin;
              v39[2] = v21;
              v40 = *(_QWORD *)&v13[v15].NotRange.DesignatorIndex;
              v39[3] = v22;
              *(_DWORD *)(a2 + 164) = RIMComputeHighMetricValue((__int64)v39);
              *(_DWORD *)(a2 + 172) = v13[v15].LogicalMin;
              *(_DWORD *)(a2 + 180) = v13[v15].LogicalMax;
            }
            if ( v13[v15].Range.UsageMin == 49 && v13[v15].UsagePage == 1 )
            {
              v34 = v15;
              v23 = *(_OWORD *)&v13[v15].HasNull;
              v37[0] = *(_OWORD *)&v13[v15].UsagePage;
              v24 = *(_OWORD *)&v13[v15].UnitsExp;
              v37[1] = v23;
              v25 = *(_OWORD *)&v13[v15].PhysicalMin;
              v37[2] = v24;
              v38 = *(_QWORD *)&v13[v15].NotRange.DesignatorIndex;
              v37[3] = v25;
              *(_DWORD *)(a2 + 168) = RIMComputeHighMetricValue((__int64)v37);
              *(_DWORD *)(a2 + 176) = v13[v15].LogicalMin;
              *(_DWORD *)(a2 + 184) = v13[v15].LogicalMax;
            }
          }
          RIMCheckPressureUsageStatus(a1, a2, v18);
          v26 = 16LL * v16;
          v27 = 2 * (v16 + 2LL);
          *(_DWORD *)(a2 + 8 * v27) = v16;
          *(_WORD *)(v26 + a2 + 28) = v13[v15].UsagePage;
          *(_WORD *)(v26 + a2 + 30) = v13[v15].Range.UsageMin;
          v28 = *(_OWORD *)&v13[v15].HasNull;
          v41[0] = *(_OWORD *)&v13[v15].UsagePage;
          v29 = *(_OWORD *)&v13[v15].UnitsExp;
          v41[1] = v28;
          v30 = *(_OWORD *)&v13[v15].PhysicalMin;
          v41[2] = v29;
          v42 = *(_QWORD *)&v13[v15].NotRange.DesignatorIndex;
          v41[3] = v30;
          RIMRetrieveNormalizationRange(v27, v41, (_QWORD *)(a2 + v26 + 36));
          ++v16;
        }
        ++v15;
      }
      while ( v15 < v44 );
      v14 = v36;
      v6 = v35;
      v5 = v45;
    }
    v31 = (*(_DWORD *)(a2 + 236) & 0x4000) == 0;
    *(_DWORD *)(a2 + 712) = v16;
    if ( !v31 )
      v14 = RIMIDEValidateDeviceSize(a2, v6, v34);
    if ( v14 >= 0 && (int)RIMGetDeviceButtons(a1, a2, (__int64)v5, v46, v32) >= 0 )
      v7 = 1;
  }
  Win32FreePool();
  return v7;
}
