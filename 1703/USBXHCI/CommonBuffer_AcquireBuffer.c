/*
 * XREFs of CommonBuffer_AcquireBuffer @ 0x1C0008830
 * Callers:
 *     TR_AcquireDoubleBuffer @ 0x1C0001A58 (TR_AcquireDoubleBuffer.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0008660 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Endpoint_Enable @ 0x1C001D8B0 (Endpoint_Enable.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C001E794 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C001F25C (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0020990 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0021640 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0021900 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C0031D3C (Crashdump_CommonBufferAcquire.c)
 *     Interrupter_PrepareInterrupter @ 0x1C004D6A0 (Interrupter_PrepareInterrupter.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004D8E0 (DeviceSlot_PrepareHardware.c)
 *     Command_PrepareHardware @ 0x1C004DAF8 (Command_PrepareHardware.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0056120 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AcquireLargeBuffer @ 0x1C0008998 (CommonBuffer_AcquireLargeBuffer.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C000A090 (CommonBuffer_AllocateBuffers.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     CommonBuffer_AcquireSmallBuffer @ 0x1C0019944 (CommonBuffer_AcquireSmallBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0019C2C (CommonBuffer_QueueWorkItem.c)
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
        (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids);
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
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v10 + 1616))(v12, v11, off_1C0045048);
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
        (_DWORD)Context,
        512,
        v17,
        (_DWORD)Context + 168,
        (__int64)(Context + 20),
        (__int64)Context + 164,
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
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
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
      (_DWORD)Context,
      4096,
      v18,
      (_DWORD)Context + 128,
      (__int64)(Context + 14),
      (__int64)Context + 116,
      (__int64)(Context + 18));
    if ( !v8 )
      return (__int64 *)CommonBuffer_AcquireLargeBuffer(Context, a3, a4, &v20);
  }
  return v8;
}
