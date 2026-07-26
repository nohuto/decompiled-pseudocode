/*
 * XREFs of ndisFIndicateStatusInternal @ 0x1C001C0D0
 * Callers:
 *     ndisFIndicateStatusWrapper @ 0x1C001C0C0 (ndisFIndicateStatusWrapper.c)
 *     ndisFIndicateStatusToFilter @ 0x1C001C730 (ndisFIndicateStatusToFilter.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C0054AD0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C001290C (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateOffloadChange @ 0x1C00163C8 (ndisFIndicateOffloadChange.c)
 *     ndisMAllocateMiniportOffload @ 0x1C0017208 (ndisMAllocateMiniportOffload.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C001C5C8 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     ndisFIndicateStatusToFilter @ 0x1C001C730 (ndisFIndicateStatusToFilter.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001C7AC (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001D9A4 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C0023F44 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0040160 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisIfUpdateL2MtuSize @ 0x1C0040204 (ndisIfUpdateL2MtuSize.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C00459AC (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C0045A44 (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C0045A8C (ndisFilterIndicateWoLPatternReject.c)
 *     NdisMSleep @ 0x1C00AAAA0 (NdisMSleep.c)
 */

void __fastcall ndisFIndicateStatusInternal(__int64 a1, __int64 a2)
{
  BOOL v2; // ebx
  int v3; // r12d
  int v4; // r13d
  __int64 v5; // r14
  _QWORD *v7; // rdi
  char v9; // al
  KIRQL v10; // dl
  __int64 v11; // r8
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v13; // rbx
  KSPIN_LOCK *v14; // r12
  KIRQL v15; // al
  unsigned int v16; // r8d
  KIRQL v17; // dl
  unsigned int v18; // eax
  char v19; // bl
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  char v26; // al
  char v27; // al
  bool v28; // zf
  KIRQL NewIrql[4]; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v30; // [rsp+24h] [rbp-4Ch]
  BOOL v31; // [rsp+28h] [rbp-48h]
  char v32; // [rsp+2Ch] [rbp-44h]
  unsigned int i; // [rsp+30h] [rbp-40h]
  int v34; // [rsp+34h] [rbp-3Ch]
  _QWORD v35[5]; // [rsp+38h] [rbp-38h] BYREF

  LOBYTE(v3) = 0;
  v4 = *(_DWORD *)(a2 + 20);
  LOBYTE(v2) = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD **)(a2 + 48);
  v30 = *(_DWORD *)(a2 + 56);
  v31 = v2;
  v34 = v3;
  v32 = 0;
  if ( v4 == 1073873072 )
  {
    if ( *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(a2 + 8) != DriverEntry )
      return;
    ndisIfUpdateCurrentMacAddress(*(_QWORD *)(a1 + 832), v7);
  }
  if ( v4 != 1073873073 )
    goto LABEL_3;
  if ( *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(a2 + 8) == DriverEntry )
  {
    ndisIfUpdateL2MtuSize(*(_QWORD *)(a1 + 832), **(unsigned int **)(a2 + 48));
LABEL_3:
    memset(v35, 0, sizeof(v35));
    LODWORD(v35[1]) = *(_DWORD *)(a1 + 384);
    v35[2] = *(_QWORD *)(a1 + 392);
    v35[3] = *(_QWORD *)(a1 + 400);
    v35[4] = *(_QWORD *)(a1 + 408);
    LODWORD(v35[0]) = 2621824;
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
    *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 160) = 2100574;
    if ( v4 == 1073807372 )
    {
      HIDWORD(v35[0]) = 2;
      v9 = 1;
    }
    else
    {
      v9 = v32;
    }
    if ( v4 == 1073807371 )
    {
      HIDWORD(v35[0]) = 1;
      v9 = 1;
    }
    if ( v9 )
    {
      *(_DWORD *)(a2 + 20) = 1073807383;
      *(_QWORD *)(a2 + 48) = v35;
      v7 = v35;
      v4 = 1073807383;
      *(_DWORD *)(a2 + 56) = 40;
      v30 = 40;
    }
    if ( v4 == 1073807383 )
    {
      v20 = *(_DWORD *)(a1 + 380);
      v21 = *((_DWORD *)v7 + 1);
      if ( v20 != v21 )
      {
        if ( v21 == 1 )
        {
          LOBYTE(v3) = 1;
          v34 = v3;
        }
        else
        {
          v31 = v20 == 1;
        }
      }
      *(_DWORD *)(a1 + 380) = v21;
      *(_DWORD *)(a1 + 384) = *((_DWORD *)v7 + 2);
      *(_QWORD *)(a1 + 392) = v7[2];
      *(_QWORD *)(a1 + 400) = v7[3];
      *(_DWORD *)(a1 + 408) = *((_DWORD *)v7 + 8);
      *(_DWORD *)(a1 + 412) = *((_DWORD *)v7 + 9);
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 1220LL) = v21;
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 1224LL) = *(_DWORD *)(a1 + 384);
      *(_QWORD *)(*(_QWORD *)(a1 + 832) + 1208LL) = *(_QWORD *)(a1 + 400);
      *(_QWORD *)(*(_QWORD *)(a1 + 832) + 1200LL) = *(_QWORD *)(a1 + 392);
    }
    v10 = NewIrql[0];
    *(_QWORD *)(a1 + 152) = 0LL;
    *(_DWORD *)(a1 + 160) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 144), v10);
    LOBYTE(v11) = 8;
    HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(v5, a1, v11);
    v13 = HigherFilterWithPnpRef;
    if ( HigherFilterWithPnpRef )
    {
      v14 = (KSPIN_LOCK *)(HigherFilterWithPnpRef + 144);
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(HigherFilterWithPnpRef + 144));
      *(_QWORD *)(v13 + 152) = KeGetCurrentThread();
      NewIrql[0] = v15;
      while ( 1 )
      {
        *(_DWORD *)(v13 + 160) = 2100643;
        if ( (*(_DWORD *)(v13 + 56) & 0x2000) == 0 )
          break;
        *(_QWORD *)(v13 + 152) = 0LL;
        *(_DWORD *)(v13 + 160) = 0;
        KeReleaseSpinLock(v14, NewIrql[0]);
        if ( KeGetCurrentIrql() == 2 )
        {
          for ( i = 0; i < 0x32; ++i )
            ;
        }
        else
        {
          NdisMSleep(0x32u);
        }
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v14);
        *(_QWORD *)(v13 + 152) = KeGetCurrentThread();
      }
      *(_DWORD *)(v13 + 56) |= 0x2000u;
      *(_QWORD *)(v13 + 152) = 0LL;
      *(_DWORD *)(v13 + 160) = 0;
      KeReleaseSpinLockFromDpcLevel(v14);
      if ( v4 == 1073807383 )
      {
        if ( !v7 )
          goto LABEL_20;
        v16 = v30;
        if ( v30 < 0x28 )
          goto LABEL_20;
        v24 = *(_DWORD *)(v13 + 344);
        v25 = *((_DWORD *)v7 + 1);
        if ( v24 != v25 )
        {
          if ( v25 == 1 )
          {
            LOBYTE(v34) = 1;
          }
          else
          {
            v26 = v31;
            if ( v24 == 1 )
              v26 = 1;
            LOBYTE(v31) = v26;
          }
        }
        *(_DWORD *)(v13 + 344) = v25;
        *(_DWORD *)(v13 + 348) = *((_DWORD *)v7 + 2);
        *(_QWORD *)(v13 + 360) = v7[3];
        *(_QWORD *)(v13 + 352) = v7[2];
        *(_DWORD *)(v13 + 368) = *((_DWORD *)v7 + 8);
        *(_DWORD *)(v13 + 372) = *((_DWORD *)v7 + 9);
      }
      else
      {
        v16 = v30;
      }
      if ( v4 == 1073872902 )
      {
        v27 = ndisFIndicateOffloadChange(v13, v7, v16);
      }
      else
      {
        if ( v4 == 1073938515 )
          ndisFilterIndicatePMCapabilities(v13, a2);
        if ( v4 == 1073938513 )
        {
          v27 = ndisFilterIndicateWoLPatternReject(v13, a2);
        }
        else
        {
          if ( v4 != 1073938514 )
            goto LABEL_20;
          v27 = ndisFilterIndicatePMOffloadReject(v13, a2);
        }
      }
      if ( !v27 )
      {
LABEL_24:
        KeAcquireSpinLockAtDpcLevel(v14);
        v17 = NewIrql[0];
        *(_DWORD *)(v13 + 56) &= ~0x2000u;
        *(_QWORD *)(v13 + 152) = 0LL;
        *(_DWORD *)(v13 + 160) = 0;
        KeReleaseSpinLock(v14, v17);
        ndisDereferenceRef((PKSPIN_LOCK)(v13 + 312));
        return;
      }
LABEL_20:
      ndisFIndicateStatusToFilter(v13, a2);
      if ( v31 )
        ndisSwapFilterHandlersForMediaDisconnect(v5, a1, v13);
      if ( (_BYTE)v34 )
        ndisRestoreFilterHandlersForMediaDisconnect(v5, a1, v13);
      goto LABEL_24;
    }
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v5, NewIrql);
    v18 = v30;
    if ( v4 == 1073807383 && v7 && v30 >= 0x28 )
    {
      v22 = *(_DWORD *)(v5 + 480);
      v23 = *((_DWORD *)v7 + 1);
      if ( v22 == v23 )
      {
        v18 = v30;
      }
      else
      {
        v28 = v22 == 1;
        v18 = v30;
        if ( v28 )
        {
          v19 = 1;
LABEL_28:
          *(_DWORD *)(a2 + 24) |= 2u;
          if ( v4 != 1073872902 )
          {
LABEL_29:
            ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v5, a2);
            if ( v19 )
              ndisSwapFilterHandlersForMediaDisconnect(v5, a1, 0LL);
            if ( (_BYTE)v3 )
              ndisRestoreFilterHandlersForMediaDisconnect(v5, a1, 0LL);
            goto LABEL_33;
          }
          if ( v18 >= 0x70 && *(_BYTE *)v7 == 0xA7 && *((_WORD *)v7 + 1) >= 0x70u && *((_BYTE *)v7 + 1) )
          {
            if ( *(_QWORD *)(v5 + 4152) )
              goto LABEL_29;
            ndisMAllocateMiniportOffload(v5);
          }
LABEL_33:
          ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v5, NewIrql[0]);
          return;
        }
        if ( v23 == 1 )
          LOBYTE(v3) = 1;
      }
    }
    v19 = v31;
    goto LABEL_28;
  }
}
