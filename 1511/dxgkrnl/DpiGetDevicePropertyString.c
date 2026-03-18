/*
 * XREFs of DpiGetDevicePropertyString @ 0x1C00D4060
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C0024050 (DpiMiracastInterfaceChange.c)
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C00D2490 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C00D3310 (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
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
            v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
            v24[4] = ExAllocatePoolWithTag;
            v24[3] = DpiGetDevicePropertyString;
            v24[5] = -1073741670LL;
            WdLogEvent5_WdLowResource(v24);
            return (unsigned int)v13;
          }
          memset(PoolWithTag, 0, (unsigned int)Size);
          v19 = IoGetDeviceProperty(DeviceObject, DeviceProperty, Size, v5, (PULONG)&Size);
          v13 = v19;
          if ( v19 >= 0 )
          {
LABEL_7:
            v21 = Size;
            *a4 = v5;
            *v10 = v21;
            return (unsigned int)v13;
          }
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v20);
          v25[4] = IoGetDeviceProperty;
          v23 = v25;
          v25[3] = DpiGetDevicePropertyString;
          v25[5] = v13;
        }
        else
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v23[3] = DpiGetDevicePropertyString;
          v23[4] = IoGetDeviceProperty;
          v23[5] = v13;
        }
        WdLogEvent5_WdError(v23);
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
