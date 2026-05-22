/*
 * XREFs of ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z @ 0x180072150
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x1800722F0 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?FindDeviceHandle@RIMDeviceCollection@@AEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180072D24 (-FindDeviceHandle@RIMDeviceCollection@@AEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z @ 0x180072DF4 (-AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z.c)
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x1800730B0 (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 */

void __fastcall RIMDeviceCollection::OnDeviceChangeCallbackStatic(
        void *a1,
        struct RIMDevice **a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        RIMDeviceCollection *a8)
{
  int v11; // r8d
  RIMDeviceCollection *v12; // rbx
  int DeviceHandle; // eax
  __int64 v14; // rcx
  int v15; // r9d
  void *v16; // rcx
  RIMDeviceCollection *v17; // rbx
  void *v18; // rcx
  struct RIMDevice **v19; // [rsp+20h] [rbp-28h]
  struct RIMDevice *v20; // [rsp+50h] [rbp+8h] BYREF

  v11 = a3 - 2;
  if ( v11 )
  {
    if ( v11 != 1 )
      return;
    v20 = 0LL;
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      Template_qqq((__int64)a1, &MinInput_Log_RIMDeviceClosed, 2, (int)a1, (char)a2);
    v12 = a8;
    DeviceHandle = RIMDeviceCollection::FindDeviceHandle(a8, a2, &v20, 0LL);
    if ( DeviceHandle < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return;
      v15 = 368;
      goto LABEL_23;
    }
    v16 = (void *)*((_QWORD *)v12 + 5);
    if ( v16 )
    {
      if ( !WaitForSingleObject(v16, 0) )
      {
        *((_BYTE *)v12 + 2736) = 1;
        DeviceHandle = RIMDeviceCollection::OnReadCallbackStatic(v12, 0, 0LL);
        if ( DeviceHandle < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return;
          v15 = 393;
          goto LABEL_23;
        }
      }
    }
    DeviceHandle = RIMDeviceCollection::DetachDevice(v12, v20);
    if ( DeviceHandle < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v15 = 397;
LABEL_23:
      Template_qqq(v14, &MinInput_Warning_CheckResult, 2, v15, DeviceHandle);
    }
  }
  else
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      Template_qqq((__int64)a1, &MinInput_Log_RIMDeviceOpened, 2, (int)a1, (char)a2);
    v17 = a8;
    if ( !*((_QWORD *)a8 + 10) )
      *((_QWORD *)a8 + 10) = a1;
    DeviceHandle = RIMDeviceCollection::AttachDevice(v17, a1, a2, a4, v19);
    if ( DeviceHandle < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return;
      v15 = 342;
      goto LABEL_23;
    }
    v18 = (void *)*((_QWORD *)v17 + 7);
    if ( v18 )
    {
      *((_BYTE *)v17 + 2736) = 1;
      SetEvent(v18);
    }
  }
}
