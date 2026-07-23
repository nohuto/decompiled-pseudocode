/*
 * XREFs of MiCountSharedPages @ 0x140092450
 * Callers:
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14002E7B0 (ExpAcquireSpinLockExclusive.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiPteNeedsCommitCharge @ 0x1400926E8 (MiPteNeedsCommitCharge.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  LONG *v3; // rbx
  __int64 v4; // rdi
  _KPROCESS *Process; // r13
  char Flink; // al
  __int64 v10; // r13
  unsigned __int8 CurrentIrql; // r12
  __int64 NextPageTable; // rax
  int v13; // ecx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 PrototypePteDirect; // rax
  __int64 v20; // rdx
  int v22; // [rsp+88h] [rbp+10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+18h] BYREF
  __int64 *v24; // [rsp+98h] [rbp+20h] BYREF

  v3 = &dword_140327CC0;
  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = (char)Process[2].Header.WaitListHead.Flink;
  v10 = (__int64)&Process[1].IdealNode[12];
  if ( (Flink & 7) != 2 )
    v3 = (LONG *)(v10 + 192);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v3, CurrentIrql);
  v3[1] = 0;
  while ( a2 <= a3 )
  {
    NextPageTable = MiGetNextPageTable(a2, a3, 0LL, CurrentIrql, 4, &v22);
    v13 = *(_DWORD *)(a1 + 48);
    v14 = NextPageTable;
    if ( !NextPageTable )
      v14 = a3 + 8;
    if ( (v13 & 7) != 2 || (v13 & 0xF8) == 8 )
    {
      if ( (v13 & 0x28) != 0x28 )
        v4 += (__int64)(v14 - a2) >> 3;
      a2 = v14;
    }
    else
    {
      for ( ; a2 < v14; a2 += 8LL )
      {
        if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1 )
          ++v4;
      }
    }
    if ( a2 == a3 + 8 )
      break;
    v15 = (__int64)(a2 << 25) >> 16;
    while ( 1 )
    {
      v16 = MI_READ_PTE_LOCK_FREE(a2);
      v23 = v16;
      v17 = v16;
      if ( !v16 )
      {
        if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) != 1 )
          goto LABEL_37;
LABEL_36:
        ++v4;
        goto LABEL_37;
      }
      if ( (v16 & 1) != 0 )
      {
        if ( (v16 & 0x200) == 0 )
        {
          v18 = MI_GET_PFN_FROM_PTE(&v23);
          if ( (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) != 0
            && (*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) == MiGetProtoPteAddress(a1, v15 >> 12, 1, &v24) )
          {
            goto LABEL_36;
          }
        }
      }
      else
      {
        if ( (v16 & 0x400) == 0 )
          goto LABEL_37;
        if ( (unsigned int)MiIsPrototypePteVadLookup(v16) )
        {
          if ( (v17 & 0xA0) == 0xA0 )
            goto LABEL_37;
          goto LABEL_36;
        }
        MiGetProtoPteAddress(a1, v15 >> 12, 1, &v24);
        PrototypePteDirect = MiGetPrototypePteDirect(v17);
        if ( PrototypePteDirect == v20
          && ((*(_DWORD *)(a1 + 48) & 7) != 2 || (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1) )
        {
          goto LABEL_36;
        }
      }
LABEL_37:
      a2 += 8LL;
      v15 += 4096LL;
      if ( (a2 & 0xFFF) == 0 )
        break;
      if ( a2 > a3 )
        goto LABEL_41;
    }
  }
LABEL_41:
  MiUnlockWorkingSetExclusive(v10, CurrentIrql);
  return v4;
}
