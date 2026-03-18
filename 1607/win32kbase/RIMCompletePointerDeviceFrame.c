/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x1C00D9824
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C00DC190 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C00DC28C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C00DC620 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     rimProcessCompleteFrame @ 0x1C00D8460 (rimProcessCompleteFrame.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C00D9E3C (WPP_RECORDER_SF_ddd.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C00D9F1C (rimCountContactsToDeliverWithFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C00DA008 (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00DA060 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C00DA2AC (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C00DB798 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C00DBA60 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v6; // edx
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  LARGE_INTEGER *v9; // r8
  int v10; // r9d
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v16; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER *v17; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 480);
  v3 = 0;
  LODWORD(v17) = 0;
  v4 = a2;
  v18 = 0;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    53,
    (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids);
  rimCountContactsToDeliverWithFrame(v2, &v18, &v17);
  v7 = v18;
  v8 = (unsigned int)v17;
  if ( !v18 )
  {
    v10 = 56;
    v11 = 4;
    goto LABEL_11;
  }
  RIMUpdatePrimaryAndFinalizePointerFlags(a1, v2);
  if ( !(unsigned int)rimStorePointersInHoldingFrame(a1, v4, v7, v8) )
  {
    v10 = 55;
    goto LABEL_8;
  }
  v17 = 0LL;
  if ( !(unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(a1, v4, &v17) )
  {
    v10 = 54;
LABEL_8:
    v11 = 5;
LABEL_11:
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v11,
      v10,
      (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids);
    rimFindAndReclaimHoldingFrame(a1, v4);
    goto LABEL_12;
  }
  v9 = v17;
  v3 = 1;
  v17[6].HighPart = v8;
  if ( (*(_DWORD *)(v4 + 184) & 0x800) != 0 )
  {
    v9[4] = *(LARGE_INTEGER *)(v4 + 24);
    v9[6].LowPart = 1;
  }
  rimProcessCompleteFrame(a1, v4, v9);
LABEL_12:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v4, v3, 0LL);
  WPP_RECORDER_SF_ddd(WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14, v16, v3, v8, v7);
  return v3;
}
