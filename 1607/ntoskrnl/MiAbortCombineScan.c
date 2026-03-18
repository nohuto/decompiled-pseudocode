/*
 * XREFs of MiAbortCombineScan @ 0x14001D810
 * Callers:
 *     MiChangePageAttribute @ 0x14001D088 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x14001D640 (MiChangePageAttributeBatch.c)
 *     MiDeleteClusterSection @ 0x140021D60 (MiDeleteClusterSection.c)
 *     MiDeleteClusterPage @ 0x1400922A0 (MiDeleteClusterPage.c)
 *     MiCopyPage @ 0x1400E3260 (MiCopyPage.c)
 *     MiInitializeMdlPfn @ 0x140106F20 (MiInitializeMdlPfn.c)
 *     MiInitializeDynamicPfns @ 0x1401E1CF0 (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x1401EF744 (MiCompleteSecureProcessFault.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001DD60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400EA3E0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeFlushSingleTb @ 0x14010A628 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  _QWORD *v7; // rsi
  _QWORD *i; // rbx
  _QWORD *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9

  if ( dword_140326E04 )
  {
    v5 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF, a2, a3, a4);
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140326E00);
    v7 = (_QWORD *)(v5 + 5864);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    {
      if ( i[6] == a1 )
      {
        v9 = (_QWORD *)i[7];
        if ( (*(_BYTE *)v9 & 1) != 0 )
        {
          v10 = i[7];
          *v9 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v10, v6) )
            MiWritePteShadow(v11, 0LL);
          KeFlushSingleTb(v12 << 25 >> 16, 0LL, 1LL);
        }
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140326E00);
  }
}
