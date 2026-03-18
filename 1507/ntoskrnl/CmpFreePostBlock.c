/*
 * XREFs of CmpFreePostBlock @ 0x1404ECFB0
 * Callers:
 *     CmNotifyRunDown @ 0x140420ED0 (CmNotifyRunDown.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x14042C358 (CmpNotifyChangeKey.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     CmpPostApc @ 0x1404ECE6C (CmpPostApc.c)
 *     CmpPostNotify @ 0x1404ECFFC (CmpPostNotify.c)
 *     CmpFreeSubordinatePost @ 0x1404ED32C (CmpFreeSubordinatePost.c)
 *     CmpPostApcRunDown @ 0x14065E970 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
