/*
 * XREFs of DereferenceObjectEx @ 0x1C00138E4
 * Callers:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     CreateNativeNameSpaceObject @ 0x1C00052C0 (CreateNativeNameSpaceObject.c)
 *     AMLIApplyNamespaceOverride @ 0x1C0005F58 (AMLIApplyNamespaceOverride.c)
 *     PerformMutexDriverCallbacks @ 0x1C000601C (PerformMutexDriverCallbacks.c)
 *     Load @ 0x1C0006210 (Load.c)
 *     EnableDisableCMOSRegions @ 0x1C0007690 (EnableDisableCMOSRegions.c)
 *     AMLIIterateSiblingsNext @ 0x1C0008B20 (AMLIIterateSiblingsNext.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0008D90 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C0009260 (GetPciAddressWorker.c)
 *     DerefOf @ 0x1C000CCE0 (DerefOf.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     ParseField @ 0x1C000EF50 (ParseField.c)
 *     FreeObjData @ 0x1C00113B0 (FreeObjData.c)
 *     FreeNameSpaceObjects @ 0x1C0013710 (FreeNameSpaceObjects.c)
 *     ParseNameObj @ 0x1C0016A2C (ParseNameObj.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     AMLIFindNameSpaceObject @ 0x1C0018D3C (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C001AFE8 (AMLIEvalPackageElement.c)
 *     Field @ 0x1C0020510 (Field.c)
 *     Alias @ 0x1C0021CD0 (Alias.c)
 *     IndexField @ 0x1C0022AA0 (IndexField.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C003FE90 (InternalRawAccessOpRegionHandler.c)
 *     Simulator_EvaluateNode @ 0x1C00425F4 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0042838 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0042CA8 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0042DA0 (AMLICreateNativeNamespaceObject.c)
 *     DebugNotify @ 0x1C0043660 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C0043910 (DebugRunMethod.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0043FB8 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0044114 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004426C (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C00445E8 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0044754 (AMLIReadNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C0044DEC (ParseDLMObjectInternal.c)
 *     BankField @ 0x1C0045710 (BankField.c)
 *     FreeContext @ 0x1C00465D4 (FreeContext.c)
 *     LoadTable @ 0x1C0047990 (LoadTable.c)
 *     ParseNestedContext @ 0x1C0049C60 (ParseNestedContext.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall DereferenceObjectEx(__int64 a1)
{
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 104), 0xFFFFFFFF) == 1 )
  {
    *(_WORD *)(a1 + 56) |= 4u;
    if ( (*(_WORD *)(a1 + 56) & 0x40) == 0 )
      FreeNameSpaceObjects(a1);
  }
}
