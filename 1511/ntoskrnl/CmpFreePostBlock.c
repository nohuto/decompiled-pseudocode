/*
 * XREFs of CmpFreePostBlock @ 0x14049A918
 * Callers:
 *     CmNotifyRunDown @ 0x1403F1B90 (CmNotifyRunDown.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmpSignalDeferredPosts @ 0x1404218C4 (CmpSignalDeferredPosts.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x14049A500 (CmpNotifyChangeKey.c)
 *     CmpPostApc @ 0x14049A7D4 (CmpPostApc.c)
 *     CmpPostNotify @ 0x14049AAF4 (CmpPostNotify.c)
 *     CmpFreeSubordinatePost @ 0x14049ADA4 (CmpFreeSubordinatePost.c)
 *     CmpPostApcRunDown @ 0x1405E74DC (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreePostBlock(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)(v2 + 16));
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x10000) != 0 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
  ExFreePoolWithTag((PVOID)a1, 0);
}
