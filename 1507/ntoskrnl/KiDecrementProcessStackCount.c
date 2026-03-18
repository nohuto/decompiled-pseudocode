/*
 * XREFs of KiDecrementProcessStackCount @ 0x14009AA60
 * Callers:
 *     KiSuspendThread @ 0x14000CA68 (KiSuspendThread.c)
 *     KeDeleteThread @ 0x1400210A8 (KeDeleteThread.c)
 *     KiDetachProcess @ 0x14009A430 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiOutSwapKernelStacks @ 0x140123398 (KiOutSwapKernelStacks.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

int __fastcall KiDecrementProcessStackCount(__int64 a1)
{
  signed __int64 v2; // rax
  char v3; // di
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // ebp
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  signed __int64 *v8; // rbx
  signed __int64 v9; // rcx

  LODWORD(v2) = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 572), 0xFFFFFFF8) & 0xFFFFFFF8;
  if ( (_DWORD)v2 == 8 )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v5 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
      while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    }
    v6 = *(_DWORD *)(a1 + 572);
    if ( (v6 & 7) == 0 && *(_QWORD *)(a1 + 48) != a1 + 48 && (v6 & 0xFFFFFFF8) == 0 )
    {
      while ( 1 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 572), v6 & 0xFFFFFFF8 | 3, v6);
        if ( v7 == v6 )
          break;
        if ( (v6 & 0xFFFFFFF8) != 0 )
          goto LABEL_9;
      }
      v3 = 1;
    }
LABEL_9:
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    LODWORD(v2) = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v3 )
    {
      v8 = (signed __int64 *)(a1 + 264);
      _m_prefetchw(&KiProcessOutSwapListHead);
      v2 = KiProcessOutSwapListHead;
      do
      {
        *v8 = v2;
        v9 = v2;
        v2 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v8, v2);
      }
      while ( v2 != v9 );
      if ( !v2 )
        LODWORD(v2) = KeSetEvent(&KiSwapEvent, 10, 0);
    }
  }
  return v2;
}
