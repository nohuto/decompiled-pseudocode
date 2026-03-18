/*
 * XREFs of MiLockPageAndSetDirty @ 0x1400B820C
 * Callers:
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiValidFault @ 0x140070910 (MiValidFault.c)
 *     MiCopyToUserVa @ 0x1400B55D0 (MiCopyToUserVa.c)
 *     NtGetWriteWatch @ 0x1400B66D0 (NtGetWriteWatch.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MmSetPageProtection @ 0x1400EBB14 (MmSetPageProtection.c)
 *     MiMakeCombineCandidateClean @ 0x14012A4AC (MiMakeCombineCandidateClean.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 */

void __fastcall MiLockPageAndSetDirty(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // rsi
  unsigned __int8 v5; // di
  unsigned __int64 v6; // r9

  v3 = 0LL;
  if ( (_DWORD)a2 == 1 )
  {
    v5 = 17;
    MiLockPageAtDpcInline(a1, a2, a3);
  }
  else
  {
    v5 = MiLockPageInline(a1);
  }
  v6 = MiCaptureDirtyBitToPfn(a1);
  if ( v6 )
    v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 )
    MiReleasePageFileInfo((__int64)v3, v6, 1);
  if ( v5 != 17 )
    __writecr8(v5);
}
