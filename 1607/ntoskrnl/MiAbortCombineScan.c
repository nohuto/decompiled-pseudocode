/*
 * XREFs of MiAbortCombineScan @ 0x14001D390
 * Callers:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x14001D1C0 (MiChangePageAttributeBatch.c)
 *     MiDeleteClusterSection @ 0x1400218E0 (MiDeleteClusterSection.c)
 *     MiDeleteClusterPage @ 0x140091A00 (MiDeleteClusterPage.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiInitializeMdlPfn @ 0x140104CA0 (MiInitializeMdlPfn.c)
 *     MiInitializeDynamicPfns @ 0x1401E1B1C (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x1401EF570 (MiCompleteSecureProcessFault.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
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

  if ( dword_140326E44 )
  {
    v5 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF, a2, a3, a4);
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140326E40);
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
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140326E40);
  }
}
