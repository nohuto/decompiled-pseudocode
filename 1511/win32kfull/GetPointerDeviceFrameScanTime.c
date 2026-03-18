/*
 * XREFs of GetPointerDeviceFrameScanTime @ 0x1C01CD51C
 * Callers:
 *     xxxProcessPointerDeviceInput @ 0x1C01CF3C8 (xxxProcessPointerDeviceInput.c)
 *     xxxProcessPTPDeviceInput @ 0x1C01D1AB4 (xxxProcessPTPDeviceInput.c)
 * Callees:
 *     ?DivideToCeilingOrNearestInt@@YAHKKHPEAK@Z @ 0x1C01C6280 (-DivideToCeilingOrNearestInt@@YAHKKHPEAK@Z.c)
 */

__int64 __fastcall GetPointerDeviceFrameScanTime(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *PreparsedData,
        CHAR *Report,
        ULONG ReportLength,
        _DWORD *a5,
        ULONG *a6,
        _QWORD *a7)
{
  NTSTATUS v8; // eax
  _QWORD *v9; // rdi
  _DWORD *v10; // rsi
  unsigned int v11; // r9d
  ULONG v12; // r8d
  int v13; // ecx
  ULONG v14; // edx
  ULONG v15; // eax
  unsigned int v16; // r9d
  ULONG v17; // eax
  int v18; // eax
  ULONG v19; // eax
  int v20; // ecx
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // r8d
  unsigned int v24; // edx
  __int64 result; // rax
  ULONG UsageValue; // [rsp+50h] [rbp+8h] BYREF

  ++*(_DWORD *)(a1 + 1456);
  UsageValue = 0;
  v8 = HidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, &UsageValue, PreparsedData, Report, ReportLength);
  v9 = a7;
  v10 = a5;
  if ( v8 < 0 )
  {
    v20 = 80;
LABEL_19:
    *(_DWORD *)(a1 + 1444) += v20;
    goto LABEL_20;
  }
  v11 = *(_DWORD *)(a1 + 1456);
  v12 = UsageValue;
  *a6 = UsageValue;
  if ( v11 == 1 )
  {
    *(_DWORD *)(a1 + 1432) = *v10;
    *(_QWORD *)(a1 + 1472) = *v9;
    *(_DWORD *)(a1 + 1444) = v12;
    *(_DWORD *)(a1 + 1448) = v12;
    goto LABEL_20;
  }
  v13 = *(_DWORD *)(a1 + 1484);
  if ( (v13 & 1) != 0 )
  {
    v20 = 80;
    if ( *(_DWORD *)(a1 + 1452) )
      v20 = *(_DWORD *)(a1 + 1452);
    goto LABEL_19;
  }
  if ( v12 < *(_DWORD *)(a1 + 1444) % *(_DWORD *)(a1 + 1488) )
    ++*(_DWORD *)(a1 + 1460);
  v14 = *(_DWORD *)(a1 + 1444);
  v15 = v12 + *(_DWORD *)(a1 + 1488) * *(_DWORD *)(a1 + 1460);
  if ( v15 <= v14 )
  {
    v18 = *(_DWORD *)(a1 + 1452);
    if ( v18 && v11 >= 5 )
      v19 = v14 + v18;
    else
      v19 = v14 + 80;
    *(_DWORD *)(a1 + 1444) = v19;
    *(_DWORD *)(a1 + 1484) = v13 | 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1444) = v15;
    v16 = v11 - 1;
    v17 = v15 - *(_DWORD *)(a1 + 1448);
    if ( v17 )
      *(_DWORD *)(a1 + 1452) = (v17 - 1) / v16 + 1;
  }
LABEL_20:
  if ( *(_DWORD *)(a1 + 1456) != 1 )
  {
    v21 = *(_DWORD *)(a1 + 1444) - *(_DWORD *)(a1 + 1448);
    LODWORD(a7) = 0;
    v22 = DivideToCeilingOrNearestInt(v21, 0xAu, 0, (unsigned int *)&a7);
    v24 = (unsigned int)a7;
    if ( !v22 )
      v24 = v23 + 8;
    *v10 = v24 + *(_DWORD *)(a1 + 1432);
    *v9 = *(_QWORD *)(a1 + 1472) + gliQpcFreq.QuadPart * v24 / 1000;
  }
  *(_DWORD *)(a1 + 1440) = *(_DWORD *)(a1 + 1436);
  *(_DWORD *)(a1 + 1436) = *v10;
  result = *v9;
  *(_QWORD *)(a1 + 1464) = *v9;
  return result;
}
