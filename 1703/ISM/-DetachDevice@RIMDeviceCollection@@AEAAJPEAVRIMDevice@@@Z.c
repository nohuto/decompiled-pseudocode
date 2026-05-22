/*
 * XREFs of ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x1800730B0
 * Callers:
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x180071E48 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z @ 0x180072150 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?FindDeviceHandle@RIMDeviceCollection@@AEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180072D24 (-FindDeviceHandle@RIMDeviceCollection@@AEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMDeviceCollection::DetachDevice(RIMDeviceCollection *this, struct RIMDevice *a2)
{
  unsigned int *v2; // rbx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  void *v10; // rdx
  int DeviceHandle; // eax
  void (__fastcall ***v12)(_QWORD, __int64); // rcx
  int v13; // r8d
  int v14; // ebx
  __int64 v15; // rbp
  unsigned int v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned int *)*((_QWORD *)a2 + 4);
  v5 = (*(__int64 (__fastcall **)(RIMDeviceCollection *, _QWORD))(*(_QWORD *)this + 64LL))(this, *v2);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( (v2[1] & 0xFFFFFEFF) != 0
      && (v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 2) + 48LL))(
                 *((_QWORD *)this + 2),
                 v2),
          v7 = v8,
          v8 < 0) )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v9, &MinInput_Warning_CheckResult, 2, 1191, v8);
    }
    else
    {
      v10 = (void *)*((_QWORD *)a2 + 2);
      v17 = 0;
      DeviceHandle = RIMDeviceCollection::FindDeviceHandle(this, v10, 0LL, &v17);
      v14 = v13 + 2;
      v7 = DeviceHandle;
      if ( DeviceHandle >= 0 )
      {
        v15 = v17;
        v12 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + v17 + 78);
        if ( v12 )
          (**v12)(v12, 1LL);
        *((_QWORD *)this + v15 + 78) = 0LL;
        --*((_DWORD *)this + 668);
      }
      else if ( ((unsigned __int8)v14 & (unsigned __int8)Microsoft_OneCore_MinInputEnableBits) != 0 )
      {
        Template_qqq((__int64)v12, &MinInput_Warning_CheckResult, v14, 1073, DeviceHandle);
      }
      if ( v7 < 0 && ((unsigned __int8)v14 & (unsigned __int8)Microsoft_OneCore_MinInputEnableBits) != 0 )
        Template_qqq((__int64)v12, &MinInput_Warning_CheckResult, v14, 1194, v7);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v6, &MinInput_Warning_CheckResult, 2, 1176, v5);
  }
  return (unsigned int)v7;
}
