/*
 * XREFs of NdisMCmRequest @ 0x1C00F9160
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@H@Z @ 0x1C006E4C8 (-NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@H@Z.c)
 *     NdisCoRequestComplete @ 0x1C00F8A10 (NdisCoRequestComplete.c)
 *     NdisMCmOidRequest @ 0x1C00F9070 (NdisMCmOidRequest.c)
 *     ndisDereferenceAf @ 0x1C00F9B78 (ndisDereferenceAf.c)
 *     ndisReferenceAf @ 0x1C00F9E4C (ndisReferenceAf.c)
 */

NDIS_STATUS __stdcall NdisMCmRequest(
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PNDIS_REQUEST NdisRequest)
{
  KIRQL v8; // al
  KSPIN_LOCK *v9; // rcx
  KIRQL v10; // dl
  NDIS_STATUS v11; // ebp
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 (__fastcall *v14)(__int64, __int64, __int64, PNDIS_REQUEST); // rbp
  KIRQL v15; // al
  unsigned int v16; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v18; // rsi
  _NDIS_REQUEST_TYPE RequestType; // ecx
  __int64 v21; // [rsp+60h] [rbp+8h]

  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x34u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, NdisAfHandle);
  if ( NdisRequest->DATA.QUERY_INFORMATION.Oid == -33554422 && NdisRequest->RequestType == NdisRequestSetInformation )
  {
    if ( (unsigned __int8)ndisReferenceAf(NdisAfHandle) )
    {
      if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
      {
        v12 = 0LL;
        v13 = 0LL;
        memset(NdisRequest->NdisReserved, 0, 0x20uLL);
        v14 = (__int64 (__fastcall *)(__int64, __int64, __int64, PNDIS_REQUEST))*((_QWORD *)NdisAfHandle + 10);
        v21 = *((_QWORD *)NdisAfHandle + 47);
        *(_QWORD *)&NdisRequest->NdisReserved[16] = *((_QWORD *)NdisAfHandle + 6);
        *(_QWORD *)NdisRequest->NdisReserved = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 3) + 128LL);
        if ( NdisVcHandle )
        {
          *(_QWORD *)&NdisRequest->NdisReserved[8] = *((_QWORD *)NdisVcHandle + 18);
          v12 = *((_QWORD *)NdisVcHandle + 3);
        }
        if ( NdisPartyHandle )
        {
          *(_QWORD *)&NdisRequest->NdisReserved[24] = *((_QWORD *)NdisPartyHandle + 1);
          v13 = *((_QWORD *)NdisPartyHandle + 2);
        }
        if ( v14 )
        {
          v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
          v9 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
          v10 = v15;
          if ( (*((_DWORD *)NdisAfHandle + 2) & 0x40000000) == 0 )
          {
            KeReleaseSpinLock(v9, v15);
            v16 = v14(v21, v12, v13, NdisRequest);
            v11 = v16;
            if ( v16 == 259 )
              goto LABEL_30;
            NdisCoRequestComplete(v16, NdisAfHandle, NdisVcHandle, NdisPartyHandle, NdisRequest);
            goto LABEL_21;
          }
LABEL_8:
          *((_BYTE *)NdisAfHandle + 592) = 1;
          *((_QWORD *)NdisAfHandle + 73) = NdisRequest;
          KeReleaseSpinLock(v9, v10);
LABEL_21:
          v11 = 259;
          goto LABEL_30;
        }
        v11 = -1073741637;
      }
      else
      {
        *((_QWORD *)NdisAfHandle + 50) = NdisRequest;
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
        v9 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
        v10 = v8;
        if ( (*((_DWORD *)NdisAfHandle + 2) & 0x40000000) != 0 )
          goto LABEL_8;
        KeReleaseSpinLock(v9, v8);
        v11 = (*((__int64 (__fastcall **)(_QWORD))NdisAfHandle + 45))(*((_QWORD *)NdisAfHandle + 47));
        if ( v11 == 259 )
          goto LABEL_30;
        *((_QWORD *)NdisAfHandle + 50) = 0LL;
      }
      ndisDereferenceAf(NdisAfHandle);
      goto LABEL_30;
    }
    v11 = -1073741823;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, 0x6572444Eu);
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xF8uLL);
      *v18 = 16253334;
      v18[1] = NdisRequest->RequestType;
      RequestType = NdisRequest->RequestType;
      if ( RequestType == NdisRequestQueryInformation || (unsigned int)(RequestType - 1) <= 1 )
      {
        v18[8] = NdisRequest->DATA.QUERY_INFORMATION.Oid;
        *((_QWORD *)v18 + 5) = NdisRequest->DATA.QUERY_INFORMATION.InformationBuffer;
        v18[12] = NdisRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
        v18[13] = NdisRequest->DATA.QUERY_INFORMATION.BytesWritten;
        v18[14] = NdisRequest->DATA.QUERY_INFORMATION.BytesNeeded;
      }
      *((_QWORD *)v18 + 13) = 0LL;
      *((_QWORD *)v18 + 12) = NdisRequest;
      v11 = NdisMCmOidRequest(NdisAfHandle, NdisVcHandle, NdisPartyHandle, (PNDIS_OID_REQUEST)v18);
      if ( v11 != 259 )
        ExFreePoolWithTag(v18, 0);
    }
    else
    {
      v11 = -1073741670;
    }
  }
LABEL_30:
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x35u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, NdisAfHandle, NdisRequest);
  NdisTraceLoggingDeprecationCandidate((const struct _TlgProvider_t *)8);
  return v11;
}
