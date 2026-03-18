/*
 * XREFs of DxgkAcquireAdapterReference @ 0x1C00B97DC
 * Callers:
 *     DpiGetDxgAdapterSafe @ 0x1C00B9580 (DpiGetDxgAdapterSafe.c)
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkAcquireAdapterReference(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( a1 )
  {
    if ( _InterlockedAdd64((volatile signed __int64 *)(a1 + 24), 1uLL) <= 0 )
    {
      v3 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v3 + 24) = 1141LL;
      WdLogEvent5_WdAssertion(v3);
    }
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
