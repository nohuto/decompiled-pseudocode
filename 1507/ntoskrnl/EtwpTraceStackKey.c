/*
 * XREFs of EtwpTraceStackKey @ 0x140260B00
 * Callers:
 *     EtwpTraceStackWalk @ 0x1402603FC (EtwpTraceStackWalk.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x140201108 (KiTryToAcquireSpinLockInstrumented.c)
 *     EtwpDereferenceStackEntry @ 0x1402608C0 (EtwpDereferenceStackEntry.c)
 */

char __fastcall EtwpTraceStackKey(
        unsigned int a1,
        int a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r10
  __int64 v7; // rdi
  char v8; // bl
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v10; // al
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  _SLIST_HEADER *v19; // r15
  char v20; // di
  unsigned int v21; // r12d
  PSLIST_ENTRY v22; // r13
  unsigned __int64 v23; // r8
  unsigned int v24; // r11d
  unsigned int v25; // r9d
  __int64 v26; // rax
  int v27; // edx
  int v28; // edi
  char *v29; // r14
  unsigned __int8 CurrentIrql; // al
  volatile signed __int32 *v31; // rbp
  char v32; // al
  PSLIST_ENTRY v33; // rsi
  unsigned int v34; // eax
  unsigned int v35; // r12d
  PSLIST_ENTRY v36; // r15
  unsigned int v37; // ecx
  _SLIST_ENTRY *v38; // rcx
  PSLIST_ENTRY *v39; // rax
  PSLIST_ENTRY v40; // rax
  PSLIST_ENTRY *v41; // rax
  unsigned int v42; // edi
  _SLIST_HEADER *v43; // rbx
  PSLIST_ENTRY v44; // r14
  PSLIST_ENTRY v45; // r15
  unsigned int v46; // r12d
  _SLIST_ENTRY *Next; // rdi
  PSLIST_ENTRY *v48; // rax
  struct _KTHREAD *v49; // rdx
  __int16 v50; // ax
  char v51; // [rsp+30h] [rbp-A8h]
  unsigned int v52; // [rsp+38h] [rbp-A0h]
  _SLIST_HEADER *v53; // [rsp+40h] [rbp-98h]
  unsigned __int8 v54; // [rsp+48h] [rbp-90h]
  __int64 v55; // [rsp+50h] [rbp-88h]
  PSLIST_ENTRY v56; // [rsp+60h] [rbp-78h] BYREF
  PSLIST_HEADER ListHead; // [rsp+68h] [rbp-70h]
  PSLIST_ENTRY ListEntry; // [rsp+70h] [rbp-68h]
  char *v59; // [rsp+78h] [rbp-60h]
  __int64 v60; // [rsp+80h] [rbp-58h]
  __int64 retaddr; // [rsp+D8h] [rbp+0h]

  v6 = 0LL;
  v7 = a1;
  v8 = 0;
  v51 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[a1], 1u);
    v6 = 0LL;
    if ( !v10 )
    {
      v11 = KeGetCurrentThread();
      v12 = v11->KernelApcDisable + 1;
      v11->KernelApcDisable = v12;
      if ( v12 || ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink == &v11->152 )
        return 0;
      v13 = v11->SpecialApcDisable == 0;
      goto LABEL_6;
    }
    v8 = 1;
    v51 = 1;
  }
  v14 = WmipLoggerContext[v7];
  v15 = v7;
  v55 = v7;
  v60 = v14;
  if ( (v14 & 1) != 0 )
  {
    if ( !v8 )
      return 0;
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v7], 1u);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( v17 || ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink == &v16->152 )
      return 0;
    v13 = v16->SpecialApcDisable == 0;
LABEL_6:
    if ( v13 )
      KiCheckForKernelApcDelivery();
    return 0;
  }
  if ( !v14 )
    return 0;
  v19 = *(_SLIST_HEADER **)(v14 + 856);
  v53 = v19;
  if ( !v19 )
  {
    v20 = 0;
    goto LABEL_91;
  }
  v21 = a6;
  v22 = 0LL;
  ListEntry = 0LL;
  v23 = 4LL * a6;
  v24 = 0;
  v52 = 0;
  v25 = 0;
  if ( v23 )
  {
    do
    {
      v26 = v25 + 1;
      v25 += 2;
      v27 = *(unsigned __int16 *)(a5 + 2 * v6) ^ *(unsigned __int16 *)(a5 + 2 * v26);
      v6 = v25;
      v24 += v27;
    }
    while ( v25 < v23 );
    v8 = v51;
    v52 = v24;
  }
  v28 = 0;
  v29 = (char *)(&v19[v24 % *((_DWORD *)&v19->HeaderX64 + 1) + 2].Alignment + v24 % *((_DWORD *)&v19->HeaderX64 + 1));
  v59 = v29;
  CurrentIrql = KeGetCurrentIrql();
  v54 = CurrentIrql;
  if ( CurrentIrql <= 1u )
  {
    __writecr8(2uLL);
LABEL_31:
    v31 = (volatile signed __int32 *)(v29 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)v29 + 4);
    }
    else if ( _interlockedbittestandset64(v31, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v29 + 4);
    }
LABEL_35:
    v33 = *(PSLIST_ENTRY *)v29;
    if ( *(char **)v29 == v29 )
    {
LABEL_61:
      v33 = 0LL;
      v42 = 0;
      if ( v21 )
      {
        v43 = v19 + 1;
        ListHead = v19 + 1;
        v44 = 0LL;
        do
        {
          v45 = RtlpInterlockedPopEntrySList(v43);
          if ( !v45 )
            break;
          if ( v42 + 32 >= v21 )
            v46 = v21 - v42;
          else
            v46 = 32;
          memmove(&v45[2].Next + 1, (const void *)(a5 + 8LL * v42), 8LL * v46);
          if ( v42 )
            LODWORD(v45[2].Next) = v46;
          else
            v33 = v45;
          if ( v44 )
            v44[1].Next = v45;
          v42 += v46;
          v45[1].Next = 0LL;
          v21 = a6;
          v44 = v45;
        }
        while ( v42 < a6 );
        v8 = v51;
        v29 = v59;
        v22 = ListEntry;
        if ( v42 < v21 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented((volatile signed __int64 *)v31, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v31, 0LL);
          __writecr8(v54);
          if ( v33 )
          {
            do
            {
              Next = v33[1].Next;
              RtlpInterlockedPushEntrySList(ListHead, v33);
              v33 = Next;
            }
            while ( Next );
          }
          if ( ListEntry )
            EtwpDereferenceStackEntry(ListEntry, v53);
          goto LABEL_29;
        }
      }
      *((_DWORD *)&v33[1].Next + 3) = v52;
      LODWORD(v33[2].Next) = v21;
      *((_DWORD *)&v33[1].Next + 2) = 2;
      v48 = (PSLIST_ENTRY *)*((_QWORD *)v29 + 1);
      v33->Next = (_SLIST_ENTRY *)v29;
      *((_QWORD *)&v33->Next + 1) = v48;
      if ( *v48 != (PSLIST_ENTRY)v29 )
        __fastfail(3u);
      *v48 = v33;
      *((_QWORD *)v29 + 1) = v33;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)v31, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v31, 0LL);
      __writecr8(v54);
      if ( v22 )
        EtwpDereferenceStackEntry(v22, v53);
    }
    else
    {
      v34 = v52;
      while ( 1 )
      {
        ++v28;
        if ( *((_DWORD *)&v33[1].Next + 3) == v34 && LODWORD(v33[2].Next) == v21 )
          break;
LABEL_49:
        v33 = v33->Next;
        if ( v33 == (PSLIST_ENTRY)v29 )
        {
          if ( v28 == 4 )
          {
            v22 = (PSLIST_ENTRY)*((_QWORD *)v29 + 1);
            ListEntry = v22;
            v41 = (PSLIST_ENTRY *)*((_QWORD *)&v22->Next + 1);
            if ( (char *)v22->Next != v29 || *v41 != v22 )
              __fastfail(3u);
            *((_QWORD *)v29 + 1) = v41;
            *v41 = (PSLIST_ENTRY)v29;
          }
          v19 = v53;
          goto LABEL_61;
        }
      }
      v35 = 0;
      v36 = v33;
      do
      {
        v37 = 32;
        if ( LODWORD(v36[2].Next) < 0x20 )
          v37 = (unsigned int)v36[2].Next;
        LODWORD(ListHead) = v37;
        if ( RtlCompareMemory(&v36[2].Next + 1, (const void *)(a5 + 8LL * v35), 8LL * v37) != 8LL * v37 )
        {
          v21 = a6;
          v34 = v52;
          goto LABEL_49;
        }
        v35 += (unsigned int)ListHead;
        v36 = v36[1].Next;
      }
      while ( v36 );
      _InterlockedIncrement((volatile signed __int32 *)&v33[1].Next + 2);
      v38 = v33->Next;
      v39 = (PSLIST_ENTRY *)*((_QWORD *)&v33->Next + 1);
      if ( *(&v33->Next->Next + 1) != v33 || *v39 != v33 )
        __fastfail(3u);
      *v39 = v38;
      *((_QWORD *)&v38->Next + 1) = v39;
      v40 = *(PSLIST_ENTRY *)v29;
      v33->Next = *(_SLIST_ENTRY **)v29;
      *((_QWORD *)&v33->Next + 1) = v29;
      if ( *((char **)&v40->Next + 1) != v29 )
        __fastfail(3u);
      *((_QWORD *)&v40->Next + 1) = v33;
      *(_QWORD *)v29 = v33;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)v31, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v31, 0LL);
      __writecr8(v54);
    }
    v20 = 1;
    v56 = v33;
    *(_QWORD *)(a4 + 16) = &v56;
    *(_QWORD *)(a4 + 24) = 8LL;
    EtwpLogKernelEvent(a4, a1, 2u, a3, a2);
    EtwpDereferenceStackEntry(v56, *(_SLIST_HEADER **)(v60 + 856));
    goto LABEL_90;
  }
  if ( CurrentIrql == 2 )
    goto LABEL_31;
  v31 = (volatile signed __int32 *)(v29 + 16);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v32 = KiTryToAcquireSpinLockInstrumented((volatile signed __int32 *)v29 + 4);
  }
  else if ( _interlockedbittestandset64(v31, 0LL) )
  {
    v32 = 0;
    _mm_pause();
  }
  else
  {
    v32 = 1;
  }
  if ( v32 )
    goto LABEL_35;
LABEL_29:
  v20 = 0;
LABEL_90:
  v15 = v55;
LABEL_91:
  if ( v8 )
  {
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v15], 1u);
    v49 = KeGetCurrentThread();
    v50 = v49->KernelApcDisable + 1;
    v49->KernelApcDisable = v50;
    if ( !v50
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v49->ApcState.ApcListHead[0].Flink != &v49->152
      && !v49->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v20;
}
