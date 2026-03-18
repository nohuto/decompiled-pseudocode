/*
 * XREFs of ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C025C17C
 * Callers:
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025B884 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z @ 0x1C025BDC8 (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z.c)
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x1C025BF60 (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z.c)
 *     ?DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QEAAJXZ @ 0x1C025C0FC (-DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QEAAJXZ.c)
 *     ?DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z @ 0x1C025C294 (-DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z.c)
 * Callees:
 *     ?ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEQEAEK@Z @ 0x1C025B5C0 (-ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEQEAEK@Z.c)
 *     ?DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z @ 0x1C025C1F4 (-DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(
        CPhysicalMonitorHandle *this,
        __int64 a2,
        unsigned __int8 *a3,
        int a4)
{
  unsigned __int8 v7; // al
  __int64 v8; // r8
  int v9; // r11d
  _DWORD v11[2]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 *v12; // [rsp+48h] [rbp-10h]

  v7 = CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum(0x6Eu, a3, a4 - 1);
  a3[v8] = v7;
  v11[0] = 110;
  v11[1] = v9;
  v12 = a3;
  return CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(this, 0x232443u, a2, v11, 0x10u, 0LL, 0);
}
