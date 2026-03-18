/*
 * XREFs of CreateTouchInputBuffer @ 0x1C01DF9B0
 * Callers:
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DCB44 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

_BOOL8 __fastcall CreateTouchInputBuffer(__int64 a1, ULONG a2, __int64 a3, int a4, ULONG a5)
{
  USHORT v5; // bx
  __int64 v6; // rax
  __int64 v7; // r12
  int v9; // r15d
  void *Report; // rdi
  ULONG ReportLength; // esi
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  __int64 v13; // rcx
  __int128 *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int16 v23; // r12
  int v24; // r15d
  char v25; // r15
  int UsageList; // [rsp+48h] [rbp-81h] BYREF
  ULONG v28; // [rsp+4Ch] [rbp-7Dh] BYREF
  ULONG v29; // [rsp+50h] [rbp-79h] BYREF
  ULONG UsageLength; // [rsp+54h] [rbp-75h] BYREF
  __int128 UsageValue; // [rsp+58h] [rbp-71h]
  __int128 v32; // [rsp+68h] [rbp-61h]
  __int128 v33; // [rsp+78h] [rbp-51h]
  __int128 v34; // [rsp+88h] [rbp-41h]
  __int128 v35; // [rsp+98h] [rbp-31h]
  __int128 v36; // [rsp+A8h] [rbp-21h]
  __int128 v37; // [rsp+B8h] [rbp-11h]
  __int128 v38; // [rsp+C8h] [rbp-1h]
  __int128 v39; // [rsp+D8h] [rbp+Fh]
  USHORT v40; // [rsp+128h] [rbp+5Fh] BYREF
  __int64 v41; // [rsp+138h] [rbp+6Fh]
  int v42; // [rsp+140h] [rbp+77h]

  v42 = a4;
  v41 = a3;
  UsageList = 3276866;
  v40 = 207;
  v5 = 1;
  v6 = *(_QWORD *)(a1 + 400);
  v7 = a3;
  UsageLength = 2;
  v28 = 1;
  v29 = 1;
  v9 = a4;
  Report = *(void **)(v6 + 24);
  ReportLength = *(unsigned __int16 *)(v6 + 44);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(v6 + 16);
  memset(Report, 0, *(unsigned __int16 *)(v6 + 44));
  while ( 1 )
  {
    v13 = v9 + (unsigned int)(unsigned __int16)(v5 - 1);
    if ( (unsigned int)v13 > a2 - 1 )
      break;
    v14 = (__int128 *)(v7 + 144 * v13);
    v15 = v14[1];
    UsageValue = *v14;
    v16 = v14[2];
    v32 = v15;
    v17 = v14[3];
    v33 = v16;
    v18 = v14[4];
    v34 = v17;
    v19 = v14[5];
    v35 = v18;
    v20 = v14[6];
    v36 = v19;
    v21 = v14[7];
    v37 = v20;
    v22 = v14[8];
    v38 = v21;
    v39 = v22;
    if ( HidP_SetUsageValue(HidP_Input, 0xDu, v5, 0x51u, DWORD1(UsageValue), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    if ( HidP_SetUsageValue(HidP_Input, 1u, v5, 0x30u, v33, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    if ( HidP_SetUsageValue(HidP_Input, 1u, v5, 0x31u, DWORD1(v33), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    v23 = WORD6(UsageValue);
    v24 = BYTE12(UsageValue) & 4;
    if ( (BYTE12(UsageValue) & 4) != 0
      && HidP_SetUsages(
           HidP_Input,
           0xDu,
           v5,
           (PUSAGE)&UsageList,
           &UsageLength,
           PreparsedData,
           (PCHAR)Report,
           ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( (v23 & 2) != 0
      && !v24
      && HidP_SetUsages(HidP_Input, 0xDu, v5, (PUSAGE)&UsageList + 1, &v28, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( v23 < 0 && HidP_SetUsages(HidP_Input, 0xFF00u, v5, &v40, &v29, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    v25 = BYTE4(v37);
    if ( (BYTE4(v37) & 4) != 0
      && HidP_SetUsageValue(HidP_Input, 0xDu, v5, 0x30u, HIDWORD(v39), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( (v25 & 2) != 0
      && HidP_SetUsageValue(HidP_Input, 0xDu, v5, 0x3Fu, DWORD2(v39), PreparsedData, (PCHAR)Report, ReportLength) < 0
      || (v25 & 1) != 0
      && (HidP_SetUsageValue(
            HidP_Input,
            0xDu,
            v5,
            0x48u,
            abs32(v38 - DWORD2(v37)),
            PreparsedData,
            (PCHAR)Report,
            ReportLength) < 0
       || HidP_SetUsageValue(
            HidP_Input,
            0xDu,
            v5,
            0x49u,
            abs32(DWORD1(v38) - HIDWORD(v37)),
            PreparsedData,
            (PCHAR)Report,
            ReportLength) < 0) )
    {
      return 0LL;
    }
    v9 = v42;
    if ( v5++ >= 4u )
      break;
    v7 = v41;
  }
  if ( v9 )
    a2 = 0;
  return HidP_SetUsageValue(HidP_Input, 0xDu, 0, 0x54u, a2, PreparsedData, (PCHAR)Report, ReportLength) >= 0
      && (!a5 || HidP_SetUsageValue(HidP_Input, 0xDu, 0, 0x56u, a5, PreparsedData, (PCHAR)Report, ReportLength) >= 0);
}
