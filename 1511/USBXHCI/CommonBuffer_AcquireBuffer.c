/*
 * XREFs of CommonBuffer_AcquireBuffer @ 0x1C0009960
 * Callers:
 *     TR_AcquireDoubleBuffer @ 0x1C0004100 (TR_AcquireDoubleBuffer.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0009BC0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Endpoint_Enable @ 0x1C0021020 (Endpoint_Enable.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0021EB4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0022938 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0023FE0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0024C70 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0024F20 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C003490C (Crashdump_CommonBufferAcquire.c)
 *     Interrupter_PrepareInterrupter @ 0x1C00491C0 (Interrupter_PrepareInterrupter.c)
 *     Command_PrepareHardware @ 0x1C004B4E0 (Command_PrepareHardware.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004B6E0 (DeviceSlot_PrepareHardware.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0052440 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C0009530 (CommonBuffer_AllocateBuffers.c)
 *     CommonBuffer_AcquireLargeBuffer @ 0x1C0009AC0 (CommonBuffer_AcquireLargeBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     CommonBuffer_AcquireSmallBuffer @ 0x1C001D184 (CommonBuffer_AcquireSmallBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C001D460 (CommonBuffer_QueueWorkItem.c)
 */

__int64 *__fastcall CommonBuffer_AcquireBuffer(KSPIN_LOCK *Context, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 **v7; // rsi
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  PWDF_DRIVER_GLOBALS v12; // rcx
  __int64 v13; // rax
  bool v14; // r15
  __int64 v16; // rax
  int v17; // r10d
  int v18; // r10d
  KIRQL v19; // [rsp+40h] [rbp-38h]
  bool v20; // [rsp+88h] [rbp+10h] BYREF

  if ( a2 <= 0x200 )
  {
    v7 = (__int64 **)(Context + 21);
    v19 = KeAcquireSpinLockRaiseToDpc(Context + 15);
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
      v10 = WdfFunctions_01015;
      v11 = v8[4];
      v12 = WdfDriverGlobals;
      v8[9] = a3;
      *((_DWORD *)v8 + 16) = a4;
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v10 + 1616))(v12, v11, off_1C0041278);
      if ( *(_BYTE *)(v13 + 16) )
      {
        *(_BYTE *)(v13 + 16) = 0;
        ++*((_DWORD *)Context + 5);
      }
    }
    v14 = *((_DWORD *)Context + 41) < *((_DWORD *)Context + 15);
    v20 = v14;
    KeReleaseSpinLock(Context + 15, v19);
    if ( v8 && !v14 )
      return v8;
    if ( !KeGetCurrentIrql() )
    {
      v17 = v8 == 0LL;
      if ( v14 )
        v17 += *((_DWORD *)Context + 16);
      CommonBuffer_AllocateBuffers(
        (__int64 *)Context,
        0x200u,
        v17,
        (__int64)(Context + 21),
        (_DWORD *)Context + 40,
        (_DWORD *)Context + 41,
        (__int64)(Context + 23));
      if ( !v8 )
        return (__int64 *)CommonBuffer_AcquireSmallBuffer(Context, a3, a4, &v20);
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
  v16 = CommonBuffer_AcquireLargeBuffer(Context, a3, a4, &v20);
  v8 = (__int64 *)v16;
  if ( !v16 || v20 )
  {
    if ( KeGetCurrentIrql() )
      goto LABEL_26;
    v18 = v16 == 0;
    if ( v20 )
      v18 += *((_DWORD *)Context + 12);
    CommonBuffer_AllocateBuffers(
      (__int64 *)Context,
      0x1000u,
      v18,
      (__int64)(Context + 16),
      (_DWORD *)Context + 28,
      (_DWORD *)Context + 29,
      (__int64)(Context + 18));
    if ( !v8 )
      return (__int64 *)CommonBuffer_AcquireLargeBuffer(Context, a3, a4, &v20);
  }
  return v8;
}
