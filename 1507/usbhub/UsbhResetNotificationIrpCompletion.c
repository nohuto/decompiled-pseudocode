/*
 * XREFs of UsbhResetNotificationIrpCompletion @ 0x1C004B760
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0015DC8 (UsbhDispatch_HardResetEvent.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D1E8 (WPP_RECORDER_SF_q.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004B8F4 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
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
  __int64 v12; // r9
  IRP *v13; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v16; // [rsp+48h] [rbp-10h]

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
        (__int64)&WPP_0699480349a52c2338640249ccf2c1c3_Traceguids,
        Context);
    if ( v7[702] == 2 )
    {
      if ( KeGetCurrentIrql() )
      {
        LOBYTE(v16) = 1;
        UsbhException((int)Context, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_pnp_c, 3726, v16);
      }
      else
      {
        v11 = FdoExt((__int64)Context, v6, v8, v9);
        UsbhDispatch_HardResetEvent((__int64)Context, (__int64)(v11 + 566), 3LL, v12);
      }
    }
  }
  IoReuseIrp(*((PIRP *)v7 + 659), 0);
  *(_BYTE *)(v10 - 72) = 15;
  *(_DWORD *)(v10 - 48) = 2232235;
  *(_DWORD *)(v10 - 56) = 0;
  *(_DWORD *)(v10 - 64) = 0;
  *(_QWORD *)(*((_QWORD *)v7 + 659) + 56LL) = 0LL;
  v13 = (IRP *)*((_QWORD *)v7 + 659);
  if ( IoSetCompletionRoutineEx(Context, v13, UsbhResetNotificationIrpCompletion, Context, 1u, 1u, 1u) < 0 )
  {
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhResetNotificationIrpCompletion;
    CurrentStackLocation[-1].Context = Context;
    CurrentStackLocation[-1].Control = -32;
  }
  IofCallDriver(*((PDEVICE_OBJECT *)v7 + 151), *((PIRP *)v7 + 659));
  return 3221225494LL;
}
