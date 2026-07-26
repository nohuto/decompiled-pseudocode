/*
 * XREFs of ndisGenericWaitWakeCallback @ 0x1C0013100
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C0012AD4 (ndisRequestDevicePowerD0.c)
 *     ndisCompleteWaitWake @ 0x1C001316C (ndisCompleteWaitWake.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

void __fastcall ndisGenericWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        __int64 MinorFunction,
        __int64 PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  char v7; // cl

  Status = IoStatus->Status;
  v7 = byte_1C0083715;
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
  {
    WPP_SF_qqd(26LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, Context, Context[162], IoStatus->Status);
    v7 = byte_1C0083715;
  }
  if ( Status >= 0 )
  {
    if ( (unsigned __int8)v7 >= 4u )
    {
      WPP_SF_q(27LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, Context);
      v7 = byte_1C0083715;
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    {
      Template_jqxq(
        v7,
        (unsigned int)&WaitWakeComplete,
        (_DWORD)Context + 4064,
        (_DWORD)Context + 4064,
        *((_DWORD *)Context + 1028),
        Context[510],
        238);
      v7 = byte_1C0083715;
    }
    if ( (*((_DWORD *)Context + 31) & 0x800) != 0 || (unsigned int)(*((_DWORD *)Context + 981) - 2) > 2 )
    {
      if ( (unsigned __int8)v7 >= 4u )
        WPP_SF_q(29LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, Context);
      if ( (int)Microsoft_Windows_NDISEnableBits < 0 )
        Template_jqxq(
          v7,
          (unsigned int)&WakeByMiniport,
          (_DWORD)Context + 4064,
          (_DWORD)Context + 4064,
          *((_DWORD *)Context + 1028),
          Context[510],
          17);
    }
    else
    {
      if ( (unsigned __int8)v7 >= 4u )
        WPP_SF_q(28LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, Context);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          v7,
          (unsigned int)&MiniportPoweringUp,
          (_DWORD)Context + 4064,
          (_DWORD)Context + 4064,
          *((_DWORD *)Context + 1028),
          Context[510],
          251);
      ndisRequestDevicePowerD0((struct _NDIS_MINIPORT_BLOCK *)Context, NdisMEventD0_D3DWake);
    }
  }
  else
  {
    if ( (unsigned __int8)v7 >= 4u )
      WPP_SF_qD(30LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, Context, (unsigned int)Status);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      Template_jqxqqq(
        v7,
        (unsigned int)&WaitWakeIrpFailed,
        (_DWORD)Context + 4064,
        (_DWORD)Context + 4064,
        *((_DWORD *)Context + 1028),
        Context[510],
        Status,
        34,
        0);
  }
  ndisCompleteWaitWake(Context, MinorFunction, PowerState);
}
