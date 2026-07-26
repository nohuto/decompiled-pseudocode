/*
 * XREFs of NdisMQueryInformationComplete @ 0x1C0026370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisCompleteLegacyRequest @ 0x1C004124C (ndisCompleteLegacyRequest.c)
 */

__int64 __fastcall NdisMQueryInformationComplete(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qD(69LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, BugCheckParameter2, a2);
  if ( *(_BYTE *)(BugCheckParameter2 + 32) >= 6u )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(BugCheckParameter2 + 3912),
      "NDIS 6 Miniport calling NDIS 5 API");
    KeBugCheckEx(0x7Cu, 0x15uLL, BugCheckParameter2, 0LL, 0LL);
  }
  result = ndisCompleteLegacyRequest(BugCheckParameter2, a2, 0LL);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    return WPP_SF_q(70LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, BugCheckParameter2);
  return result;
}
