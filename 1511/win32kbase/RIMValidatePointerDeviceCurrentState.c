/*
 * XREFs of RIMValidatePointerDeviceCurrentState @ 0x1C00CD3D0
 * Callers:
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     RIMGetPTPClickButtonState @ 0x1C00D1D6C (RIMGetPTPClickButtonState.c)
 *     RIMGetPTPContactState @ 0x1C00D209C (RIMGetPTPContactState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMPrepareLastStateDelivery @ 0x1C00C52AC (RIMPrepareLastStateDelivery.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00C7D58 (WPP_RECORDER_SF_dd.c)
 *     RIMAssessPointerContactState @ 0x1C00CAF80 (RIMAssessPointerContactState.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00CD760 (WPP_RECORDER_SF_dddd.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CE7D8 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     RIMABIsDeviceAllowed @ 0x1C00D43CC (RIMABIsDeviceAllowed.c)
 *     RIMABRemoveBoostSource @ 0x1C00D4488 (RIMABRemoveBoostSource.c)
 */

__int64 __fastcall RIMValidatePointerDeviceCurrentState(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        int a6)
{
  __int64 v9; // rdi
  unsigned int v11; // ebp
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v18; // rcx

  v9 = 2400LL * a3;
  v11 = *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696) + 2340);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x2Cu,
    (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
  if ( !a4 )
  {
    if ( v11 - 1 > 2 )
      goto LABEL_26;
LABEL_7:
    v13 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)(v13 - 1) > 4 && v13 != 8 || (unsigned int)RIMABIsDeviceAllowed(a1, a2, v11, (*a5 >> 14) & 1, a3) )
    {
      v18 = *(_QWORD *)(a2 + 696);
      if ( (*(_DWORD *)(v9 + v18 + 2392) & 0x80u) == 0 )
        *(_DWORD *)(v9 + v18 + 2344) = a4;
      else
        RIMPrepareLastStateDelivery(a1, a2, a3);
    }
    else
    {
      *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696) + 2392) |= 0x20u;
      *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696) + 2392) &= ~0x100u;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        5u,
        0x30u,
        (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids,
        a3,
        *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696) + 2340));
      v15 = *(_QWORD *)(a2 + 696);
      if ( *(_DWORD *)(v9 + v15 + 2340) )
      {
        *(_DWORD *)(v9 + v15 + 2392) &= ~0x400u;
        *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696) + 2392) |= 0x40u;
        *(_BYTE *)(a1 + 681) = 1;
        RIMAssessPointerContactState(a1);
      }
      if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 4 )
        RIMABRemoveBoostSource(a1, a2, a3, 1LL);
    }
    goto LABEL_14;
  }
  if ( a4 == 1 || a4 == 2 )
  {
    if ( v11 >= 4 )
      goto LABEL_26;
    goto LABEL_7;
  }
  if ( a4 == 3 && (v11 & 0xFFFFFFFC) == 0 && v11 != 2 )
    goto LABEL_7;
LABEL_26:
  WPP_RECORDER_SF_dddd(
    WPP_GLOBAL_Control->DeviceExtension,
    v12,
    5,
    45,
    (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids,
    *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696)),
    *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696) + 2332),
    a4,
    v11);
  if ( a4 )
  {
    if ( a4 != 1 && (unsigned int)(a4 - 2) <= 1 )
    {
      *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696) + 2392) |= 0x40u;
      *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696) + 2392) |= 0x20u;
      *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696) + 2392) &= ~0x100u;
      *(_BYTE *)(a1 + 681) = 1;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        5u,
        0x2Fu,
        (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
    }
  }
  else
  {
    *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696) + 2392) |= 0x20u;
    *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696) + 2392) &= ~0x100u;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      0x2Eu,
      (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
    *a5 = 0;
  }
LABEL_14:
  if ( a6 )
    RIMPrepareLastStateDelivery(a1, a2, a3);
  v16 = *(_DWORD *)(v9 + *(_QWORD *)(a2 + 696) + 2392);
  if ( (v16 & 0x20) != 0 && (v11 & 2) == 0 && (a4 & 2) != 0 )
  {
    if ( (v16 & 0x1000) != 0 )
      *(_BYTE *)(a1 + 704) = 0;
    ApiSetDwmAsyncNotifyDigitizerActiveContacts(0LL, (unsigned int)--*(_DWORD *)(a1 + 588));
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           4u,
           0x31u,
           (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
}
