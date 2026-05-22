/*
 * XREFs of ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007D860
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180072CE4 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007DDC0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall HeatDeviceCollection::OnDeviceAttach(
        HeatDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  void *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int *v11; // r9
  int DeviceId; // eax
  __int64 v13; // rcx
  struct RIMDevice *v15; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v16[5]; // [rsp+38h] [rbp-30h] BYREF
  struct DeviceInfo *v17; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  memset(v16, 0, sizeof(v16));
  v6 = operator new(0x38uLL);
  memset(v6, 0, 0x38uLL);
  v17 = (struct DeviceInfo *)v6;
  if ( v6 )
  {
    v9 = HIDDeviceCollection::OnDeviceAttach(this, a2, &v17);
    v8 = v9;
    if ( v9 >= 0 )
    {
      DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v15, v11);
      v8 = DeviceId;
      if ( DeviceId >= 0 )
      {
        *a3 = v17;
        if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), *((_QWORD *)v15 + 2), v16) >= 0 )
          *((_QWORD *)*a3 + 2) = v16[1];
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 123, DeviceId);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 119, v9);
    }
  }
  else
  {
    v8 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 114, 14);
  }
  return v8;
}
