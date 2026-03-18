/*
 * XREFs of DxgkReleaseAdapterReference @ 0x1C012BDD4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C01684A0 (DpiFdoResetFdo.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterReference(DXGADAPTER *a1)
{
  __int64 v1; // rax

  if ( a1 )
  {
    *((_QWORD *)a1 + 22) = 0LL;
    DXGADAPTER::ReleaseReference(a1);
    return 0LL;
  }
  else
  {
    v1 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v1 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v1);
    return 3221225485LL;
  }
}
