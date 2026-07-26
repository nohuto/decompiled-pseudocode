/*
 * XREFs of NdisFreeCloneOidRequest @ 0x1C000D880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 */

void __stdcall NdisFreeCloneOidRequest(NDIS_HANDLE SourceHandle, PNDIS_OID_REQUEST Request)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)&Request->NdisReserved[24];
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(173LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, SourceHandle, Request);
  if ( v2 )
  {
    *(_BYTE *)(v2 + 232) = Request->SupportedRevision;
    *(_DWORD *)(v2 + 152) = *(_DWORD *)&Request->NdisReserved[80];
  }
  ExFreePoolWithTag(Request, 0);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(174LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, SourceHandle, 0LL);
}
