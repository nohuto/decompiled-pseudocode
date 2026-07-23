/*
 * XREFs of AlpcpReleaseDirectAttribute @ 0x1400A7D50
 * Callers:
 *     AlpcpSignalAndWait @ 0x14005DBA0 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140408154 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcMessageDestroyProcedure @ 0x140447850 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReleaseAttributes @ 0x14049F9A8 (AlpcpReleaseAttributes.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpReleaseDirectAttribute(__int64 a1)
{
  LONG_PTR result; // rax

  if ( (a1 & 1) != 0 )
    return ObfDereferenceObjectWithTag((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL), 0x746C6644u);
  return result;
}
