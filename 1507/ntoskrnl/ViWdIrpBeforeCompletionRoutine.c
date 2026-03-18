/*
 * XREFs of ViWdIrpBeforeCompletionRoutine @ 0x14074B138
 * Callers:
 *     IovpCompleteRequest2 @ 0x1407404B4 (IovpCompleteRequest2.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall ViWdIrpBeforeCompletionRoutine(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rcx
  void **v4; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD **)a1;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 67LL) >= *(_BYTE *)(*(_QWORD *)a1 + 29LL) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfWdIrpListLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&VfWdIrpListLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfWdIrpListLock);
    }
    if ( *((_BYTE *)v1 + 28) )
    {
      v3 = (_QWORD *)*v1;
      v4 = (void **)v1[1];
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || *v4 != v1 )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = v4;
      *((_BYTE *)v1 + 28) = 0;
      --ViWdIrpListLength;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&VfWdIrpListLock, retaddr);
    else
      _InterlockedAnd64(&VfWdIrpListLock, 0LL);
    ExFreeToNPagedLookasideList(&ViWdIrpLookasideList, v1);
    *(_QWORD *)a1 = 0LL;
  }
}
