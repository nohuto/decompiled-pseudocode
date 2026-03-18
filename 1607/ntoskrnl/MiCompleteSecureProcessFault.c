/*
 * XREFs of MiCompleteSecureProcessFault @ 0x1401EF744
 * Callers:
 *     MiAllocateWsle @ 0x14003C0F0 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x1401EFD00 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140015D60 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x14001A280 (MiReleasePageFileInfo.c)
 *     MiAbortCombineScan @ 0x14001D810 (MiAbortCombineScan.c)
 *     MiLockPageAtDpcInline @ 0x14002EB30 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiMarkPfnVerified @ 0x14010A2D4 (MiMarkPfnVerified.c)
 */

void __fastcall MiCompleteSecureProcessFault(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KEVENT *v6; // rax
  unsigned __int64 v7; // r9

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 0x200000000000000LL) == 0 && ((v1 >> 54) & 7) != 3 )
  {
    MiLockPageAtDpcInline(a1);
    if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) != 3 )
    {
      MiAbortCombineScan(a1, v3, v4, v5);
      MiMarkPfnVerified(a1, 4);
    }
    MiCaptureDirtyBitToPfn(a1);
    v6 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v7 )
      MiReleasePageFileInfo(v6, v7, 1);
  }
}
