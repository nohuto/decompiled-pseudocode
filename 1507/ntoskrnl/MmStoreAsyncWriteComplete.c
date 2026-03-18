/*
 * XREFs of MmStoreAsyncWriteComplete @ 0x14013F13C
 * Callers:
 *     SmIoRequestComplete @ 0x14013F03C (SmIoRequestComplete.c)
 * Callees:
 *     MiStoreModifiedWriteDereference @ 0x14013F1C8 (MiStoreModifiedWriteDereference.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1402316E8 (MiStoreLogWriteCompleteFailure.c)
 */

__int64 __fastcall MmStoreAsyncWriteComplete(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbp
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // r14

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 192LL);
  if ( *(int *)(a1 + 16) < 0 )
  {
    MiStoreLogWriteCompleteFailure();
    v5 = 48LL * *(_QWORD *)(a1 + 112) - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v2);
      }
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    *(_BYTE *)(v5 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    *(_DWORD *)(v3 + 1060) = 32;
  }
  MiStoreModifiedWriteDereference(*(_QWORD *)(a1 + 56));
  return MiStoreFreeWriteSupport(a1, MiSystemPartition);
}
