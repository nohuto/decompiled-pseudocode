/*
 * XREFs of SeComputeAutoInheritByObjectTypeEx @ 0x140012B90
 * Callers:
 *     SeComputeAutoInheritByObjectType @ 0x1400AB8B8 (SeComputeAutoInheritByObjectType.c)
 *     ObpAssignSecurity @ 0x14041E8D0 (ObpAssignSecurity.c)
 * Callees:
 *     RtlFindAceByType @ 0x140012620 (RtlFindAceByType.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall SeComputeAutoInheritByObjectTypeEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *Index)
{
  _DWORD *v5; // r14
  int SessionId; // r10d
  int v9; // r15d
  int v10; // r12d
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v12; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int16 v16; // ax
  unsigned int v17; // ecx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edi
  char v22; // bl
  __int16 v24; // ax
  ACL *v25; // rcx
  _DWORD *AceByType; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v28; // rax
  __int16 v29; // ax
  ACL *v30; // rcx
  __int64 v31; // rax
  _BYTE *v32; // rax

  v5 = Index;
  SessionId = -1;
  v9 = 0;
  v10 = 0;
  if ( Index )
  {
    if ( *Index != 8 )
      return 3221225485LL;
    Index[1] = -1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v12, (ULONG_PTR)&SepMandatoryObjectTypePolicyLock, KeGetCurrentIrql(), 0LL);
  --v12->SpecialApcDisable;
  if ( !v12->AbEntrySummary )
  {
    if ( !v12->AbOrphanedEntrySummary )
    {
      v15 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v12, &SepMandatoryObjectTypePolicyLock);
      goto LABEL_58;
    }
    AbOrphanedEntrySummary = v12->AbOrphanedEntrySummary;
    v12->AbOrphanedEntrySummary = 0;
    v12->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v12->AbEntrySummary;
  _BitScanForward((unsigned int *)&v14, AbEntrySummary);
  v12->AbEntrySummary = AbEntrySummary & ~(1 << v14);
  v15 = (__int64)&v12->LockEntries[v14];
  if ( v15 )
  {
    if ( (unsigned __int64)&SepMandatoryObjectTypePolicyLock >= qword_140326950
      && (unsigned __int64)&SepMandatoryObjectTypePolicyLock < qword_140326950 + 0x8000000000LL )
    {
      SessionId = MmGetSessionIdEx(v12->ApcState.Process);
    }
    *(_DWORD *)(v15 + 40) = SessionId;
    *(_QWORD *)(v15 + 32) = (unsigned __int64)&SepMandatoryObjectTypePolicyLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_11;
  }
LABEL_58:
  _interlockedbittestandset((volatile signed __int32 *)&v12->116 + 1, 0xFu);
LABEL_11:
  v16 = v12->SpecialApcDisable + 1;
  v12->SpecialApcDisable = v16;
  if ( !v16 && ($2B8565053CDC740D4E4887693DD8AC9E *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    KiCheckForKernelApcDelivery();
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&SepMandatoryObjectTypePolicyLock, v15, &SepMandatoryObjectTypePolicyLock);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  v17 = 0;
  if ( SepMandatoryObjectTypePolicyCount )
  {
    v18 = SepMandatoryObjectTypePolicy;
    while ( a1 != *v18 )
    {
      ++v17;
      v18 += 3;
      if ( v17 >= SepMandatoryObjectTypePolicyCount )
        goto LABEL_26;
    }
    v19 = 3LL * v17;
    v20 = SepMandatoryObjectTypePolicy[2 * v19 + 2];
    if ( (v20 & 1) != 0 )
    {
      v9 = SepMandatoryObjectTypePolicy[2 * v19 + 4];
      v10 = SepMandatoryObjectTypePolicy[2 * v19 + 3];
    }
    if ( (v20 & 2) == 0 )
    {
LABEL_26:
      v21 = 0;
      goto LABEL_27;
    }
    v21 = SepMandatoryObjectTypePolicy[2 * v19 + 5];
    v22 = 1;
  }
  else
  {
    v21 = 0;
LABEL_27:
    v22 = 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KeLeaveCriticalRegion();
  if ( v10 && a2 )
  {
    v24 = *(_WORD *)(a2 + 2);
    if ( (v24 & 0x10) != 0 )
    {
      if ( v24 < 0 )
      {
        v28 = *(unsigned int *)(a2 + 12);
        v25 = (_DWORD)v28 ? (ACL *)(v28 + a2) : 0LL;
      }
      else
      {
        v25 = *(ACL **)(a2 + 24);
      }
    }
    else
    {
      v25 = 0LL;
    }
    AceByType = RtlFindAceByType(v25, 0x11u, 0LL);
    if ( AceByType )
    {
      AceByType[1] |= v10;
      v9 = 0;
    }
  }
  if ( v22 )
  {
    if ( a2 )
    {
      LODWORD(Index) = 0;
      while ( 1 )
      {
        v29 = *(_WORD *)(a2 + 2);
        if ( (v29 & 0x10) != 0 )
        {
          if ( v29 < 0 )
          {
            v31 = *(unsigned int *)(a2 + 12);
            v30 = (_DWORD)v31 ? (ACL *)(v31 + a2) : 0LL;
          }
          else
          {
            v30 = *(ACL **)(a2 + 24);
          }
        }
        else
        {
          v30 = 0LL;
        }
        v32 = RtlFindAceByType(v30, 0x11u, (PULONG)&Index);
        if ( v32 )
        {
          if ( (v32[1] & 8) == 0 )
            break;
        }
        LODWORD(Index) = (_DWORD)Index + 1;
        if ( !v32 )
          goto LABEL_74;
      }
      *((_DWORD *)v32 + 1) &= v21;
    }
    else
    {
LABEL_74:
      if ( v5 )
      {
        v5[1] = v21;
        v9 |= 0x800u;
      }
    }
  }
  if ( a3 )
  {
    if ( (!a2 || (*(_BYTE *)(a2 + 2) & 4) == 0) && (*(_WORD *)(a3 + 2) & 0x400) != 0 )
      v9 |= 1u;
    if ( (!a2 || (*(_BYTE *)(a2 + 2) & 0x10) == 0) && (*(_WORD *)(a3 + 2) & 0x800) != 0 )
      v9 |= 2u;
  }
  *a4 = v9;
  return 0LL;
}
