/*
 * XREFs of ReferenceObjectEx @ 0x1C00056C0
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     CreateNativeNameSpaceObject @ 0x1C00052C0 (CreateNativeNameSpaceObject.c)
 *     Release @ 0x1C0005520 (Release.c)
 *     Acquire @ 0x1C00055F0 (Acquire.c)
 *     PerformMutexDriverCallbacks @ 0x1C000601C (PerformMutexDriverCallbacks.c)
 *     WriteObject @ 0x1C000EC20 (WriteObject.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     Return @ 0x1C0014E50 (Return.c)
 *     DupObjData @ 0x1C0014F70 (DupObjData.c)
 *     FindObjSymbol @ 0x1C0043BF8 (FindObjSymbol.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C00445E8 (AMLIGetNamespaceOverrideObject.c)
 *     NestAsyncEvalObject @ 0x1C0046868 (NestAsyncEvalObject.c)
 *     Notify @ 0x1C0046D70 (Notify.c)
 *     ResetSignal @ 0x1C0046E90 (ResetSignal.c)
 *     Wait @ 0x1C0049180 (Wait.c)
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
