/*
 * XREFs of MiPurgeSubsection @ 0x1401D1590
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiCheckProtoPtePageState @ 0x14001103C (MiCheckProtoPtePageState.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiDereferenceControlAreaPfn @ 0x1400B5418 (MiDereferenceControlAreaPfn.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rax
  unsigned __int8 v4; // si
  __int64 v5; // r13
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  KIRQL v16; // al
  unsigned __int8 v17; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 8);
  v3 = *(unsigned int *)(BugCheckParameter2 + 44);
  v4 = 17;
  v5 = *(_QWORD *)BugCheckParameter2;
  v17 = 17;
  v6 = 0LL;
  v7 = v1 + 8 * v3;
  if ( v1 >= v7 )
    return 1LL;
  do
  {
    if ( (v1 & 0xFFF) == 0 || v4 == 17 )
    {
      if ( v4 != 17 )
        MiUnlockProtoPoolPage(v6, v4);
      v6 = MiCheckProtoPtePageState(v1, &v17);
      if ( !v6 )
      {
        v1 = (v1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_21:
        v4 = v17;
        continue;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
        MiUnlockProtoPoolPage(v6, v17);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      v4 = v17;
    }
    v8 = MiLockLeafPage(v1, 0);
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE((__int64 *)v1);
    if ( v8 )
    {
      if ( (BugCheckParameter4 & 1) != 0 )
        KeBugCheckEx(0xDEu, 3uLL, BugCheckParameter2, v1, BugCheckParameter4);
      v10 = (BugCheckParameter4 >> 12) & 0xFFFFFFFFFLL;
      v11 = 48 * v10 - 0x58000000000LL;
      if ( (*(_BYTE *)(v11 + 34) & 0x10) != 0 || *(_WORD *)(v11 + 32) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v6, v17);
        v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
        *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72), v16);
        return 0LL;
      }
      MiDereferenceControlAreaPfn(v5, BugCheckParameter2, 2);
      v12 = *(_QWORD *)(v11 + 16);
      *(_QWORD *)v1 = v12;
      if ( (unsigned int)MiPteInShadowRange(v1) )
        MiWritePteShadow(v1, v12);
      MiUnlinkPageFromList(48 * v10 - 0x58000000000LL, 0);
      MiInsertPageInFreeOrZeroedList(v10, 2uLL);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiLockPageAtDpcInline(v6, v13, v14);
      MiDecrementShareCount(v6);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v1 += 8LL;
      goto LABEL_21;
    }
    if ( (BugCheckParameter4 & 0xC00) == 0 && BugCheckParameter4 )
      KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2, v1, BugCheckParameter4);
    v1 += 8LL;
  }
  while ( v1 < v7 );
  if ( v4 != 17 )
    MiUnlockProtoPoolPage(v6, v4);
  return 1LL;
}
