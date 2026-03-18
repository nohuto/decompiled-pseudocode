/*
 * XREFs of UsbhResetNotificationIrpCompletion @ 0x1C004B710
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_HardResetEvent @ 0x1C001212C (UsbhDispatch_HardResetEvent.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D418 (WPP_RECORDER_SF_q.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004B8A4 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhResetNotificationIrpCompletion(
        PDEVICE_OBJECT DeviceObject,
        __int64 Irp,
        struct _DEVICE_OBJECT *Context,
        __int64 a4)
{
  __int64 v6; // rdx
  _DWORD *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  _DWORD *v11; // rax
  IRP *v12; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v15; // [rsp+48h] [rbp-10h]

  v7 = FdoExt((__int64)Context, Irp, (__int64)Context, a4);
  v10 = *(_QWORD *)(*((_QWORD *)v7 + 659) + 184LL);
  if ( *(_DWORD *)(Irp + 56) == 1 )
  {
    UsbhResetNotifyDownstreamHub(Context);
  }
  else
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v6,
        3u,
        0x17u,
        (__int64)&WPP_7ca54aefc42ddeaf2f05adb755207832_Traceguids,
        Context);
    if ( v7[702] == 2 )
    {
      if ( KeGetCurrentIrql() )
      {
        LOBYTE(v15) = 1;
        UsbhException((int)Context, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_pnp_c, 3721, v15);
      }
      else
      {
        v11 = FdoExt((__int64)Context, v6, v8, v9);
        UsbhDispatch_HardResetEvent((__int64)Context, (__int64)(v11 + 566), 3);
      }
    }
  }
  IoReuseIrp(*((PIRP *)v7 + 659), 0);
  *(_BYTE *)(v10 - 72) = 15;
  *(_DWORD *)(v10 - 48) = 2232235;
  *(_DWORD *)(v10 - 56) = 0;
  *(_DWORD *)(v10 - 64) = 0;
  *(_QWORD *)(*((_QWORD *)v7 + 659) + 56LL) = 0LL;
  v12 = (IRP *)*((_QWORD *)v7 + 659);
  if ( IoSetCompletionRoutineEx(Context, v12, UsbhResetNotificationIrpCompletion, Context, 1u, 1u, 1u) < 0 )
  {
    CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhResetNotificationIrpCompletion;
    CurrentStackLocation[-1].Context = Context;
    CurrentStackLocation[-1].Control = -32;
  }
  IofCallDriver(*((PDEVICE_OBJECT *)v7 + 151), *((PIRP *)v7 + 659));
  return 3221225494LL;
}
