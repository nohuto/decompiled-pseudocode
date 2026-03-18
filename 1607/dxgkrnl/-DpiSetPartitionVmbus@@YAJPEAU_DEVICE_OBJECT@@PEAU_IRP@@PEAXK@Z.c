/*
 * XREFs of ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C002A314
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x1C015AA98 (DxgkDdiSetVirtualGpuVmBus.c)
 */

__int64 __fastcall DpiSetPartitionVmbus(struct _DEVICE_OBJECT *a1, struct _IRP *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v5; // rax
  _QWORD *DeviceExtension; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-18h]

  if ( a2->RequestorMode )
  {
    v5 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v5 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v5);
    return 3221225506LL;
  }
  else
  {
    DeviceExtension = a1->DeviceExtension;
    if ( a4 >= 0x10 && a3 )
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v12, a1);
      v8 = v13;
      if ( v13 >= 0 )
      {
        v9 = DeviceExtension[461];
        v11[0] = 0LL;
        v11[1] = a3[1];
        v8 = DxgkDdiSetVirtualGpuVmBus(v9, a3, v11);
        v13 = v8;
      }
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v12);
    }
    else
    {
      v8 = -1073741789;
      v10 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v10 + 24) = -1073741789LL;
      WdLogEvent5_WdError(v10);
    }
    return v8;
  }
}
