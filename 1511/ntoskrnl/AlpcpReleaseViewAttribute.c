/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x1404B80D8
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x140426FA0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpReleaseAttributes @ 0x14047E354 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140481C28 (AlpcpReleaseMessageAttributesOnCancel.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x140424050 (AlpcpUnlockBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 */

unsigned __int64 __fastcall AlpcpReleaseViewAttribute(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rcx

  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16));
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v2);
  return AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
}
