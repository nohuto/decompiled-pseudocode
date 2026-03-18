/*
 * XREFs of MiAbortCombineScan @ 0x1400A980C
 * Callers:
 *     MiChangePageAttributeBatch @ 0x1400A9630 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiInitializeDynamicPfns @ 0x1401D1AA4 (MiInitializeDynamicPfns.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiPageCombiningActive @ 0x1400A98D0 (MiPageCombiningActive.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int64 v2; // r14
  _QWORD *v3; // r14
  _QWORD *i; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rcx

  if ( (unsigned int)MiPageCombiningActive(0LL) )
  {
    v2 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
    ExAcquireSpinLockSharedAtDpcLevel(&dword_1402FEA40);
    v3 = (_QWORD *)(v2 + 5232);
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( i[6] == a1 )
      {
        v5 = (_QWORD *)i[7];
        if ( (*(_BYTE *)v5 & 1) != 0 )
        {
          v6 = i[7];
          *v5 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v6) )
            MiWritePteShadow(v5, 0LL);
          KeFlushSingleTb((__int64)((_QWORD)v5 << 25) >> 16, 0, 1u);
        }
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FEA40);
  }
}
