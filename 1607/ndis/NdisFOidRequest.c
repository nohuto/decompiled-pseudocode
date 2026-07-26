/*
 * XREFs of NdisFOidRequest @ 0x1C000A750
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueueOidRequest @ 0x1C000A860 (ndisQueueOidRequest.c)
 *     NdisMIndicateStatusEx @ 0x1C0019ED0 (NdisMIndicateStatusEx.c)
 *     ndisOidPMAddRemove @ 0x1C0025300 (ndisOidPMAddRemove.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

NDIS_STATUS __stdcall NdisFOidRequest(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest)
{
  unsigned int v4; // esi
  NDIS_OID Oid; // ecx
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // [rsp+20h] [rbp-98h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-88h] BYREF

  v4 = -1073741823;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(51LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, NdisFilterHandle, OidRequest);
  if ( OidRequest->Header.Type != 0x96 || OidRequest->Header.Size < 0xECu )
    return -1073741811;
  if ( !OidRequest->Header.Revision )
    return -1071448020;
  if ( (*(_DWORD *)(*((_QWORD *)NdisFilterHandle + 4) + 3736LL) & 0x400) == 0 )
    OidRequest->SupportedRevision = 1;
  if ( *(_QWORD *)(*((_QWORD *)NdisFilterHandle + 2) + 256LL) )
  {
    Oid = OidRequest->DATA.QUERY_INFORMATION.Oid;
    if ( Oid - 65798 > 1 && Oid != 65812 )
    {
      if ( OidRequest->RequestType == NdisRequestSetInformation && Oid == 66058 )
      {
        if ( OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
        {
          v11 = *(_DWORD *)OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
          memset(&StatusIndication, 0, sizeof(StatusIndication));
          StatusIndication.SourceHandle = (void *)*((_QWORD *)NdisFilterHandle + 4);
          StatusIndication.StatusBuffer = &v11;
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.StatusCode = 1073807384;
          StatusIndication.StatusBufferSize = 4;
          NdisMIndicateStatusEx(StatusIndication.SourceHandle, &StatusIndication);
          v4 = 0;
        }
        else
        {
          v4 = -1073676267;
        }
      }
      else
      {
        *(_DWORD *)&OidRequest->NdisReserved[16] |= 0x40u;
        v6 = *(_DWORD *)&OidRequest->NdisReserved[16];
        *(_QWORD *)&OidRequest->NdisReserved[32] = NdisFilterHandle;
        if ( OidRequest->RequestType == NdisRequestSetInformation
          && (v6 & 0x4000) == 0
          && (v9 = Oid + 50265846, Oid + 50265846 <= 5)
          && (v10 = 43, _bittest(&v10, v9)) )
        {
          v7 = ndisOidPMAddRemove(*((NDIS_HANDLE *)NdisFilterHandle + 4), (__int64)NdisFilterHandle, OidRequest);
        }
        else
        {
          v7 = ndisQueueOidRequest(OidRequest, *((_QWORD *)NdisFilterHandle + 4), NdisFilterHandle, 0LL);
        }
        v4 = v7;
      }
    }
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qD(52LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, OidRequest, v4);
  return v4;
}
