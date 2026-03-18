/*
 * XREFs of DxgkAcquireAdapterReference @ 0x1C0094C3C
 * Callers:
 *     DpiGetDxgAdapterSafe @ 0x1C00949E0 (DpiGetDxgAdapterSafe.c)
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkAcquireAdapterReference(DXGADAPTER *a1)
{
  __int64 v2; // rax

  if ( a1 )
  {
    DXGADAPTER::AcquireReference(a1);
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v2 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
}
