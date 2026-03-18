/*
 * XREFs of FsRtlNotifyCompleteIrpList @ 0x14048DE28
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x14048CA00 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x14048D858 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x14048D904 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlCheckNotifyForDelete @ 0x1405F584C (FsRtlCheckNotifyForDelete.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x1405F58A8 (FsRtlCheckNotifyForDeleteLite.c)
 * Callees:
 *     FsRtlNotifyCompleteIrp @ 0x14048DEC4 (FsRtlNotifyCompleteIrp.c)
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
