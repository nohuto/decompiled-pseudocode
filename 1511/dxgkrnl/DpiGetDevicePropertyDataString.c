/*
 * XREFs of DpiGetDevicePropertyDataString @ 0x1C00D3F10
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C0024050 (DpiMiracastInterfaceChange.c)
 *     DpiFdoInitializeFdo @ 0x1C00D3310 (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
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
              v26 = (_QWORD *)WdLogNewEntry5_WdError(v14);
              v26[3] = DpiGetDevicePropertyDataString;
              v26[4] = IoGetDevicePropertyData;
              v26[5] = -1073741811LL;
              WdLogEvent5_WdError(v26);
              return (unsigned int)v15;
            }
            LODWORD(Size) = Size + 2;
            PoolWithTag = ExAllocatePoolWithTag(PoolType, (unsigned int)Size, 0x74727044u);
            Data = PoolWithTag;
            if ( !PoolWithTag )
            {
              LODWORD(v15) = -1073741670;
              v27 = (_QWORD *)WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
              v27[4] = ExAllocatePoolWithTag;
              v27[3] = DpiGetDevicePropertyDataString;
              v27[5] = -1073741670LL;
              WdLogEvent5_WdLowResource(v27);
              return (unsigned int)v15;
            }
            memset(PoolWithTag, 0, (unsigned int)Size);
            v21 = IoGetDevicePropertyData(Pdo, PropertyKey, Lcid, 0, Size, Data, (PULONG)&Size, Type);
            v15 = v21;
            if ( v21 >= 0 )
            {
LABEL_9:
              v23 = Size;
              *v11 = Data;
              *v12 = v23;
              return (unsigned int)v15;
            }
            v28 = (_QWORD *)WdLogNewEntry5_WdError(v22);
            v28[4] = IoGetDevicePropertyData;
            v25 = v28;
            v28[3] = DpiGetDevicePropertyDataString;
            v28[5] = v15;
          }
          else
          {
            v25 = (_QWORD *)WdLogNewEntry5_WdError(v14);
            v25[3] = DpiGetDevicePropertyDataString;
            v25[4] = IoGetDevicePropertyData;
            v25[5] = v15;
          }
          WdLogEvent5_WdError(v25);
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
