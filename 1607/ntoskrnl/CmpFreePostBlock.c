/*
 * XREFs of CmpFreePostBlock @ 0x1403E38A8
 * Callers:
 *     CmpPostApc @ 0x1403E354C (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x1403E3810 (CmpSignalDeferredPosts.c)
 *     CmpPostNotify @ 0x1403E38F4 (CmpPostNotify.c)
 *     CmpFreeSubordinatePost @ 0x1403E3BA4 (CmpFreeSubordinatePost.c)
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1404000F4 (CmpNotifyChangeKey.c)
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 *     CmNotifyRunDown @ 0x1404F86A8 (CmNotifyRunDown.c)
 *     CmpPostApcRunDown @ 0x140606B60 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
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
