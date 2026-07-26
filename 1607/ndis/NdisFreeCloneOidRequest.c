/*
 * XREFs of NdisFreeCloneOidRequest @ 0x1C000EC80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 */

void __stdcall NdisFreeCloneOidRequest(NDIS_HANDLE SourceHandle, PNDIS_OID_REQUEST Request)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)&Request->NdisReserved[24];
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(175LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, SourceHandle, Request);
  if ( v2 )
  {
    *(_BYTE *)(v2 + 232) = Request->SupportedRevision;
    *(_DWORD *)(v2 + 152) = *(_DWORD *)&Request->NdisReserved[80];
  }
  ExFreePoolWithTag(Request, 0);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(176LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, SourceHandle, 0LL);
}
