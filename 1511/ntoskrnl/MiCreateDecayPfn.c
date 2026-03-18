/*
 * XREFs of MiCreateDecayPfn @ 0x140011C44
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiCreateDecayPfn(unsigned int a1)
{
  PSLIST_ENTRY result; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int16 *v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9

  result = RtlpInterlockedPopEntrySList(&ListHead);
  v3 = (__int64)result;
  if ( result )
  {
    v4 = MiPartitionIdToPointer(LOWORD(KeGetCurrentThread()->ApcState.Process[2].Header.SignalState));
    *(_BYTE *)(v3 + 35) |= 8u;
    v5 = (unsigned __int16 *)v4;
    *(_QWORD *)(v3 + 16) = ((((v3 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12) | *(_QWORD *)(v3 + 16) & 0xFFFF000000000FFFuLL;
    *(_QWORD *)(v3 + 40) = ((unsigned __int64)a1 << 58) | ((v3 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL | *(_QWORD *)(v3 + 40) & 0x3FFFFF000000000LL;
    v6 = (unsigned __int8)MiLockPageInline(v3);
    *(_QWORD *)(v3 + 40) ^= (*(_QWORD *)(v3 + 40) ^ ((unsigned __int64)*v5 << 40)) & 0x3FF0000000000LL;
    *(_BYTE *)(v3 + 35) = *(_BYTE *)(v3 + 35) & 0xF8 | 5;
    MiInsertPageInList(v3, 4LL, v7, v8);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v6);
    return (PSLIST_ENTRY)v3;
  }
  return result;
}
