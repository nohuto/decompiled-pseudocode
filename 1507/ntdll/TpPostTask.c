/*
 * XREFs of TpPostTask @ 0x180027C78
 * Callers:
 *     TppDirectExecuteCallback @ 0x18000AF10 (TppDirectExecuteCallback.c)
 *     TpPostWork @ 0x1800276B0 (TpPostWork.c)
 *     TppWorkCallbackPrologRelease @ 0x18003C414 (TppWorkCallbackPrologRelease.c)
 *     TppWorkPost @ 0x18003EC38 (TppWorkPost.c)
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWakeSRWLock @ 0x18005FA44 (RtlpWakeSRWLock.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180094E50 (NtReleaseWorkerFactoryWorker.c)
 *     TppAdjustRunningThreadGoal @ 0x1800F5774 (TppAdjustRunningThreadGoal.c)
 */

int __fastcall TpPostTask(__int64 a1, char *a2, int a3, __int64 a4)
{
  char *v4; // rbx
  __int64 v6; // rcx
  signed __int32 v7; // eax
  _RTL_SRWLOCK **v8; // r14
  _RTL_SRWLOCK *v9; // rdi
  volatile signed __int64 *v10; // rsi
  _RTL_SRWLOCK **Value; // rax
  signed __int64 v12; // rax
  int v13; // r8d
  __int64 *ThreadPoolData; // rax
  signed __int64 v15; // rax
  int v16; // edx
  signed __int64 v17; // rtt
  __int64 v18; // rax
  signed __int32 v19; // edx
  signed __int32 v20; // ett
  __int64 v21; // r8
  __int64 v22; // rdx
  signed __int64 v23; // rtt
  signed __int64 v25; // [rsp+40h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v4 = (char *)TppPoolpSerializedPool;
      goto LABEL_32;
    }
    v4 = (char *)TppPoolpGlobalPool;
  }
  if ( v4 == (char *)TppPoolpSerializedPool )
LABEL_32:
    a3 = 1;
  v6 = *(unsigned int *)(a1 + 8);
  _m_prefetchw(v4 + 428);
  v7 = *((_DWORD *)v4 + 107);
  do
  {
    if ( v7 == -2 )
    {
      v19 = v6;
      goto LABEL_29;
    }
    if ( v7 == (_DWORD)v6 || v7 == -1 )
      break;
    v19 = -1;
LABEL_29:
    v20 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)v4 + 107, v19, v7);
  }
  while ( v20 != v7 );
  v8 = (_RTL_SRWLOCK **)(a1 + 16);
  v9 = (_RTL_SRWLOCK *)(*(_QWORD *)&v4[8 * a3 + 16] + 24 * v6);
  v10 = (volatile signed __int64 *)&v9[2];
  RtlAcquireSRWLockExclusive(v9 + 2);
  Value = (_RTL_SRWLOCK **)v9[1].Value;
  *v8 = v9;
  v8[1] = (_RTL_SRWLOCK *)Value;
  if ( *Value != v9 )
    __fastfail(3u);
  *Value = (_RTL_SRWLOCK *)v8;
  v9[1].Value = (unsigned __int64)v8;
  v12 = _InterlockedCompareExchange64(v10, 0LL, 1LL);
  if ( v12 != 1 )
  {
    do
    {
      v21 = -1LL;
      if ( (v12 & 6) == 2 )
        v21 = 3LL;
      v22 = v21 + v12;
      v23 = v12;
      v12 = _InterlockedCompareExchange64(v10, v21 + v12, v12);
    }
    while ( v23 != v12 );
    if ( v21 == 3 )
      RtlpWakeSRWLock(v10, v22, 0LL);
  }
  if ( *((_DWORD *)v4 + 106) != MEMORY[0x7FFE03C0] )
    TppAdjustRunningThreadGoal(v4);
  v13 = 0;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v18 = *ThreadPoolData;
    if ( *(char **)(v18 + 48) == v4 && *(_DWORD *)(v18 + 128) == 3 )
    {
      *(_DWORD *)(v18 + 128) = 4;
      v13 = 1;
    }
  }
  _m_prefetchw(v4 + 8);
  v15 = *((_QWORD *)v4 + 1);
  LODWORD(v25) = v15;
  do
  {
    if ( (v25 & 0xFFFF0000) != 0 || v13 )
    {
      v16 = 0;
    }
    else
    {
      LODWORD(v25) = (unsigned __int16)v25 ^ ((v25 & 0xFFFF0000) + 0x10000);
      v16 = 1;
    }
    v17 = v15;
    HIDWORD(v25) = HIDWORD(v15) + 1;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 1, v25, v15);
    LODWORD(v25) = v15;
  }
  while ( v17 != v15 );
  if ( v16 )
    LODWORD(v15) = NtReleaseWorkerFactoryWorker(*((HANDLE *)v4 + 7));
  return v15;
}
