/*
 * XREFs of Usbh_HRS_ResetStop @ 0x1C0047204
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001212C (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_ResetStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  _DWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebp
  unsigned int v11; // r8d

  v5 = (int)a2;
  v6 = FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  FdoExt(*(_QWORD *)(a1 + 8), v7, v8, v9);
  v10 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1651722574, a1, v5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xEu,
      (__int64)&WPP_6cc22cc90471b0ccfbf317bb759a7998_Traceguids,
      v5);
  if ( (int)v5 > 0 )
  {
    if ( (int)v5 < 4 )
      goto LABEL_11;
    if ( (_DWORD)v5 == 9 )
    {
      KeResetEvent((PRKEVENT)(v6 + 712));
      IoQueueWorkItem(*((PIO_WORKITEM *)v6 + 148), (PIO_WORKITEM_ROUTINE)UsbhHardResetWorker, DelayedWorkQueue, 0LL);
      v11 = 3;
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v11);
    }
    if ( (int)v5 > 9 && (int)v5 <= 11 )
    {
LABEL_11:
      v11 = 4;
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v11);
    }
  }
  v11 = v10;
  return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v11);
}
