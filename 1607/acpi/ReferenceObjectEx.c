/*
 * XREFs of ReferenceObjectEx @ 0x1C0020A34
 * Callers:
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     CreateNativeNameSpaceObject @ 0x1C0005530 (CreateNativeNameSpaceObject.c)
 *     PerformMutexDriverCallbacks @ 0x1C0007554 (PerformMutexDriverCallbacks.c)
 *     Return @ 0x1C00189D0 (Return.c)
 *     DupObjData @ 0x1C0018AF0 (DupObjData.c)
 *     WriteObject @ 0x1C00191F0 (WriteObject.c)
 *     Acquire @ 0x1C0020960 (Acquire.c)
 *     Release @ 0x1C0028520 (Release.c)
 *     FindObjSymbol @ 0x1C005B2C8 (FindObjSymbol.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C005BD70 (AMLIGetNamespaceOverrideObject.c)
 *     NestAsyncEvalObject @ 0x1C005DFF8 (NestAsyncEvalObject.c)
 *     Notify @ 0x1C005E560 (Notify.c)
 *     ResetSignal @ 0x1C005E690 (ResetSignal.c)
 *     Wait @ 0x1C0060C40 (Wait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReferenceObjectEx(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)gdwfAMLI;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  return result;
}
