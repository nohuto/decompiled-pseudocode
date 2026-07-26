/*
 * XREFs of ndisIndicateInitialStateToFilter @ 0x1C001B438
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisUpdateFilterFakeStatus @ 0x1C00188F8 (ndisUpdateFilterFakeStatus.c)
 *     ndisFIndicateStatusToFilter @ 0x1C001C730 (ndisFIndicateStatusToFilter.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001C7AC (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001D9A4 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisFAllocateFilterOffload @ 0x1C0024A4C (ndisFAllocateFilterOffload.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     NdisMSleep @ 0x1C00AAAA0 (NdisMSleep.c)
 */

void __fastcall ndisIndicateInitialStateToFilter(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v4; // rdi
  KIRQL v5; // al
  KIRQL v6; // r13
  KSPIN_LOCK *v7; // rcx
  bool v8; // zf
  _BYTE *v9; // rax
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  _OWORD *v12; // rcx
  void (__fastcall *v13)(_QWORD *, struct _NET_BUFFER_LIST *, int, unsigned int, int); // rax
  void (__stdcall *v14)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  KIRQL v15; // dl
  __int128 *v16; // rax
  __int128 v17; // xmm1
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  __int64 v20; // rax
  KIRQL v21; // dl
  KSPIN_LOCK *v22; // rcx
  void (__fastcall *v23)(_QWORD *, struct _NET_BUFFER_LIST *, int, unsigned int, int); // rax
  KIRQL v24; // dl
  KIRQL NewIrql[8]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+30h] [rbp-D8h]
  _QWORD v27[14]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v28[6]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v29; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v30; // [rsp+E8h] [rbp-20h]
  __int128 v31; // [rsp+F8h] [rbp-10h]
  __int128 v32; // [rsp+108h] [rbp+0h]
  __int128 v33; // [rsp+118h] [rbp+10h]
  __int128 v34; // [rsp+128h] [rbp+20h]
  __int128 v35; // [rsp+138h] [rbp+30h]
  __int128 v36; // [rsp+148h] [rbp+40h]
  __int128 v37; // [rsp+158h] [rbp+50h]
  __int128 v38; // [rsp+168h] [rbp+60h]
  __int128 v39; // [rsp+178h] [rbp+70h]
  int v40; // [rsp+188h] [rbp+80h]

  v1 = *(_QWORD *)(a1 + 112);
  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 120);
  NewIrql[0] = 0;
  v26 = v1;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(73LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1);
  memset(v28, 0, 0x28uLL);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  v6 = v5;
  while ( 1 )
  {
    *(_DWORD *)(a1 + 160) = 2102861;
    v7 = (KSPIN_LOCK *)(a1 + 144);
    v8 = (*(_DWORD *)(a1 + 56) & 0x2000) == 0;
    *(_QWORD *)(a1 + 152) = 0LL;
    *(_DWORD *)(a1 + 160) = 0;
    if ( v8 )
      break;
    KeReleaseSpinLock(v7, v6);
    if ( KeGetCurrentIrql() == 2 )
    {
      for ( *(_DWORD *)&NewIrql[4] = 0; *(_DWORD *)&NewIrql[4] < 0x32u; ++*(_DWORD *)&NewIrql[4] )
        ;
    }
    else
    {
      NdisMSleep(0x32u);
    }
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
    *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  }
  *(_DWORD *)(a1 + 56) |= 0x2000u;
  KeReleaseSpinLockFromDpcLevel(v7);
  HIDWORD(v28[0]) = *(_DWORD *)(a1 + 344);
  LODWORD(v28[1]) = *(_DWORD *)(a1 + 348);
  v28[2] = *(_QWORD *)(a1 + 352);
  v28[3] = *(_QWORD *)(a1 + 360);
  v28[4] = *(_QWORD *)(a1 + 368);
  LODWORD(v28[0]) = 2621824;
  if ( v4 )
  {
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
    *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
    for ( *(_DWORD *)(v4 + 160) = 2102876; (*(_DWORD *)(v4 + 56) & 0x2000) != 0; *(_DWORD *)(v4 + 160) = 2102876 )
    {
      v15 = NewIrql[0];
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v15);
      if ( KeGetCurrentIrql() == 2 )
      {
        for ( *(_DWORD *)&NewIrql[4] = 0; *(_DWORD *)&NewIrql[4] < 0x32u; ++*(_DWORD *)&NewIrql[4] )
          ;
      }
      else
      {
        NdisMSleep(0x32u);
      }
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
    }
    *(_DWORD *)(v4 + 56) |= 0x2000u;
    *(_QWORD *)(v4 + 152) = 0LL;
    *(_DWORD *)(v4 + 160) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 144));
    v16 = *(__int128 **)(v4 + 800);
    if ( v16 )
    {
      v29 = *v16;
      v30 = v16[1];
      v31 = v16[2];
      v32 = v16[3];
      v33 = v16[4];
      v34 = v16[5];
      v35 = v16[6];
      v17 = v16[7];
      v18 = v16 + 8;
      v8 = *(_QWORD *)(a1 + 800) == 0LL;
      v36 = v17;
      v37 = *v18;
      v38 = v18[1];
      v39 = v18[2];
      v40 = *((_DWORD *)v18 + 12);
      if ( !v8 || !(unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v19 = *(_OWORD **)(a1 + 800);
        *v19 = v29;
        v19[1] = v30;
        v19[2] = v31;
        v19[3] = v32;
        v19[4] = v33;
        v19[5] = v34;
        v19[6] = v35;
        v19 += 8;
        *(v19 - 1) = v36;
        *v19 = v37;
        v19[1] = v38;
        v19[2] = v39;
        *((_DWORD *)v19 + 12) = v40;
        memset(v27, 0, sizeof(v27));
        v20 = v2;
        LODWORD(v27[0]) = 7340440;
        HIDWORD(v27[2]) = 1073872902;
        if ( v26 )
          v20 = v26;
        LODWORD(v27[7]) = 180;
        v27[1] = v20;
        v27[6] = &v29;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
        v21 = NewIrql[0];
        *(_DWORD *)(v4 + 56) &= ~0x2000u;
        *(_QWORD *)(v4 + 152) = 0LL;
        *(_DWORD *)(v4 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v21);
        ndisFIndicateStatusToFilter(a1, v27);
        while ( 1 )
        {
          NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
          v22 = (KSPIN_LOCK *)(v4 + 144);
          *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
          *(_DWORD *)(v4 + 160) = 2102912;
          if ( (*(_DWORD *)(v4 + 56) & 0x2000) == 0 )
            break;
          *(_QWORD *)(v4 + 152) = 0LL;
          *(_DWORD *)(v4 + 160) = 0;
          KeReleaseSpinLock(v22, NewIrql[0]);
          if ( KeGetCurrentIrql() == 2 )
          {
            for ( *(_DWORD *)&NewIrql[4] = 0; *(_DWORD *)&NewIrql[4] < 0x32u; ++*(_DWORD *)&NewIrql[4] )
              ;
          }
          else
          {
            NdisMSleep(0x32u);
          }
        }
        *(_DWORD *)(v4 + 56) |= 0x2000u;
        *(_QWORD *)(v4 + 152) = 0LL;
        *(_DWORD *)(v4 + 160) = 0;
        KeReleaseSpinLockFromDpcLevel(v22);
      }
    }
    v23 = (void (__fastcall *)(_QWORD *, struct _NET_BUFFER_LIST *, int, unsigned int, int))&ndisFakeFilterReceiveHandler;
    if ( *(_DWORD *)(v4 + 344) == 1 )
      v23 = ndisFilterIndicateReceiveNetBufferLists;
    *(_QWORD *)(a1 + 632) = v23;
    memset(v27, 0, sizeof(v27));
    LODWORD(v27[0]) = 7340440;
    HIDWORD(v27[2]) = 1073807383;
    if ( v26 )
      v2 = v26;
    v27[6] = v28;
    LODWORD(v27[7]) = 40;
    v27[1] = v2;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
    v24 = NewIrql[0];
    *(_DWORD *)(v4 + 56) &= ~0x2000u;
    *(_QWORD *)(v4 + 152) = 0LL;
    *(_DWORD *)(v4 + 160) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v24);
    ndisFIndicateStatusToFilter(a1, v27);
  }
  else
  {
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, NewIrql);
    v9 = *(_BYTE **)(v2 + 4152);
    if ( v9 )
    {
      if ( *v9 )
      {
        v10 = v9 + 188;
        v29 = *v10;
        v30 = v10[1];
        v31 = v10[2];
        v32 = v10[3];
        v33 = v10[4];
        v34 = v10[5];
        v35 = v10[6];
        v11 = v10[7];
        v10 += 8;
        v36 = v11;
        v37 = *v10;
        v38 = v10[1];
        v39 = v10[2];
        v40 = *((_DWORD *)v10 + 12);
        if ( *(_QWORD *)(a1 + 800) || !(unsigned int)ndisFAllocateFilterOffload(a1) )
        {
          v12 = *(_OWORD **)(a1 + 800);
          *v12 = v29;
          v12[1] = v30;
          v12[2] = v31;
          v12[3] = v32;
          v12[4] = v33;
          v12[5] = v34;
          v12[6] = v35;
          v12 += 8;
          *(v12 - 1) = v36;
          *v12 = v37;
          v12[1] = v38;
          v12[2] = v39;
          *((_DWORD *)v12 + 12) = v40;
          memset(v27, 0, sizeof(v27));
          v27[6] = &v29;
          LODWORD(v27[0]) = 7340440;
          v27[1] = v2;
          HIDWORD(v27[2]) = 1073872902;
          LODWORD(v27[7]) = 180;
          ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, NewIrql[0]);
          ndisFIndicateStatusToFilter(a1, v27);
          ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, NewIrql);
        }
      }
    }
    LODWORD(v28[0]) = 2621824;
    HIDWORD(v28[0]) = *(_DWORD *)(v2 + 480);
    LODWORD(v28[1]) = *(_DWORD *)(v2 + 488);
    v28[2] = *(_QWORD *)(v2 + 792);
    v28[3] = *(_QWORD *)(v2 + 800);
    v13 = (void (__fastcall *)(_QWORD *, struct _NET_BUFFER_LIST *, int, unsigned int, int))&ndisFakeFilterReceiveHandler;
    if ( *(_DWORD *)(v2 + 480) == 1 )
      v13 = ndisFilterIndicateReceiveNetBufferLists;
    *(_QWORD *)(a1 + 632) = v13;
    memset(v27, 0, sizeof(v27));
    v27[6] = v28;
    LODWORD(v27[0]) = 7340440;
    v27[1] = v2;
    HIDWORD(v27[2]) = 1073807383;
    LODWORD(v27[7]) = 40;
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, NewIrql[0]);
    ndisFIndicateStatusToFilter(a1, v27);
  }
  if ( *(_DWORD *)(a1 + 344) == 1 )
  {
    *(_BYTE *)(a1 + 376) &= ~1u;
    *(_QWORD *)(a1 + 624) = ndisFilterSendNetBufferLists;
    v14 = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisFilterCancelSendNetBufferLists;
  }
  else
  {
    *(_BYTE *)(a1 + 376) |= 1u;
    ndisUpdateFilterFakeStatus(a1);
    *(_QWORD *)(a1 + 624) = &ndisFakeFilterSendHandler;
    v14 = ndisFakeMiniportCancelSendPackets;
  }
  *(_QWORD *)(a1 + 640) = v14;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 144));
  *(_DWORD *)(a1 + 56) &= ~0x2000u;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 144), v6);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(74LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1);
}
