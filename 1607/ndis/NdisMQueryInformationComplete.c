/*
 * XREFs of NdisMQueryInformationComplete @ 0x1C0025F80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisCompleteLegacyRequest @ 0x1C0044D34 (ndisCompleteLegacyRequest.c)
 */

__int64 __fastcall NdisMQueryInformationComplete(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qD(69LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, BugCheckParameter2, a2);
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
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    return WPP_SF_q(70LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, BugCheckParameter2);
  return result;
}
