/*
 * XREFs of NewObjOwner @ 0x1C0005EB8
 * Callers:
 *     InitializeNativeNamespace @ 0x1C000520C (InitializeNativeNamespace.c)
 *     ParseLoad @ 0x1C0005A50 (ParseLoad.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C0042FEC (AMLIRemoveNativeObjectsFromNamespace.c)
 *     NotifyObjectDestruction @ 0x1C0044B70 (NotifyObjectDestruction.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     ListInsertTail @ 0x1C0018288 (ListInsertTail.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall NewObjOwner(__int64 a1, struct _EX_RUNDOWN_REF **a2)
{
  unsigned int v3; // ebx
  struct _EX_RUNDOWN_REF *v4; // rax

  v3 = 0;
  v4 = (struct _EX_RUNDOWN_REF *)HeapAlloc(a1, 1314344776LL, 64LL);
  *a2 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    LODWORD((*a2)[2].Count) = 1380865871;
    ExInitializeRundownProtection(*a2 + 4);
    KeInitializeSpinLock(&(*a2)[5].Count);
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    ListInsertTail(*a2, &gplistObjOwners);
    KeReleaseSpinLock(&gmutOwnerList, NewIrql);
  }
  else
  {
    LogError(3221225626LL);
    PrintDebugMessage(113, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v3;
}
