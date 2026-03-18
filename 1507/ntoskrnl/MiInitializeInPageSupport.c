/*
 * XREFs of MiInitializeInPageSupport @ 0x14005EB30
 * Callers:
 *     MiGetInPageSupportBlock @ 0x14005EA80 (MiGetInPageSupportBlock.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x1402191FC (MiPfIssueCoalescedSupport.c)
 *     MiGetReadyInPageBlock @ 0x1406A2FF8 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 */

char __fastcall MiInitializeInPageSupport(__int64 a1, unsigned int a2)
{
  char *v2; // rdi
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // al
  $CD287064E7C9F7953DE243E927CFCB99 *v9; // rax
  struct _KTHREAD *v10; // rbp
  int v11; // r14d
  __int64 v12; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // di
  unsigned int v14; // eax

  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 34) = 6;
  v2 = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  v3 = a2;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  *(_WORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 58) = 6;
  *(_DWORD *)(a1 + 60) = 0;
  *(_QWORD *)(a1 + 72) = a1 + 64;
  *(_QWORD *)(a1 + 64) = a1 + 64;
  *(_DWORD *)(a1 + 188) = 0;
  if ( (a2 & 1) != 0 )
    *(_BYTE *)(a1 + 189) |= 0x20u;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_DWORD *)(a1 + 176) = 1;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 160) = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 152) = CurrentThread;
  if ( (HIDWORD(CurrentThread[1].Queue) & 0x100) != 0 )
  {
    v6 = (HIDWORD(CurrentThread[1].Queue) & 0xE00u) >> 9;
  }
  else
  {
    v6 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v14 = 2;
      if ( (unsigned int)v6 < 2 )
        v14 = v6;
      v6 = v14;
    }
  }
  if ( (unsigned int)v6 > 5 )
  {
    v6 = 5LL;
    v7 = 5LL;
  }
  else
  {
    *(_BYTE *)(a1 + 191) |= 4u;
    if ( (_DWORD)v6 )
      v7 = (unsigned int)(v6 - 1);
    else
      v7 = 0LL;
  }
  v8 = *(_BYTE *)(a1 + 190);
  *(_QWORD *)(a1 + 208) = 0LL;
  LOBYTE(v9) = v8 & 0x88;
  LOBYTE(v6) = v6 & 7;
  LOBYTE(v7) = v6 | (unsigned __int8)v9 | (16 * (v7 & 7));
  *(_BYTE *)(a1 + 190) = v7;
  if ( (v3 & 2) != 0 )
  {
    if ( !KiAbEnabled )
    {
LABEL_18:
      *(_QWORD *)(a1 + 208) = v2;
      if ( v2 )
      {
        v9 = ($CD287064E7C9F7953DE243E927CFCB99 *)*((_QWORD *)v2 + 4);
        v2[26] |= 1u;
      }
      return (char)v9;
    }
    v10 = KeGetCurrentThread();
    LOBYTE(v9) = KeGetCurrentIrql();
    if ( (unsigned __int8)v9 < 2u )
    {
      v11 = 1;
      --v10->SpecialApcDisable;
    }
    else
    {
      v11 = 0;
    }
    if ( !v10->AbEntrySummary )
    {
      if ( !v10->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          LOBYTE(v9) = EtwTraceAutoBoostEntryExhaustion(v10, a1, 1LL, v3);
        goto LABEL_32;
      }
      AbOrphanedEntrySummary = v10->AbOrphanedEntrySummary;
      v10->AbOrphanedEntrySummary = 0;
      v10->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    LODWORD(v9) = v10->AbEntrySummary;
    _BitScanForward((unsigned int *)&v12, (unsigned int)v9);
    v10->AbEntrySummary = (unsigned __int8)v9 & ~(1 << v12);
    v7 = 96 * v12;
    v2 = (char *)v10->LockEntries + v7;
    if ( v2 )
    {
      v7 = 0x7FFFFFFFFFLL;
      if ( (unsigned __int64)(a1 + 0x70000000000LL) <= 0x7FFFFFFFFFLL )
        LODWORD(v9) = MmGetSessionIdEx(v10->ApcState.Process, v6);
      else
        LODWORD(v9) = -1;
      *((_DWORD *)v2 + 10) = (_DWORD)v9;
      LOBYTE(v9) = -4;
      *((_QWORD *)v2 + 4) = a1 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_17:
      if ( v11 )
      {
        LOWORD(v9) = v10->SpecialApcDisable + 1;
        v10->SpecialApcDisable = (__int16)v9;
        if ( !(_WORD)v9 )
        {
          v9 = &v10->152;
          if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != v9 )
            LOBYTE(v9) = KiCheckForKernelApcDelivery(v7);
        }
      }
      goto LABEL_18;
    }
LABEL_32:
    _interlockedbittestandset((volatile signed __int32 *)&v10->116 + 1, 0xFu);
    goto LABEL_17;
  }
  return (char)v9;
}
