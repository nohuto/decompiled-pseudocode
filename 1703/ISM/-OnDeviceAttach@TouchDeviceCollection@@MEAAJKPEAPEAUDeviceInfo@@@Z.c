/*
 * XREFs of ?OnDeviceAttach@TouchDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073DD0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180072CE4 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007DDC0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchDeviceCollection::OnDeviceAttach(
        TouchDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int DeviceId; // eax
  __int64 v7; // rcx
  unsigned int *v8; // r9
  unsigned int v9; // ebx
  int v10; // r9d
  struct RIMDevice *v11; // rsi
  __int64 v12; // rcx
  _QWORD v14[6]; // [rsp+30h] [rbp-38h] BYREF
  struct RIMDevice *v15; // [rsp+88h] [rbp+20h] BYREF

  memset(v14, 0, 0x28uLL);
  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  v9 = DeviceId;
  if ( DeviceId >= 0 )
  {
    v15 = 0LL;
    DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v15, v8);
    v9 = DeviceId;
    if ( DeviceId >= 0 )
    {
      v11 = v15;
      if ( (*(unsigned __int8 (__fastcall **)(TouchDeviceCollection *, struct RIMDevice *))(*(_QWORD *)this + 88LL))(
             this,
             v15) )
      {
        if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), *((_QWORD *)v11 + 2), v14) >= 0 )
          *((_QWORD *)*a3 + 2) = v14[1];
      }
      else
      {
        v9 = -2147418113;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 106, 255);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 102;
      goto LABEL_4;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v10 = 99;
LABEL_4:
    Template_qqq(v7, &MinInput_Warning_CheckResult, 0, v10, DeviceId);
  }
  return v9;
}
