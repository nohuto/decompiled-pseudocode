/*
 * XREFs of ?OnDeviceAttach@PTPDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800735C0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180072CE4 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007DDC0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall PTPDeviceCollection::OnDeviceAttach(
        PTPDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int DeviceId; // eax
  __int64 v7; // rcx
  unsigned int *v8; // r9
  int v9; // ebx
  int v10; // r9d
  struct RIMDevice *v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  struct RIMDevice *v16; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+38h] [rbp-30h] BYREF

  v16 = 0LL;
  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  v9 = DeviceId;
  if ( DeviceId >= 0 )
  {
    DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v16, v8);
    v9 = DeviceId;
    if ( DeviceId >= 0 )
    {
      v11 = v16;
      v12 = *((_QWORD *)this + 10);
      v9 = 0;
      v17 = 0uLL;
      v13 = RIMGetPhysicalDeviceRect(v12, *((_QWORD *)v16 + 2), &v17);
      if ( v13 >= 0 )
      {
        *((_OWORD *)v11 + 8) = v17;
      }
      else
      {
        v9 = v13 | 0x10000000;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 317, v13);
      }
      if ( v9 >= 0 )
      {
        *(_OWORD *)((char *)*a3 + 28) = *((_OWORD *)v11 + 8);
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 106, v9);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 103;
      goto LABEL_4;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v10 = 98;
LABEL_4:
    Template_qqq(v7, &MinInput_Warning_CheckResult, 0, v10, DeviceId);
  }
  return (unsigned int)v9;
}
