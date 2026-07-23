/*
 * XREFs of RtlRemoveDynamicFunctionTable @ 0x1400994CC
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlRemoveDynamicFunctionTable(__int64 a1)
{
  unsigned int v1; // r12d
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r14
  volatile signed __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int *v7; // rsi
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned __int64 *v10; // rax
  unsigned int *v11; // rcx
  unsigned int v12; // r14d
  unsigned __int64 v14; // [rsp+58h] [rbp+10h]
  __int64 v15; // [rsp+60h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = *(_QWORD *)(a1 + 48);
  v15 = *(_QWORD *)(a1 + 40);
  if ( v15 - v14 >= 0xFFFFFFFF )
    return 3221225621LL;
  v1 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v4 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[19];
  v5 = KeAbPreAcquire((ULONG_PTR)&Process[2].Affinity.Bitmap[19], 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[2].Affinity.Bitmap[19], 0LL) )
    ExfAcquirePushLockExclusiveEx(&Process[2].Affinity.Bitmap[19], v5, &Process[2].Affinity.Bitmap[19]);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = (unsigned int *)Process[2].Affinity.Bitmap[18];
  if ( v7 )
  {
    v8 = *v7;
    v9 = 1;
    if ( *v7 > 1 )
    {
      v10 = (unsigned __int64 *)(v7 + 12);
      while ( *v10 < v14 )
      {
        ++v9;
        v10 += 3;
        if ( v9 >= v8 )
          goto LABEL_19;
      }
      v11 = &v7[4 * v9 + 4 + 2 * v9];
      if ( *((_QWORD *)v11 + 1) == v14 && v11[4] == (_DWORD)v15 - (_DWORD)v14 )
      {
        v12 = v8 - 1;
        if ( v9 != v8 - 1 )
          memmove(v11, &v7[4 * v9 + 10 + 2 * v9], 24LL * (v8 - v9 - 1));
        v1 = 0;
        *v7 = v12;
      }
    }
  }
LABEL_19:
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}
