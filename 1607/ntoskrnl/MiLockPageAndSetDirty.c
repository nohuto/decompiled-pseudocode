/*
 * XREFs of MiLockPageAndSetDirty @ 0x1400150F8
 * Callers:
 *     MiCopyToUserVa @ 0x1400146D0 (MiCopyToUserVa.c)
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MmSetPageProtection @ 0x1400B0300 (MmSetPageProtection.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiValidFault @ 0x1400E40F0 (MiValidFault.c)
 *     MiMakeCombineCandidateClean @ 0x1401F9DA0 (MiMakeCombineCandidateClean.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiLockPageAndSetDirty(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned __int8 v4; // di
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  v2 = 0LL;
  if ( a2 == 1 )
  {
    v4 = 17;
    MiLockPageAtDpcInline(a1);
  }
  else
  {
    v4 = MiLockPageInline(a1);
  }
  v7 = MiCaptureDirtyBitToPfn(a1);
  if ( v7 )
    v2 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF, v5, v6, v7);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v7 )
    result = MiReleasePageFileInfo(v2, v7, 1LL);
  if ( v4 != 17 )
  {
    result = v4;
    __writecr8(v4);
  }
  return result;
}
