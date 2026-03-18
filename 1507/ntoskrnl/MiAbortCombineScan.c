/*
 * XREFs of MiAbortCombineScan @ 0x1400E59F8
 * Callers:
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1400E57F0 (MiChangePageAttributeBatch.c)
 *     MiInitializeDynamicPfns @ 0x140212A54 (MiInitializeDynamicPfns.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int16 *v2; // rsi
  int v3; // ett
  _QWORD *v4; // rsi
  _QWORD *i; // rbx
  _QWORD *v6; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( dword_14034EF04 )
  {
    v2 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EF00);
    }
    else
    {
      _m_prefetchw(&dword_14034EF00);
      v3 = dword_14034EF00 & 0x7FFFFFFF;
      if ( v3 != _InterlockedCompareExchange(
                   &dword_14034EF00,
                   (dword_14034EF00 & 0x7FFFFFFF) + 1,
                   dword_14034EF00 & 0x7FFFFFFF) )
        ExpWaitForSpinLockSharedAndAcquire(&dword_14034EF00);
    }
    v4 = v2 + 2436;
    for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
    {
      if ( i[6] == a1 )
      {
        v6 = (_QWORD *)i[7];
        if ( (*(_BYTE *)v6 & 1) != 0 )
        {
          *v6 = 0LL;
          if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
            MiWritePteShadow(v6, 0LL);
          KeFlushSingleTb((__int64)((_QWORD)v6 << 25) >> 16, 0, 1);
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EF00, retaddr);
    }
    else
    {
      _InterlockedAnd(&dword_14034EF00, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_14034EF00);
    }
  }
}
