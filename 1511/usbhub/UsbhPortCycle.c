/*
 * XREFs of UsbhPortCycle @ 0x1C00506A0
 * Callers:
 *     UsbhReset2CycleDevice @ 0x1C0051410 (UsbhReset2CycleDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSignalResumeEvent @ 0x1C001F7BC (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041718 (UsbhQueueSoftConnectChange.c)
 *     UsbhPortDisconnect @ 0x1C0050830 (UsbhPortDisconnect.c)
 */

__int64 __fastcall UsbhPortCycle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // r14
  __int64 v12; // rax
  int v14; // [rsp+28h] [rbp-20h]

  v7 = PdoExt(a3, a2, a3, a4);
  v11 = FdoExt(a1, v8, v9, v10);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x23u,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v14);
  }
  Log(a1, 1024, 1883461955, a2, a3);
  if ( *((_BYTE *)v7 + 2716) )
  {
    if ( v11[702] == 2 )
    {
      v12 = *((_QWORD *)v7 + 346);
      if ( v12 )
      {
        *(_DWORD *)(v12 + 48) = 0;
        IofCompleteRequest(*((PIRP *)v7 + 346), 0);
      }
    }
  }
  else
  {
    v7[353] |= 0x20000u;
    UsbhPortDisconnect(a1, a2, a3);
    UsbhSignalResumeEvent(a1, a2);
    UsbhQueueSoftConnectChange(a1, *(_WORD *)(a2 + 4), *(_QWORD *)(a2 + 376), 0);
  }
  return 0LL;
}
