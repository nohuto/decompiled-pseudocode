/*
 * XREFs of KiReadyThread @ 0x140034300
 * Callers:
 *     KiReadyOutSwappedThreads @ 0x14003307C (KiReadyOutSwappedThreads.c)
 *     KiTimer2Expiration @ 0x1400332A0 (KiTimer2Expiration.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiRequestProcessInSwap @ 0x1400C7BB0 (KiRequestProcessInSwap.c)
 */

int __fastcall KiReadyThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  signed __int64 v5; // rax
  volatile signed __int32 *v6; // rdi
  signed __int64 *v7; // rbx
  signed __int64 v8; // rcx

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x10000) != 0 )
  {
    if ( (v2 & 0x40000) == 0 )
      goto LABEL_3;
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x12u);
    if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 572LL), 8u) & 7) == 0 )
      goto LABEL_3;
    v6 = *(volatile signed __int32 **)(a2 + 184);
    KiAcquireKobjectLockSafe(v6);
    if ( (v6[143] & 7) == 0 )
    {
      _InterlockedAnd(v6, 0xFFFFFF7F);
LABEL_3:
      LODWORD(v5) = KiDeferredReadyThread(a1, a2);
      return v5;
    }
    goto LABEL_10;
  }
  v6 = *(volatile signed __int32 **)(a2 + 184);
  KiAcquireKobjectLockSafe(v6);
  if ( (v6[143] & 7) != 0 )
  {
LABEL_10:
    LODWORD(v5) = KiRequestProcessInSwap(a2, v6);
    return v5;
  }
  _InterlockedExchangeAdd(v6 + 143, 8u);
  _InterlockedAnd(v6, 0xFFFFFF7F);
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x12u);
  *(_BYTE *)(a2 + 388) = 6;
  v7 = (signed __int64 *)(a2 + 216);
  _m_prefetchw(&KiStackInSwapListHead);
  v5 = KiStackInSwapListHead;
  do
  {
    *v7 = v5;
    v8 = v5;
    v5 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v7, v5);
  }
  while ( v5 != v8 );
  if ( !v5 )
    LODWORD(v5) = KeSetEvent(&KiSwapEvent, 10, 0);
  return v5;
}
