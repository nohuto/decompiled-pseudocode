/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1C00D9D18
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C00DC190 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C00DC28C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C00DC620 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C000D380 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_d @ 0x1C00D1F58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v6; // ebx
  _QWORD *HoldingFrame; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned int v12; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v6 = 0;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    49,
    (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids);
  HoldingFrame = rimFindHoldingFrame(a1, v4);
  if ( HoldingFrame )
  {
LABEL_6:
    HoldingFrame[4] = a3;
    *((_DWORD *)HoldingFrame + 4) = 1;
    v6 = 1;
    goto LABEL_7;
  }
  v8 = Win32AllocPoolZInit(0x58uLL);
  HoldingFrame = v8;
  if ( v8 )
  {
    v8[3] = *(_QWORD *)(v4 + 16);
    v9 = (_QWORD *)(a1 + 664);
    v10 = *(_QWORD *)(a1 + 664);
    if ( *(_QWORD *)(v10 + 8) != a1 + 664 )
      __fastfail(3u);
    *HoldingFrame = v10;
    HoldingFrame[1] = v9;
    *(_QWORD *)(v10 + 8) = HoldingFrame;
    *v9 = HoldingFrame;
    goto LABEL_6;
  }
LABEL_7:
  v12 = v6;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x32u,
    (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
    v12);
  return v6;
}
