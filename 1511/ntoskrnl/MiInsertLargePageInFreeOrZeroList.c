/*
 * XREFs of MiInsertLargePageInFreeOrZeroList @ 0x140019D90
 * Callers:
 *     MiUnlinkNodeLargePage @ 0x140019534 (MiUnlinkNodeLargePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140019BFC (MiTryUnlinkNodeLargePage.c)
 *     MiDemoteLargeFreePage @ 0x140019D40 (MiDemoteLargeFreePage.c)
 *     MiGetFreeOrZeroPage @ 0x140054B20 (MiGetFreeOrZeroPage.c)
 *     MiScrubNodeLargePageList @ 0x1401E197C (MiScrubNodeLargePageList.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiInsertLargePageInFreeOrZeroList(unsigned __int64 a1)
{
  ULONG_PTR v1; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax
  int v6; // [rsp+58h] [rbp+10h] BYREF

  v1 = (__int64)(a1 + 0x58000000000LL) / 48;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( a1 < a1 + 24576 )
  {
    v3 = a1 + 24;
    v4 = 512LL;
    do
    {
      v6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v6);
        while ( (*(_QWORD *)v3 & 0x8000000000000000uLL) != 0 );
      }
      *(_QWORD *)v3 &= 0xC000000000000000uLL;
      *(_QWORD *)(v3 + 16) &= 0xFFFFFFF000000000uLL;
      MiInsertPageInFreeOrZeroedList(v1);
      _InterlockedAnd64((volatile signed __int64 *)v3, 0x7FFFFFFFFFFFFFFFuLL);
      v3 += 48LL;
      ++v1;
      --v4;
    }
    while ( v4 );
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
