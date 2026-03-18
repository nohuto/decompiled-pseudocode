/*
 * XREFs of ViHalTrackDomainCommonBuffer @ 0x1406BDB54
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x14020AF74 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ViHalTrackDomainCommonBuffer(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_1406E01F8);
  v3 = ViDomainCommonBufferList;
  *a1 = ViDomainCommonBufferList;
  a1[1] = &ViDomainCommonBufferList;
  if ( *(__int64 **)(v3 + 8) != &ViDomainCommonBufferList )
    __fastfail(3u);
  *(_QWORD *)(v3 + 8) = a1;
  ViDomainCommonBufferList = (__int64)a1;
  KeReleaseSpinLock(&qword_1406E01F8, v2);
}
