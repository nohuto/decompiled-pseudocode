/*
 * XREFs of DpiGetDevicePropertyString @ 0x1C00C6DF0
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C0024520 (DpiMiracastInterfaceChange.c)
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C00C5300 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C00C6170 (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
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
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
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
        if ( v11 == -1073741789 )
        {
          LODWORD(Size) = Size + 2;
          PoolWithTag = ExAllocatePoolWithTag(PoolType, (unsigned int)Size, 0x74727044u);
          v5 = PoolWithTag;
          if ( !PoolWithTag )
          {
            LODWORD(v13) = -1073741670;
            v21 = (_QWORD *)WdLogNewEntry5_WdLowResource(v15);
            v21[4] = ExAllocatePoolWithTag;
            v21[3] = DpiGetDevicePropertyString;
            v21[5] = -1073741670LL;
            WdLogEvent5_WdLowResource(v21);
            return (unsigned int)v13;
          }
          memset(PoolWithTag, 0, (unsigned int)Size);
          v16 = IoGetDeviceProperty(DeviceObject, DeviceProperty, Size, v5, (PULONG)&Size);
          v13 = v16;
          if ( v16 >= 0 )
          {
LABEL_7:
            v18 = Size;
            *a4 = v5;
            *v10 = v18;
            return (unsigned int)v13;
          }
          v22 = (_QWORD *)WdLogNewEntry5_WdError(v17);
          v22[4] = IoGetDeviceProperty;
          v20 = v22;
          v22[3] = DpiGetDevicePropertyString;
          v22[5] = v13;
        }
        else
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v20[3] = DpiGetDevicePropertyString;
          v20[4] = IoGetDeviceProperty;
          v20[5] = v13;
        }
        WdLogEvent5_WdError(v20);
        if ( (int)v13 < 0 )
        {
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
          return (unsigned int)v13;
        }
        goto LABEL_7;
      }
    }
  }
  return 3221225485LL;
}
