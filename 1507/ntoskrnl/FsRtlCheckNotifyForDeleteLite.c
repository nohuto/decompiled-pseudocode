/*
 * XREFs of FsRtlCheckNotifyForDeleteLite @ 0x14066E944
 * Callers:
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404A6118 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     FsRtlNotifyCompleteIrpList @ 0x1404A6720 (FsRtlNotifyCompleteIrpList.c)
 */

void __fastcall FsRtlCheckNotifyForDeleteLite(_QWORD **a1)
{
  _QWORD *i; // rbx

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    *((_WORD *)i + 20) |= 0x20u;
    if ( (_QWORD *)i[2] != i + 2 )
      FsRtlNotifyCompleteIrpList((__int64)(i - 4), -1073741738);
  }
}
