/*
 * XREFs of ?RemoveKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBK@Z @ 0x18000CC88
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_PnpNotification@@@Z @ 0x18000B40C (-ProcessPnpNotification@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_PnpNotification@@@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x1800145D4 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 *     ?OnDeviceRemoval@PTPDeviceCollection@@MEAAJK@Z @ 0x180073700 (-OnDeviceRemoval@PTPDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@TouchDeviceCollection@@MEAAJK@Z @ 0x180073EF0 (-OnDeviceRemoval@TouchDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x180074560 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned long,DeviceInfo *,1>::RemoveKey(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  _DWORD *v3; // r9
  unsigned int v4; // r8d
  __int64 v5; // r10

  v2 = 0;
  v3 = (_DWORD *)a1;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v5 = *(_QWORD *)a1;
    a1 = *a2;
    while ( *(_DWORD *)(v5 + 16LL * v4) != (_DWORD)a1 )
    {
      if ( ++v4 >= v3[2] )
        goto LABEL_5;
    }
    *(_DWORD *)(v5 + 16LL * v4) = v3[4];
    --v3[3];
  }
  else
  {
LABEL_5:
    v2 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 220, 5);
  }
  return v2;
}
