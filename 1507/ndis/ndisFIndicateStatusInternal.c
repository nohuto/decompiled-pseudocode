/*
 * XREFs of ndisFIndicateStatusInternal @ 0x1C0014710
 * Callers:
 *     ndisFIndicateStatusWrapper @ 0x1C0014700 (ndisFIndicateStatusWrapper.c)
 *     ndisFIndicateStatusInternal @ 0x1C0014710 (ndisFIndicateStatusInternal.c)
 *     ndisFIndicateStatusToFilter @ 0x1C0016BF0 (ndisFIndicateStatusToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C08 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C00549F0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisDereferenceWithTag @ 0x1C00030DC (ndisDereferenceWithTag.c)
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C000ED8C (ndisFreeRefCount.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0010674 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisMAllocateMiniportOffload @ 0x1C0012EC8 (ndisMAllocateMiniportOffload.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C00138FC (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateStatusInternal @ 0x1C0014710 (ndisFIndicateStatusInternal.c)
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ndisDereferenceRef @ 0x1C00172CC (ndisDereferenceRef.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0017338 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisFIndicateOffloadChange @ 0x1C0022104 (ndisFIndicateOffloadChange.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C003E928 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisIfUpdateL2MtuSize @ 0x1C003E9CC (ndisIfUpdateL2MtuSize.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C0044414 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C00444AC (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C00444F4 (ndisFilterIndicateWoLPatternReject.c)
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
 */

void __fastcall ndisFIndicateStatusInternal(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  KIRQL v6; // r9
  int v7; // eax
  char v8; // cl
  KIRQL v9; // al
  __int64 v10; // rbx
  KSPIN_LOCK *v11; // rax
  unsigned __int16 v12; // cx
  KIRQL v13; // dl
  bool v14; // zf
  int v15; // edx
  unsigned int v16; // r10d
  __int64 v17; // rax
  __int64 v18; // rbx
  KIRQL v19; // di
  int v20; // ecx
  unsigned int v21; // edx
  char v22; // bl
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  int v28; // r8d
  char v29; // al
  char v30; // dl
  char v31; // al
  KSPIN_LOCK *v32; // rsi
  KIRQL v33; // [rsp+20h] [rbp-29h]
  KIRQL v34; // [rsp+20h] [rbp-29h]
  unsigned __int8 v35; // [rsp+20h] [rbp-29h]
  bool v36; // [rsp+24h] [rbp-25h]
  unsigned int v37; // [rsp+28h] [rbp-21h]
  KIRQL v38; // [rsp+2Ch] [rbp-1Dh]
  KIRQL NewIrql; // [rsp+2Dh] [rbp-1Ch]
  int v40; // [rsp+30h] [rbp-19h]
  char v41; // [rsp+34h] [rbp-15h]
  unsigned int SpinLock; // [rsp+38h] [rbp-11h]
  unsigned int SpinLocka; // [rsp+38h] [rbp-11h]
  unsigned int SpinLockb; // [rsp+38h] [rbp-11h]
  __int64 v45; // [rsp+40h] [rbp-9h]
  __int64 v47; // [rsp+48h] [rbp-1h]
  _QWORD *v48; // [rsp+50h] [rbp+7h]
  _QWORD v49[5]; // [rsp+58h] [rbp+Fh] BYREF

  v2 = *(_DWORD *)(a2 + 20);
  v3 = a2;
  v4 = *(_QWORD **)(a2 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  v37 = *(_DWORD *)(a2 + 56);
  v36 = 0;
  v41 = 0;
  v45 = a1;
  v40 = v2;
  v48 = v4;
  if ( v2 == 1073873072 )
  {
    if ( *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(a2 + 8) != DriverEntry )
      return;
    ndisIfUpdateCurrentMacAddress(*(_QWORD *)(a1 + 832), v4);
    a1 = v45;
    v2 = 1073873072;
  }
  if ( v2 == 1073873073 )
  {
    if ( *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(v3 + 8) != DriverEntry )
      return;
    ndisIfUpdateL2MtuSize(*(_QWORD *)(a1 + 832), **(unsigned int **)(v3 + 48));
  }
  memset(v49, 0, sizeof(v49));
  LODWORD(v49[0]) = 2621824;
  LODWORD(v49[1]) = *(_DWORD *)(v45 + 384);
  v49[2] = *(_QWORD *)(v45 + 392);
  v49[3] = *(_QWORD *)(v45 + 400);
  v49[4] = *(_QWORD *)(v45 + 408);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v45 + 144));
  v7 = v40;
  *(_QWORD *)(v45 + 152) = KeGetCurrentThread();
  *(_DWORD *)(v45 + 160) = 2100564;
  if ( v40 == 1073807372 )
  {
    HIDWORD(v49[0]) = 2;
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  if ( v40 == 1073807371 )
  {
    HIDWORD(v49[0]) = 1;
    v8 = 1;
  }
  if ( v8 )
  {
    *(_DWORD *)(v3 + 20) = 1073807383;
    *(_QWORD *)(v3 + 48) = v49;
    v7 = 1073807383;
    *(_DWORD *)(v3 + 56) = 40;
    v4 = v49;
    v40 = 1073807383;
    v48 = v49;
    v37 = 40;
  }
  if ( v7 == 1073807383 )
  {
    v23 = *(_DWORD *)(v45 + 380);
    v24 = *((_DWORD *)v4 + 1);
    if ( v23 != v24 )
    {
      if ( v24 == 1 )
        v41 = 1;
      else
        v36 = v23 == 1;
    }
    *(_DWORD *)(v45 + 380) = v24;
    *(_DWORD *)(v45 + 384) = *((_DWORD *)v4 + 2);
    *(_QWORD *)(v45 + 392) = v4[2];
    *(_QWORD *)(v45 + 400) = v4[3];
    *(_DWORD *)(v45 + 408) = *((_DWORD *)v4 + 8);
    *(_DWORD *)(v45 + 412) = *((_DWORD *)v4 + 9);
    *(_DWORD *)(*(_QWORD *)(v45 + 832) + 1220LL) = v24;
    *(_DWORD *)(*(_QWORD *)(v45 + 832) + 1224LL) = *(_DWORD *)(v45 + 384);
    *(_QWORD *)(*(_QWORD *)(v45 + 832) + 1208LL) = *(_QWORD *)(v45 + 400);
    *(_QWORD *)(*(_QWORD *)(v45 + 832) + 1200LL) = *(_QWORD *)(v45 + 392);
  }
  *(_QWORD *)(v45 + 152) = 0LL;
  *(_DWORD *)(v45 + 160) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v45 + 144), v6);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 1856) = 2105754;
  v38 = v9;
  v10 = *(_QWORD *)(v45 + 120);
  if ( v10 )
  {
    do
    {
      v33 = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 312));
      v11 = (KSPIN_LOCK *)(v10 + 312);
      if ( !*(_BYTE *)(v10 + 322) )
      {
        v12 = *(_WORD *)(v10 + 320);
        if ( v12 < 0xFFEBu )
        {
          *(_WORD *)(v10 + 320) = v12 + 1;
          ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v10 + 328), 8u);
          v11 = (KSPIN_LOCK *)(v10 + 312);
          v33 = 1;
        }
      }
      KeReleaseSpinLock(v11, NewIrql);
      if ( v33 )
        break;
      v10 = *(_QWORD *)(v10 + 120);
    }
    while ( v10 );
    v3 = a2;
    v9 = v38;
  }
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v9);
  if ( v10 )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 144));
    v14 = (*(_DWORD *)(v10 + 56) & 0x2000) == 0;
    *(_QWORD *)(v10 + 152) = KeGetCurrentThread();
    v34 = v13;
    *(_DWORD *)(v10 + 160) = 2100633;
    if ( !v14 )
    {
      v32 = (KSPIN_LOCK *)(v10 + 144);
      do
      {
        *(_QWORD *)(v10 + 152) = 0LL;
        *(_DWORD *)(v10 + 160) = 0;
        KeReleaseSpinLock(v32, v13);
        if ( KeGetCurrentIrql() == 2 )
        {
          for ( SpinLocka = 0; SpinLocka < 0x32; ++SpinLocka )
            ;
          v32 = (KSPIN_LOCK *)(v10 + 144);
        }
        else
        {
          NdisMSleep(0x32u);
        }
        v13 = KeAcquireSpinLockRaiseToDpc(v32);
        *(_QWORD *)(v10 + 152) = KeGetCurrentThread();
        *(_DWORD *)(v10 + 160) = 2100633;
      }
      while ( (*(_DWORD *)(v10 + 56) & 0x2000) != 0 );
      v3 = a2;
      v34 = v13;
    }
    *(_DWORD *)(v10 + 56) |= 0x2000u;
    *(_QWORD *)(v10 + 152) = 0LL;
    *(_DWORD *)(v10 + 160) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v10 + 144));
    v15 = v40;
    if ( v40 == 1073807383 )
    {
      if ( !v48 )
        goto LABEL_25;
      v16 = v37;
      if ( v37 < 0x28 )
        goto LABEL_25;
      v27 = *(_DWORD *)(v10 + 344);
      v28 = *((_DWORD *)v48 + 1);
      if ( v27 != v28 )
      {
        if ( v28 == 1 )
        {
          v41 = 1;
        }
        else
        {
          v29 = v36;
          if ( v27 == 1 )
            v29 = 1;
          v36 = v29;
        }
      }
      *(_DWORD *)(v10 + 344) = v28;
      *(_DWORD *)(v10 + 348) = *((_DWORD *)v48 + 2);
      *(_QWORD *)(v10 + 360) = v48[3];
      *(_QWORD *)(v10 + 352) = v48[2];
      *(_DWORD *)(v10 + 368) = *((_DWORD *)v48 + 8);
      *(_DWORD *)(v10 + 372) = *((_DWORD *)v48 + 9);
    }
    else
    {
      v16 = v37;
    }
    if ( v40 == 1073872902 )
    {
      v31 = ndisFIndicateOffloadChange(v10, v48, v16);
    }
    else
    {
      if ( v40 == 1073938515 )
      {
        ndisFilterIndicatePMCapabilities(v10, v3);
        v15 = 1073938515;
      }
      if ( v15 == 1073938513 )
      {
        v31 = ndisFilterIndicateWoLPatternReject(v10, v3);
      }
      else
      {
        if ( v15 != 1073938514 )
        {
LABEL_25:
          v17 = *(_QWORD *)(v10 + 16);
          v47 = v17;
          if ( *(_QWORD *)(v17 + 288) )
          {
            SpinLock = *(_DWORD *)(v3 + 20);
            if ( (unsigned __int8)byte_1C008531F >= 4u )
            {
              WPP_SF_qD(131LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, v10, *(unsigned int *)(v3 + 20));
              v17 = v47;
            }
            (*(void (__fastcall **)(_QWORD, __int64))(v17 + 288))(*(_QWORD *)(v10 + 24), v3);
            if ( (unsigned __int8)byte_1C008531F >= 4u )
              WPP_SF_qD(132LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, v10, SpinLock);
          }
          else
          {
            ndisFIndicateStatusInternal(v10, v3);
          }
          if ( v36 )
            ndisSwapFilterHandlersForMediaDisconnect(v5, v45, v10);
          if ( v41 )
            ndisRestoreFilterHandlersForMediaDisconnect(v5, v45, v10);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 144));
          *(_DWORD *)(v10 + 56) &= ~0x2000u;
          *(_QWORD *)(v10 + 152) = 0LL;
          *(_DWORD *)(v10 + 160) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 144), v34);
          v18 = v10 + 312;
          v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v18);
          ndisDereferenceWithTag(*(_QWORD *)(v18 + 16), 8u);
          v14 = (*(_WORD *)(v18 + 8))-- == 1;
          if ( v14 && !*(_BYTE *)(v18 + 11) )
          {
            ndisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v18 + 16));
            *(_QWORD *)(v18 + 16) = 0LL;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)v18, v19);
          return;
        }
        v31 = ndisFilterIndicatePMOffloadReject(v10, v3);
      }
    }
    if ( !v31 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 144));
      *(_DWORD *)(v10 + 56) &= ~0x2000u;
      *(_QWORD *)(v10 + 152) = 0LL;
      *(_DWORD *)(v10 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 144), v34);
      ndisDereferenceRef((PKSPIN_LOCK)(v10 + 312));
      return;
    }
    goto LABEL_25;
  }
  v35 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 96));
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  v20 = *(_DWORD *)(v5 + 4480);
  *(_DWORD *)(v5 + 1856) = 2102682;
  if ( (v20 & 1) != 0 )
  {
    do
    {
      *(_QWORD *)(v5 + 520) = 0LL;
      *(_DWORD *)(v5 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + 96));
      for ( SpinLockb = 0; SpinLockb < 0x32; ++SpinLockb )
        ;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 96));
      *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 1856) = 2102682;
    }
    while ( (*(_DWORD *)(v5 + 4480) & 1) != 0 );
    v3 = a2;
  }
  *(_DWORD *)(v5 + 4480) |= 1u;
  v21 = v37;
  *(_DWORD *)(v5 + 4256) = 2102686;
  *(_QWORD *)(v5 + 4248) = KeGetCurrentThread();
  if ( v40 != 1073807383 || !v48 || v37 < 0x28 )
  {
    v22 = v36;
    goto LABEL_42;
  }
  v25 = *(_DWORD *)(v5 + 480);
  v26 = *((_DWORD *)v48 + 1);
  if ( v25 != v26 )
  {
    if ( v25 == 1 )
    {
      v22 = 1;
      goto LABEL_56;
    }
    v30 = v41;
    if ( v26 == 1 )
      v30 = 1;
    v41 = v30;
  }
  v22 = v36;
LABEL_56:
  v21 = v37;
LABEL_42:
  *(_DWORD *)(v3 + 24) |= 2u;
  if ( v40 == 1073872902 )
  {
    if ( v21 >= 0x70 && *(_BYTE *)v48 == 0xA7 && *((_WORD *)v48 + 1) >= 0x70u && *((_BYTE *)v48 + 1) )
    {
      if ( *(_QWORD *)(v5 + 4152) )
        goto LABEL_43;
      ndisMAllocateMiniportOffload(v5);
    }
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v5, v35);
    return;
  }
LABEL_43:
  ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v5);
  if ( v22 )
    ndisSwapFilterHandlersForMediaDisconnect(v5, v45, 0LL);
  if ( v41 )
    ndisRestoreFilterHandlersForMediaDisconnect(v5, v45, 0LL);
  *(_DWORD *)(v5 + 4480) &= ~1u;
  *(_DWORD *)(v5 + 4256) = 0;
  *(_QWORD *)(v5 + 4248) = 0LL;
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + 96));
  KeLowerIrql(v35);
}
