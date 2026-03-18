/*
 * XREFs of DpiGetRegistryPathFromPDO @ 0x1C000DD80
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C000DCA0 (DpiGetDeviceRegistryPaths.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall DpiGetRegistryPathFromPDO(struct _DEVICE_OBJECT *a1, int a2, unsigned __int16 *a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int16 *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 *v12; // rsi
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  unsigned __int16 v15; // dx
  PVOID v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF
  void *DeviceRegKey; // [rsp+68h] [rbp+20h] BYREF

  DeviceRegKey = 0LL;
  v4 = IoOpenDeviceRegistryKey(a1, 2 - (a2 != 0), 0x20019u, &DeviceRegKey);
  v6 = v4;
  if ( v4 < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v22[3] = DpiGetRegistryPathFromPDO;
    v22[4] = IoOpenDeviceRegistryKey;
    v22[5] = v6;
    WdLogEvent5_WdError(v22);
  }
  else
  {
    LODWORD(v6) = ZwQueryKey(DeviceRegKey, KeyNameInformation, 0LL, 0, &Length);
    if ( (_DWORD)v6 == -1073741789 )
    {
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length, 0x74727044u);
      v12 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Length);
        v13 = ZwQueryKey(DeviceRegKey, KeyNameInformation, v12, Length, &Length);
        v6 = v13;
        if ( v13 < 0 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          v24[3] = DpiGetDeviceRegistryPaths;
          v24[4] = ZwQueryKey;
          v24[5] = v6;
          WdLogEvent5_WdError(v24);
        }
        else
        {
          v15 = *v12 + 2;
          a3[1] = v15;
          *a3 = *v12;
          v16 = ExAllocatePoolWithTag(PagedPool, v15, 0x74727044u);
          *((_QWORD *)a3 + 1) = v16;
          if ( v16 )
          {
            memset(v16, 0, a3[1]);
            memmove(*((void **)a3 + 1), v12 + 2, *a3);
          }
          else
          {
            LODWORD(v6) = -1073741801;
            v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
            v25[3] = DpiGetDeviceRegistryPaths;
            v25[4] = ExAllocatePoolWithTag;
            v25[5] = -1073741801LL;
            WdLogEvent5_WdLowResource(v25);
          }
        }
        ExFreePoolWithTag(v12, 0x74727044u);
      }
      else
      {
        LODWORD(v6) = -1073741801;
        v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
        v23[3] = DpiGetDeviceRegistryPaths;
        v23[4] = ExAllocatePoolWithTag;
        v23[5] = -1073741801LL;
        WdLogEvent5_WdLowResource(v23);
      }
    }
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v6;
}
