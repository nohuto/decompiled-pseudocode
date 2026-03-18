/*
 * XREFs of DpiGetDevicePropertyDataString @ 0x1C00C6CA0
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C0024520 (DpiMiracastInterfaceChange.c)
 *     DpiFdoInitializeFdo @ 0x1C00C6170 (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyDataString(
        PDEVICE_OBJECT Pdo,
        DEVPROPKEY *PropertyKey,
        LCID Lcid,
        POOL_TYPE PoolType,
        _QWORD *a5,
        _DWORD *a6)
{
  void *Data; // rdi
  _QWORD *v11; // rsi
  _DWORD *v12; // r14
  NTSTATUS DevicePropertyData; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  PVOID PoolWithTag; // rax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  ULONG Type[4]; // [rsp+40h] [rbp-38h] BYREF
  size_t Size; // [rsp+80h] [rbp+8h] BYREF

  Data = 0LL;
  if ( Pdo )
  {
    if ( PropertyKey )
    {
      v11 = a5;
      if ( a5 )
      {
        v12 = a6;
        if ( a6 )
        {
          DevicePropertyData = IoGetDevicePropertyData(Pdo, PropertyKey, Lcid, 0, 0, 0LL, (PULONG)&Size, Type);
          v15 = DevicePropertyData;
          if ( DevicePropertyData == -1073741789 )
          {
            if ( Type[0] != 18 )
            {
              LODWORD(v15) = -1073741811;
              v23 = (_QWORD *)WdLogNewEntry5_WdError(v14);
              v23[3] = DpiGetDevicePropertyDataString;
              v23[4] = IoGetDevicePropertyData;
              v23[5] = -1073741811LL;
              WdLogEvent5_WdError(v23);
              return (unsigned int)v15;
            }
            LODWORD(Size) = Size + 2;
            PoolWithTag = ExAllocatePoolWithTag(PoolType, (unsigned int)Size, 0x74727044u);
            Data = PoolWithTag;
            if ( !PoolWithTag )
            {
              LODWORD(v15) = -1073741670;
              v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v17);
              v24[4] = ExAllocatePoolWithTag;
              v24[3] = DpiGetDevicePropertyDataString;
              v24[5] = -1073741670LL;
              WdLogEvent5_WdLowResource(v24);
              return (unsigned int)v15;
            }
            memset(PoolWithTag, 0, (unsigned int)Size);
            v18 = IoGetDevicePropertyData(Pdo, PropertyKey, Lcid, 0, Size, Data, (PULONG)&Size, Type);
            v15 = v18;
            if ( v18 >= 0 )
            {
LABEL_9:
              v20 = Size;
              *v11 = Data;
              *v12 = v20;
              return (unsigned int)v15;
            }
            v25 = (_QWORD *)WdLogNewEntry5_WdError(v19);
            v25[4] = IoGetDevicePropertyData;
            v22 = v25;
            v25[3] = DpiGetDevicePropertyDataString;
            v25[5] = v15;
          }
          else
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdError(v14);
            v22[3] = DpiGetDevicePropertyDataString;
            v22[4] = IoGetDevicePropertyData;
            v22[5] = v15;
          }
          WdLogEvent5_WdError(v22);
          if ( (int)v15 < 0 )
          {
            if ( Data )
              ExFreePoolWithTag(Data, 0);
            return (unsigned int)v15;
          }
          goto LABEL_9;
        }
      }
    }
  }
  return -1073741811LL;
}
