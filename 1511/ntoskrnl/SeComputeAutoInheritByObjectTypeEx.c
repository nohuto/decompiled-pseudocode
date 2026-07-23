/*
 * XREFs of SeComputeAutoInheritByObjectTypeEx @ 0x14007E0B0
 * Callers:
 *     SeComputeAutoInheritByObjectType @ 0x1400ECE54 (SeComputeAutoInheritByObjectType.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x14046E22C (ObpAssignSecurity.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     RtlFindAceByType @ 0x14009DDA0 (RtlFindAceByType.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall SeComputeAutoInheritByObjectTypeEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *Index)
{
  _DWORD *v5; // r14
  __int64 v7; // rcx
  int SessionId; // r10d
  __int64 v9; // rbx
  int v11; // r15d
  int v12; // r12d
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v14; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int16 v18; // ax
  unsigned int v19; // ecx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // esi
  char v24; // di
  __int16 v26; // ax
  ACL *v27; // rcx
  _DWORD *AceByType; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v30; // rax
  __int16 v31; // ax
  ACL *v32; // rcx
  __int64 v33; // rax
  _BYTE *v34; // rax

  v5 = Index;
  v7 = 0LL;
  SessionId = -1;
  v9 = a3;
  v11 = 0;
  v12 = 0;
  if ( Index )
  {
    if ( *Index != 8 )
      return 3221225485LL;
    Index[1] = -1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( KiAbEnabled )
  {
    v14 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v14, (ULONG_PTR)&SepMandatoryObjectTypePolicyLock, KeGetCurrentIrql(), 0LL);
    --v14->SpecialApcDisable;
    if ( !v14->AbEntrySummary )
    {
      if ( !v14->AbOrphanedEntrySummary )
      {
        v17 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v14, &SepMandatoryObjectTypePolicyLock);
        goto LABEL_59;
      }
      AbOrphanedEntrySummary = v14->AbOrphanedEntrySummary;
      v14->AbOrphanedEntrySummary = 0;
      v14->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v14->AbEntrySummary;
    _BitScanForward((unsigned int *)&v16, AbEntrySummary);
    v14->AbEntrySummary = AbEntrySummary & ~(1 << v16);
    v7 = 96 * v16;
    v17 = (__int64)v14->LockEntries + v7;
    if ( v17 )
    {
      if ( (unsigned __int64)&SepMandatoryObjectTypePolicyLock >= 0xFFFFF90000000000uLL
        && (unsigned __int64)&SepMandatoryObjectTypePolicyLock < 0xFFFFF98000000000uLL )
      {
        SessionId = MmGetSessionIdEx(v14->ApcState.Process);
      }
      *(_DWORD *)(v17 + 40) = SessionId;
      v7 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v17 + 32) = (unsigned __int64)&SepMandatoryObjectTypePolicyLock & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_10;
    }
LABEL_59:
    _interlockedbittestandset((volatile signed __int32 *)&v14->116 + 1, 0xFu);
LABEL_10:
    v18 = v14->SpecialApcDisable + 1;
    v14->SpecialApcDisable = v18;
    if ( !v18 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
      KiCheckForKernelApcDelivery(v7);
    v9 = a3;
    goto LABEL_14;
  }
  v17 = 0LL;
LABEL_14:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&SepMandatoryObjectTypePolicyLock, v17, (ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  if ( v17 )
    *(_BYTE *)(v17 + 26) |= 1u;
  v19 = 0;
  if ( SepMandatoryObjectTypePolicyCount )
  {
    v20 = SepMandatoryObjectTypePolicy;
    while ( a1 != *v20 )
    {
      ++v19;
      v20 += 3;
      if ( v19 >= SepMandatoryObjectTypePolicyCount )
        goto LABEL_26;
    }
    v21 = 3LL * v19;
    v22 = SepMandatoryObjectTypePolicy[2 * v21 + 2];
    if ( (v22 & 1) != 0 )
    {
      v11 = SepMandatoryObjectTypePolicy[2 * v21 + 4];
      v12 = SepMandatoryObjectTypePolicy[2 * v21 + 3];
    }
    if ( (v22 & 2) == 0 )
    {
LABEL_26:
      v23 = 0;
      goto LABEL_27;
    }
    v23 = SepMandatoryObjectTypePolicy[2 * v21 + 5];
    v24 = 1;
  }
  else
  {
    v23 = 0;
LABEL_27:
    v24 = 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KeLeaveCriticalRegion();
  if ( v12 && a2 )
  {
    v26 = *(_WORD *)(a2 + 2);
    if ( (v26 & 0x10) != 0 )
    {
      if ( v26 < 0 )
      {
        v30 = *(unsigned int *)(a2 + 12);
        v27 = (_DWORD)v30 ? (ACL *)(v30 + a2) : 0LL;
      }
      else
      {
        v27 = *(ACL **)(a2 + 24);
      }
    }
    else
    {
      v27 = 0LL;
    }
    AceByType = RtlFindAceByType(v27, 0x11u, 0LL);
    if ( AceByType )
    {
      AceByType[1] |= v12;
      v11 = 0;
    }
  }
  if ( v24 )
  {
    if ( a2 )
    {
      LODWORD(Index) = 0;
      while ( 1 )
      {
        v31 = *(_WORD *)(a2 + 2);
        if ( (v31 & 0x10) != 0 )
        {
          if ( v31 < 0 )
          {
            v33 = *(unsigned int *)(a2 + 12);
            v32 = (_DWORD)v33 ? (ACL *)(v33 + a2) : 0LL;
          }
          else
          {
            v32 = *(ACL **)(a2 + 24);
          }
        }
        else
        {
          v32 = 0LL;
        }
        v34 = RtlFindAceByType(v32, 0x11u, (PULONG)&Index);
        if ( v34 )
        {
          if ( (v34[1] & 8) == 0 )
            break;
        }
        LODWORD(Index) = (_DWORD)Index + 1;
        if ( !v34 )
          goto LABEL_77;
      }
      *((_DWORD *)v34 + 1) &= v23;
    }
    else
    {
LABEL_77:
      if ( v5 )
      {
        v5[1] = v23;
        v11 |= 0x800u;
      }
    }
  }
  if ( v9 )
  {
    if ( (!a2 || (*(_BYTE *)(a2 + 2) & 4) == 0) && (*(_WORD *)(v9 + 2) & 0x400) != 0 )
      v11 |= 1u;
    if ( (!a2 || (*(_BYTE *)(a2 + 2) & 0x10) == 0) && (*(_WORD *)(v9 + 2) & 0x800) != 0 )
      v11 |= 2u;
  }
  *a4 = v11;
  return 0LL;
}
