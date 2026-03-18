/*
 * XREFs of MiCreateDecayPfn @ 0x1400976F0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002EB30 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiInsertPageInList @ 0x1400695D0 (MiInsertPageInList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 *     MiMakeTransitionPte @ 0x1401F279C (MiMakeTransitionPte.c)
 */

PSLIST_ENTRY __fastcall MiCreateDecayPfn(unsigned int a1)
{
  __int64 v1; // rbp
  PSLIST_ENTRY result; // rax
  __int64 v3; // rsi
  int *v4; // rdi
  __int64 v5; // r8
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rcx

  v1 = a1;
  result = RtlpInterlockedPopEntrySList(&stru_140327370);
  v3 = (__int64)result;
  if ( result )
  {
    v4 = MiPartitionIdToPointer(WORD2(KeGetCurrentThread()->ApcState.Process[1].InstrumentationCallback));
    *(_QWORD *)(v3 + 16) = MiMakeTransitionPte((v3 + 0x58000000000LL) / 48, 4LL);
    *(_QWORD *)(v3 + 40) ^= (v5 ^ *(_QWORD *)(v3 + 40)) & 0xFFFFFFFFFLL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MiLockPageAtDpcInline(v3);
    *(_BYTE *)(v3 + 35) |= 8u;
    v7 = *(_QWORD *)(v3 + 40) & 0x3FFFFFFFFFFFFFFLL | (v1 << 58);
    *(_QWORD *)(v3 + 40) = v7;
    *(_QWORD *)(v3 + 40) = v7 ^ (v7 ^ ((unsigned __int64)*(unsigned __int16 *)v4 << 40)) & 0x3FF0000000000LL;
    *(_BYTE *)(v3 + 35) = *(_BYTE *)(v3 + 35) & 0xF8 | 5;
    MiInsertPageInList(v3, 4u);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return (PSLIST_ENTRY)v3;
  }
  return result;
}
