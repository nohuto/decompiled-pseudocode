/*
 * XREFs of EDIDV1_FillProductIdManufacturerName @ 0x1C000144C
 * Callers:
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C009C9BC (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C00E1748 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000148C (EDIDV1_IsEDIDBaseBlock.c)
 */

__int64 __fastcall EDIDV1_FillProductIdManufacturerName(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _WORD *v4; // r8
  __int64 v5; // r9
  _WORD *v6; // r10

  result = EDIDV1_IsEDIDBaseBlock(a1, a2, a3, a1);
  if ( (int)result >= 0 )
  {
    if ( v6 && v4 )
    {
      *v6 = *(_WORD *)(v5 + 8);
      *v4 = *(_WORD *)(v5 + 10);
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
