/*
 * XREFs of UsbhResetPortTimerDpc @ 0x1C0044360
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhReferenceListAdd @ 0x1C001E480 (UsbhReferenceListAdd.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C001E948 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhReferenceListRemove @ 0x1C0024EB0 (UsbhReferenceListRemove.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C0041140 (UsbhPCE_QueueChangeObject.c)
 */

void __fastcall UsbhResetPortTimerDpc(
        struct _KDPC *Dpc,
        unsigned __int16 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  KSPIN_LOCK *v8; // rsi
  _DWORD *v9; // rdi
  __int64 v10; // rcx
  KIRQL v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x16u,
      (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids,
      DeferredContext[2]);
  Log(*((_QWORD *)DeferredContext + 2), 4, 1382314083, (__int64)DeferredContext, DeferredContext[2]);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v17) = DeferredContext[2];
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x17u,
      (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids,
      v17);
  }
  v8 = (KSPIN_LOCK *)(FdoExt(*((_QWORD *)DeferredContext + 2), v5, v6, v7) + 1236);
  KeAcquireSpinLockRaiseToDpc(v8);
  Log(*((_QWORD *)DeferredContext + 2), 4, 1382314033, (__int64)DeferredContext, DeferredContext[2]);
  v9 = (_DWORD *)*((_QWORD *)DeferredContext + 85);
  v10 = *((_QWORD *)DeferredContext + 2);
  if ( !v9 )
    UsbhTrapFatal_Dbg(v10, 0LL);
  if ( *v9 != 1867468116 )
    UsbhTrapFatal_Dbg(v10, *((_QWORD *)DeferredContext + 85));
  Log(v10, 4, 1383361903, *((_QWORD *)DeferredContext + 85), DeferredContext[2]);
  *((_DWORD *)DeferredContext + 174) = 4;
  KeReleaseSpinLock(v8, v11);
  v12 = *((_QWORD *)DeferredContext + 2);
  LODWORD(v18) = 0x10000;
  v9[2] = (unsigned int)Usbh_UsbdReadFrameCounter(v12, v13, v14, v15);
  UsbhReferenceListAdd(*((_QWORD *)DeferredContext + 2), (__int64)&v18, 1869444177);
  UsbhReferenceListRemove(*((_QWORD *)DeferredContext + 2), (__int64)(DeferredContext + 276));
  KeSetEvent((PRKEVENT)DeferredContext + 32, 0, 0);
  UsbhPCE_QueueChangeObject(
    *((_QWORD *)DeferredContext + 2),
    DeferredContext[2],
    v18,
    (__int64)(DeferredContext + 12),
    v16,
    (__int64)v9);
  Log(*((_QWORD *)DeferredContext + 2), 4, 1383294324, DeferredContext[2], (__int64)v9);
  UsbhReferenceListRemove(*((_QWORD *)DeferredContext + 2), (__int64)&v18);
}
