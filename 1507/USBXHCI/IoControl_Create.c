/*
 * XREFs of IoControl_Create @ 0x1C0049100
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0047200 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall IoControl_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 *v8; // rbx
  _QWORD v10[8]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v11[12]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v12; // [rsp+108h] [rbp+7Fh] BYREF

  memset(v11, 0, sizeof(v11));
  v11[0] = 0x100000060LL;
  LODWORD(v11[1]) = 2;
  BYTE5(v11[1]) = 1;
  v11[5] = IoControl_WdfEvtIoDeviceControl;
  memset(v10, 0, 0x38uLL);
  v10[6] = off_1C0040180;
  LODWORD(v10[0]) = 56;
  v10[3] = 0x100000001LL;
  v6 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 1216))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         v11,
         v10,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 64), 2u, 4u, 0xAu, (__int64)&WPP_0efaeb4b1b70bdb0a6b2fd369195f324_Traceguids, v6);
  }
  else
  {
    v8 = (__int64 *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                      v12,
                      off_1C0040180);
    *v8 = v12;
    v8[1] = a2;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(a2 + 64),
      4u,
      4u,
      0xBu,
      (__int64)&WPP_0efaeb4b1b70bdb0a6b2fd369195f324_Traceguids,
      v12);
    *a3 = v8;
  }
  return v7;
}
