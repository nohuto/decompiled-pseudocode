/*
 * XREFs of ExpSnapShotHandleTables @ 0x1406F02E4
 * Callers:
 *     ObGetHandleInformation @ 0x1406ABCE8 (ObGetHandleInformation.c)
 *     ObGetHandleInformationEx @ 0x1406ABD38 (ObGetHandleInformationEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ExpSnapShotHandleTables(
        __int64 (__fastcall *a1)(_DWORD **, _QWORD, __int64 *, __int64, int, __int64),
        _DWORD *a2,
        int a3,
        __int64 a4,
        char a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD *v6; // rax
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 *v12; // r15
  int v13; // edi
  __int64 v14; // r13
  __int64 i; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rsi
  __int64 v18; // r8
  struct _KTHREAD *v19; // rdi
  __int16 v20; // ax
  signed __int32 v22[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 **v23; // [rsp+30h] [rbp-48h]
  struct _KTHREAD *v24; // [rsp+38h] [rbp-40h]
  _DWORD *v26; // [rsp+88h] [rbp+10h] BYREF
  int v27; // [rsp+90h] [rbp+18h]

  v27 = a3;
  CurrentThread = KeGetCurrentThread();
  v6 = a2 + 2;
  v24 = CurrentThread;
  v9 = 0;
  if ( a5 )
    v6 = a2 + 4;
  v26 = v6;
  *a2 = 0;
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&HandleTableListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&HandleTableListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&HandleTableListLock, v10, (ULONG_PTR)&HandleTableListLock, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v12 = (__int64 *)HandleTableListHead;
  v13 = v27;
  while ( 1 )
  {
    v23 = (__int64 **)v12;
    if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -1073741820 )
      break;
    if ( v12 == &HandleTableListHead )
      break;
    v14 = (__int64)(v12 - 3);
    for ( i = 0LL; ((v9 + 0x80000000) & 0x80000000) != 0 || v9 == -1073741820; i += 4LL )
    {
      v16 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v14, i);
      v17 = v16;
      if ( !v16 )
        break;
      if ( (i & 0x3FC) != 0 && *v16 )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v17);
            v18 = *v17;
            if ( (*v17 & 1) != 0 )
              break;
            if ( !v18 )
              goto LABEL_23;
            ExpBlockOnLockedHandleEntry(v14, v17, v18);
          }
        }
        while ( v18 != _InterlockedCompareExchange64(v17, v18 - 1, v18) );
        ++*a2;
        v9 = a1(&v26, *(unsigned int *)(v14 + 40), v17, i, v13, a4);
        _InterlockedExchangeAdd64(v17, 1uLL);
        _InterlockedOr(v22, 0);
        if ( *(_QWORD *)(v14 + 48) )
          ExfUnblockPushLock((volatile __int64 *)(v14 + 48), 0LL);
      }
LABEL_23:
      ;
    }
    v12 = *v23;
  }
  v19 = v24;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&HandleTableListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  v20 = v19->KernelApcDisable + 1;
  v19->KernelApcDisable = v20;
  if ( !v20
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v9;
}
