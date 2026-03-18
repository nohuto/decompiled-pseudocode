/*
 * XREFs of ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C01B270C
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F2610 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C00F1704 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveScaleFactorToMonitorStore(DXGMONITOR *this, int a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a2;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 0, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredScaleFactor");
    v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
    if ( (int)v4 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v6 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v6 + 24) = this;
      *(_QWORD *)(v6 + 32) = v4;
      WdLogEvent5_WdError(v6);
      return (unsigned int)v4;
    }
  }
  return result;
}
