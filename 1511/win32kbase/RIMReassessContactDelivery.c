/*
 * XREFs of RIMReassessContactDelivery @ 0x1C00CCFC4
 * Callers:
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 * Callees:
 *     IsIsPointerNodeInContactSupported_0 @ 0x1C0002EB8 (IsIsPointerNodeInContactSupported_0.c)
 *     IsPointerNodeInContact_0 @ 0x1C0002EC0 (IsPointerNodeInContact_0.c)
 *     WPP_RECORDER_SF_d @ 0x1C000A3C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CE7D8 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     RIMABIsDeviceAllowed @ 0x1C00D43CC (RIMABIsDeviceAllowed.c)
 */

__int64 __fastcall RIMReassessContactDelivery(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  __int64 v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  BOOL v15; // eax
  unsigned int v16; // ecx
  _DWORD *v17; // roff

  v6 = a3;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x27u,
    (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 4
    || (unsigned int)RIMABIsDeviceAllowed(
                       a1,
                       a2,
                       *(_DWORD *)(2400 * v6 + *(_QWORD *)(a2 + 696) + 2340),
                       (*(_DWORD *)(a4 + 12) >> 14) & 1,
                       v6) )
  {
    if ( (_DWORD)a5 || (v11 = 2400 * v6, (*(_DWORD *)(*(_QWORD *)(a2 + 696) + 2400 * v6 + 2392) & 0x80u) != 0) )
    {
      v14 = *(_DWORD *)(a4 + 12);
      v15 = (v14 & 0x40004) != 0;
      v16 = v14 & 0xFFF8FFF9;
      *(_DWORD *)(a4 + 12) = v16;
      if ( v15 )
      {
        *(_DWORD *)(a4 + 12) = v16 | 0x40000;
        ApiSetDwmAsyncNotifyDigitizerActiveContacts(0LL, (unsigned int)--*(_DWORD *)(a1 + 588));
      }
      else
      {
        *(_DWORD *)(a4 + 12) = v16 | 0x20000;
      }
      v17 = (_DWORD *)(*(_QWORD *)(a2 + 696) + 2400 * v6 + 2392);
      *v17 &= ~0x200u;
      *(_DWORD *)(*(_QWORD *)(a2 + 696) + 2400 * v6 + 2392) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)(a2 + 696) + 2400 * v6 + 2392) &= ~0x100u;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        5u,
        0x2Au,
        (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids,
        v6);
      goto LABEL_24;
    }
    v12 = *(_DWORD *)(a4 + 12);
    if ( (v12 & 4) != 0 )
    {
      *(_DWORD *)(a4 + 12) = v12 & 0xFFF9FFFF;
      if ( (int)IsIsPointerNodeInContactSupported_0() < 0 )
        v13 = 0;
      else
        v13 = IsPointerNodeInContact_0();
      if ( v13 )
      {
        *(_DWORD *)(a4 + 12) |= 0x20000u;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a2 + 696) + v11 + 2392) |= 0x200u;
        ApiSetDwmAsyncNotifyDigitizerActiveContacts(0LL, (unsigned int)++*(_DWORD *)(a1 + 588));
        *(_DWORD *)(a4 + 12) |= 0x10000u;
      }
      *(_DWORD *)(a4 + 12) |= 6u;
    }
    else
    {
      if ( (v12 & 2) == 0 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          4u,
          0x29u,
          (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
        goto LABEL_24;
      }
      if ( (v12 & 0x40000) != 0 )
        *(_DWORD *)(a4 + 12) = v12 & 0xFFFBFFFF;
      *(_DWORD *)(a4 + 12) |= 0x20000u;
    }
    *(_DWORD *)(*(_QWORD *)(a2 + 696) + v11 + 2392) &= ~0x20u;
LABEL_24:
    v10 = 43;
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             4u,
             v10,
             (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
  }
  *(_DWORD *)(a4 + 12) = 0;
  v10 = 40;
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           4u,
           v10,
           (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
}
