/*
 * XREFs of AlpcpReleaseDirectAttribute @ 0x1400A97D0
 * Callers:
 *     AlpcpSignalAndWait @ 0x14005E020 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140409294 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcMessageDestroyProcedure @ 0x140448980 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044B990 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReleaseAttributes @ 0x1404B55C8 (AlpcpReleaseAttributes.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpReleaseDirectAttribute(__int64 a1)
{
  LONG_PTR result; // rax

  if ( (a1 & 1) != 0 )
    return ObfDereferenceObjectWithTag((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL), 0x746C6644u);
  return result;
}
