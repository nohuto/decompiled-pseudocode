/*
 * XREFs of RIMGetPTPContactState @ 0x1C00D0624
 * Callers:
 *     RIMGetMultiContactDeviceState @ 0x1C00CABDC (RIMGetMultiContactDeviceState.c)
 * Callees:
 *     rimHidP_GetUsageValue @ 0x1C007308C (rimHidP_GetUsageValue.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     rimHidP_GetUsages @ 0x1C00C36E4 (rimHidP_GetUsages.c)
 *     RIMIsFrameReportingPointerDevice @ 0x1C00C40DC (RIMIsFrameReportingPointerDevice.c)
 *     RIMUseLastContactPosition @ 0x1C00CC168 (RIMUseLastContactPosition.c)
 *     RIMValidatePointerDeviceCurrentState @ 0x1C00CC210 (RIMValidatePointerDeviceCurrentState.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CD49C (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CD4F0 (ApiSetGetPowerTransitionsState.c)
 *     RIMCheckPTPConfidenceBit @ 0x1C00D0264 (RIMCheckPTPConfidenceBit.c)
 *     RIMGetPTPClickButtonState @ 0x1C00D02F4 (RIMGetPTPClickButtonState.c)
 *     RIMABArbitratePrimaryStatus @ 0x1C00D2118 (RIMABArbitratePrimaryStatus.c)
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
  __int64 v17; // rcx
  unsigned int v18; // r15d
  unsigned int v19; // ecx
  __int64 v20; // rbx
  unsigned __int16 *v21; // r15
  int v22; // edx
  __int64 v23; // rax
  int v24; // ecx
  struct _HIDP_PREPARSED_DATA *v25; // rbx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rax
  unsigned int v31; // [rsp+40h] [rbp-B8h] BYREF
  int v32; // [rsp+44h] [rbp-B4h]
  unsigned int v33; // [rsp+48h] [rbp-B0h] BYREF
  int Usages; // [rsp+4Ch] [rbp-ACh]
  char *v35; // [rsp+50h] [rbp-A8h]
  unsigned __int16 *v36; // [rsp+58h] [rbp-A0h]
  struct _HIDP_PREPARSED_DATA *v37; // [rsp+60h] [rbp-98h]
  _DWORD v38[14]; // [rsp+68h] [rbp-90h] BYREF

  v9 = *(_QWORD *)(a2 + 416);
  v35 = a8;
  v13 = 0;
  v32 = 0;
  v37 = a3;
  v14 = 2400LL * a6;
  v31 = *(_DWORD *)(v9 + 296);
  v16 = *(_QWORD *)(v9 + 680);
  v36 = *(unsigned __int16 **)(v9 + 1400);
  v15 = v36;
  *(_DWORD *)(v16 + v14 + 2248) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  memset(v15, 0, 2LL * v31);
  Usages = rimHidP_GetUsages(v17, 0xDu, a4, v36, &v31, a3, v35, a7);
  v18 = Usages;
  if ( Usages >= 0 )
  {
    v19 = v31;
    v20 = 0LL;
    if ( v31 )
    {
      v21 = v36;
      do
      {
        v22 = v21[v20];
        if ( v22 == 66 )
        {
          v23 = *(_QWORD *)(v9 + 680);
          v32 |= 2u;
          *(_DWORD *)(v23 + v14 + 2392) |= 2u;
          v24 = *(_DWORD *)(*(_QWORD *)(v9 + 680) + v14 + 2392);
          if ( (v24 & 4) != 0 || (v24 & 0x20) != 0 )
          {
            *(_DWORD *)(a5 + 20) |= 0x20006u;
          }
          else
          {
            ++*(_DWORD *)(a1 + 556);
            ApiSetDwmAsyncNotifyDigitizerActiveContacts();
            *(_DWORD *)(a5 + 20) |= 0x10006u;
            if ( (*(_DWORD *)(*(_QWORD *)(v9 + 680) + v14 + 2392) & 1) != 0 )
              *(_DWORD *)(a1 + 580) = 1;
            else
              RIMABArbitratePrimaryStatus(a1, v9, a6);
          }
          v19 = v31;
          v13 = 1;
        }
        else if ( v22 == 71 )
        {
          *(_DWORD *)(a5 + 20) |= 0x4000u;
        }
        v20 = (unsigned int)(v20 + 1);
      }
      while ( (unsigned int)v20 < v19 );
      v18 = Usages;
    }
    v25 = v37;
    rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, &v33, v37, v35, a7);
    if ( v33 )
      RIMGetPTPClickButtonState(a1, v9, v25, a7, v35, 0LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 696) + 4LL) & 4) != 0 )
      *(_DWORD *)(a5 + 20) |= 0x10u;
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 696) + 4LL) & 8) != 0 )
      *(_DWORD *)(a5 + 20) |= 0x20u;
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 696) + 4LL) & 0x10) != 0 )
      *(_DWORD *)(a5 + 20) |= 0x40u;
    if ( !v13 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 680) + v14 + 2392) & 4) != 0 )
      {
        *(_DWORD *)(a5 + 20) |= 0x40000u;
        if ( (unsigned int)RIMIsFrameReportingPointerDevice(v9)
          && (*(_DWORD *)(*(_QWORD *)(v9 + 680) + v14 + 2392) & 1) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v9 + 696) + 56LL) = 1;
        }
        *(_DWORD *)(*(_QWORD *)(v9 + 680) + v14 + 2392) &= ~2u;
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 680) + v14 + 2392) & 0x20) == 0 )
        {
          --*(_DWORD *)(a1 + 556);
          ApiSetDwmAsyncNotifyDigitizerActiveContacts();
        }
        RIMUseLastContactPosition(v9, (_QWORD *)a5, a9, a6);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 680) + v14 + 2392) & 4) == 0 )
        *(_DWORD *)(a5 + 20) |= 0x20000u;
      v26 = *(_DWORD *)(*(_QWORD *)(v9 + 680) + v14 + 2392);
      if ( (v26 & 4) == 0 && (v26 & 1) != 0 && !*(_DWORD *)(a1 + 556) )
        *(_DWORD *)(a1 + 580) = 0;
      *(_DWORD *)(*(_QWORD *)(v9 + 680) + v14 + 2392) &= ~4u;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 680) + v14 + 2392) & 1) != 0 )
      *(_DWORD *)(a5 + 20) |= 0x2000u;
    ApiSetGetPowerTransitionsState(v38);
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 680) + v14 + 2392) & 0x20) != 0 )
    {
      *(_DWORD *)(a5 + 20) = 0;
      v18 = -1073741668;
    }
    else
    {
      RIMValidatePointerDeviceCurrentState(a1, v9, a6, v32, (_DWORD *)(a5 + 20), v38[0] == 0);
      RIMCheckPTPConfidenceBit(v9, a6, (int *)(a5 + 20));
      v27 = v18;
      if ( !*(_DWORD *)(a5 + 20) )
        v27 = -1073741668;
      v18 = v27;
      v28 = *(_DWORD *)(*(_QWORD *)(v9 + 680) + v14 + 2392);
      if ( (v28 & 0x20) != 0 || (v28 & 0x800) != 0 )
        *(_DWORD *)(a5 + 20) = 0;
    }
    v29 = *(_QWORD *)(v9 + 680);
    if ( !*(_DWORD *)(v29 + v14 + 2344) )
      *(_DWORD *)(v29 + v14 + 2392) |= 0x400u;
  }
  return v18;
}
