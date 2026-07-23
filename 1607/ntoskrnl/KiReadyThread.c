/*
 * XREFs of KiReadyThread @ 0x14005F76C
 * Callers:
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 *     KiReadyOutSwappedThreads @ 0x1400908A0 (KiReadyOutSwappedThreads.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiRequestProcessInSwap @ 0x1400CCB40 (KiRequestProcessInSwap.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 */

int __fastcall KiReadyThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  signed __int64 v7; // rax
  __int64 v8; // rdi
  signed __int64 *v9; // rbx
  signed __int64 v10; // rcx

  v4 = *(_DWORD *)(a2 + 120);
  if ( (v4 & 0x10000) != 0 )
  {
    if ( (v4 & 0x40000) == 0 )
      goto LABEL_3;
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x12u);
    if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 572LL), 8u) & 7) == 0 )
      goto LABEL_3;
    v8 = *(_QWORD *)(a2 + 184);
    KiAcquireKobjectLockSafe(v8);
    if ( (*(_DWORD *)(v8 + 572) & 7) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
LABEL_3:
      LODWORD(v7) = KiDeferredReadyThread(a1, (_BYTE *)a2, (_SINGLE_LIST_ENTRY *)a3, a4);
      return v7;
    }
    goto LABEL_13;
  }
  v8 = *(_QWORD *)(a2 + 184);
  KiAcquireKobjectLockSafe(v8);
  if ( (*(_DWORD *)(v8 + 572) & 7) != 0 )
  {
LABEL_13:
    LODWORD(v7) = KiRequestProcessInSwap(a2, v8);
    return v7;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 572), 8u);
  _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x12u);
  *(_BYTE *)(a2 + 388) = 6;
  v9 = (signed __int64 *)(a2 + 216);
  _m_prefetchw(&KiStackInSwapListHead);
  v7 = KiStackInSwapListHead;
  do
  {
    *v9 = v7;
    v10 = v7;
    v7 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v9, v7);
  }
  while ( v7 != v10 );
  if ( !v7 )
    LODWORD(v7) = KeSetEvent(&KiSwapEvent, 10, 0);
  return v7;
}
