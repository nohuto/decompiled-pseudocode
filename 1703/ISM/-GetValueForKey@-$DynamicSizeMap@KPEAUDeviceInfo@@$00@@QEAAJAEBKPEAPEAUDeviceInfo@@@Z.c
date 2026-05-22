/*
 * XREFs of ?GetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z @ 0x18000C9E8
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_PnpNotification@@@Z @ 0x18000B40C (-ProcessPnpNotification@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_PnpNotification@@@Z.c)
 *     ?GetDeviceInfoForDeviceId@DWMInputRouter@@UEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800164B0 (-GetDeviceInfoForDeviceId@DWMInputRouter@@UEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18005C970 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@PTPDeviceCollection@@MEAAJK@Z @ 0x180073700 (-OnDeviceRemoval@PTPDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800737D0 (-OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceRemoval@TouchDeviceCollection@@MEAAJK@Z @ 0x180073EF0 (-OnDeviceRemoval@TouchDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z @ 0x180073FC0 (-OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x180074560 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x180074630 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned long,DeviceInfo *,1>::GetValueForKey(__int64 a1, int *a2, _QWORD *a3)
{
  int v3; // r10d
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r9d
  __int64 v7; // rdx

  v3 = *a2;
  v4 = 0;
  v5 = 0;
  if ( *a2 == *(_DWORD *)(a1 + 16) || !a3 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 116, 87);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 )
  {
    v7 = *(_QWORD *)a1;
    while ( *(_DWORD *)(v7 + 16LL * v4) != v3 )
    {
      if ( ++v4 >= v6 )
        goto LABEL_7;
    }
    *a3 = *(_QWORD *)(v7 + 16LL * v4 + 8);
  }
  else
  {
LABEL_7:
    v5 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 133, 5);
  }
  return v5;
}
