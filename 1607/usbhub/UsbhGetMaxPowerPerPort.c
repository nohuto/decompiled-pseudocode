/*
 * XREFs of UsbhGetMaxPowerPerPort @ 0x1C0020744
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C001FAE8 (UsbhConfigureUsbHub.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhGetHubPowerStatus @ 0x1C00208BC (UsbhGetHubPowerStatus.c)
 *     UsbhGetStatus @ 0x1C0020C08 (UsbhGetStatus.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhGetMaxPowerPerPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  _WORD *PoolWithTag; // rdi
  __int64 result; // rax
  unsigned int v8; // ecx

  v5 = FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      34,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 2uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    if ( (int)UsbhGetStatus(a1, (_DWORD)PoolWithTag) >= 0 )
    {
      if ( (*(_BYTE *)PoolWithTag & 1) != 0 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            35,
            (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
        v5[761] = 500;
      }
      else
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            36,
            (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
        v5[761] = 100;
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  UsbhGetHubPowerStatus(a1);
  if ( v5[759] )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        37,
        (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
        v5[759]);
    return (unsigned int)v5[759];
  }
  else
  {
    result = (unsigned int)v5[761];
    if ( !(_DWORD)result )
    {
      v8 = v5[760];
      result = 500LL;
      if ( v8 )
        return v8;
    }
  }
  return result;
}
