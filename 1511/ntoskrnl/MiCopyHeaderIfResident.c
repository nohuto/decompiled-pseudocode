/*
 * XREFs of MiCopyHeaderIfResident @ 0x14000E7B8
 * Callers:
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14000F970 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdatePageAttributeStamp @ 0x1400EC64C (MiUpdatePageAttributeStamp.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, __int64 a2)
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
  __int64 v14; // rdx
  char v15; // al
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  v4 = ExAcquireSpinLockExclusive(&dword_1402FE280);
  v5 = 0;
  while ( 1 )
  {
    v7 = v4;
    v8 = *(__int64 **)(a1 + 40);
    if ( !v8 || (v6 = *v8) == 0 )
    {
      v9 = &dword_1402FE280;
LABEL_7:
      ExReleaseSpinLockExclusive(v9, v7);
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v6 + 72) )
      break;
    ExReleaseSpinLockExclusive(&dword_1402FE280, v7);
    v4 = ExAcquireSpinLockExclusive(&dword_1402FE280);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
  if ( (*(_DWORD *)(v6 + 56) & 3) != 0
    || (v11 = *(_QWORD *)(v6 + 128)) == 0
    || (v12 = MiTryLockLeafAndContainingPagesAtDpc(*(_QWORD *)(v6 + 128), &v20, 0LL)) == 0 )
  {
    v9 = (volatile LONG *)(v6 + 72);
    goto LABEL_7;
  }
  v13 = v20;
  if ( !v20 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72), 2u);
    goto LABEL_15;
  }
  v15 = *(_BYTE *)(v20 + 34);
  if ( (v15 & 0x20) != 0 || (v15 & 0xC0) != 0x40 || (*(_BYTE *)(v20 + 35) & 0x40) != 0 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72), 2u);
    v14 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_15:
    LOBYTE(v14) = v7;
    MiUnlockProtoPoolPage(v12, v14);
    return 0LL;
  }
  v16 = MI_READ_PTE_LOCK_FREE(v11);
  v21 = v16;
  if ( (v16 & 1) != 0 )
    v16 = MI_READ_PTE_LOCK_FREE(&v21);
  else
    v5 = 1;
  v17 = (v16 >> 12) & 0xFFFFFFFFFLL;
  v18 = 48 * a2 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72), 2u);
    v14 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_15;
  }
  MiCopyPage(a2, v17, 0LL, 4LL);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72), 2u);
  if ( v5 == 1 )
    MiUpdatePageAttributeStamp(v20);
  v19 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v19) = v7;
  MiUnlockProtoPoolPage(v12, v19);
  return 1LL;
}
