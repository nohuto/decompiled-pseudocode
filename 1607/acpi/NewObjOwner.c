/*
 * XREFs of NewObjOwner @ 0x1C00066E4
 * Callers:
 *     InitializeNativeNamespace @ 0x1C000547C (InitializeNativeNamespace.c)
 *     ParseLoad @ 0x1C0006330 (ParseLoad.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C005A6BC (AMLIRemoveNativeObjectsFromNamespace.c)
 *     NotifyObjectDestruction @ 0x1C005C30C (NotifyObjectDestruction.c)
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall NewObjOwner(__int64 a1, struct _EX_RUNDOWN_REF **a2)
{
  unsigned int v3; // ebx
  struct _EX_RUNDOWN_REF *v4; // rax
  KIRQL v5; // al
  struct _EX_RUNDOWN_REF **v6; // rcx
  struct _EX_RUNDOWN_REF *v7; // rax

  v3 = 0;
  v4 = (struct _EX_RUNDOWN_REF *)HeapAlloc(a1, 1314344776LL, 64LL);
  *a2 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    LODWORD((*a2)[2].Count) = 1380865871;
    ExInitializeRundownProtection(*a2 + 4);
    KeInitializeSpinLock(&(*a2)[5].Count);
    v5 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    v6 = (struct _EX_RUNDOWN_REF **)off_1C0071328;
    NewIrql = v5;
    v7 = *a2;
    if ( *off_1C0071328 != (_UNKNOWN *)&glistObjOwners )
      __fastfail(3u);
    v7[1].Count = (unsigned __int64)off_1C0071328;
    v7->Count = (unsigned __int64)&glistObjOwners;
    *v6 = v7;
    off_1C0071328 = (_UNKNOWN **)v7;
    KeReleaseSpinLock(&gmutOwnerList, NewIrql);
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(113, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v3;
}
