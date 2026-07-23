/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x140099740
 * Callers:
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 * Callees:
 *     PfLogForegroundProcess @ 0x14001A9B8 (PfLogForegroundProcess.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiEmptyWorkingSet @ 0x14007B85C (MiEmptyWorkingSet.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     KiDetachProcess @ 0x14009A430 (KiDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x140119F80 (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140119FD0 (MiQueuePageAccessLog.c)
 *     MiAttachSession @ 0x140123F38 (MiAttachSession.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140152DC0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiComputeTrimAmount @ 0x14021A5E8 (MiComputeTrimAmount.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 *v6; // rax
  char v7; // r8
  __int64 v8; // rbp
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  unsigned int v11; // edi
  signed __int32 i; // edx
  unsigned int v13; // edi
  __int64 v14; // rax
  int v15; // r8d
  unsigned int v16; // r9d
  char v17; // cl
  __int64 v18; // r15
  _QWORD **v19; // rdx
  _QWORD *v20; // rax
  _QWORD *j; // rcx
  char v22; // al
  __int16 *VmPartition; // rax
  char v24; // al
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // r10
  unsigned int v27; // edi
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rax
  char v30; // al
  _SLIST_ENTRY *v31; // rsi
  signed __int32 v33[8]; // [rsp+0h] [rbp-A8h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 218) == 2 && (*(_BYTE *)(a1 + 216) & 7) == 0 )
    PfLogForegroundProcess(a1);
  v6 = MiSystemPartition;
  v7 = *(_BYTE *)(a1 + 216) & 7;
  if ( !v7 )
    v6 = MiPartitionIdToPointer(*(_WORD *)(a1 + 180));
  v8 = *((_QWORD *)v6 + 657);
  if ( v7 )
  {
    if ( v7 == 1 )
      MiAttachSession(a1 - 2968);
  }
  else if ( (PEPROCESS)(a1 - 1272) != PsInitialSystemProcess )
  {
    CurrentThread = KeGetCurrentThread();
    ApcStateIndex = CurrentThread->ApcStateIndex;
    if ( ApcStateIndex )
      KeBugCheckEx(5u, a1 - 1272, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
    KiStackAttachProcess(a1 - 1272);
  }
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a1);
    for ( i = *(_DWORD *)a1; (*(_DWORD *)a1 & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)a1 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)a1, i | 0x40000000, i);
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
  }
  if ( (a3 & 4) != 0 )
    MiEmptyWorkingSet(a1, 0LL, 0);
  if ( (a3 & 0x20) != 0 && (*(_BYTE *)(a1 + 216) & 7) == 0 )
    MiTrimWorkingSet(*(_QWORD *)(a1 + 120), a1, 0, 0, 2u);
  if ( (a3 & 0x100) != 0 )
    MiTrimWorkingSet(*(_QWORD *)(a1 + 120), a1, 0, 0, 4u);
  v13 = *(unsigned __int16 *)(v8 + 2358);
  if ( (a3 & 1) != 0 )
  {
    *(_BYTE *)(a2 + 1) = MiTrimPassToAge[*(_BYTE *)a2 & 0x7F];
    v14 = MiComputeTrimAmount(a2, a1, 1LL);
    if ( v14 )
      *(_QWORD *)(a2 + 96) += MiTrimWorkingSet(v14, a1, 0, *(unsigned __int8 *)(a2 + 1), 1u);
    v15 = 0;
    if ( ((*(_BYTE *)a2 & 0x7F) == 0 && *(char *)a2 >= 0 || (*(_BYTE *)a2 & 0x7F) == 4) && *(_WORD *)(v8 + 2358) )
      v15 = 1;
LABEL_48:
    v16 = v13;
    goto LABEL_49;
  }
  if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 0x40) != 0 )
    {
      v15 = 1;
    }
    else
    {
      if ( (a3 & 0x80u) == 0 )
        goto LABEL_53;
      v15 = 2;
    }
    goto LABEL_48;
  }
  MiAgeWorkingSet(a1, 0, 1, *(unsigned __int16 *)(v8 + 2358));
  if ( *(_BYTE *)(v8 + 55) != 1 || v13 - 1 > 8 )
    goto LABEL_50;
  v16 = 10;
  v15 = 2;
LABEL_49:
  MiAgeWorkingSet(a1, 0, v15, v16);
LABEL_50:
  v17 = 1;
  if ( *(_BYTE *)(a1 + 218) == 2 )
    v17 = 3;
  *(_QWORD *)(a2 + 16) += *(_QWORD *)(a1 + 40) >> v17;
  *(_QWORD *)(a2 + 24) += *(_QWORD *)(a1 + 48) >> v17;
  *(_QWORD *)(a2 + 32) += *(_QWORD *)(a1 + 56) >> v17;
  *(_QWORD *)(a2 + 40) += *(_QWORD *)(a1 + 64) >> v17;
  *(_QWORD *)(a2 + 48) += *(_QWORD *)(a1 + 72) >> v17;
  *(_QWORD *)(a2 + 56) += *(_QWORD *)(a1 + 80) >> v17;
  *(_QWORD *)(a2 + 64) += *(_QWORD *)(a1 + 88) >> v17;
LABEL_53:
  if ( (a3 & 0x10) != 0 || (a3 & 8) != 0 )
    MiCaptureAndResetWorkingSetAccessBits(a1, a3);
  v18 = MEMORY[0xFFFFF78000000320];
  v19 = *(_QWORD ***)(a1 + 16);
  if ( v19 )
  {
    v20 = *v19;
    for ( j = *(_QWORD **)(a1 + 16); v20; v20 = (_QWORD *)*v20 )
      j = v20;
    if ( MEMORY[0xFFFFF78000000320] - j[2] > (unsigned __int64)PfKernelGlobals )
    {
      MiEmptyPageAccessLog(*(PVOID *)(a1 + 16));
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
  v22 = *(_BYTE *)(a1 + 219);
  if ( (v22 & 0x10) != 0 )
  {
    *(_BYTE *)(a1 + 219) = v22 & 0xEF;
    VmPartition = MiGetVmPartition(a1);
    MiAgeWorkingSet(a1, 0, 1, *(unsigned __int16 *)(*((_QWORD *)VmPartition + 657) + 2358LL));
  }
  v24 = *(_BYTE *)(a1 + 219);
  if ( (v24 & 0x20) != 0 )
  {
    v25 = *(_QWORD *)(a1 + 136);
    v26 = *(_QWORD *)(a1 + 120);
    v27 = 7;
    for ( *(_BYTE *)(a1 + 219) = v24 & 0xDF; v26 > v25; --v27 )
    {
      v28 = v26 - v25;
      if ( v27 )
      {
        v29 = v28;
        v28 = *(_QWORD *)(a1 + 8LL * (v27 - 1) + 40);
        if ( v28 > v29 )
          v28 = v29;
      }
      if ( v28 )
      {
        MiTrimWorkingSet(v28, a1, 0, v27, 0);
        if ( !v27 )
          break;
      }
      v26 = *(_QWORD *)(a1 + 120);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1, retaddr);
  else
    *(_DWORD *)a1 = 0;
  __writecr8(0LL);
  v30 = *(_BYTE *)(a1 + 216) & 7;
  if ( v30 )
  {
    if ( v30 == 1 )
    {
      MEMORY[0xFFFFF6FB7DBEDF90] = 0LL;
      KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = 0LL;
      _InterlockedOr(v33, 0);
      dword_14034EAC8 = KiTbFlushTimeStamp;
    }
  }
  else if ( (PEPROCESS)(a1 - 1272) != PsInitialSystemProcess )
  {
    KiDetachProcess(&KeGetCurrentThread()->600, 1LL);
  }
  if ( qword_14034F240 )
  {
    v31 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_14034F240, 0LL);
    if ( v31 )
    {
      if ( v18 - (unsigned __int64)v31[1].Next > PfKernelGlobals || (a3 & 0x18) != 0 )
        MiQueuePageAccessLog(v31);
      else
        MiReturnCcAccessLog(v31);
    }
  }
  return 1LL;
}
