/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180020994
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x180001504 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z.c)
 *     ?Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ @ 0x180001850 (-Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x1800041B0 (-Release@ResourceSetCallbackThunk@@UEAAKXZ.c)
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008D60 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000CB20 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAV82@@Z @ 0x18000D900 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18000FD60 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ?Release@RmpRpsResourceSetCallback@@UEAAKXZ @ 0x180014360 (-Release@RmpRpsResourceSetCallback@@UEAAKXZ.c)
 *     ?Release@RmpRpExtResourceSetThunk@@UEAAKXZ @ 0x180014570 (-Release@RmpRpExtResourceSetThunk@@UEAAKXZ.c)
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x1800192C0 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 *     ?Release@RmpRpExtResourceManagerThunk@@UEAAKXZ @ 0x18001CD40 (-Release@RmpRpExtResourceManagerThunk@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180021724 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x180029154 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 *     ??_EResourceManagerServerProxy@@MEAAPEAXI@Z @ 0x180029DE0 (--_EResourceManagerServerProxy@@MEAAPEAXI@Z.c)
 *     ?Release@ResourceSetCallback@@UEAAKXZ @ 0x18002A140 (-Release@ResourceSetCallback@@UEAAKXZ.c)
 *     ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x18002A2E0 (--_EModernResourceEnforcer@@MEAAPEAXI@Z.c)
 *     ?GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z @ 0x18002B408 (-GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z.c)
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x18002B6E0 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 *     ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180035180 (--_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free_0(Block);
}
