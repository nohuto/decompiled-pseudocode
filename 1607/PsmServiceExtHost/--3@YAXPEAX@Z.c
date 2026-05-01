/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18001FB04
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180001AE0 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x180001E70 (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ??_GTerminalResourceSetCallback@ExecutionModel@@QEAAPEAXI@Z @ 0x180001ECC (--_GTerminalResourceSetCallback@ExecutionModel@@QEAAPEAXI@Z.c)
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x1800042B0 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004F3C (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000A2B0 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000EBB0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180012AE0 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ?Release@RmpRpsResourceSetCallback@@UEAAKXZ @ 0x180015B90 (-Release@RmpRpsResourceSetCallback@@UEAAKXZ.c)
 *     ?Release@RmpRpExtResourceSetThunk@@UEAAKXZ @ 0x1800161D0 (-Release@RmpRpExtResourceSetThunk@@UEAAKXZ.c)
 *     ?Release@RmpRpExtResourceManagerThunk@@UEAAKXZ @ 0x18001E970 (-Release@RmpRpExtResourceManagerThunk@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x1800283E4 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 *     ??_EResourceManagerServerProxy@@MEAAPEAXI@Z @ 0x180029190 (--_EResourceManagerServerProxy@@MEAAPEAXI@Z.c)
 *     ?Release@ResourceSetCallback@@UEAAKXZ @ 0x180029540 (-Release@ResourceSetCallback@@UEAAKXZ.c)
 *     ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x180029720 (--_EModernResourceEnforcer@@MEAAPEAXI@Z.c)
 *     ?Release@ResourceEnforcer@ExecutionModel@@UEAAKXZ @ 0x18002A3C0 (-Release@ResourceEnforcer@ExecutionModel@@UEAAKXZ.c)
 *     ?GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z @ 0x18002C728 (-GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z.c)
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x18002CE40 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 *     ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180037060 (--_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free_0(Block);
}
