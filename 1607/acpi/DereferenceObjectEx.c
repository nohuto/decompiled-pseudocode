/*
 * XREFs of DereferenceObjectEx @ 0x1C0019F6C
 * Callers:
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     CreateNativeNameSpaceObject @ 0x1C0005530 (CreateNativeNameSpaceObject.c)
 *     Load @ 0x1C0006050 (Load.c)
 *     AMLIApplyNamespaceOverride @ 0x1C00067A0 (AMLIApplyNamespaceOverride.c)
 *     PerformMutexDriverCallbacks @ 0x1C0007554 (PerformMutexDriverCallbacks.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     ParseField @ 0x1C0015710 (ParseField.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     FreeObjData @ 0x1C001B600 (FreeObjData.c)
 *     ParseNameObj @ 0x1C001DEBC (ParseNameObj.c)
 *     DerefOf @ 0x1C001EF00 (DerefOf.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     AMLIFindNameSpaceObject @ 0x1C0020F88 (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0022C00 (AMLIEvalPackageElement.c)
 *     Field @ 0x1C0026E10 (Field.c)
 *     Alias @ 0x1C0028AA0 (Alias.c)
 *     IndexField @ 0x1C0029B50 (IndexField.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0054EC0 (InternalRawAccessOpRegionHandler.c)
 *     Simulator_EvaluateNode @ 0x1C0059C94 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0059F04 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C005A378 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005A470 (AMLICreateNativeNamespaceObject.c)
 *     DebugNotify @ 0x1C005AD30 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C005AFE0 (DebugRunMethod.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005B750 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005B8AC (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005BA04 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C005BD70 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C005BEE0 (AMLIReadNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C005C5AC (ParseDLMObjectInternal.c)
 *     FreeObjectHandle @ 0x1C005CBAC (FreeObjectHandle.c)
 *     BankField @ 0x1C005CE00 (BankField.c)
 *     FreeContext @ 0x1C005DD2C (FreeContext.c)
 *     LoadTable @ 0x1C005F290 (LoadTable.c)
 *     ParseNestedContext @ 0x1C0061780 (ParseNestedContext.c)
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall DereferenceObjectEx(_QWORD *a1)
{
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 28, 0xFFFFFFFF) == 1 )
  {
    *((_WORD *)a1 + 32) |= 4u;
    if ( (a1[8] & 0x40) == 0 )
      FreeNameSpaceObjects(a1);
  }
}
