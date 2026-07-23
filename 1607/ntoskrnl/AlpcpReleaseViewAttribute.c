/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x14049FFDC
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140408154 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcMessageDestroyProcedure @ 0x140447850 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpReleaseAttributes @ 0x14049F9A8 (AlpcpReleaseAttributes.c)
 * Callees:
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1404F14C0 (AlpcpUnlockBlob.c)
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
