/*
 * XREFs of NdisClAddParty @ 0x1C00F6000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@H@Z @ 0x1C007282C (-NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@H@Z.c)
 *     NdisCmAddPartyComplete @ 0x1C00F68D0 (NdisCmAddPartyComplete.c)
 *     ndisReferenceVcPtr @ 0x1C00F9E8C (ndisReferenceVcPtr.c)
 */

NDIS_STATUS __stdcall NdisClAddParty(
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE ProtocolPartyContext,
        PCO_CALL_PARAMETERS CallParameters,
        PNDIS_HANDLE NdisPartyHandle)
{
  NDIS_STATUS v7; // ebx
  NDIS_HANDLE *PoolWithTag; // rax
  NDIS_HANDLE *v9; // rdi
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  NDIS_STATUS v14; // eax

  *NdisPartyHandle = 0LL;
  if ( (unsigned __int8)ndisReferenceVcPtr(NdisVcHandle, ProtocolPartyContext) )
  {
    PoolWithTag = (NDIS_HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6F63444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      v9[2] = ProtocolPartyContext;
      *v9 = NdisVcHandle;
      v10 = *((_QWORD *)NdisVcHandle + 8);
      if ( *(_DWORD *)(v10 + 396) >= 6u )
      {
        v9[3] = *(NDIS_HANDLE *)(v10 + 344);
        v11 = *(void **)(*((_QWORD *)NdisVcHandle + 8) + 312LL);
      }
      else
      {
        v9[3] = *(NDIS_HANDLE *)(v10 + 192);
        v11 = *(void **)(*((_QWORD *)NdisVcHandle + 8) + 160LL);
      }
      v9[4] = v11;
      v12 = *((_QWORD *)NdisVcHandle + 8);
      if ( *(_DWORD *)(v12 + 392) >= 6u )
        v13 = *(_QWORD *)(v12 + 32);
      else
        v13 = *(_QWORD *)(v12 + 24);
      v14 = (*(__int64 (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS, NDIS_HANDLE *, NDIS_HANDLE *))(v13 + 80))(
              *((_QWORD *)NdisVcHandle + 18),
              CallParameters,
              v9,
              v9 + 1);
      v7 = v14;
      if ( v14 != 259 )
      {
        NdisCmAddPartyComplete(v14, v9, v9[1], CallParameters);
        v7 = 259;
      }
    }
    else
    {
      v7 = -1073741670;
    }
  }
  else
  {
    v7 = -1073741823;
  }
  NdisTraceLoggingDeprecationCandidate((const struct _TlgProvider_t *)7);
  return v7;
}
