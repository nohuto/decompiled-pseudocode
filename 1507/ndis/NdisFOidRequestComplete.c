/*
 * XREFs of NdisFOidRequestComplete @ 0x1C000D120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00547D0 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __stdcall NdisFOidRequestComplete(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest, NDIS_STATUS Status)
{
  UCHAR *NdisReserved; // r14
  KSPIN_LOCK *v7; // r15
  KSPIN_LOCK *v8; // r13
  KSPIN_LOCK v9; // rsi
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  NDIS_HANDLE RequestHandle; // r15
  __int64 v13; // rbx
  KIRQL v14; // al
  KIRQL v15; // bl

  NdisReserved = OidRequest->NdisReserved;
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) == 0 )
  {
LABEL_20:
    *((_DWORD *)NdisReserved + 2) = Status;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisFOidRequestCompleteInternal,
           NdisFilterHandle,
           0x2000uLL,
           0,
           0LL) < 0 )
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
      *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
      v15 = v14;
      *((_DWORD *)NdisFilterHandle + 40) = 2101285;
      *((_BYTE *)NdisFilterHandle + 233) = 1;
      ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
      *((_QWORD *)NdisFilterHandle + 19) = 0LL;
      *((_DWORD *)NdisFilterHandle + 40) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v15);
    }
    return;
  }
  v7 = 0LL;
  v8 = 0LL;
  if ( *(_BYTE *)NdisFilterHandle == 5 )
    v7 = (KSPIN_LOCK *)NdisFilterHandle;
  else
    v8 = (KSPIN_LOCK *)NdisFilterHandle;
  v9 = *(_QWORD *)&OidRequest->NdisReserved[24];
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(
      40LL,
      &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids,
      OidRequest,
      v9,
      OidRequest->DATA.QUERY_INFORMATION.Oid);
  if ( v9 )
  {
    *((_QWORD *)NdisReserved + 3) = 0LL;
    if ( OidRequest->RequestType == NdisRequestMethod )
    {
      *(_DWORD *)(v9 + 60) = OidRequest->DATA.METHOD_INFORMATION.BytesWritten;
      *(_DWORD *)(v9 + 64) = OidRequest->DATA.METHOD_INFORMATION.BytesRead;
      *(_DWORD *)(v9 + 68) = OidRequest->DATA.METHOD_INFORMATION.BytesNeeded;
      *(_QWORD *)(v9 + 40) = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v9 + 48) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
      *(_DWORD *)(v9 + 52) = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
    }
    else
    {
      *(_DWORD *)(v9 + 52) = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
      *(_DWORD *)(v9 + 56) = OidRequest->DATA.QUERY_INFORMATION.BytesNeeded;
      *(_QWORD *)(v9 + 40) = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v9 + 48) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
    }
    if ( (*(_DWORD *)(v9 + 88) & 0x400) == 0 )
    {
      if ( v7 )
      {
        v10 = KeAcquireSpinLockRaiseToDpc(v7 + 18);
        v7[19] = 0LL;
        v11 = v7 + 18;
        *((_DWORD *)v7 + 40) = 0;
        v7[23] = v9;
      }
      else
      {
        v10 = KeAcquireSpinLockRaiseToDpc(v8 + 12);
        v8[65] = 0LL;
        v11 = v8 + 12;
        *((_DWORD *)v8 + 464) = 0;
        v8[277] = v9;
      }
      KeReleaseSpinLock(v11, v10);
    }
    RequestHandle = OidRequest->RequestHandle;
    v13 = *((_QWORD *)NdisReserved + 3);
    if ( (unsigned __int8)byte_1C0085312 >= 4u )
      WPP_SF_qq(173LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, OidRequest->RequestHandle, OidRequest);
    if ( v13 )
    {
      *(_BYTE *)(v13 + 232) = OidRequest->SupportedRevision;
      *(_DWORD *)(v13 + 152) = *((_DWORD *)NdisReserved + 20);
    }
    ExFreePoolWithTag(OidRequest, 0);
    if ( (unsigned __int8)byte_1C0085312 >= 4u )
      WPP_SF_qq(174LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, RequestHandle, 0LL);
    NdisReserved = (UCHAR *)(v9 + 72);
    goto LABEL_20;
  }
  if ( (unsigned __int8)byte_1C0085312 >= 2u )
    WPP_SF_(41LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids);
}
