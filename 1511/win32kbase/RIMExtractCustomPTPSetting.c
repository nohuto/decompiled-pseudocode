/*
 * XREFs of RIMExtractCustomPTPSetting @ 0x1C00D1874
 * Callers:
 *     RIMExtractCustomPTPSettings @ 0x1C00D1B74 (RIMExtractCustomPTPSettings.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0007A8C (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0008C68 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetUsageValue @ 0x1C000A018 (rimHidP_GetUsageValue.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C0078B0C (RIMComputeSpecificHighMetricValue.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     rimHidP_GetUsages @ 0x1C00C4514 (rimHidP_GetUsages.c)
 */

__int64 __fastcall RIMExtractCustomPTPSetting(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        __int64 a3,
        char *a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        int a8,
        _DWORD *a9)
{
  int v9; // ebx
  int UsageValue; // edi
  unsigned __int16 v12; // r12
  unsigned __int16 v13; // r13
  unsigned __int16 v14; // r15
  int SpecificValueCaps; // eax
  int v16; // eax
  struct _HIDP_PREPARSED_DATA *v18; // [rsp+30h] [rbp-D0h]
  struct _HIDP_PREPARSED_DATA *v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v21[2]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v22; // [rsp+58h] [rbp-A8h] BYREF
  char *v23; // [rsp+60h] [rbp-A0h]
  unsigned int v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h]
  struct _HIDP_PREPARSED_DATA *v26; // [rsp+78h] [rbp-88h]
  _DWORD *v27; // [rsp+80h] [rbp-80h]
  struct _HIDP_BUTTON_CAPS v28; // [rsp+90h] [rbp-70h] BYREF
  struct _HIDP_BUTTON_CAPS v29; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 v30[12]; // [rsp+130h] [rbp+30h] BYREF

  v9 = 0;
  v25 = a3;
  v26 = a2;
  v23 = a4;
  v27 = a9;
  UsageValue = -1073741823;
  v20 = 0;
  memset(&v28, 0, sizeof(v28));
  v21[0] = 1;
  v22 = 10;
  if ( a8 < 0 )
    goto LABEL_31;
  if ( a8 <= 1 )
  {
    v12 = a6;
    v13 = a5;
    v19 = a2;
    v14 = a7;
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                          HidP_Feature,
                          a5,
                          a6,
                          a7,
                          (struct _HIDP_VALUE_CAPS *)&v28,
                          v21,
                          v19);
  }
  else
  {
    if ( a8 != 2 )
      goto LABEL_31;
    v12 = a6;
    v13 = a5;
    v18 = a2;
    v14 = a7;
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(HidP_Feature, a5, a6, a7, &v29, v21, v18);
  }
  UsageValue = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
    goto LABEL_31;
  if ( !a8 )
  {
    if ( !*(_QWORD *)&v28.Reserved[8]
      && (v28.Reserved[6] & 0x80000000) == 0
      && (int)v28.Reserved[7] >= (int)v28.Reserved[6] )
    {
      UsageValue = rimHidP_GetUsageValue(HidP_Feature, v13, v12, v14, &v24, v26, v23, *(unsigned __int16 *)(v25 + 8));
      if ( UsageValue < 0 )
        goto LABEL_31;
      v16 = v24;
      if ( v24 < v28.Reserved[6] || v24 > v28.Reserved[7] || v24 >= 0x7FFFFFFF )
      {
        UsageValue = -1073741762;
        goto LABEL_31;
      }
      goto LABEL_21;
    }
LABEL_30:
    UsageValue = -1072627706;
    goto LABEL_31;
  }
  if ( a8 == 1 )
  {
    if ( *(_QWORD *)&v28.Reserved[8] )
    {
      if ( gpfnHidP_GetScaledUsageValue )
        UsageValue = gpfnHidP_GetScaledUsageValue(
                       HidP_Feature,
                       v13,
                       v12,
                       v14,
                       &v20,
                       v26,
                       v23,
                       *(unsigned __int16 *)(v25 + 8));
      else
        UsageValue = -1073741637;
      if ( UsageValue < 0 )
        goto LABEL_31;
      v29 = v28;
      v16 = RIMComputeSpecificHighMetricValue(v20, (__int64)&v29);
LABEL_21:
      v20 = v16;
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  UsageValue = rimHidP_GetUsages(HidP_Feature, v13, v12, v30, &v22, v26, v23, *(unsigned __int16 *)(v25 + 8));
  if ( UsageValue >= 0 && v22 )
  {
    while ( v30[v9] != v14 )
    {
      if ( ++v9 == v22 )
        goto LABEL_31;
    }
    v20 = 1;
  }
LABEL_31:
  *v27 = v20;
  return (unsigned int)UsageValue;
}
