/*
 * XREFs of Controller_WdfEvtDeviceFilterAddResourceRequirements @ 0x1C004ADE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0009050 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Interrupter_IoResList_GetMessageCountAndType @ 0x1C00495D0 (Interrupter_IoResList_GetMessageCountAndType.c)
 *     Interrupter_AffinitizeMSIXDescriptors @ 0x1C0051648 (Interrupter_AffinitizeMSIXDescriptors.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceFilterAddResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  unsigned int v7[6]; // [rsp+40h] [rbp-18h] BYREF
  char v8; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00412A0)
                 + 8);
  WPP_RECORDER_SF_qq(
    *(_QWORD *)(v4 + 64),
    4u,
    3u,
    0xC5u,
    (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
    a1,
    a2);
  v5 = *(_QWORD *)(v4 + 96);
  if ( *(_DWORD *)(v5 + 20) )
  {
    Interrupter_IoResList_GetMessageCountAndType(a2, &v9, v7, &v8);
    Interrupter_AffinitizeMSIXDescriptors(v5, a2, v9);
  }
  return 0LL;
}
