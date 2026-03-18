/*
 * XREFs of HUBPDO_ValidateURB @ 0x1C001152C
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012300 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     Template_ppn @ 0x1C000F3B8 (Template_ppn.c)
 *     WPP_RECORDER_SF_dq @ 0x1C000F4B4 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C000F580 (WPP_RECORDER_SF_dqd.c)
 */

__int64 __fastcall HUBPDO_ValidateURB(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v5; // si
  unsigned int v6; // edi
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  int v10; // [rsp+20h] [rbp-28h]

  if ( *a2 < 0x18u )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200) != 0 )
      Template_ppn(
        a1,
        &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_HEADER_LENGTH_WARNING,
        (const GUID *)(*(_QWORD *)(a1 + 24) + 1500LL),
        *(_QWORD *)(a1 + 24) + 24LL,
        a2);
    WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL), *a2, a3, 0x28u, v10);
  }
  v5 = a2[1];
  v6 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 4) = 0;
  if ( v5 <= 0x34u )
  {
    if ( v5 == 30 || (unsigned __int16)(v5 - 48) <= 1u )
    {
      v7 = *a2;
      if ( *a2 != 40 )
      {
        *((_DWORD *)a2 + 1) = -2147483136;
        v6 = -1073741811;
        WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL), (__int64)a2, v7, 0x2Au, v10);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200) != 0 )
          Template_ppn(
            v8,
            &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_HEADER_LENGTH_WARNING,
            (const GUID *)(*(_QWORD *)(a1 + 24) + 1500LL),
            *(_QWORD *)(a1 + 24) + 24LL,
            a2);
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 1) = -2147483136;
    v6 = -1073741811;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200) != 0 )
      Template_ppn(
        a1,
        &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_FUNCTION,
        (const GUID *)(*(_QWORD *)(a1 + 24) + 1500LL),
        *(_QWORD *)(a1 + 24) + 24LL,
        a2);
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      v5,
      a3,
      0x29u,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
      v5,
      a2);
  }
  return v6;
}
