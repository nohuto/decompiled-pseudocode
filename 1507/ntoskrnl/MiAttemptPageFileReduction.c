/*
 * XREFs of MiAttemptPageFileReduction @ 0x140220C9C
 * Callers:
 *     MiProcessDereferenceList @ 0x140145AB0 (MiProcessDereferenceList.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiOkToShrinkPageFiles @ 0x1400EE5E8 (MiOkToShrinkPageFiles.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140222054 (MiQueueSyncModifiedWriterApc.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     IoSetInformation @ 0x14055B32C (IoSetInformation.c)
 */

char __fastcall MiAttemptPageFileReduction(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rsi
  _QWORD *v4; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned int v6; // ebx
  __int64 v7; // rax
  int *v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 FileInformation; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int Object[28]; // [rsp+A8h] [rbp-60h] BYREF
  void *retaddr; // [rsp+140h] [rbp+38h]

  memset(Object, 0, 0x68uLL);
  Object[1] = 0;
  v2 = *(_BYTE *)(a1 + 89) == 0;
  v3 = 16LL;
  v4 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)&Object[4] = &Object[2];
  *(_QWORD *)&Object[2] = &Object[2];
  LOWORD(Object[0]) = 0;
  BYTE2(Object[0]) = 6;
  *(_QWORD *)&Object[6] = v4;
  if ( v2 )
  {
    Object[8] = *(unsigned __int8 *)(a1 + 76);
    Object[9] = *(_DWORD *)(a1 + 40);
LABEL_19:
    MiQueueSyncModifiedWriterApc((int)v4, (int)&v13, (int)MiAttemptPageFileReductionApc, (int)Object, Object);
    v8 = &Object[10];
    v9 = v4 + 668;
    do
    {
      v7 = (unsigned int)*v8;
      if ( (_DWORD)v7 )
      {
        v10 = *v9;
        FileInformation = v7 << 12;
        LOBYTE(v7) = IoSetInformation(*(PFILE_OBJECT *)(v10 + 64), FileAllocationInformation, 8u, &FileInformation);
      }
      ++v9;
      ++v8;
      --v3;
    }
    while ( v3 );
    return v7;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
    while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E740 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
  else
    dword_14034E740 = 0;
  __writecr8(CurrentIrql);
  LOBYTE(v7) = MiOkToShrinkPageFiles(v4[697], v4[717]);
  if ( (_DWORD)v7 )
  {
    Object[8] = 16;
    goto LABEL_19;
  }
  return v7;
}
