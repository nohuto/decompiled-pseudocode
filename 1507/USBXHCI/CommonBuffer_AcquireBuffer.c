/*
 * XREFs of CommonBuffer_AcquireBuffer @ 0x1C0005400
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C00051E0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Endpoint_Enable @ 0x1C0017910 (Endpoint_Enable.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C00187C4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019248 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001ACF0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001B980 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001BC30 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     TR_AcquireDoubleBuffer @ 0x1C001FED8 (TR_AcquireDoubleBuffer.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C003392C (Crashdump_CommonBufferAcquire.c)
 *     Command_PrepareHardware @ 0x1C004816C (Command_PrepareHardware.c)
 *     DeviceSlot_PrepareHardware @ 0x1C0048360 (DeviceSlot_PrepareHardware.c)
 *     Interrupter_PrepareInterrupter @ 0x1C00484F0 (Interrupter_PrepareInterrupter.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C00513D0 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AcquireLargeBuffer @ 0x1C0005560 (CommonBuffer_AcquireLargeBuffer.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C0005B40 (CommonBuffer_AllocateBuffers.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     CommonBuffer_AcquireSmallBuffer @ 0x1C0013BE4 (CommonBuffer_AcquireSmallBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0013EC0 (CommonBuffer_QueueWorkItem.c)
 */

__int64 *__fastcall CommonBuffer_AcquireBuffer(KSPIN_LOCK *Context, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 **v7; // rsi
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  bool v12; // r15
  __int64 v14; // rax
  int v15; // r10d
  int v16; // r10d
  KIRQL v17; // [rsp+40h] [rbp-38h]
  bool v18; // [rsp+88h] [rbp+10h] BYREF

  if ( a2 <= 0x200 )
  {
    v7 = (__int64 **)(Context + 21);
    v17 = KeAcquireSpinLockRaiseToDpc(Context + 15);
    if ( *v7 == (__int64 *)v7 )
    {
      v8 = 0LL;
      WPP_RECORDER_SF_(
        *(_QWORD *)(Context[1] + 64),
        3u,
        7u,
        0x1Bu,
        (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids);
    }
    else
    {
      v8 = *v7;
      v9 = **v7;
      if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
        __fastfail(3u);
      *v7 = (__int64 *)v9;
      *(_QWORD *)(v9 + 8) = v7;
      memset((void *)v8[2], 0, 0x200uLL);
      --*((_DWORD *)Context + 41);
      v10 = v8[4];
      v8[9] = a3;
      *((_DWORD *)v8 + 16) = a4;
      v11 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              v10,
              off_1C0040248);
      if ( *(_BYTE *)(v11 + 16) )
      {
        *(_BYTE *)(v11 + 16) = 0;
        ++*((_DWORD *)Context + 5);
      }
    }
    v12 = *((_DWORD *)Context + 41) < *((_DWORD *)Context + 15);
    v18 = v12;
    KeReleaseSpinLock(Context + 15, v17);
    if ( v8 && !v12 )
      return v8;
    if ( !KeGetCurrentIrql() )
    {
      v15 = v8 == 0LL;
      if ( v12 )
        v15 += *((_DWORD *)Context + 16);
      CommonBuffer_AllocateBuffers(
        (_DWORD)Context,
        512,
        v15,
        (_DWORD)Context + 168,
        (__int64)(Context + 20),
        (__int64)Context + 164,
        (__int64)(Context + 23));
      if ( !v8 )
        return (__int64 *)CommonBuffer_AcquireSmallBuffer(Context, a3, a4, &v18);
      return v8;
    }
LABEL_26:
    CommonBuffer_QueueWorkItem(Context);
    return v8;
  }
  if ( a2 > 0x1000 )
  {
    v8 = 0LL;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(Context[1] + 64),
      3u,
      7u,
      0x1Du,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
      a2);
    return v8;
  }
  v14 = CommonBuffer_AcquireLargeBuffer(Context, a3, a4, &v18);
  v8 = (__int64 *)v14;
  if ( !v14 || v18 )
  {
    if ( KeGetCurrentIrql() )
      goto LABEL_26;
    v16 = v14 == 0;
    if ( v18 )
      v16 += *((_DWORD *)Context + 12);
    CommonBuffer_AllocateBuffers(
      (_DWORD)Context,
      4096,
      v16,
      (_DWORD)Context + 128,
      (__int64)(Context + 14),
      (__int64)Context + 116,
      (__int64)(Context + 18));
    if ( !v8 )
      return (__int64 *)CommonBuffer_AcquireLargeBuffer(Context, a3, a4, &v18);
  }
  return v8;
}
