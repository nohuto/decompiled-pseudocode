/*
 * XREFs of NdisMCmRegisterAddressFamilyEx @ 0x1C004C610
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 */

NDIS_STATUS __stdcall NdisMCmRegisterAddressFamilyEx(
        NDIS_HANDLE MiniportAdapterHandle,
        PCO_ADDRESS_FAMILY AddressFamily)
{
  NDIS_STATUS v4; // edi
  _OWORD *v5; // rsi
  KIRQL v6; // r15
  bool v7; // zf
  __int64 **i; // rcx
  unsigned __int64 v9; // rdx
  char *PoolWithTag; // rax
  __int128 v11; // xmm1

  v4 = -1073676286;
  ndisReferencePackage(&ndisPkgs);
  v5 = (_OWORD *)(*((_QWORD *)MiniportAdapterHandle + 477) + 640LL);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  v7 = (*((_DWORD *)MiniportAdapterHandle + 30) & 0x20000) == 0;
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 1579873;
  if ( v7 )
  {
    v4 = -1073741823;
  }
  else if ( *(_BYTE *)v5 == 0xA5 )
  {
    for ( i = (__int64 **)*((_QWORD *)MiniportAdapterHandle + 64); i; i = (__int64 **)*i )
    {
      v9 = (unsigned __int64)i[2] - *(_QWORD *)&AddressFamily->AddressFamily;
      if ( !v9 )
        v9 = *((unsigned int *)i + 6) - (unsigned __int64)AddressFamily->MinorVersion;
      if ( !v9 )
      {
        v4 = -1073741823;
        goto LABEL_17;
      }
    }
    if ( ndisReferenceMiniport((__int64)MiniportAdapterHandle, 0x4Eu) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x6F63444Eu);
      if ( PoolWithTag )
      {
        *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)&AddressFamily->AddressFamily;
        *((_DWORD *)PoolWithTag + 6) = AddressFamily->MinorVersion;
        *(_OWORD *)(PoolWithTag + 168) = *v5;
        *(_OWORD *)(PoolWithTag + 184) = v5[1];
        *(_OWORD *)(PoolWithTag + 200) = v5[2];
        *(_OWORD *)(PoolWithTag + 216) = v5[3];
        *(_OWORD *)(PoolWithTag + 232) = v5[4];
        *(_OWORD *)(PoolWithTag + 248) = v5[5];
        *(_OWORD *)(PoolWithTag + 264) = v5[6];
        *(_OWORD *)(PoolWithTag + 280) = v5[7];
        v11 = v5[8];
        *((_QWORD *)PoolWithTag + 1) = 0LL;
        *(_OWORD *)(PoolWithTag + 296) = v11;
        *(_QWORD *)PoolWithTag = *((_QWORD *)MiniportAdapterHandle + 64);
        *((_DWORD *)PoolWithTag + 78) = 6;
        *((_QWORD *)MiniportAdapterHandle + 64) = PoolWithTag;
        ndisDereferenceMiniport((__int64)MiniportAdapterHandle, 0x4Eu);
        v4 = 0;
      }
      else
      {
        ndisDereferenceMiniport((__int64)MiniportAdapterHandle, 0x4Eu);
        v4 = -1073741670;
      }
    }
  }
  else
  {
    v4 = -1073676283;
  }
LABEL_17:
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v6);
  ndisDereferencePackage(&ndisPkgs);
  return v4;
}
