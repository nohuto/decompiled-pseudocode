/*
 * XREFs of RIMGetPointerDeviceFrameScanTime @ 0x1C00CBC4C
 * Callers:
 *     rimProcessPTPDeviceInput @ 0x1C00CC708 (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CCB80 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     rimHidP_GetUsageValue @ 0x1C007308C (rimHidP_GetUsageValue.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1C00CA150 (RIMDivideToCeilingOrNearestInt.c)
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
  unsigned int v8; // eax
  int UsageValue; // eax
  _QWORD *v12; // rdi
  _DWORD *v13; // rsi
  unsigned int v14; // r10d
  unsigned int v15; // r9d
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // ecx
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // ecx
  int v23; // eax
  int v24; // r8d
  unsigned int v25; // edx
  __int64 result; // rax
  unsigned int v27; // [rsp+58h] [rbp+10h] BYREF

  v27 = 0;
  v8 = a5;
  ++*(_DWORD *)(a2 + 1440);
  UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, &v27, a3, a4, v8);
  v12 = a8;
  v13 = a6;
  if ( UsageValue < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x14u,
      (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids);
    v21 = 80;
LABEL_19:
    *(_DWORD *)(a2 + 1428) += v21;
    goto LABEL_20;
  }
  v14 = *(_DWORD *)(a2 + 1440);
  v15 = v27;
  *a7 = v27;
  if ( v14 == 1 )
  {
    *(_DWORD *)(a2 + 1416) = *v13;
    *(_QWORD *)(a2 + 1456) = *v12;
    *(_DWORD *)(a2 + 1428) = v15;
    *(_DWORD *)(a2 + 1432) = v15;
    goto LABEL_20;
  }
  v16 = *(_DWORD *)(a2 + 1468);
  if ( (v16 & 1) != 0 )
  {
    v21 = 80;
    if ( *(_DWORD *)(a2 + 1436) )
      v21 = *(_DWORD *)(a2 + 1436);
    goto LABEL_19;
  }
  if ( v15 < *(_DWORD *)(a2 + 1428) % *(_DWORD *)(a2 + 1472) )
    ++*(_DWORD *)(a2 + 1444);
  v17 = *(_DWORD *)(a2 + 1428);
  v18 = v15 + *(_DWORD *)(a2 + 1472) * *(_DWORD *)(a2 + 1444);
  if ( v18 <= v17 )
  {
    v19 = *(_DWORD *)(a2 + 1436);
    if ( v19 && v14 >= 5 )
      v20 = v19 + v17;
    else
      v20 = v17 + 80;
    *(_DWORD *)(a2 + 1428) = v20;
    *(_DWORD *)(a2 + 1468) = v16 | 1;
  }
  else
  {
    LODWORD(a8) = 0;
    *(_DWORD *)(a2 + 1428) = v18;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v18 - *(_DWORD *)(a2 + 1432), v14 - 1, 1, &a8) )
      *(_DWORD *)(a2 + 1436) = (_DWORD)a8;
  }
LABEL_20:
  if ( *(_DWORD *)(a2 + 1440) != 1 )
  {
    v22 = *(_DWORD *)(a2 + 1428) - *(_DWORD *)(a2 + 1432);
    LODWORD(a8) = 0;
    v23 = RIMDivideToCeilingOrNearestInt(v22, 0xAu, 0, &a8);
    v25 = (unsigned int)a8;
    if ( !v23 )
      v25 = v24 + 8;
    *v13 = v25 + *(_DWORD *)(a2 + 1416);
    *v12 = *(_QWORD *)(a2 + 1456) + v25 * *(_QWORD *)(a1 + 656) / 1000LL;
  }
  *(_DWORD *)(a2 + 1424) = *(_DWORD *)(a2 + 1420);
  *(_DWORD *)(a2 + 1420) = *v13;
  result = *v12;
  *(_QWORD *)(a2 + 1448) = *v12;
  return result;
}
