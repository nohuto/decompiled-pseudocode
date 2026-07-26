/*
 * XREFs of NdisClOpenAddressFamilyEx @ 0x1C004C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B25C (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AD14 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024BB8 (ndisReferenceMiniportNoCheck.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00F1040 (NdisCmOpenAddressFamilyComplete.c)
 */

NDIS_STATUS __stdcall NdisClOpenAddressFamilyEx(
        NDIS_HANDLE NdisBindingHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        NDIS_HANDLE ClientAfContext,
        PNDIS_HANDLE NdisAfHandle)
{
  __int64 v5; // r14
  char v6; // r12
  __int64 v7; // rsi
  char v8; // r13
  __int64 v9; // rdi
  KIRQL v10; // al
  KIRQL v11; // bp
  NDIS_STATUS v12; // ebp
  KIRQL v13; // r13
  __int64 *v14; // rdi
  char *PoolWithTag; // rax
  char *v16; // rbx
  bool v17; // zf
  KIRQL v18; // al
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(__int64, PCO_ADDRESS_FAMILY, char *, char *); // rax
  NDIS_STATUS v21; // eax
  KIRQL v22; // al
  KIRQL v23; // bl
  KIRQL v24; // al
  KIRQL v25; // bl
  __int64 v27; // [rsp+30h] [rbp-58h]
  char v28; // [rsp+90h] [rbp+8h]
  char v31; // [rsp+A8h] [rbp+20h]

  v5 = 0LL;
  *NdisAfHandle = 0LL;
  v6 = 0;
  v7 = *((_QWORD *)NdisBindingHandle + 2);
  v8 = 0;
  v9 = *((_QWORD *)NdisBindingHandle + 3);
  v31 = 0;
  v28 = 0;
  ndisReferencePackage(&ndisPkgs);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisBindingHandle + 29);
  *((_DWORD *)NdisBindingHandle + 56) |= 0x40000u;
  v11 = v10;
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 29, v10);
    v12 = -1073676286;
    goto LABEL_37;
  }
  ndisMReferenceOpen((__int64)NdisBindingHandle, 0xFu);
  v6 = 1;
  _InterlockedAdd((volatile signed __int32 *)NdisBindingHandle + 94, 1u);
  KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 29, v11);
  if ( *(_BYTE *)(v7 + 32) >= 5u
    && (*(_DWORD *)(v7 + 120) & 0x20000) != 0
    && *(_BYTE *)(v9 + 56) >= 6u
    && (v27 = v9 + 472, *(_BYTE *)(v9 + 472) == 0xA6) )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
    v14 = *(__int64 **)(v7 + 512);
    *(_QWORD *)(v7 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v7 + 1856) = 1580061;
    if ( !v14 )
    {
LABEL_10:
      *(_QWORD *)(v7 + 520) = 0LL;
      *(_DWORD *)(v7 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v13);
      v12 = -1073741823;
      v8 = 0;
      goto LABEL_37;
    }
    while ( *((_DWORD *)v14 + 4) != AddressFamily->AddressFamily )
    {
      v14 = (__int64 *)*v14;
      if ( !v14 )
        goto LABEL_10;
    }
    v5 = v14[1];
    if ( v5 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 232));
      if ( (*(_DWORD *)(v5 + 224) & 0x18000) != 0 )
      {
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + 232));
        *(_QWORD *)(v7 + 520) = 0LL;
        *(_DWORD *)(v7 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v13);
        v12 = -1073676286;
LABEL_14:
        v8 = v28;
        goto LABEL_37;
      }
      ndisMReferenceOpen(v5, 0x10u);
      _InterlockedAdd((volatile signed __int32 *)(v5 + 376), 1u);
      v31 = 1;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + 232));
    }
    else
    {
      if ( (*(_DWORD *)(v7 + 124) & 0x4000) != 0 )
      {
        *(_QWORD *)(v7 + 520) = 0LL;
        *(_DWORD *)(v7 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v13);
        v12 = -1073741823;
        goto LABEL_14;
      }
      ndisReferenceMiniportNoCheck(v7, 0x4Fu);
      v28 = 1;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x258uLL, 0x6F63444Eu);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
    {
      *(_QWORD *)(v7 + 520) = 0LL;
      *(_DWORD *)(v7 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v13);
      v12 = -1073741670;
      goto LABEL_14;
    }
    memset(PoolWithTag, 0, 0x258uLL);
    *((_DWORD *)v16 + 3) = 1;
    v17 = v14[1] == 0;
    *((_QWORD *)v16 + 2) = v7;
    *((_QWORD *)v16 + 46) = NdisBindingHandle;
    *((_DWORD *)v16 + 2) = v17;
    v5 = v14[1];
    *((_QWORD *)v16 + 5) = v5;
    *((_QWORD *)v16 + 47) = ClientAfContext;
    *((_DWORD *)v16 + 98) = *((_DWORD *)v14 + 78);
    *((_DWORD *)v16 + 99) = 6;
    *(_QWORD *)(v7 + 520) = 0LL;
    *(_DWORD *)(v7 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v13);
    KeInitializeSpinLock((PKSPIN_LOCK)v16 + 48);
    if ( *((_DWORD *)v16 + 98) >= 6u )
      *((_QWORD *)v16 + 4) = v14 + 21;
    else
      *((_QWORD *)v16 + 3) = v14 + 4;
    *((_OWORD *)v16 + 13) = *(_OWORD *)v27;
    *((_OWORD *)v16 + 14) = *(_OWORD *)(v27 + 16);
    *((_OWORD *)v16 + 15) = *(_OWORD *)(v27 + 32);
    *((_OWORD *)v16 + 16) = *(_OWORD *)(v27 + 48);
    *((_OWORD *)v16 + 17) = *(_OWORD *)(v27 + 64);
    *((_OWORD *)v16 + 18) = *(_OWORD *)(v27 + 80);
    *((_OWORD *)v16 + 19) = *(_OWORD *)(v27 + 96);
    *((_OWORD *)v16 + 20) = *(_OWORD *)(v27 + 112);
    *((_OWORD *)v16 + 21) = *(_OWORD *)(v27 + 128);
    *((_OWORD *)v16 + 22) = *(_OWORD *)(v27 + 144);
    *((_QWORD *)NdisBindingHandle + 129) = *(_QWORD *)(v27 + 8);
    *((_QWORD *)NdisBindingHandle + 130) = *(_QWORD *)(v27 + 16);
    *((_QWORD *)NdisBindingHandle + 142) = *(_QWORD *)(v27 + 32);
    *((_QWORD *)NdisBindingHandle + 143) = *(_QWORD *)(v27 + 24);
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v16 + 48);
    *((_DWORD *)v16 + 2) |= 0x40000000u;
    KeReleaseSpinLock((PKSPIN_LOCK)v16 + 48, v18);
    if ( *((_DWORD *)v14 + 78) >= 6u )
    {
      if ( v5 )
        v19 = *(_QWORD *)(v5 + 32);
      else
        v19 = *(_QWORD *)(v7 + 24);
      v20 = (__int64 (__fastcall *)(__int64, PCO_ADDRESS_FAMILY, char *, char *))v14[24];
    }
    else
    {
      if ( v5 )
        v19 = *(_QWORD *)(v5 + 32);
      else
        v19 = *(_QWORD *)(v7 + 24);
      v20 = (__int64 (__fastcall *)(__int64, PCO_ADDRESS_FAMILY, char *, char *))v14[7];
    }
    v21 = v20(v19, AddressFamily, v16, v16 + 48);
    v12 = v21;
    if ( v21 != 259 )
    {
      NdisCmOpenAddressFamilyComplete(v21, v16, *((NDIS_HANDLE *)v16 + 6));
      v12 = 259;
    }
    v8 = 0;
    v31 = 0;
    v6 = 0;
  }
  else
  {
    v12 = -1073676284;
  }
LABEL_37:
  ndisDereferencePackage(&ndisPkgs);
  if ( v6 )
  {
    v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
    *(_QWORD *)(v7 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v7 + 1856) = 1580233;
    v23 = v22;
    _InterlockedDecrement((volatile signed __int32 *)NdisBindingHandle + 94);
    ndisMDereferenceOpenLocked((__int64)NdisBindingHandle, 0xFu);
    *(_QWORD *)(v7 + 520) = 0LL;
    *(_DWORD *)(v7 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v23);
  }
  if ( v5 && v31 )
  {
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
    *(_QWORD *)(v7 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v7 + 1856) = 1580241;
    v25 = v24;
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 376));
    ndisMDereferenceOpenLocked(v5, 0x10u);
    *(_QWORD *)(v7 + 520) = 0LL;
    *(_DWORD *)(v7 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v25);
  }
  if ( v8 )
    ndisDereferenceMiniport(v7, 0x4Fu);
  return v12;
}
