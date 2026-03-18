/*
 * XREFs of MiCreatePebOrTeb @ 0x1403F2500
 * Callers:
 *     MmCreateTeb @ 0x1403F22E4 (MmCreateTeb.c)
 *     MiInitializeWowPeb @ 0x140461E70 (MiInitializeWowPeb.c)
 *     MmCreatePeb @ 0x140463D38 (MmCreatePeb.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400610B0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140061118 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140063C70 (MiReferenceVad.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400B480C (RtlFindClearBitsAndSetEx.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 *     MiDeleteTebRange @ 0x1404A9390 (MiDeleteTebRange.c)
 */

__int64 __fastcall MiCreatePebOrTeb(int a1, __int64 a2, unsigned __int64 *a3)
{
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r15
  int v6; // r14d
  unsigned int v7; // r13d
  unsigned __int64 v8; // rdi
  _QWORD *v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 ClearBitsAndSet; // rax
  ULONG_PTR v12; // rbx
  int v13; // esi
  int v15; // ebx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  ULONG_PTR v18; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+40h]
  _QWORD *v22; // [rsp+98h] [rbp+58h] BYREF

  v3 = 6200;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v18 = 0LL;
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
  v6 = 0;
  v20 = (v3 + 4095) & 0xFFFFF000;
  v7 = v20 >> 12;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 8) != 0 )
      v6 = *(_QWORD *)(Process + 1064) == 0LL;
  }
  else if ( (a1 & 3) == 0 && a2 )
  {
    v6 = 2;
  }
  v19 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = 0LL;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    v15 = -1073741558;
    goto LABEL_30;
  }
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  v22 = (_QWORD *)(16LL * v6 - 0xA7FEF7FBD88LL);
  v9 = (_QWORD *)*v22;
  if ( (_QWORD *)*v22 == v22 )
  {
LABEL_17:
    v12 = v18;
  }
  else
  {
    v10 = v7;
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSetEx(v9 - 2, v10, *((unsigned __int16 *)v9 + 13));
      if ( ClearBitsAndSet != -1LL )
        break;
      v9 = (_QWORD *)*v9;
      v10 = v7;
      if ( v9 == v22 )
        goto LABEL_17;
    }
    *((_DWORD *)v9 + 7) += v7;
    *((_WORD *)v9 + 13) = v7 + ClearBitsAndSet;
    if ( *((_DWORD *)v9 + 7) == *(v9 - 2) )
    {
      v16 = *v9;
      v17 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v17 != v9 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      *v9 = 0LL;
    }
    v12 = v9[2];
    v18 = v12;
    v8 = (ClearBitsAndSet << 12)
       + ((*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) << 12);
    v19 = v8;
  }
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  if ( v12 )
    goto LABEL_12;
  v15 = MiAllocateNewTebRegion(v7, (unsigned int)v6, &v18, &v19);
  if ( v15 < 0 )
  {
LABEL_30:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned int)v15;
  }
  v12 = v18;
  v8 = v19;
LABEL_12:
  MiReferenceVad(v12);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  MiLockVad((__int64)CurrentThread, v12);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  LODWORD(v22) = 0;
  v13 = MiCommitExistingVad(v12, v8, v20, 4u, &v22);
  if ( v13 < 0 )
  {
    MiDeleteTebRange(v12, v8, v20, 0LL);
  }
  else
  {
    MiUnlockAndDereferenceVad((PVOID)v12);
    *a3 = v8;
  }
  return (unsigned int)v13;
}
