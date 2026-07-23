/*
 * XREFs of FsRtlNotifyCompleteIrpList @ 0x1404ABEC8
 * Callers:
 *     FsRtlNotifyCleanupOneEntry @ 0x1404AAEB8 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404AAFC0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404ABA5C (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlCheckNotifyForDelete @ 0x14061FCA8 (FsRtlCheckNotifyForDelete.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x14061FD04 (FsRtlCheckNotifyForDeleteLite.c)
 * Callees:
 *     FsRtlNotifyCompleteIrp @ 0x1404ABF64 (FsRtlNotifyCompleteIrp.c)
 */

__int64 __fastcall FsRtlNotifyCompleteIrpList(__int64 a1, int a2)
{
  __int64 **v2; // rbx
  IRP *v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax

  v2 = (__int64 **)(a1 + 48);
  *(_DWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 72) &= ~2u;
  *(_DWORD *)(a1 + 108) = 0;
  do
  {
    v4 = (IRP *)(*v2 - 21);
    v5 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v5 + 8) != *v2 )
      __fastfail(3u);
    *v2 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v2;
    v4->Tail.Overlay.ListEntry.Flink = 0LL;
    result = FsRtlNotifyCompleteIrp(v4, 1);
  }
  while ( a2 && *v2 != (__int64 *)v2 );
  return result;
}
