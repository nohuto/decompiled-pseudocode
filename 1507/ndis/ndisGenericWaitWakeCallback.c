/*
 * XREFs of ndisGenericWaitWakeCallback @ 0x1C0010E00
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C0010474 (ndisRequestDevicePowerD0.c)
 *     ndisCompleteWaitWake @ 0x1C0010E6C (ndisCompleteWaitWake.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 *     Template_jqxqqq @ 0x1C003F10C (Template_jqxqqq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
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
  v7 = byte_1C0085315;
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
  {
    WPP_SF_qqd(26LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, Context, Context[162], IoStatus->Status);
    v7 = byte_1C0085315;
  }
  if ( Status >= 0 )
  {
    if ( (unsigned __int8)v7 >= 4u )
    {
      WPP_SF_q(27LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, Context);
      v7 = byte_1C0085315;
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
        239);
      v7 = byte_1C0085315;
    }
    if ( (*((_DWORD *)Context + 31) & 0x800) != 0 || (unsigned int)(*((_DWORD *)Context + 981) - 2) > 2 )
    {
      if ( (unsigned __int8)v7 >= 4u )
        WPP_SF_q(29LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, Context);
      if ( (int)Microsoft_Windows_NDISEnableBits < 0 )
        Template_jqxq(
          v7,
          (unsigned int)&WakeByMiniport,
          (_DWORD)Context + 4064,
          (_DWORD)Context + 4064,
          *((_DWORD *)Context + 1028),
          Context[510],
          18);
    }
    else
    {
      if ( (unsigned __int8)v7 >= 4u )
        WPP_SF_q(28LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, Context);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          v7,
          (unsigned int)&MiniportPoweringUp,
          (_DWORD)Context + 4064,
          (_DWORD)Context + 4064,
          *((_DWORD *)Context + 1028),
          Context[510],
          252);
      ndisRequestDevicePowerD0((struct _NDIS_MINIPORT_BLOCK *)Context, NdisMEventD0_D3DWake);
    }
  }
  else
  {
    if ( (unsigned __int8)v7 >= 4u )
      WPP_SF_qD(30LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, Context, (unsigned int)Status);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      Template_jqxqqq(
        v7,
        (unsigned int)&WaitWakeIrpFailed,
        (_DWORD)Context + 4064,
        (_DWORD)Context + 4064,
        *((_DWORD *)Context + 1028),
        Context[510],
        Status,
        35,
        0);
  }
  ndisCompleteWaitWake(Context, MinorFunction, PowerState);
}
