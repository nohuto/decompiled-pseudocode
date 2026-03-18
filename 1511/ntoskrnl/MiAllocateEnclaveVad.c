/*
 * XREFs of MiAllocateEnclaveVad @ 0x140628DA0
 * Callers:
 *     MiCreateEnclave @ 0x1406297C0 (MiCreateEnclave.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140037DA0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiCheckForConflictingVadExistence @ 0x140037FF8 (MiCheckForConflictingVadExistence.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140063C70 (MiReferenceVad.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiInsertPrivateVad @ 0x1400BC014 (MiInsertPrivateVad.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x14047A0C0 (MiSelectUserAddress.c)
 */

__int64 __fastcall MiAllocateEnclaveVad(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v7; // rdi
  struct _KPROCESS *Process; // r14
  __int64 result; // rax
  __int64 v11; // rbp
  PVOID PoolWithTag; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  ULONG_PTR v15; // rax
  int v16; // eax
  unsigned __int64 v17; // r10
  int inserted; // edi
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+80h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = a2;
  Process = CurrentThread->ApcState.Process;
  if ( a1 >= 0xFFFFFFFFFFFFF000uLL || a1 == 0 )
    return 3221225485LL;
  v11 = a1;
  if ( ((a1 - 1) & a1) != 0 )
    v11 = a1 & ~(a1 - 1);
  if ( a2
    && ((char *)a2 > (char *)MmHighestUserAddress - 0x10000
     || (unsigned __int64)MmHighestUserAddress - a2 - 0xFFFF < a1
     || ((v11 - 1) & a2) != 0) )
  {
    return 3221225716LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x45646156u);
  v13 = (unsigned __int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x60uLL);
  v15 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, v14);
  *(_QWORD *)(v13 + 64) = v15;
  if ( !v15 )
  {
    ExFreePoolWithTag((PVOID)v13, 0);
    return 3221225626LL;
  }
  v16 = *(_DWORD *)(v13 + 48);
  *(_QWORD *)(v13 + 40) = 0LL;
  *(_QWORD *)(v13 + 16) = -2LL;
  *(_DWORD *)(v13 + 48) = v16 & 0xFFFB7FF8 | 0x48003;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
  if ( v7 )
  {
    if ( MiCheckForConflictingVadExistence() )
    {
      inserted = -1073741800;
LABEL_17:
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
      MiReleasePtes((__int64)&qword_1402FF7B0, *(_QWORD **)(v13 + 64), 1u);
      ExFreePoolWithTag((PVOID)v13, 0);
      return (unsigned int)inserted;
    }
  }
  else
  {
    inserted = MiSelectUserAddress(0, a3, a1, v11, 6, 0, &v22, &v21);
    if ( inserted < 0 )
      goto LABEL_17;
    v7 = v21;
    v17 = (a1 + v21 - 1) | 0xFFF;
  }
  v19 = v17 >> 12;
  v20 = v7 >> 12;
  *(_DWORD *)(v13 + 24) = v20;
  *(_DWORD *)(v13 + 28) = v19;
  *(_BYTE *)(v13 + 32) = BYTE4(v20);
  *(_BYTE *)(v13 + 33) = BYTE4(v19);
  inserted = MiInsertVadCharges(v13, Process);
  if ( inserted < 0 )
    goto LABEL_17;
  MiInsertPrivateVad(v13, 0LL, (__int64)Process);
  MiLockVad((__int64)CurrentThread, v13);
  MiReferenceVad(v13);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)Process);
  result = 0LL;
  *a4 = v13;
  return result;
}
