/*
 * XREFs of MiCopyHeaderIfResident @ 0x1400FB338
 * Callers:
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 * Callees:
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x140022B18 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiUpdatePageAttributeStamp @ 0x1400FAC90 (MiUpdatePageAttributeStamp.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  KIRQL v4; // al
  int v5; // esi
  __int64 v6; // rbx
  KIRQL v7; // di
  __int64 *v8; // rax
  volatile LONG *v9; // rcx
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rbp
  char v14; // al
  ULONG_PTR v15; // rax
  __int64 v16; // rbp
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v4 = ExAcquireSpinLockExclusive(&dword_140326580);
  v5 = 0;
  while ( 1 )
  {
    v7 = v4;
    v8 = *(__int64 **)(a1 + 40);
    if ( !v8 || (v6 = *v8) == 0 )
    {
      v9 = &dword_140326580;
LABEL_7:
      ExReleaseSpinLockExclusive(v9, v7);
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v6 + 72)) )
      break;
    ExReleaseSpinLockExclusive(&dword_140326580, v7);
    v4 = ExAcquireSpinLockExclusive(&dword_140326580);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326580);
  if ( (*(_DWORD *)(v6 + 56) & 3) != 0
    || (v11 = *(_QWORD *)(v6 + 136)) == 0
    || (v12 = MiTryLockLeafAndContainingPagesAtDpc(*(_QWORD *)(v6 + 136), &v17, 0)) == 0 )
  {
    v9 = (volatile LONG *)(v6 + 72);
    goto LABEL_7;
  }
  v13 = v17;
  if ( !v17 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72), 2u);
    goto LABEL_15;
  }
  v14 = *(_BYTE *)(v17 + 34);
  if ( (v14 & 0x20) != 0 || (v14 & 0xC0) != 0x40 || (*(_BYTE *)(v17 + 35) & 0x40) != 0 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72), 2u);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_15:
    MiUnlockProtoPoolPage(v12, v7);
    return 0LL;
  }
  v18 = MI_READ_PTE_LOCK_FREE(v11);
  if ( (v18 & 1) != 0 )
  {
    v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFLL;
  }
  else
  {
    v15 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v18);
    v5 = 1;
  }
  v16 = 48 * a2 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72), 2u);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_15;
  }
  MiCopyPage(a2, v15, 0LL, 4);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72), 2u);
  if ( v5 == 1 )
    MiUpdatePageAttributeStamp(v17);
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v12, v7);
  return 1LL;
}
