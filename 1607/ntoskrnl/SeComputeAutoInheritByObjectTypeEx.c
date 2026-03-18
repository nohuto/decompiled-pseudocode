/*
 * XREFs of SeComputeAutoInheritByObjectTypeEx @ 0x140013010
 * Callers:
 *     SeComputeAutoInheritByObjectType @ 0x1400AD350 (SeComputeAutoInheritByObjectType.c)
 *     ObpAssignSecurity @ 0x14041FA10 (ObpAssignSecurity.c)
 * Callees:
 *     RtlFindAceByType @ 0x140012AA0 (RtlFindAceByType.c)
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14015964C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 SeComputeAutoInheritByObjectTypeEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, ...)
{
  _DWORD *v4; // r14
  int SessionId; // r10d
  int v8; // r15d
  int v9; // r12d
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int16 v15; // ax
  unsigned int v16; // ecx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // edi
  char v21; // bl
  __int16 v23; // ax
  __int64 v24; // rcx
  unsigned __int8 *AceByType; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v27; // rax
  __int16 v28; // ax
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int8 *v31; // rax
  _DWORD *v34; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v34 = va_arg(va1, _DWORD *);
  v4 = v34;
  SessionId = -1;
  v8 = 0;
  v9 = 0;
  if ( v34 )
  {
    if ( *v34 != 8 )
      return 3221225485LL;
    v34[1] = -1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v11, (ULONG_PTR)&SepMandatoryObjectTypePolicyLock, KeGetCurrentIrql(), 0LL);
  --v11->SpecialApcDisable;
  if ( !v11->AbEntrySummary )
  {
    if ( !v11->AbOrphanedEntrySummary )
    {
      v14 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v11, &SepMandatoryObjectTypePolicyLock);
      goto LABEL_58;
    }
    AbOrphanedEntrySummary = v11->AbOrphanedEntrySummary;
    v11->AbOrphanedEntrySummary = 0;
    v11->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v11->AbEntrySummary;
  _BitScanForward((unsigned int *)&v13, AbEntrySummary);
  v11->AbEntrySummary = AbEntrySummary & ~(1 << v13);
  v14 = (__int64)&v11->LockEntries[v13];
  if ( v14 )
  {
    if ( (unsigned __int64)&SepMandatoryObjectTypePolicyLock >= qword_140326910
      && (unsigned __int64)&SepMandatoryObjectTypePolicyLock < qword_140326910 + 0x8000000000LL )
    {
      SessionId = MmGetSessionIdEx(v11->ApcState.Process);
    }
    *(_DWORD *)(v14 + 40) = SessionId;
    *(_QWORD *)(v14 + 32) = (unsigned __int64)&SepMandatoryObjectTypePolicyLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_11;
  }
LABEL_58:
  _interlockedbittestandset((volatile signed __int32 *)&v11->116 + 1, 0xFu);
LABEL_11:
  v15 = v11->SpecialApcDisable + 1;
  v11->SpecialApcDisable = v15;
  if ( !v15 && ($2B8565053CDC740D4E4887693DD8AC9E *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&SepMandatoryObjectTypePolicyLock, v14, &SepMandatoryObjectTypePolicyLock);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v16 = 0;
  if ( SepMandatoryObjectTypePolicyCount )
  {
    v17 = SepMandatoryObjectTypePolicy;
    while ( a1 != *v17 )
    {
      ++v16;
      v17 += 3;
      if ( v16 >= SepMandatoryObjectTypePolicyCount )
        goto LABEL_26;
    }
    v18 = 3LL * v16;
    v19 = SepMandatoryObjectTypePolicy[2 * v18 + 2];
    if ( (v19 & 1) != 0 )
    {
      v8 = SepMandatoryObjectTypePolicy[2 * v18 + 4];
      v9 = SepMandatoryObjectTypePolicy[2 * v18 + 3];
    }
    if ( (v19 & 2) == 0 )
    {
LABEL_26:
      v20 = 0;
      goto LABEL_27;
    }
    v20 = SepMandatoryObjectTypePolicy[2 * v18 + 5];
    v21 = 1;
  }
  else
  {
    v20 = 0;
LABEL_27:
    v21 = 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KeLeaveCriticalRegion();
  if ( v9 && a2 )
  {
    v23 = *(_WORD *)(a2 + 2);
    if ( (v23 & 0x10) != 0 )
    {
      if ( v23 < 0 )
      {
        v27 = *(unsigned int *)(a2 + 12);
        v24 = (_DWORD)v27 ? v27 + a2 : 0LL;
      }
      else
      {
        v24 = *(_QWORD *)(a2 + 24);
      }
    }
    else
    {
      v24 = 0LL;
    }
    AceByType = RtlFindAceByType(v24, 17, 0LL);
    if ( AceByType )
    {
      *((_DWORD *)AceByType + 1) |= v9;
      v8 = 0;
    }
  }
  if ( v21 )
  {
    if ( a2 )
    {
      LODWORD(v34) = 0;
      while ( 1 )
      {
        v28 = *(_WORD *)(a2 + 2);
        if ( (v28 & 0x10) != 0 )
        {
          if ( v28 < 0 )
          {
            v30 = *(unsigned int *)(a2 + 12);
            v29 = (_DWORD)v30 ? v30 + a2 : 0LL;
          }
          else
          {
            v29 = *(_QWORD *)(a2 + 24);
          }
        }
        else
        {
          v29 = 0LL;
        }
        v31 = RtlFindAceByType(v29, 17, (unsigned int *)va);
        if ( v31 )
        {
          if ( (v31[1] & 8) == 0 )
            break;
        }
        LODWORD(v34) = (_DWORD)v34 + 1;
        if ( !v31 )
          goto LABEL_74;
      }
      *((_DWORD *)v31 + 1) &= v20;
    }
    else
    {
LABEL_74:
      if ( v4 )
      {
        v4[1] = v20;
        v8 |= 0x800u;
      }
    }
  }
  if ( a3 )
  {
    if ( (!a2 || (*(_BYTE *)(a2 + 2) & 4) == 0) && (*(_WORD *)(a3 + 2) & 0x400) != 0 )
      v8 |= 1u;
    if ( (!a2 || (*(_BYTE *)(a2 + 2) & 0x10) == 0) && (*(_WORD *)(a3 + 2) & 0x800) != 0 )
      v8 |= 2u;
  }
  *a4 = v8;
  return 0LL;
}
