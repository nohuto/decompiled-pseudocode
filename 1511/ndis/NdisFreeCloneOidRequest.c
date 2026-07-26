/*
 * XREFs of NdisFreeCloneOidRequest @ 0x1C000F320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 */

void __stdcall NdisFreeCloneOidRequest(NDIS_HANDLE SourceHandle, PNDIS_OID_REQUEST Request)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)&Request->NdisReserved[24];
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(175LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, SourceHandle, Request);
  if ( v2 )
  {
    *(_BYTE *)(v2 + 232) = Request->SupportedRevision;
    *(_DWORD *)(v2 + 152) = *(_DWORD *)&Request->NdisReserved[80];
  }
  ExFreePoolWithTag(Request, 0);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(176LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, SourceHandle, 0LL);
}
