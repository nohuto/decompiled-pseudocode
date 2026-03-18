/*
 * XREFs of MmCommitSessionMappedView @ 0x14049C330
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiLocatePagefileSubsection @ 0x1400D5B70 (MiLocatePagefileSubsection.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiChargeSegmentCommit @ 0x14049C650 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MmCommitSessionMappedView(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // rbp
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  __int64 PteAddress; // r12
  __int64 v9; // r12
  unsigned __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *i; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned int *v16; // rax
  unsigned int *v17; // r8
  unsigned int *v18; // rdx
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rcx
  int v21; // eax
  volatile signed __int64 *v22; // rdi
  int v23; // esi
  volatile signed __int64 *v25; // rdi
  unsigned int v26; // ebx
  volatile signed __int64 *v27; // rdi
  unsigned __int64 v28; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 + 0x70000000000LL > 0x7FFFFFFFFFLL )
    return 3221225711LL;
  v3 = a2 + a1;
  if ( v3 <= a1 || v3 + 0x70000000000LL > 0x7FFFFFFFFFLL )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
    return 3221225497LL;
  v6 = Process[1].ActiveProcessors.Bitmap[2];
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  PteAddress = MiGetPteAddress((v3 - 1) | 0xFFF);
  v9 = ((PteAddress - MiGetPteAddress(v7)) >> 3) + 1;
  --CurrentThread->SpecialApcDisable;
  v10 = *(unsigned __int64 **)(v6 + 2888);
  v11 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v11, (ULONG_PTR)v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  for ( i = *(_QWORD **)(v6 + 2896); ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, v7, 2uLL, 0LL, 0LL);
      v14 = i[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( v7 < v14 + i[4] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( v7 >= v14 )
      break;
  }
  v15 = i[6] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( *(_QWORD *)(v15 + 64) )
  {
    v25 = *(volatile signed __int64 **)(v6 + 2888);
    if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v25);
    KeAbPostRelease((ULONG_PTR)v25);
    v26 = -1073741791;
    goto LABEL_32;
  }
  v28 = i[3] + ((v7 - (i[10] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
  v16 = MiLocatePagefileSubsection((unsigned int *)(v15 + 120), &v28);
  if ( !v16 )
  {
LABEL_29:
    v27 = *(volatile signed __int64 **)(v6 + 2888);
    if ( (_InterlockedExchangeAdd64(v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v27);
    KeAbPostRelease((ULONG_PTR)v27);
    v26 = -1073741584;
LABEL_32:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return v26;
  }
  v17 = v16 + 11;
  v18 = v16;
  v19 = *((_QWORD *)v16 + 1) + 8 * v28;
  v20 = v9 + v28;
  v28 += v9;
  while ( v20 >= *v17 )
  {
    v18 = (unsigned int *)*((_QWORD *)v18 + 2);
    v20 -= *v17;
    v28 = v20;
    if ( !v18 )
      goto LABEL_29;
    v17 = v18 + 11;
  }
  v21 = MiChargeSegmentCommit(v16, v19, v9, 0LL);
  v22 = *(volatile signed __int64 **)(v6 + 2888);
  v23 = v21;
  if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v22);
  KeAbPostRelease((ULONG_PTR)v22);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v23 == 0 ? 0xC000012D : 0;
}
