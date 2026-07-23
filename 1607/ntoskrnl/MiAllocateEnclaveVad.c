/*
 * XREFs of MiAllocateEnclaveVad @ 0x14065E5A8
 * Callers:
 *     MiCreateEnclave @ 0x14065F014 (MiCreateEnclave.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x140013E98 (MiCheckForConflictingVadExistence.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1400141A4 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiReferenceVad @ 0x14002BEFC (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiInsertPrivateVad @ 0x140095DF0 (MiInsertPrivateVad.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1404A67C0 (MiSelectUserAddress.c)
 */

__int64 __fastcall MiAllocateEnclaveVad(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v7; // rsi
  struct _KPROCESS *Process; // r14
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  ULONG_PTR v15; // rax
  int v16; // eax
  unsigned __int64 v17; // r10
  int inserted; // edi
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+80h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = a2;
  Process = CurrentThread->ApcState.Process;
  if ( a1 >= 0xFFFFFFFFFFFFF000uLL || a1 == 0 )
    return 3221225485LL;
  v10 = a1;
  if ( ((a1 - 1) & a1) != 0 )
    v10 = a1 & ~(a1 - 1);
  if ( v10 < 0x10000 )
    v10 = 0x10000LL;
  if ( v10 >= 0x7FFFFFFE0000LL || a1 >= 0x7FFFFFFE0000LL )
    return 3221225485LL;
  if ( a2 && (a2 > 0x7FFFFFFDFFFFLL || 0x7FFFFFFE0000LL - a2 < a1 || ((v10 - 1) & a2) != 0) )
    return 3221225716LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x45646156u);
  v13 = (unsigned __int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x60uLL);
  v15 = MiReservePtes((__int64)&qword_1403278B0, 1uLL, v14);
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
LABEL_20:
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
      MiReleasePtes((__int64)&qword_1403278B0, *(_QWORD *)(v13 + 64), 1u);
      ExFreePoolWithTag((PVOID)v13, 0);
      return (unsigned int)inserted;
    }
  }
  else
  {
    inserted = MiSelectUserAddress(0, a3, a1, v10, 6, 0, &v22, &v21);
    if ( inserted < 0 )
      goto LABEL_20;
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
    goto LABEL_20;
  MiInsertPrivateVad(v13, 0LL, (__int64)Process);
  MiLockVad((__int64)CurrentThread, v13);
  MiReferenceVad(v13);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)Process);
  result = 0LL;
  *a4 = v13;
  return result;
}
