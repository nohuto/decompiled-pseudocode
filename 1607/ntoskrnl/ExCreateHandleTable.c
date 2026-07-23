/*
 * XREFs of ExCreateHandleTable @ 0x1404ACEEC
 * Callers:
 *     ExDupHandleTable @ 0x14045D6B0 (ExDupHandleTable.c)
 *     ObInitProcess @ 0x14045E3D4 (ObInitProcess.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x1404ACE2C (RtlpInitializeHandleTableForAtomTable.c)
 *     AlpcpInitSystem @ 0x14057C1B8 (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406551D8 (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspInitPhase0 @ 0x14079E090 (PspInitPhase0.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 *     PspInitializeJobStructures @ 0x1407BB73C (PspInitializeJobStructures.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTable @ 0x1404AD0A8 (ExpAllocateHandleTable.c)
 */

__int64 __fastcall ExCreateHandleTable(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // rdi
  _BYTE *v6; // rax
  signed __int8 v7; // cf
  _BYTE *v8; // rsi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  LOBYTE(a2) = 1;
  result = ExpAllocateHandleTable(a1, a2);
  v5 = result;
  if ( result )
  {
    if ( v3 )
    {
      --CurrentThread->KernelApcDisable;
      v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&HandleTableListLock, 0LL, 0);
      v7 = _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL);
      v8 = v6;
      if ( v7 )
        ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v6, (ULONG_PTR)&HandleTableListLock);
      if ( v8 )
        v8[26] |= 1u;
      v9 = (_QWORD *)qword_140748098;
      v10 = (_QWORD *)(v5 + 24);
      if ( *(__int64 **)qword_140748098 != &HandleTableListHead )
        __fastfail(3u);
      *v10 = &HandleTableListHead;
      *(_QWORD *)(v5 + 32) = v9;
      *v9 = v10;
      qword_140748098 = v5 + 24;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
    }
    else
    {
      v14 = (_QWORD *)(result + 24);
      v14[1] = v14;
      *v14 = v14;
    }
    return v5;
  }
  return result;
}
