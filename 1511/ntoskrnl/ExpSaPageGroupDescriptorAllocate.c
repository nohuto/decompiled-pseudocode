/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x14012D1DC
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14012CE14 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14009CFE0 (KeQueryMaximumProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FF1C8 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FF490 (KeSetSystemGroupAffinityThread.c)
 *     ExpSaBinaryArrayInsert @ 0x14012D564 (ExpSaBinaryArrayInsert.c)
 *     ExpSaBinaryArrayRemove @ 0x14012ED34 (ExpSaBinaryArrayRemove.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

char *__fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  ULONG MaximumProcessorCount; // r15d
  __int64 v5; // r13
  char *result; // rax
  char *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // zf
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  __int16 v16; // ax
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // r14
  int *v21; // r15
  __int64 v22; // r12
  unsigned int v23; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  PVOID PoolWithTag; // rax
  __int64 v26; // r8
  void *v27; // rdi
  char v28; // r14
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPROCESS *Process; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rdi
  unsigned int v33; // eax
  unsigned int v34; // ecx
  int v35; // r8d
  __int64 v36; // rcx
  char v37; // [rsp+30h] [rbp-68h]
  unsigned int v38; // [rsp+34h] [rbp-64h]
  POOL_TYPE PoolType; // [rsp+38h] [rbp-60h]
  unsigned int v40; // [rsp+3Ch] [rbp-5Ch]
  struct _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-58h] BYREF
  int v42; // [rsp+50h] [rbp-48h]
  int v43; // [rsp+54h] [rbp-44h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-40h] BYREF

  v37 = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v40 = MaximumProcessorCount;
  LODWORD(v5) = 0;
  PoolType = a2 != 0 ? PagedPool : NonPagedPoolNx;
  result = (char *)ExAllocatePoolWithTag(PoolType, 0x80uLL, 0x61537845u);
  v7 = result;
  if ( !result )
    return result;
  memset(result, 0, 0x80uLL);
  *((_QWORD *)v7 + 3) = 0LL;
  *((_QWORD *)v7 + 6) = 512LL;
  *((_QWORD *)v7 + 7) = v7 + 64;
  v9 = 0xFFFFFFFFLL;
  *((_DWORD *)v7 + 9) = 512;
  v10 = KiAbEnabled == 0;
  *((_QWORD *)v7 + 2) = a1;
  if ( v10 )
  {
    v14 = 0LL;
    goto LABEL_12;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(
      0x192u,
      (ULONG_PTR)CurrentThread,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
      KeGetCurrentIrql(),
      0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v14 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, &ExSaPageGroupDescriptorArrayLock);
      goto LABEL_40;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v13, AbEntrySummary);
  v42 = v13;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
  v8 = 96 * v13;
  v14 = (__int64)CurrentThread->LockEntries + v8;
  if ( !v14 )
  {
LABEL_40:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_9;
  }
  if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock < 0xFFFFF90000000000uLL
    || (unsigned __int64)&ExSaPageGroupDescriptorArrayLock >= 0xFFFFF98000000000uLL
    || (Process = CurrentThread->ApcState.Process, (v31 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v15 = -1;
  }
  else
  {
    v15 = *(_DWORD *)(v31 + 8);
  }
  *(_DWORD *)(v14 + 40) = v15;
  v8 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v14 + 32) = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_9:
  v16 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v16;
  if ( !v16 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v8);
LABEL_12:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v14, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v18 = ExpSaBinaryArrayInsert(ExSaPageGroupDescriptorArray, v7, v9);
  *((_DWORD *)v7 + 8) = v18;
  if ( v18 == -1 )
    goto LABEL_49;
  v19 = KeNumberProcessors_0;
  v38 = KeNumberProcessors_0;
  if ( MaximumProcessorCount )
  {
    v20 = 0LL;
    v21 = KiProcessorIndexToNumberMappingTable;
    while ( 1 )
    {
      v22 = *(_QWORD *)(v20 + ExSaPageArrays);
      if ( (unsigned int)v5 < v19 )
      {
        v23 = *v21;
        Affinity.Reserved[1] = 0;
        Affinity.Reserved[2] = 0;
        *(_DWORD *)&Affinity.Group = (unsigned __int16)(v23 >> 6);
        Affinity.Mask = 1LL << (v23 & 0x3F);
        if ( v37 )
        {
          p_PreviousAffinity = 0LL;
        }
        else
        {
          v37 = 1;
          p_PreviousAffinity = &PreviousAffinity;
        }
        KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      }
      PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x1000uLL, 0x61537845u);
      v27 = PoolWithTag;
      if ( !PoolWithTag || (unsigned int)ExpSaBinaryArrayInsert(v22, PoolWithTag, v26) == -1 )
        break;
      v19 = v38;
      LODWORD(v5) = v5 + 1;
      v20 += 8LL;
      ++v21;
      if ( (unsigned int)v5 >= v40 )
        goto LABEL_26;
    }
    v28 = 0;
  }
  else
  {
LABEL_26:
    v27 = 0LL;
    v28 = 1;
  }
  if ( v37 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
  if ( !v28 )
  {
LABEL_49:
    if ( *((_DWORD *)v7 + 8) != -1 )
    {
      while ( (_DWORD)v5 )
      {
        v5 = (unsigned int)(v5 - 1);
        v32 = *(_QWORD *)(ExSaPageArrays + 8 * v5);
        v33 = *((_DWORD *)v7 + 8);
        _BitScanReverse(&v34, v33);
        v35 = 1 << v34;
        v36 = v34 - 2;
        v43 = v36;
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v32 + 8 * v36) + 8LL * (v33 ^ v35) + 8), 0);
        ExpSaBinaryArrayRemove(v32, *((unsigned int *)v7 + 8));
      }
      ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, *((unsigned int *)v7 + 8));
    }
    ExFreePoolWithTag(v7, 0);
    v7 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  KeAbPostRelease((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  return v7;
}
