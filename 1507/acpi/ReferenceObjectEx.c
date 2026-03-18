/*
 * XREFs of ReferenceObjectEx @ 0x1C0005760
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     CreateNativeNameSpaceObject @ 0x1C000535C (CreateNativeNameSpaceObject.c)
 *     Release @ 0x1C00055C0 (Release.c)
 *     Acquire @ 0x1C0005690 (Acquire.c)
 *     PerformMutexDriverCallbacks @ 0x1C0005C1C (PerformMutexDriverCallbacks.c)
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     Return @ 0x1C0013F20 (Return.c)
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 *     FindObjSymbol @ 0x1C00441D8 (FindObjSymbol.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0044BC8 (AMLIGetNamespaceOverrideObject.c)
 *     NestAsyncEvalObject @ 0x1C0046F48 (NestAsyncEvalObject.c)
 *     Notify @ 0x1C0047460 (Notify.c)
 *     ResetSignal @ 0x1C0047580 (ResetSignal.c)
 *     Wait @ 0x1C0049870 (Wait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReferenceObjectEx(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)gdwfAMLI;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 104));
  return result;
}
