/*
 * XREFs of DpiGetDevicePropertyString @ 0x1C00EBFE8
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C002B510 (DpiMiracastInterfaceChange.c)
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C00EA390 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C00EB240 (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        POOL_TYPE PoolType,
        _QWORD *a4,
        _DWORD *a5)
{
  void *v5; // rdi
  _DWORD *v10; // rsi
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  PVOID PoolWithTag; // rax
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  size_t Size; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( DeviceObject )
  {
    if ( a4 )
    {
      v10 = a5;
      if ( a5 )
      {
        v11 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, (PULONG)&Size);
        v13 = v11;
        if ( v11 != -1073741789 )
          goto LABEL_10;
        LODWORD(Size) = Size + 2;
        PoolWithTag = ExAllocatePoolWithTag(PoolType, (unsigned int)Size, 0x74727044u);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(v13) = -1073741670;
          v19 = WdLogNewEntry5_WdLowResource(v15);
          *(_QWORD *)(v19 + 24) = -1073741670LL;
          WdLogEvent5_WdLowResource(v19);
          return (unsigned int)v13;
        }
        memset(PoolWithTag, 0, (unsigned int)Size);
        v16 = IoGetDeviceProperty(DeviceObject, DeviceProperty, Size, v5, (PULONG)&Size);
        v13 = v16;
        if ( v16 < 0 )
        {
LABEL_10:
          v20 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v20 + 24) = v13;
          WdLogEvent5_WdError(v20);
          if ( (int)v13 < 0 )
          {
            if ( v5 )
              ExFreePoolWithTag(v5, 0);
            return (unsigned int)v13;
          }
        }
        v17 = Size;
        *a4 = v5;
        *v10 = v17;
        return (unsigned int)v13;
      }
    }
  }
  return 3221225485LL;
}
