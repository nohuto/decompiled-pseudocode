/*
 * XREFs of NdisCloseAdapter @ 0x1C00EC1F0
 * Callers:
 *     NdisCloseAdapterEx @ 0x1C00AF390 (NdisCloseAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00EC4E4 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     Template_jqxz @ 0x1C005AB20 (Template_jqxz.c)
 *     WPP_SF_qqZZ @ 0x1C005ADE8 (WPP_SF_qqZZ.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C009C1D0 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisCleanUpForProtocol @ 0x1C00AF3D0 (ndisCleanUpForProtocol.c)
 *     ndisMKillOpen @ 0x1C00EC300 (ndisMKillOpen.c)
 */

void __fastcall NdisCloseAdapter(int *a1, __int64 a2)
{
  KIRQL v4; // al
  struct _NDIS_OPEN_BLOCK *i; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbp
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  KIRQL v11; // al
  __int64 v12; // rcx

  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x1Au, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  for ( i = ndisGlobalOpenList; i && i != (struct _NDIS_OPEN_BLOCK *)a2; i = i->NextGlobalOpen )
    ;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v4);
  if ( i )
  {
    v8 = *(_QWORD *)(a2 + 16);
    v9 = *(_QWORD *)(a2 + 24);
    if ( (unsigned __int8)byte_1C00895D0 >= 4u )
      WPP_SF_qqZZ(0x1Bu, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, v8, a2, v9 + 72, *(_QWORD *)(v8 + 3912));
    if ( (Microsoft_Windows_NDISEnableBits & 0x200) != 0 )
      Template_jqxz(
        v7,
        v6,
        (const GUID *)(v8 + 4064),
        v8 + 4064,
        *(_DWORD *)(v8 + 4112),
        *(_QWORD *)(v8 + 4080),
        *(const wchar_t **)(v9 + 80));
    if ( *(_BYTE *)(v9 + 56) < 6u )
    {
      if ( !*(_BYTE *)(a2 + 1000) )
        goto LABEL_25;
      CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(v8 + 5208));
      if ( CurrentLink )
        CurrentLink = (struct NDIS_BIND_LINK_BASE *)((char *)CurrentLink - 8);
      if ( *(struct NDIS_BIND_LINK_BASE **)(a2 + 952) != CurrentLink )
      {
LABEL_25:
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 232));
        *(_DWORD *)(a2 + 224) |= 0x40000000u;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 232), v11);
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 960), NormalWorkQueue);
LABEL_16:
        *a1 = 259;
        goto LABEL_17;
      }
LABEL_14:
      *(_BYTE *)(a2 + 1000) = 0;
      if ( (*(_DWORD *)(v8 + 124) & 0x2000) != 0 )
      {
        v12 = *(_QWORD *)(v8 + 4040);
        if ( v12 )
          (*(void (__fastcall **)(_QWORD))(v12 + 40))(*(_QWORD *)(v12 + 8));
      }
      ndisCleanUpForProtocol(a2, v6);
      ndisMKillOpen(a2);
      goto LABEL_16;
    }
    *(_BYTE *)(a2 + 65) = 0;
    if ( *(struct _KTHREAD **)(v9 + 416) == KeGetCurrentThread() )
      goto LABEL_14;
    *a1 = -1073741823;
  }
  else
  {
    *a1 = 0;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a2, *a1);
}
