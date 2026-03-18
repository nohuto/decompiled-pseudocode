/*
 * XREFs of DpiGetRegistryPathFromPDO @ 0x1C000D4B0
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C000D3D0 (DpiGetDeviceRegistryPaths.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall DpiGetRegistryPathFromPDO(struct _DEVICE_OBJECT *a1, int a2, unsigned __int16 *a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int16 *PoolWithTag; // rax
  __int64 v8; // rcx
  unsigned __int16 *v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  unsigned __int16 v12; // dx
  PVOID v13; // rax
  __int64 v14; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF
  void *DeviceRegKey; // [rsp+68h] [rbp+20h] BYREF

  DeviceRegKey = 0LL;
  v4 = IoOpenDeviceRegistryKey(a1, 2 - (a2 != 0), 0x20019u, &DeviceRegKey);
  v6 = v4;
  if ( v4 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v16[3] = DpiGetRegistryPathFromPDO;
    v16[4] = IoOpenDeviceRegistryKey;
    v16[5] = v6;
    WdLogEvent5_WdError(v16);
  }
  else
  {
    LODWORD(v6) = ZwQueryKey(DeviceRegKey, KeyNameInformation, 0LL, 0, &Length);
    if ( (_DWORD)v6 == -1073741789 )
    {
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length, 0x74727044u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Length);
        v10 = ZwQueryKey(DeviceRegKey, KeyNameInformation, v9, Length, &Length);
        v6 = v10;
        if ( v10 < 0 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v11);
          v18[3] = DpiGetDeviceRegistryPaths;
          v18[4] = ZwQueryKey;
          v18[5] = v6;
          WdLogEvent5_WdError(v18);
        }
        else
        {
          v12 = *v9 + 2;
          a3[1] = v12;
          *a3 = *v9;
          v13 = ExAllocatePoolWithTag(PagedPool, v12, 0x74727044u);
          *((_QWORD *)a3 + 1) = v13;
          if ( v13 )
          {
            memset(v13, 0, a3[1]);
            memmove(*((void **)a3 + 1), v9 + 2, *a3);
          }
          else
          {
            LODWORD(v6) = -1073741801;
            v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14);
            v19[3] = DpiGetDeviceRegistryPaths;
            v19[4] = ExAllocatePoolWithTag;
            v19[5] = -1073741801LL;
            WdLogEvent5_WdLowResource(v19);
          }
        }
        ExFreePoolWithTag(v9, 0x74727044u);
      }
      else
      {
        LODWORD(v6) = -1073741801;
        v17 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8);
        v17[3] = DpiGetDeviceRegistryPaths;
        v17[4] = ExAllocatePoolWithTag;
        v17[5] = -1073741801LL;
        WdLogEvent5_WdLowResource(v17);
      }
    }
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v6;
}
