/*
 * XREFs of MiCompleteSecureProcessFault @ 0x1401EF570
 * Callers:
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x1401EFB2C (MiValidVirtualizationFault.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiAbortCombineScan @ 0x14001D390 (MiAbortCombineScan.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
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
