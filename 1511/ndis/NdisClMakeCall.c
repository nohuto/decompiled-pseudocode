/*
 * XREFs of NdisClMakeCall @ 0x1C00F0520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     NdisCmMakeCallComplete @ 0x1C00F0E50 (NdisCmMakeCallComplete.c)
 *     ndisDereferenceAf @ 0x1C00F3B78 (ndisDereferenceAf.c)
 *     ndisDereferenceVcPtr @ 0x1C00F3C4C (ndisDereferenceVcPtr.c)
 *     ndisReferenceAf @ 0x1C00F3E4C (ndisReferenceAf.c)
 *     ndisReferenceVcPtr @ 0x1C00F3EA0 (ndisReferenceVcPtr.c)
 */

NDIS_STATUS __stdcall NdisClMakeCall(
        NDIS_HANDLE NdisVcHandle,
        PCO_CALL_PARAMETERS CallParameters,
        NDIS_HANDLE ProtocolPartyContext,
        PNDIS_HANDLE NdisPartyHandle)
{
  __int64 v4; // rdi
  NDIS_HANDLE *v6; // rsi
  __int64 v10; // rdx
  NDIS_STATUS result; // eax
  NDIS_HANDLE *PoolWithTag; // rax
  void *v13; // rax
  KIRQL v14; // al
  __int64 v15; // rax
  NDIS_HANDLE CallMgrPartyContext; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)NdisVcHandle + 8);
  v6 = 0LL;
  CallMgrPartyContext = 0LL;
  if ( !(unsigned __int8)ndisReferenceAf(v4) )
    return -1073741823;
  if ( !(unsigned __int8)ndisReferenceVcPtr(NdisVcHandle, v10) )
  {
    ndisDereferenceAf((PVOID)v4);
    return -1073741823;
  }
  if ( NdisPartyHandle )
  {
    *NdisPartyHandle = 0LL;
    PoolWithTag = (NDIS_HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6F63444Eu);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
      ndisDereferenceAf((PVOID)v4);
      ndisDereferenceVcPtr(NdisVcHandle);
      return -1073741670;
    }
    memset(PoolWithTag, 0, 0x28uLL);
    *v6 = NdisVcHandle;
    v6[2] = ProtocolPartyContext;
    if ( *(_DWORD *)(v4 + 396) >= 6u )
    {
      v6[3] = *(NDIS_HANDLE *)(v4 + 344);
      v13 = *(void **)(v4 + 312);
    }
    else
    {
      v6[3] = *(NDIS_HANDLE *)(v4 + 192);
      v13 = *(void **)(v4 + 160);
    }
    v6[4] = v13;
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  *((_DWORD *)NdisVcHandle + 1) |= 0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v14);
  if ( *(_DWORD *)(v4 + 392) >= 6u )
    v15 = *(_QWORD *)(v4 + 32);
  else
    v15 = *(_QWORD *)(v4 + 24);
  result = (*(__int64 (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS, NDIS_HANDLE *, NDIS_HANDLE *))(v15 + 56))(
             *((_QWORD *)NdisVcHandle + 18),
             CallParameters,
             v6,
             &CallMgrPartyContext);
  if ( result != 259 )
  {
    NdisCmMakeCallComplete(result, NdisVcHandle, v6, CallMgrPartyContext, CallParameters);
    return 259;
  }
  return result;
}
