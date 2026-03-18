/*
 * XREFs of FsRtlNotifyCompleteIrpList @ 0x1404A6720
 * Callers:
 *     FsRtlNotifyCleanupOneEntry @ 0x1404A68A4 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404A6B90 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404A74B4 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlCheckNotifyForDelete @ 0x14066E8E8 (FsRtlCheckNotifyForDelete.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x14066E944 (FsRtlCheckNotifyForDeleteLite.c)
 * Callees:
 *     FsRtlNotifyCompleteIrp @ 0x1404A65B4 (FsRtlNotifyCompleteIrp.c)
 */

void __fastcall FsRtlNotifyCompleteIrpList(__int64 a1, NTSTATUS a2)
{
  unsigned int v2; // ebp
  __int64 **v3; // rbx
  IRP *v6; // rcx
  __int64 v7; // rdx

  v2 = *(_DWORD *)(a1 + 104);
  v3 = (__int64 **)(a1 + 48);
  *(_DWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 72) &= ~2u;
  *(_DWORD *)(a1 + 108) = 0;
  do
  {
    v6 = (IRP *)(*v3 - 21);
    v7 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v7 + 8) != *v3 )
      __fastfail(3u);
    *v3 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v3;
    v6->Tail.Overlay.ListEntry.Flink = 0LL;
    FsRtlNotifyCompleteIrp(v6, a1, v2, a2, 1);
  }
  while ( a2 && *v3 != (__int64 *)v3 );
}
