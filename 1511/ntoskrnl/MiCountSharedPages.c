/*
 * XREFs of MiCountSharedPages @ 0x1400A6110
 * Callers:
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400A65D0 (ExpAcquireSpinLockExclusive.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiPteNeedsCommitCharge @ 0x1400E18D0 (MiPteNeedsCommitCharge.c)
 *     MiReduceWs @ 0x1400F12BC (MiReduceWs.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int16 *v7; // r12
  KIRQL CurrentIrql; // r13
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 NextPageTable; // rax
  int v12; // ecx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 ProtoPteAddress; // rax
  char v18; // al
  __int64 VmPartition; // rax
  char v20; // al
  __int64 v21; // r8
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v24; // [rsp+88h] [rbp+10h] BYREF
  __int64 v25; // [rsp+90h] [rbp+18h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v7 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v7, CurrentIrql);
  while ( a2 <= a3 )
  {
    NextPageTable = MiGetNextPageTable(a2, a3, 0LL, CurrentIrql, 4, &v24);
    v12 = *(_DWORD *)(a1 + 48);
    v13 = NextPageTable;
    if ( !NextPageTable )
      v13 = a3 + 8;
    if ( (v12 & 7) != 2 || (v12 & 0xF8) == 8 )
    {
      if ( (v12 & 0x28) != 0x28 )
        v3 += (__int64)(v13 - a2) >> 3;
      a2 = v13;
    }
    else
    {
      for ( ; a2 < v13; a2 += 8LL )
      {
        if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1 )
          ++v3;
      }
    }
    if ( a2 == a3 + 8 )
      break;
    v14 = (__int64)(a2 << 25) >> 16;
    while ( 1 )
    {
      v15 = MI_READ_PTE_LOCK_FREE(a2);
      v25 = v15;
      if ( !v15 )
      {
        if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) != 1 )
          goto LABEL_35;
LABEL_34:
        ++v3;
        goto LABEL_35;
      }
      if ( (v15 & 1) != 0 )
      {
        if ( (v15 & 0x200) == 0 )
        {
          v16 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v25) - 0x58000000000LL;
          if ( (*(_QWORD *)(v16 + 40) & 0x200000000000000LL) != 0 )
          {
            ProtoPteAddress = MiGetProtoPteAddress(a1, v14 >> 12, 1u, &v26);
            v9 = 0x8000000000000000uLL;
            if ( (*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) == ProtoPteAddress )
              goto LABEL_34;
          }
        }
      }
      else
      {
        if ( (v15 & 0x400) == 0 )
          goto LABEL_35;
        if ( HIDWORD(v15) == 0xFFFFFFFF )
        {
          if ( (v15 & 0xA0) == 0xA0 )
            goto LABEL_35;
          goto LABEL_34;
        }
        if ( v15 >> 16 == MiGetProtoPteAddress(a1, v14 >> 12, 1u, &v26)
          && ((*(_DWORD *)(a1 + 48) & 7) != 2 || (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1) )
        {
          goto LABEL_34;
        }
      }
LABEL_35:
      a2 += 8LL;
      v14 += 4096LL;
      if ( (a2 & 0xFFF) == 0 )
        break;
      if ( a2 > a3 )
        goto LABEL_39;
    }
  }
LABEL_39:
  v18 = *((_BYTE *)v7 + 219);
  if ( (v18 & 0x10) != 0 )
  {
    *((_BYTE *)v7 + 219) = v18 & 0xEF;
    VmPartition = MiGetVmPartition(v7, v9, v10);
    MiAgeWorkingSet((__int64)v7, CurrentIrql, 1, *(unsigned __int16 *)(*(_QWORD *)(VmPartition + 5616) + 2358LL));
  }
  v20 = *((_BYTE *)v7 + 219);
  if ( (v20 & 0x20) != 0 )
  {
    v21 = *((_QWORD *)v7 + 17);
    *((_BYTE *)v7 + 219) = v20 & 0xDF;
    MiReduceWs(v7, CurrentIrql, v21);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
  else
    *(_DWORD *)v7 = 0;
  __writecr8(CurrentIrql);
  return v3;
}
