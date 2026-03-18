/*
 * XREFs of Controller_WdfEvtDeviceFilterAddResourceRequirements @ 0x1C004A550
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0006BA8 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Interrupter_IoResList_GetMessageCountAndType @ 0x1C0048EA0 (Interrupter_IoResList_GetMessageCountAndType.c)
 *     Interrupter_AffinitizeMSIXDescriptors @ 0x1C00505D8 (Interrupter_AffinitizeMSIXDescriptors.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceFilterAddResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  unsigned int v7[6]; // [rsp+40h] [rbp-18h] BYREF
  char v8; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                     a1,
                     off_1C0040270)
                 + 8);
  WPP_RECORDER_SF_qq(
    *(_QWORD *)(v4 + 64),
    4u,
    3u,
    0xC3u,
    (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
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
