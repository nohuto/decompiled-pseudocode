/*
 * XREFs of ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C025C1E0
 * Callers:
 *     ?DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z @ 0x1C025B470 (-DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z.c)
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x1C025B990 (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 *     ?DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z @ 0x1C025BA74 (-DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z.c)
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x1C025BBF0 (-DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z.c)
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1C025C140 (-DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z.c)
 *     ?GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z @ 0x1C025C24C (-GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z.c)
 *     NtGdiDDCCISaveCurrentSettings @ 0x1C025C670 (NtGdiDDCCISaveCurrentSettings.c)
 *     NtGdiDDCCISetVCPFeature @ 0x1C025C6D0 (NtGdiDDCCISetVCPFeature.c)
 * Callees:
 *     ?GetElement@?$CList@VCPhysicalMonitorHandle@@@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C025C1BC (-GetElement@-$CList@VCPhysicalMonitorHandle@@@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z.c)
 */

__int64 __fastcall CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(
        __int64 a1,
        void *a2,
        CMonitorPDO **a3)
{
  CMonitorPDO *v6; // rdi
  CMonitorPDO *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( INVALID_MONITOR_HANDLE == a2 || (unsigned __int64)a2 > 0xFFFFFFFF )
    return *(unsigned int *)(a1 + 16);
  if ( (int)CList<CPhysicalMonitorHandle>::GetElement(a1, (unsigned int)a2, &v7) < 0 )
    return *(unsigned int *)(a1 + 16);
  v6 = v7;
  if ( !CMonitorPDO::DoesCurrentProcessOwnProtectedOutput(v7) )
    return *(unsigned int *)(a1 + 16);
  *a3 = v6;
  return 0LL;
}
