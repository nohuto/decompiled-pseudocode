/*
 * XREFs of Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline @ 0x140345FC8
 * Callers:
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x140221B8C (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140345838 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z @ 0x140345B8C (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z.c)
 * Callees:
 *     Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback @ 0x140346004 (Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback.c)
 */

__int64 Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_I2CInterface_AtomicTransactions__private_featureState & 0x10) != 0 )
    return Feature_I2CInterface_AtomicTransactions__private_featureState & 1;
  else
    return Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback(
             (unsigned int)Feature_I2CInterface_AtomicTransactions__private_featureState,
             3LL);
}
