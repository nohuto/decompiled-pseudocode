/*
 * XREFs of CmpFreePostBlock @ 0x14049A988
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x140401234 (CmpNotifyChangeKey.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 *     CmpPostApc @ 0x14049A620 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x14049A8F0 (CmpSignalDeferredPosts.c)
 *     CmpPostNotify @ 0x14049A9D4 (CmpPostNotify.c)
 *     CmpFreeSubordinatePost @ 0x14049AC84 (CmpFreeSubordinatePost.c)
 *     CmNotifyRunDown @ 0x1405152B8 (CmNotifyRunDown.c)
 *     CmpPostApcRunDown @ 0x140606AAC (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005DB70 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
