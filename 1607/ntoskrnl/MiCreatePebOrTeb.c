/*
 * XREFs of MiCreatePebOrTeb @ 0x1404EE1C0
 * Callers:
 *     MmCreatePeb @ 0x14046AF88 (MmCreatePeb.c)
 *     MmCreateTeb @ 0x1404EE40C (MmCreateTeb.c)
 *     MiInitializeWowPeb @ 0x1404FF1B4 (MiInitializeWowPeb.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400171EC (RtlFindClearBitsAndSetEx.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400298C0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14002BAD0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiReferenceVad @ 0x14002BEFC (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MiAllocateNewTebRegion @ 0x1404A6450 (MiAllocateNewTebRegion.c)
 *     MiDeleteTebRange @ 0x1404B2EE8 (MiDeleteTebRange.c)
 */

__int64 __fastcall MiCreatePebOrTeb(int a1, __int64 a2, unsigned __int64 *a3)
{
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbx
  __int64 Process; // r13
  int v7; // r15d
  unsigned int v8; // r12d
  unsigned __int64 v9; // rdi
  _QWORD *v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v13; // rbx
  int v14; // esi
  int v16; // ebx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  unsigned __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+40h]
  _QWORD *v23; // [rsp+98h] [rbp+58h] BYREF

  v3 = 6200;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = qword_140327FD0;
  v19 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a1 == 4 )
  {
    v3 = 1952;
  }
  else if ( a1 != 1 )
  {
    if ( a1 == 2 )
    {
      v3 = 12288;
    }
    else if ( a1 == 8 )
    {
      v3 = 1136;
    }
  }
  v7 = 0;
  v21 = (v3 + 4095) & 0xFFFFF000;
  v8 = v21 >> 12;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 8) != 0 )
      v7 = *(_QWORD *)(Process + 1064) == 0LL;
  }
  else if ( (a1 & 3) != 0 && a2 )
  {
    v7 = 2;
  }
  v20 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v9 = 0LL;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    v16 = -1073741558;
    goto LABEL_29;
  }
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  v23 = (_QWORD *)(v5 + 16 * (v7 + 8LL) + 276840448);
  v10 = (_QWORD *)*v23;
  if ( (_QWORD *)*v23 == v23 )
  {
LABEL_22:
    v13 = v19;
  }
  else
  {
    v11 = v8;
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSetEx(v10 - 2, v11, *((unsigned __int16 *)v10 + 13));
      if ( ClearBitsAndSet != -1LL )
        break;
      v10 = (_QWORD *)*v10;
      v11 = v8;
      if ( v10 == v23 )
        goto LABEL_22;
    }
    *((_DWORD *)v10 + 7) += v8;
    *((_WORD *)v10 + 13) = v8 + ClearBitsAndSet;
    if ( *((_DWORD *)v10 + 7) == *(v10 - 2) )
    {
      v17 = *v10;
      v18 = (_QWORD *)v10[1];
      if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v18 != v10 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      *v10 = 0LL;
    }
    v13 = v10[2];
    v19 = v13;
    v9 = (ClearBitsAndSet << 12)
       + ((*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) << 12);
    v20 = v9;
  }
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  if ( v13 )
    goto LABEL_14;
  v16 = MiAllocateNewTebRegion(v8, v7, &v19, (__int64 *)&v20);
  if ( v16 < 0 )
  {
LABEL_29:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned int)v16;
  }
  v13 = v19;
  v9 = v20;
LABEL_14:
  MiReferenceVad(v13);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  MiLockVad((__int64)CurrentThread, v13);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  LODWORD(v23) = 0;
  v14 = MiCommitExistingVad(v13, v9, v21, 4u, &v23);
  if ( v14 < 0 )
  {
    MiDeleteTebRange(v13, v9, v21, 0);
  }
  else
  {
    MiUnlockAndDereferenceVad((char *)v13);
    *a3 = v9;
  }
  return (unsigned int)v14;
}
