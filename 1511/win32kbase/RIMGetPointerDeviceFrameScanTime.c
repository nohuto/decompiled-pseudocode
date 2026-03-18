/*
 * XREFs of RIMGetPointerDeviceFrameScanTime @ 0x1C00CCD08
 * Callers:
 *     rimProcessPTPDeviceInput @ 0x1C00CD9FC (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     rimHidP_GetUsageValue @ 0x1C000A018 (rimHidP_GetUsageValue.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1C00CB224 (RIMDivideToCeilingOrNearestInt.c)
 *     WPP_RECORDER_SF_dddii @ 0x1C00CD8C8 (WPP_RECORDER_SF_dddii.c)
 */

__int64 __fastcall RIMGetPointerDeviceFrameScanTime(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        char *a4,
        unsigned int a5,
        _DWORD *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned int v12; // eax
  int UsageValue; // eax
  _QWORD *v14; // rbx
  _DWORD *v15; // rdi
  unsigned int v16; // r10d
  unsigned int v17; // r9d
  int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // r8d
  unsigned int v27; // edx
  int v28; // eax
  int v29; // r10d
  __int64 v30; // r8
  int v32; // [rsp+20h] [rbp-48h]
  unsigned int v33; // [rsp+78h] [rbp+10h] BYREF

  v33 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x15u,
    (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
  v12 = a5;
  ++*(_DWORD *)(a2 + 1456);
  UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, &v33, a3, a4, v12);
  v14 = a8;
  v15 = a6;
  if ( UsageValue < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x16u,
      (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
    v23 = 80;
LABEL_19:
    *(_DWORD *)(a2 + 1444) += v23;
    goto LABEL_20;
  }
  v16 = *(_DWORD *)(a2 + 1456);
  v17 = v33;
  *a7 = v33;
  if ( v16 == 1 )
  {
    *(_DWORD *)(a2 + 1432) = *v15;
    *(_QWORD *)(a2 + 1472) = *v14;
    *(_DWORD *)(a2 + 1444) = v17;
    *(_DWORD *)(a2 + 1448) = v17;
    goto LABEL_20;
  }
  v18 = *(_DWORD *)(a2 + 1484);
  if ( (v18 & 1) != 0 )
  {
    v23 = 80;
    if ( *(_DWORD *)(a2 + 1452) )
      v23 = *(_DWORD *)(a2 + 1452);
    goto LABEL_19;
  }
  if ( v17 < *(_DWORD *)(a2 + 1444) % *(_DWORD *)(a2 + 1488) )
    ++*(_DWORD *)(a2 + 1460);
  v19 = *(_DWORD *)(a2 + 1444);
  v20 = v17 + *(_DWORD *)(a2 + 1488) * *(_DWORD *)(a2 + 1460);
  if ( v20 <= v19 )
  {
    v21 = *(_DWORD *)(a2 + 1452);
    if ( v21 && v16 >= 5 )
      v22 = v21 + v19;
    else
      v22 = v19 + 80;
    *(_DWORD *)(a2 + 1444) = v22;
    *(_DWORD *)(a2 + 1484) = v18 | 1;
  }
  else
  {
    LODWORD(a8) = 0;
    *(_DWORD *)(a2 + 1444) = v20;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v20 - *(_DWORD *)(a2 + 1448), v16 - 1, 1, &a8) )
      *(_DWORD *)(a2 + 1452) = (_DWORD)a8;
  }
LABEL_20:
  if ( *(_DWORD *)(a2 + 1456) != 1 )
  {
    v24 = *(_DWORD *)(a2 + 1444) - *(_DWORD *)(a2 + 1448);
    LODWORD(a8) = 0;
    v25 = RIMDivideToCeilingOrNearestInt(v24, 0xAu, 0, &a8);
    v27 = (unsigned int)a8;
    if ( !v25 )
      v27 = v26 + 8;
    *v15 = v27 + *(_DWORD *)(a2 + 1432);
    *v14 = *(_QWORD *)(a2 + 1472) + v27 * *(_QWORD *)(a1 + 688) / 1000LL;
  }
  v28 = *(_DWORD *)(a2 + 1436);
  v29 = *v15;
  *(_DWORD *)(a2 + 1440) = v28;
  *(_DWORD *)(a2 + 1436) = v29;
  v30 = *v14;
  *(_QWORD *)(a2 + 1464) = *v14;
  return WPP_RECORDER_SF_dddii(
           WPP_GLOBAL_Control->DeviceExtension,
           -(*(_DWORD *)(a2 + 1484) & 1),
           v30,
           23,
           v32,
           -(*(_BYTE *)(a2 + 1484) & 1),
           *(_DWORD *)(a2 + 1452),
           v29,
           v30,
           (unsigned __int8)v29 - (unsigned __int8)v28);
}
