/*
 * XREFs of ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x140007704
 * Callers:
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140005EE8 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140025BE8 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioDeviceGraph::FinalRelease(CAudioDeviceGraph *this)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 57LL, &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids);
  }
}
