/*
 * XREFs of MmCommitSessionMappedView @ 0x1404A5E08
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiLocatePagefileSubsection @ 0x14002CBC0 (MiLocatePagefileSubsection.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiChargeSegmentCommit @ 0x1404A6130 (MiChargeSegmentCommit.c)
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
  _BYTE *v11; // rax
  _BYTE *v12; // rsi
  _QWORD *i; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int *v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rcx
  int v21; // eax
  volatile signed __int64 *v22; // rdi
  int v23; // esi
  volatile signed __int64 *v25; // rdi
  unsigned int v26; // ebx
  volatile signed __int64 *v27; // rdi
  unsigned __int64 v28; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 < qword_140326950 || a1 >= qword_140326950 + 0x8000000000LL )
    return 3221225711LL;
  v3 = a2 + a1;
  if ( v3 <= a1 || v3 < qword_140326950 || v3 >= qword_140326950 + 0x8000000000LL )
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
  v11 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v11, (ULONG_PTR)v10);
  if ( v12 )
    v12[26] |= 1u;
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
    goto LABEL_33;
  }
  v28 = i[3] + ((v7 - (i[10] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
  v16 = MiLocatePagefileSubsection(v15 + 128, &v28);
  if ( !v16 )
  {
LABEL_30:
    v27 = *(volatile signed __int64 **)(v6 + 2888);
    if ( (_InterlockedExchangeAdd64(v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v27);
    KeAbPostRelease((ULONG_PTR)v27);
    v26 = -1073741584;
LABEL_33:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return v26;
  }
  v17 = (unsigned int *)(v16 + 44);
  v18 = v16;
  v19 = *(_QWORD *)(v16 + 8) + 8 * v28;
  v20 = v9 + v28;
  v28 += v9;
  while ( v20 >= *v17 )
  {
    v18 = *(_QWORD *)(v18 + 16);
    v20 -= *v17;
    v28 = v20;
    if ( !v18 )
      goto LABEL_30;
    v17 = (unsigned int *)(v18 + 44);
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
