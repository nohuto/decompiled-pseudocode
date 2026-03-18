/*
 * XREFs of MiCompleteSecureProcessFault @ 0x1401DECFC
 * Callers:
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x1401DEFD0 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MiMarkPfnVerified @ 0x1400FE088 (MiMarkPfnVerified.c)
 */

void __fastcall MiCompleteSecureProcessFault(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  int *v5; // rax
  unsigned __int64 v6; // r9

  v3 = *(_QWORD *)(a1 + 40);
  if ( (v3 & 0x200000000000000LL) == 0 && ((v3 >> 54) & 7) != 3 )
  {
    MiLockPageAtDpcInline(a1, a2, a3);
    MiMarkPfnVerified(a1, 4);
    MiCaptureDirtyBitToPfn(a1);
    v5 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v6 )
      MiReleasePageFileInfo((__int64)v5, v6, 1);
  }
}
