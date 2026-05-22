/*
 * XREFs of ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800731FC
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180071350 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     ?OnInputReport@KeyboardDeviceCollection@@MEAAJKPEAXK@Z @ 0x180071A10 (-OnInputReport@KeyboardDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@MouseDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800733D0 (-OnInputReport@MouseDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800737D0 (-OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z @ 0x180073FC0 (-OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x180074630 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x18007C300 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18007D050 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180072CE4 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::GetDeviceInfo(
        RIMDeviceCollection *this,
        int a2,
        struct DeviceInfo **a3,
        unsigned int *a4)
{
  int DeviceId; // eax
  __int64 v5; // rcx
  _QWORD *v6; // r11
  unsigned int v7; // ebx
  struct RIMDevice *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v9, a4);
  v7 = DeviceId;
  if ( DeviceId >= 0 )
  {
    *v6 = *((_QWORD *)v9 + 4);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v5, &MinInput_Warning_CheckResult, 2, 1211, DeviceId);
  }
  return v7;
}
