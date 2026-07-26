/*
 * XREFs of NdisCmRegisterAddressFamily @ 0x1C00ECC90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B25C (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisQueueWorkItem @ 0x1C0014314 (ndisQueueWorkItem.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AD14 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0040C54 (WPP_SF_qqqL.c)
 *     ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@PEAU_NDIS_MINIPORT_BLOCK@@H@Z @ 0x1C006D9E8 (-NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@PEAU_NDIS_MINIPORT_BLOCK.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisCreateNotifyQueue @ 0x1C00ED190 (ndisCreateNotifyQueue.c)
 */

NDIS_STATUS __stdcall NdisCmRegisterAddressFamily(
        NDIS_HANDLE NdisBindingHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        PNDIS_CALL_MANAGER_CHARACTERISTICS CmCharacteristics,
        UINT SizeOfCmCharacteristics)
{
  __int64 v5; // rdi
  __int64 v7; // rbp
  KIRQL v10; // al
  unsigned int v11; // ebx
  __int64 **i; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *PoolWithTag; // r14
  __int64 v15; // rcx
  const GUID *v16; // r9
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  KIRQL NewIrql; // [rsp+70h] [rbp+8h]

  v18 = 0LL;
  v5 = *((_QWORD *)NdisBindingHandle + 2);
  v7 = *((_QWORD *)NdisBindingHandle + 3);
  if ( (unsigned __int8)byte_1C008371A >= 4u )
    WPP_SF_qqq(0xAu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, v5, v7, NdisBindingHandle);
  ndisReferencePackage((__int64)&ndisPkgs);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  NewIrql = v10;
  *(_DWORD *)(v5 + 1856) = 1573002;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
  *((_DWORD *)NdisBindingHandle + 56) |= 0x20000u;
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) != 0 )
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
    v11 = -1073676286;
    goto LABEL_26;
  }
  ndisMReferenceOpen((__int64)NdisBindingHandle, 0xCu);
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
  if ( (*(_DWORD *)(v5 + 120) & 0x20000) == 0 )
  {
LABEL_24:
    v11 = -1073676283;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(v7 + 56) >= 5u )
  {
    if ( SizeOfCmCharacteristics >= 0x88 && CmCharacteristics->MajorVersion >= 5u )
    {
      for ( i = *(__int64 ***)(v5 + 512); i; i = (__int64 **)*i )
      {
        v13 = (unsigned __int64)i[2] - *(_QWORD *)&AddressFamily->AddressFamily;
        if ( !v13 )
          v13 = *((unsigned int *)i + 6) - (unsigned __int64)AddressFamily->MinorVersion;
        if ( !v13 )
        {
          v11 = -1073741823;
          goto LABEL_25;
        }
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x6F63444Eu);
      if ( PoolWithTag )
      {
        v11 = ndisCreateNotifyQueue(v5, 0LL, AddressFamily, &v18);
        if ( v11 )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        else
        {
          v15 = v18;
          PoolWithTag[2] = *(_QWORD *)&AddressFamily->AddressFamily;
          *((_DWORD *)PoolWithTag + 6) = AddressFamily->MinorVersion;
          *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)&CmCharacteristics->MajorVersion;
          *((_OWORD *)PoolWithTag + 3) = *(_OWORD *)&CmCharacteristics->CmDeleteVcHandler;
          *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)&CmCharacteristics->CmCloseAfHandler;
          *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)&CmCharacteristics->CmDeregisterSapHandler;
          *((_OWORD *)PoolWithTag + 6) = *(_OWORD *)&CmCharacteristics->CmCloseCallHandler;
          *((_OWORD *)PoolWithTag + 7) = *(_OWORD *)&CmCharacteristics->CmAddPartyHandler;
          *((_OWORD *)PoolWithTag + 8) = *(_OWORD *)&CmCharacteristics->CmActivateVcCompleteHandler;
          *((_OWORD *)PoolWithTag + 9) = *(_OWORD *)&CmCharacteristics->CmModifyCallQoSHandler;
          PoolWithTag[20] = CmCharacteristics->CmRequestCompleteHandler;
          PoolWithTag[1] = NdisBindingHandle;
          *PoolWithTag = *(_QWORD *)(v5 + 512);
          *((_DWORD *)PoolWithTag + 78) = 5;
          *(_QWORD *)(v5 + 512) = PoolWithTag;
          *((_QWORD *)NdisBindingHandle + 129) = CmCharacteristics->CmCreateVcHandler;
          *((_QWORD *)NdisBindingHandle + 130) = CmCharacteristics->CmDeleteVcHandler;
          *((_QWORD *)NdisBindingHandle + 131) = CmCharacteristics->CmActivateVcCompleteHandler;
          *((_QWORD *)NdisBindingHandle + 132) = CmCharacteristics->CmDeactivateVcCompleteHandler;
          *((_QWORD *)NdisBindingHandle + 133) = CmCharacteristics->CmRequestCompleteHandler;
          *((_QWORD *)NdisBindingHandle + 142) = ndisCoCompleteOidRequestToRequest;
          if ( v15 )
            ndisQueueWorkItem((PLIST_ENTRY)(v15 + 8));
        }
      }
      else
      {
        v11 = -1073741670;
      }
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v11 = -1073676284;
LABEL_25:
  ndisMDereferenceOpenLocked((__int64)NdisBindingHandle, 0xCu);
LABEL_26:
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), NewIrql);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C008371A >= 4u )
    WPP_SF_qqqL(0xBu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, v5, v7, NdisBindingHandle, v11);
  NdisTraceLoggingDeprecationCandidate((const struct _TlgProvider_t *)5, v5, (const GUID *)v11, v16);
  return v11;
}
