/*
 * XREFs of USBDInternal_BuildServicePath @ 0x1C00A51F4
 * Callers:
 *     USBD_CreateHandle @ 0x1C00A5684 (USBD_CreateHandle.c)
 * Callees:
 *     memmove @ 0x1C0033080 (memmove.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     RtlStringCbCatW @ 0x1C00A4FF8 (RtlStringCbCatW.c)
 */

__int64 __fastcall USBDInternal_BuildServicePath(
        _DEVICE_OBJECT *DeviceObject,
        unsigned __int16 **RelativeServicePath,
        ULONG PoolTag)
{
  _DRIVER_OBJECT *DriverObject; // rbx
  void *v4; // rdi
  int v7; // ebx
  const void *v8; // r14
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  PVOID PoolWithTag; // rax
  const wchar_t *v12; // r8
  int v13; // eax
  __int64 result; // rax

  DriverObject = DeviceObject->DriverObject;
  v4 = 0LL;
  if ( DriverObject->DriverName.Length > 0x10u
    && RtlCompareMemory(DriverObject->DriverName.Buffer, L"\\Driver\\", 0x10uLL) == 16 )
  {
    v8 = DriverObject->DriverName.Buffer + 8;
    v9 = DriverObject->DriverName.Length - 16;
    v10 = v9 + 24;
    PoolWithTag = ExAllocatePoolWithTag(g_NonPagedPoolType, v9 + 24, PoolTag);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9 + 24);
      memmove(v4, v8, v9);
      v13 = RtlStringCbCatW((unsigned __int16 *)v4, v9 + 24, v12);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v7 = 0;
      }
      else if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
      {
        DbgPrintEx(0x4Du, 0, "RtlStringCchCatW failed with status 0x%x", v13);
      }
      if ( v7 < 0 )
      {
        ExFreePoolWithTag(v4, PoolTag);
        v4 = 0LL;
      }
    }
    else
    {
      v7 = -1073741670;
      if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
        DbgPrintEx(0x4Du, 0, "Couldnt allocate servicePath of size %d\n", v10);
    }
  }
  else
  {
    if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
      DbgPrintEx(0x4Du, 0, "Unexpected Driver name, Drvobj 0x%p\n", DriverObject);
    v7 = -1073741595;
  }
  result = (unsigned int)v7;
  *RelativeServicePath = (unsigned __int16 *)v4;
  return result;
}
