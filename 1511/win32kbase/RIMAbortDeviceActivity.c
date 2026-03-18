/*
 * XREFs of RIMAbortDeviceActivity @ 0x1C00C45E4
 * Callers:
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     RIMIsPTPPointerDeviceAllowed @ 0x1C00D2858 (RIMIsPTPPointerDeviceAllowed.c)
 *     RIMABIsDeviceAllowed @ 0x1C00D43CC (RIMABIsDeviceAllowed.c)
 *     RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D4550 (RIMABSeekAndAbortLowerRankedActivity.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000A3C4 (WPP_RECORDER_SF_d.c)
 *     RIMResetPointerDeviceFrameContactIdMgr @ 0x1C000A808 (RIMResetPointerDeviceFrameContactIdMgr.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C00C5600 (WPP_RECORDER_SF_ddd.c)
 *     RIMFindAndAbandonHoldingFrame @ 0x1C00C946C (RIMFindAndAbandonHoldingFrame.c)
 *     RIMABRemoveBoostSource @ 0x1C00D4488 (RIMABRemoveBoostSource.c)
 */

__int64 __fastcall RIMAbortDeviceActivity(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v5; // r14d
  __int64 v6; // rsi
  _DWORD *v7; // rax
  __int64 v8; // rcx
  unsigned int i; // esi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v15; // [rsp+28h] [rbp-30h]

  v2 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 16);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x23u,
    (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
  v7 = *(_DWORD **)(a2 + 712);
  if ( v7 && *v7 )
  {
    RIMFindAndAbandonHoldingFrame(a1, v6);
    **(_DWORD **)(a2 + 712) = 0;
    RIMResetPointerDeviceFrameContactIdMgr(v8, a2);
  }
  for ( i = 0; i < *(_DWORD *)(a2 + 720); ++i )
  {
    v10 = 2400LL * i;
    v11 = *(_QWORD *)(a2 + 696);
    v12 = *(unsigned int *)(v11 + v10 + 2336);
    if ( !(_DWORD)v12 || (v13 = *(_DWORD *)(v11 + v10 + 2392), (v13 & 0x20) != 0) )
    {
      WPP_RECORDER_SF_ddd(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        5,
        38,
        (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids,
        *(_DWORD *)(v11 + v10 + 2336) != 0,
        (unsigned __int8)(*(_BYTE *)(v11 + v10 + 2392) & 0x20) >> 5,
        i);
    }
    else
    {
      if ( *(_DWORD *)(v11 + v10 + 2340) )
      {
        *(_DWORD *)(v11 + v10 + 2392) = v13 & 0xFFFFFBFF;
        *(_DWORD *)(*(_QWORD *)(a2 + 696) + v10 + 2392) |= 0x40u;
        *(_BYTE *)(a1 + 681) = 1;
      }
      else
      {
        LODWORD(v15) = i;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v12,
          5u,
          0x24u,
          (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids,
          v15);
      }
      LODWORD(v15) = i;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        5u,
        0x25u,
        (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids,
        v15);
      *(_DWORD *)(*(_QWORD *)(a2 + 696) + v10 + 2392) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)(a2 + 696) + v10 + 2392) &= ~0x100u;
      if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 4 )
        RIMABRemoveBoostSource(a1, a2, i, 0LL);
      ++v5;
    }
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x27u,
    (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
  LOBYTE(v2) = v5 != 0;
  return v2;
}
