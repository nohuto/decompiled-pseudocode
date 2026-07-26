/*
 * XREFs of NdisMSetInformationComplete @ 0x1C003EFA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisCompleteLegacyRequest @ 0x1C003FB50 (ndisCompleteLegacyRequest.c)
 */

void __fastcall NdisMSetInformationComplete(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qD(71LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, BugCheckParameter2, a2);
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
  ndisCompleteLegacyRequest(BugCheckParameter2, a2, 0LL);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_q(0x48u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, BugCheckParameter2);
}
