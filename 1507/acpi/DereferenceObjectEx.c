/*
 * XREFs of DereferenceObjectEx @ 0x1C0013800
 * Callers:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     CreateNativeNameSpaceObject @ 0x1C000535C (CreateNativeNameSpaceObject.c)
 *     AMLIApplyNamespaceOverride @ 0x1C0005B60 (AMLIApplyNamespaceOverride.c)
 *     PerformMutexDriverCallbacks @ 0x1C0005C1C (PerformMutexDriverCallbacks.c)
 *     Load @ 0x1C0005E10 (Load.c)
 *     EnableDisableCMOSRegions @ 0x1C0006F70 (EnableDisableCMOSRegions.c)
 *     AMLIIterateSiblingsNext @ 0x1C0008E44 (AMLIIterateSiblingsNext.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00090D0 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C00095A0 (GetPciAddressWorker.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     ParseField @ 0x1C000DD70 (ParseField.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     ParseNameObj @ 0x1C0015A18 (ParseNameObj.c)
 *     DerefOf @ 0x1C0016C80 (DerefOf.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     AMLIFindNameSpaceObject @ 0x1C0018E08 (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C001AD78 (AMLIEvalPackageElement.c)
 *     Field @ 0x1C001FF40 (Field.c)
 *     Alias @ 0x1C00214E0 (Alias.c)
 *     IndexField @ 0x1C0022320 (IndexField.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C00403E0 (InternalRawAccessOpRegionHandler.c)
 *     Simulator_EvaluateNode @ 0x1C0042BD4 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0042E18 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0043288 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0043380 (AMLICreateNativeNamespaceObject.c)
 *     DebugNotify @ 0x1C0043C40 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C0043EF0 (DebugRunMethod.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0044598 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C00446F4 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004484C (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0044BC8 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0044D34 (AMLIReadNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C00453BC (ParseDLMObjectInternal.c)
 *     BankField @ 0x1C0045CD0 (BankField.c)
 *     FreeContext @ 0x1C0046CB4 (FreeContext.c)
 *     LoadTable @ 0x1C0048080 (LoadTable.c)
 *     ParseNestedContext @ 0x1C004A350 (ParseNestedContext.c)
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
