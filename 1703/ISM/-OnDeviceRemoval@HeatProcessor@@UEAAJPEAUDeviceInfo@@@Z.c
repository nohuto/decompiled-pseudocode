/*
 * XREFs of ?OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18003B930
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetHeatDeviceInfo@HeatProcessor@@AEAAXPEAUDeviceInfo@@PEAUHeatDeviceInfo@@@Z @ 0x18003BA8C (-GetHeatDeviceInfo@HeatProcessor@@AEAAXPEAUDeviceInfo@@PEAUHeatDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::OnDeviceRemoval(HeatProcessor *this, struct DeviceInfo *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !a2 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( *((_DWORD *)a2 + 1) == 2048 )
  {
    if ( *((_QWORD *)this + 7) )
    {
      HeatProcessor::GetHeatDeviceInfo(this, a2, (struct HeatDeviceInfo *)v6);
      v3 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 7) + 32LL))(*((_QWORD *)this + 7), v6);
      if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 191, v3);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 180, 87);
  }
  return 0LL;
}
