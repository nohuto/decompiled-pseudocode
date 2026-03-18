/*
 * XREFs of AlpcpReleaseDirectAttribute @ 0x1400BBFFC
 * Callers:
 *     AlpcpSignalAndWait @ 0x14007E970 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcMessageDestroyProcedure @ 0x140426FA0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpReleaseAttributes @ 0x14047E354 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140481C28 (AlpcpReleaseMessageAttributesOnCancel.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall AlpcpReleaseDirectAttribute(__int64 a1)
{
  LONG_PTR result; // rax

  if ( (a1 & 1) != 0 )
    return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
  return result;
}
