/*
 * XREFs of RIMGetPTPContactState @ 0x1C00D209C
 * Callers:
 *     RIMGetMultiContactDeviceState @ 0x1C00CBCA4 (RIMGetMultiContactDeviceState.c)
 * Callees:
 *     rimHidP_GetUsageValue @ 0x1C000A018 (rimHidP_GetUsageValue.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     rimHidP_GetUsages @ 0x1C00C4514 (rimHidP_GetUsages.c)
 *     RIMIsFrameReportingPointerDevice @ 0x1C00C4F70 (RIMIsFrameReportingPointerDevice.c)
 *     RIMUseLastContactPosition @ 0x1C00CD328 (RIMUseLastContactPosition.c)
 *     RIMValidatePointerDeviceCurrentState @ 0x1C00CD3D0 (RIMValidatePointerDeviceCurrentState.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CE7D8 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CE82C (ApiSetGetPowerTransitionsState.c)
 *     RIMCheckPTPConfidenceBit @ 0x1C00D1644 (RIMCheckPTPConfidenceBit.c)
 *     RIMGetPTPClickButtonState @ 0x1C00D1D6C (RIMGetPTPClickButtonState.c)
 *     RIMABArbitratePrimaryStatus @ 0x1C00D3F3C (RIMABArbitratePrimaryStatus.c)
 */

__int64 __fastcall RIMGetPTPContactState(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        char *a8,
        int *a9)
{
  __int64 v9; // rdi
  int v13; // r12d
  __int64 v14; // rbp
  unsigned __int16 *v15; // r9
  __int64 v16; // rax
  unsigned int v17; // r15d
  unsigned int v18; // ecx
  __int64 v19; // rbx
  unsigned __int16 *v20; // r15
  int v21; // edx
  __int64 v22; // rax
  int v23; // ecx
  struct _HIDP_PREPARSED_DATA *v24; // rbx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rax
  unsigned int v30; // [rsp+40h] [rbp-B8h] BYREF
  int v31; // [rsp+44h] [rbp-B4h]
  unsigned int v32; // [rsp+48h] [rbp-B0h] BYREF
  int Usages; // [rsp+4Ch] [rbp-ACh]
  char *v34; // [rsp+50h] [rbp-A8h]
  unsigned __int16 *v35; // [rsp+58h] [rbp-A0h]
  struct _HIDP_PREPARSED_DATA *v36; // [rsp+60h] [rbp-98h]
  _DWORD v37[14]; // [rsp+68h] [rbp-90h] BYREF

  v9 = *(_QWORD *)(a2 + 416);
  v34 = a8;
  v13 = 0;
  v31 = 0;
  v36 = a3;
  v14 = 2400LL * a6;
  v30 = *(_DWORD *)(v9 + 312);
  v16 = *(_QWORD *)(v9 + 696);
  v35 = *(unsigned __int16 **)(v9 + 1416);
  v15 = v35;
  *(_DWORD *)(v16 + v14 + 2248) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  memset(v15, 0, 2LL * v30);
  Usages = rimHidP_GetUsages(HidP_Input, 0xDu, a4, v35, &v30, a3, v34, a7);
  v17 = Usages;
  if ( Usages >= 0 )
  {
    v18 = v30;
    v19 = 0LL;
    if ( v30 )
    {
      v20 = v35;
      do
      {
        v21 = v20[v19];
        if ( v21 == 66 )
        {
          v22 = *(_QWORD *)(v9 + 696);
          v31 |= 2u;
          *(_DWORD *)(v22 + v14 + 2392) |= 2u;
          v23 = *(_DWORD *)(*(_QWORD *)(v9 + 696) + v14 + 2392);
          if ( (v23 & 4) != 0 || (v23 & 0x20) != 0 )
          {
            *(_DWORD *)(a5 + 20) |= 0x20006u;
          }
          else
          {
            ++*(_DWORD *)(a1 + 588);
            ApiSetDwmAsyncNotifyDigitizerActiveContacts();
            *(_DWORD *)(a5 + 20) |= 0x10006u;
            if ( (*(_DWORD *)(*(_QWORD *)(v9 + 696) + v14 + 2392) & 1) != 0 )
              *(_DWORD *)(a1 + 612) = 1;
            else
              RIMABArbitratePrimaryStatus(a1, v9, a6);
          }
          v18 = v30;
          v13 = 1;
        }
        else if ( v21 == 71 )
        {
          *(_DWORD *)(a5 + 20) |= 0x4000u;
        }
        v19 = (unsigned int)(v19 + 1);
      }
      while ( (unsigned int)v19 < v18 );
      v17 = Usages;
    }
    v24 = v36;
    rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, &v32, v36, v34, a7);
    if ( v32 )
      RIMGetPTPClickButtonState(a1, v9, v24, a7, v34, 0LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 712) + 4LL) & 4) != 0 )
      *(_DWORD *)(a5 + 20) |= 0x10u;
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 712) + 4LL) & 8) != 0 )
      *(_DWORD *)(a5 + 20) |= 0x20u;
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 712) + 4LL) & 0x10) != 0 )
      *(_DWORD *)(a5 + 20) |= 0x40u;
    if ( !v13 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 696) + v14 + 2392) & 4) != 0 )
      {
        *(_DWORD *)(a5 + 20) |= 0x40000u;
        if ( (unsigned int)RIMIsFrameReportingPointerDevice(v9)
          && (*(_DWORD *)(*(_QWORD *)(v9 + 696) + v14 + 2392) & 1) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v9 + 712) + 56LL) = 1;
        }
        *(_DWORD *)(*(_QWORD *)(v9 + 696) + v14 + 2392) &= ~2u;
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 696) + v14 + 2392) & 0x20) == 0 )
        {
          --*(_DWORD *)(a1 + 588);
          ApiSetDwmAsyncNotifyDigitizerActiveContacts();
        }
        RIMUseLastContactPosition(v9, (_QWORD *)a5, a9, a6);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 696) + v14 + 2392) & 4) == 0 )
        *(_DWORD *)(a5 + 20) |= 0x20000u;
      v25 = *(_DWORD *)(*(_QWORD *)(v9 + 696) + v14 + 2392);
      if ( (v25 & 4) == 0 && (v25 & 1) != 0 && !*(_DWORD *)(a1 + 588) )
        *(_DWORD *)(a1 + 612) = 0;
      *(_DWORD *)(*(_QWORD *)(v9 + 696) + v14 + 2392) &= ~4u;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 696) + v14 + 2392) & 1) != 0 )
      *(_DWORD *)(a5 + 20) |= 0x2000u;
    ApiSetGetPowerTransitionsState(v37);
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 696) + v14 + 2392) & 0x20) != 0 )
    {
      *(_DWORD *)(a5 + 20) = 0;
      v17 = -1073741668;
    }
    else
    {
      RIMValidatePointerDeviceCurrentState(a1, v9, a6, v31, (_DWORD *)(a5 + 20), v37[0] == 0);
      RIMCheckPTPConfidenceBit(v9, a6, (int *)(a5 + 20));
      v26 = v17;
      if ( !*(_DWORD *)(a5 + 20) )
        v26 = -1073741668;
      v17 = v26;
      v27 = *(_DWORD *)(*(_QWORD *)(v9 + 696) + v14 + 2392);
      if ( (v27 & 0x20) != 0 || (v27 & 0x800) != 0 )
        *(_DWORD *)(a5 + 20) = 0;
    }
    v28 = *(_QWORD *)(v9 + 696);
    if ( !*(_DWORD *)(v28 + v14 + 2344) )
      *(_DWORD *)(v28 + v14 + 2392) |= 0x400u;
  }
  return v17;
}
