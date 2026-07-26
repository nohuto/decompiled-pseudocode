/*
 * XREFs of ndisDoCancelDirectOidRequest @ 0x1C0044EF8
 * Callers:
 *     NdisCancelDirectOidRequest @ 0x1C0043FE0 (NdisCancelDirectOidRequest.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0058280 (ndisFCancelDirectOidRequestInternal.c)
 * Callees:
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006AB08 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006ADF0 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisClearBusy @ 0x1C006B5C8 (ndisClearBusy.c)
 */

void __fastcall ndisDoCancelDirectOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, void *a3, void *a4)
{
  void *v4; // r14
  __int64 v5; // rsi
  char v7; // bp
  KSPIN_LOCK *v8; // r15
  KIRQL v9; // al
  _QWORD *v10; // r12
  __int64 v11; // r14
  _DWORD *v12; // r13
  char v13; // bl
  __int64 v14; // rbx
  unsigned __int8 MajorNdisVersion; // al
  unsigned __int8 busy; // al
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rbx
  unsigned int v18; // [rsp+20h] [rbp-48h]
  KIRQL NewIrql; // [rsp+78h] [rbp+10h]

  v4 = a3;
  v5 = a2;
  v7 = 0;
  if ( !a2 )
    goto LABEL_15;
  v7 = ndisReferenceRef((PKSPIN_LOCK)(a2 + 312), 4u);
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 312LL) )
      {
        v14 = *(_QWORD *)(v5 + 16);
        if ( (unsigned __int8)byte_1C00895D2 >= 4u )
          WPP_SF_q(0x8Au, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, v5);
        v4 = a3;
        (*(void (__fastcall **)(_QWORD, void *))(v14 + 312))(*(_QWORD *)(v5 + 24), a3);
        if ( (unsigned __int8)byte_1C00895D2 >= 4u )
          WPP_SF_q(0x8Bu, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, v5);
LABEL_15:
        if ( a1 )
        {
          MajorNdisVersion = a1->MajorNdisVersion;
          if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion )
          {
            if ( a1->DriverHandle->MiniportDriverCharacteristics.CancelDirectOidRequestHandler )
            {
              if ( !a1->SelectiveSuspend
                || ((a1->Flags & 0x80u) == 0
                  ? (busy = ndisWdmSetBusyAsync(a1, 1u, NdisBusyCancelDirectOid, v4, 0))
                  : (busy = ndisWdfSetBusyAsync(a1, 1u, NdisBusyCancelDirectOid, a4, v18)),
                    busy) )
              {
                DriverHandle = a1->DriverHandle;
                if ( (unsigned __int8)byte_1C00895D2 >= 4u )
                  WPP_SF_q(0xE9u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)a1);
                DriverHandle->MiniportDriverCharacteristics.CancelDirectOidRequestHandler(
                  a1->MiniportAdapterContext,
                  v4);
                if ( (unsigned __int8)byte_1C00895D2 >= 4u )
                  WPP_SF_q(0xEAu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)a1);
                if ( a1->SelectiveSuspend )
                  ndisClearBusy(a1, 1LL, 51LL);
              }
            }
          }
        }
        goto LABEL_31;
      }
      v8 = (KSPIN_LOCK *)(v5 + 144);
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 144));
      v10 = (_QWORD *)(v5 + 152);
      v11 = *(_QWORD *)(v5 + 840);
      v12 = (_DWORD *)(v5 + 160);
      *(_QWORD *)(v5 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 160) = 2306939;
      NewIrql = v9;
      v13 = *(_BYTE *)v11;
      ndisDereferenceRef((PKSPIN_LOCK)(v5 + 312), 4u);
      v7 = 0;
      if ( v13 != 5 )
        break;
      v5 = v11;
      v7 = ndisReferenceRef((PKSPIN_LOCK)(v11 + 312), 4u);
      if ( !v7 )
        goto LABEL_8;
LABEL_9:
      *v10 = 0LL;
      *v12 = 0;
      KeReleaseSpinLock(v8, NewIrql);
      if ( !v5 )
      {
        v4 = a3;
        goto LABEL_15;
      }
    }
    a1 = (struct _NDIS_MINIPORT_BLOCK *)v11;
LABEL_8:
    v5 = 0LL;
    goto LABEL_9;
  }
LABEL_31:
  if ( v7 == 1 )
    ndisDereferenceRef((PKSPIN_LOCK)(v5 + 312), 4u);
}
