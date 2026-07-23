/*
 * XREFs of KiInSwapProcesses @ 0x140090680
 * Callers:
 *     KeSwapProcessOrStack @ 0x14013D844 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiReadyOutSwappedThreads @ 0x1400908A0 (KiReadyOutSwappedThreads.c)
 *     MmInSwapProcess @ 0x140090CC4 (MmInSwapProcess.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KiInSwapProcesses(_QWORD *a1)
{
  _QWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // si
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  do
  {
    v2 = a1 - 33;
    a1 = (_QWORD *)*a1;
    _InterlockedXor((volatile signed __int32 *)v2 + 143, 6u);
    MmInSwapProcess(v2);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiAcquireKobjectLockSafe(v2);
    v5 = v2 + 31;
    v6 = v2[31];
    if ( (_QWORD *)v6 == v2 + 31 )
    {
      v6 = 0LL;
    }
    else
    {
      v4 = (_QWORD *)v2[32];
      if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v4 != v5 )
        __fastfail(3u);
      *v4 = v6;
      *(_QWORD *)(v6 + 8) = v4;
      v2[32] = v2 + 31;
      *v5 = v5;
    }
    _InterlockedXor((volatile signed __int32 *)v2 + 143, 4u);
    _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
    if ( v6 )
    {
      LOBYTE(v4) = CurrentIrql;
      result = KiReadyOutSwappedThreads(v6, v4);
    }
    else
    {
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
