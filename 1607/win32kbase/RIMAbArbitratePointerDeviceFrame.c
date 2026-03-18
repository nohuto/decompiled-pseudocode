/*
 * XREFs of RIMAbArbitratePointerDeviceFrame @ 0x1C00D19A8
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C00DC190 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C00DC28C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C00DC620 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C00D0EB4 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00D13A8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00D16F4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     WPP_RECORDER_SF_d @ 0x1C00D1F58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RIMAbArbitratePointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD **v3; // r14
  __int64 v4; // rbx
  unsigned int v6; // edi
  int v7; // edx
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  int v10; // edx

  v2 = *(_QWORD *)(a2 + 480);
  v3 = (_QWORD **)(a1 + 576);
  v4 = a2;
  v6 = 1;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    28,
    (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
  if ( gDeviceArbitrationType )
  {
    rimAbRemoveGlobalPenDeadzoneIfExpired(a1);
    rimAbUpdateDeadzonesAndResurrectContacts(a1, v4);
    v8 = *v3;
    while ( v8 != v3 )
    {
      v9 = v8 - 1;
      v8 = (_QWORD *)*v8;
      if ( *v9 != v2 )
        v6 &= rimAbSuppressLowerRankActivityForFrame(a1, *v9, v2);
    }
    rimAbSuppressLowerRankActivityInFrame(a1, v2);
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      4,
      30,
      (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids,
      v6);
  }
  else
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      5,
      29,
      (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
  }
  return v6;
}
