/*
 * XREFs of EDIDV1_FillProductIdManufacturerName @ 0x1C00089B8
 * Callers:
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00981D8 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C00C9CA8 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C00086F8 (EDIDV1_IsEDIDBaseBlock.c)
 */

__int64 __fastcall EDIDV1_FillProductIdManufacturerName(_QWORD *a1)
{
  __int64 result; // rax
  _WORD *v2; // r8
  __int64 v3; // r9
  _WORD *v4; // r10

  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( v4 && v2 )
    {
      *v4 = *(_WORD *)(v3 + 8);
      *v2 = *(_WORD *)(v3 + 10);
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
