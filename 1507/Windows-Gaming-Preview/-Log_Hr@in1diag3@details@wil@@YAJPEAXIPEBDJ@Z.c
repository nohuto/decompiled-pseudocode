/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180024D9C
 * Callers:
 *     ?StopActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180020870 (-StopActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180020E00 (-StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180021360 (-StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ??1?$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ @ 0x18002193C (--1-$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@$0A@$0A@$04@wil@@QEAAXJ@Z @ 0x1800239BC (-Stop@-$ActivityBase@$0A@$0A@$04@wil@@QEAAXJ@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180008B4C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  wil::details::ReportFailure_Hr(
    (__int64)this,
    1901LL,
    (__int64)"internal\\sdk\\inc\\wil\\result.h",
    0LL,
    0LL,
    retaddr,
    3,
    (unsigned int)a4);
  return v4;
}
