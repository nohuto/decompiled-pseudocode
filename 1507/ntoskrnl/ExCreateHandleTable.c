/*
 * XREFs of ExCreateHandleTable @ 0x140523600
 * Callers:
 *     ObInitProcess @ 0x140467784 (ObInitProcess.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x140522C8C (RtlpInitializeHandleTableForAtomTable.c)
 *     ExDupHandleTable @ 0x1405237E0 (ExDupHandleTable.c)
 *     AlpcpInitSystem @ 0x1405BEC58 (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14069ECA0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     PspInitPhase0 @ 0x1407C344C (PspInitPhase0.c)
 *     PspInitializeSiloStructures @ 0x1407E4ED8 (PspInitializeSiloStructures.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTable @ 0x140523D44 (ExpAllocateHandleTable.c)
 */

__int64 __fastcall ExCreateHandleTable(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbp
  __int64 **v11; // rcx
  __int16 v12; // ax
  _QWORD *v13; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  LOBYTE(a2) = 1;
  result = ExpAllocateHandleTable(a1, a2);
  v6 = result;
  if ( result )
  {
    if ( v3 )
    {
      --CurrentThread->KernelApcDisable;
      v7 = KeAbPreAcquire((ULONG_PTR)&HandleTableListLock, 0LL, 0LL, v5);
      v9 = _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL);
      v10 = v7;
      if ( v9 )
        ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v7, (ULONG_PTR)&HandleTableListLock, v8);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      v11 = (__int64 **)qword_14077E298;
      *(_QWORD *)(v6 + 32) = qword_14077E298;
      *(_QWORD *)(v6 + 24) = &HandleTableListHead;
      if ( *v11 != &HandleTableListHead )
        __fastfail(3u);
      *v11 = (__int64 *)(v6 + 24);
      qword_14077E298 = v6 + 24;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      v12 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v12;
      if ( !v12
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      v13 = (_QWORD *)(result + 24);
      v13[1] = v13;
      *v13 = v13;
    }
    return v6;
  }
  return result;
}
