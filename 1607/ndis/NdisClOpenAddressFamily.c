/*
 * XREFs of NdisClOpenAddressFamily @ 0x1C00F3440
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0016800 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017670 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BBF8 (ndisReferenceMiniportNoCheck.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@PEAU_NDIS_MINIPORT_BLOCK@@H@Z @ 0x1C00728CC (-NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@PEAU_NDIS_MINIPORT_BLOCK.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00F7040 (NdisCmOpenAddressFamilyComplete.c)
 */

__int64 __fastcall NdisClOpenAddressFamily(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  __int64 v7; // r14
  char v8; // r12
  char v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbp
  KIRQL v12; // al
  KIRQL v13; // di
  unsigned int v14; // ebp
  KIRQL v15; // r13
  __int64 *v16; // rdi
  char *PoolWithTag; // rax
  char *v18; // rbx
  bool v19; // zf
  KIRQL v20; // al
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64, _DWORD *, char *, char *); // rax
  NDIS_STATUS v23; // eax
  KIRQL v24; // al
  KIRQL v25; // bl
  KIRQL v26; // al
  KIRQL v27; // bl
  char v29; // [rsp+30h] [rbp-58h]
  char v30; // [rsp+90h] [rbp+8h]

  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v29 = 0;
  v30 = 0;
  *a6 = 0LL;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(a1 + 24);
  ndisReferencePackage((__int64)&ndisPkgs);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 232));
  *(_DWORD *)(a1 + 224) |= 0x40000u;
  v13 = v12;
  if ( (*(_DWORD *)(a1 + 224) & 0x18000) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 232), v12);
    v14 = -1073676286;
    goto LABEL_38;
  }
  ndisMReferenceOpen(a1);
  v8 = 1;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 376), 1u);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 232), v13);
  if ( *(_BYTE *)(v10 + 32) >= 5u
    && (*(_DWORD *)(v10 + 120) & 0x20000) != 0
    && *(_BYTE *)(v11 + 56) >= 5u
    && a5 >= 0x98
    && *(_BYTE *)a4 >= 5u )
  {
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
    v16 = *(__int64 **)(v10 + 512);
    *(_QWORD *)(v10 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v10 + 1856) = 1573624;
    if ( !v16 )
    {
LABEL_11:
      *(_QWORD *)(v10 + 520) = 0LL;
      *(_DWORD *)(v10 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v15);
      v14 = -1073741823;
      v9 = 0;
      goto LABEL_38;
    }
    while ( *((_DWORD *)v16 + 4) != *a2 )
    {
      v16 = (__int64 *)*v16;
      if ( !v16 )
        goto LABEL_11;
    }
    v7 = v16[1];
    if ( v7 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 232));
      if ( (*(_DWORD *)(v7 + 224) & 0x18000) != 0 )
      {
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v7 + 232));
        *(_QWORD *)(v10 + 520) = 0LL;
        *(_DWORD *)(v10 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v15);
        v14 = -1073676286;
LABEL_15:
        v9 = v30;
        goto LABEL_38;
      }
      ndisMReferenceOpen(v7);
      _InterlockedAdd((volatile signed __int32 *)(v7 + 376), 1u);
      v29 = 1;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v7 + 232));
    }
    else
    {
      if ( (*(_DWORD *)(v10 + 124) & 0x4000) != 0 )
      {
        *(_QWORD *)(v10 + 520) = 0LL;
        *(_DWORD *)(v10 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v15);
        v14 = -1073741823;
        goto LABEL_15;
      }
      ndisReferenceMiniportNoCheck(v10, 0x51u);
      v30 = 1;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x258uLL, 0x6F63444Eu);
    v18 = PoolWithTag;
    if ( !PoolWithTag )
    {
      *(_QWORD *)(v10 + 520) = 0LL;
      *(_DWORD *)(v10 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v15);
      v14 = -1073741670;
      goto LABEL_15;
    }
    memset(PoolWithTag, 0, 0x258uLL);
    *((_DWORD *)v18 + 3) = 1;
    v19 = v16[1] == 0;
    *((_QWORD *)v18 + 2) = v10;
    *((_QWORD *)v18 + 46) = a1;
    *((_DWORD *)v18 + 2) = v19;
    v7 = v16[1];
    *((_QWORD *)v18 + 5) = v7;
    *((_QWORD *)v18 + 47) = a3;
    *((_DWORD *)v18 + 98) = *((_DWORD *)v16 + 78);
    *((_DWORD *)v18 + 99) = 5;
    *(_QWORD *)(v10 + 520) = 0LL;
    *(_DWORD *)(v10 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v15);
    KeInitializeSpinLock((PKSPIN_LOCK)v18 + 48);
    if ( *((_DWORD *)v18 + 98) >= 6u )
      *((_QWORD *)v18 + 4) = v16 + 21;
    else
      *((_QWORD *)v18 + 3) = v16 + 4;
    *(_OWORD *)(v18 + 56) = *(_OWORD *)a4;
    *(_OWORD *)(v18 + 72) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(v18 + 88) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(v18 + 104) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v18 + 120) = *(_OWORD *)(a4 + 64);
    *(_OWORD *)(v18 + 136) = *(_OWORD *)(a4 + 80);
    *(_OWORD *)(v18 + 152) = *(_OWORD *)(a4 + 96);
    *(_OWORD *)(v18 + 168) = *(_OWORD *)(a4 + 112);
    *(_OWORD *)(v18 + 184) = *(_OWORD *)(a4 + 128);
    *((_QWORD *)v18 + 25) = *(_QWORD *)(a4 + 144);
    *(_QWORD *)(a1 + 1040) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a1 + 1048) = *(_QWORD *)(a4 + 16);
    *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a1 + 1144) = ndisCoCompleteOidRequestToRequest;
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v18 + 48);
    *((_DWORD *)v18 + 2) |= 0x40000000u;
    KeReleaseSpinLock((PKSPIN_LOCK)v18 + 48, v20);
    if ( *((_DWORD *)v16 + 78) >= 6u )
    {
      if ( v7 )
        v21 = *(_QWORD *)(v7 + 32);
      else
        v21 = *(_QWORD *)(v10 + 24);
      v22 = (__int64 (__fastcall *)(__int64, _DWORD *, char *, char *))v16[24];
    }
    else
    {
      if ( v7 )
        v21 = *(_QWORD *)(v7 + 32);
      else
        v21 = *(_QWORD *)(v10 + 24);
      v22 = (__int64 (__fastcall *)(__int64, _DWORD *, char *, char *))v16[7];
    }
    v23 = v22(v21, a2, v18, v18 + 48);
    v14 = v23;
    if ( v23 != 259 )
    {
      NdisCmOpenAddressFamilyComplete(v23, v18, *((NDIS_HANDLE *)v18 + 6));
      v14 = 259;
    }
    v9 = 0;
    v29 = 0;
    v8 = 0;
  }
  else
  {
    v14 = -1073676284;
  }
LABEL_38:
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v8 )
  {
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
    *(_QWORD *)(v10 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v10 + 1856) = 1573796;
    v25 = v24;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 376));
    ndisMDereferenceOpenLocked(a1, 0xFu);
    *(_QWORD *)(v10 + 520) = 0LL;
    *(_DWORD *)(v10 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v25);
  }
  if ( v7 && v29 )
  {
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
    *(_QWORD *)(v10 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v10 + 1856) = 1573804;
    v27 = v26;
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 376));
    ndisMDereferenceOpenLocked(v7, 0x10u);
    *(_QWORD *)(v10 + 520) = 0LL;
    *(_DWORD *)(v10 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), v27);
  }
  if ( v9 )
    ndisDereferenceMiniport(v10);
  NdisTraceLoggingDeprecationCandidate((const struct _TlgProvider_t *)6);
  return v14;
}
