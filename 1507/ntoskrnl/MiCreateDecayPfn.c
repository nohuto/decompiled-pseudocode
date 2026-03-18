/*
 * XREFs of MiCreateDecayPfn @ 0x1400E0F20
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 */

PSLIST_ENTRY __fastcall MiCreateDecayPfn(unsigned int a1)
{
  __int64 v1; // rbx
  PSLIST_ENTRY result; // rax
  __int64 v3; // rdi
  __int16 *v4; // rsi
  __int64 TransitionPte; // rax
  __int64 v6; // r8
  unsigned __int8 CurrentIrql; // bp
  unsigned int v8; // ebx

  v1 = a1;
  result = RtlpInterlockedPopEntrySList(&stru_14034F430);
  v3 = (__int64)result;
  if ( result )
  {
    v4 = MiPartitionIdToPointer(WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid));
    TransitionPte = MiMakeTransitionPte((v3 + 0x58000000000LL) / 48, 4LL);
    *(_BYTE *)(v3 + 35) |= 8u;
    *(_QWORD *)(v3 + 16) = TransitionPte;
    *(_QWORD *)(v3 + 40) = v6 & 0xFFFFFFFFFLL | *(_QWORD *)(v3 + 40) & 0x3FFFFF000000000LL | (v1 << 58);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v8 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
      while ( (*(_QWORD *)(v3 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) );
    }
    *(_QWORD *)(v3 + 40) ^= (*(_QWORD *)(v3 + 40) ^ ((unsigned __int64)(unsigned __int16)*v4 << 40)) & 0x3FF0000000000LL;
    *(_BYTE *)(v3 + 35) = *(_BYTE *)(v3 + 35) & 0xF8 | 5;
    MiInsertPageInList(v3, 4u);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return (PSLIST_ENTRY)v3;
  }
  return result;
}
