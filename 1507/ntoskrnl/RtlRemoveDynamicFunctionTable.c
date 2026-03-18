/*
 * XREFs of RtlRemoveDynamicFunctionTable @ 0x14000AC60
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlRemoveDynamicFunctionTable(__int64 a1)
{
  unsigned int v1; // r12d
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r15
  volatile signed __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int *v7; // rsi
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned __int64 *v10; // rax
  unsigned int *v11; // rcx
  unsigned int v12; // r15d
  __int16 v13; // cx
  unsigned __int64 v15; // [rsp+58h] [rbp+10h]
  __int64 v16; // [rsp+60h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = *(_QWORD *)(a1 + 48);
  v16 = *(_QWORD *)(a1 + 40);
  if ( v16 - v15 >= 0xFFFFFFFF )
    return 3221225621LL;
  v1 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v4 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[16];
  v5 = KeAbPreAcquire((ULONG_PTR)&Process[2].Affinity.Bitmap[16]);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[2].Affinity.Bitmap[16], 0LL) )
    ExfAcquirePushLockExclusiveEx(&Process[2].Affinity.Bitmap[16], v5, &Process[2].Affinity.Bitmap[16]);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = (unsigned int *)Process[2].Affinity.Bitmap[15];
  if ( v7 )
  {
    v8 = *v7;
    v9 = 1;
    if ( *v7 > 1 )
    {
      v10 = (unsigned __int64 *)(v7 + 12);
      while ( *v10 < v15 )
      {
        ++v9;
        v10 += 3;
        if ( v9 >= v8 )
          goto LABEL_19;
      }
      v11 = &v7[4 * v9 + 4 + 2 * v9];
      if ( *((_QWORD *)v11 + 1) == v15 && v11[4] == (_DWORD)v16 - (_DWORD)v15 )
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
  v13 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v13;
  if ( !v13 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v1;
}
