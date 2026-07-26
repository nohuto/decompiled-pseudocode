/*
 * XREFs of NdisCloseAdapter @ 0x1C00E0FB0
 * Callers:
 *     NdisCloseAdapterEx @ 0x1C0099390 (NdisCloseAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00E1274 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxz @ 0x1C005631C (Template_jqxz.c)
 *     WPP_SF_qqZZ @ 0x1C00565FC (WPP_SF_qqZZ.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C009797C (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisCleanUpForProtocol @ 0x1C00993D0 (ndisCleanUpForProtocol.c)
 *     ndisMKillOpen @ 0x1C00E10BC (ndisMKillOpen.c)
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

  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x1Au, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  for ( i = ndisGlobalOpenList; i && i != (struct _NDIS_OPEN_BLOCK *)a2; i = i->NextGlobalOpen )
    ;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v4);
  if ( i )
  {
    v8 = *(_QWORD *)(a2 + 16);
    v9 = *(_QWORD *)(a2 + 24);
    if ( (unsigned __int8)byte_1C0083710 >= 4u )
      WPP_SF_qqZZ(0x1Bu, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, v8, a2, v9 + 72, *(_QWORD *)(v8 + 3912));
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
LABEL_15:
        *a1 = 259;
        goto LABEL_16;
      }
LABEL_13:
      *(_BYTE *)(a2 + 1000) = 0;
      if ( (*(_DWORD *)(v8 + 124) & 0x2000) != 0 )
      {
        v12 = *(_QWORD *)(v8 + 4040);
        if ( v12 )
          (*(void (__fastcall **)(_QWORD))(v12 + 40))(*(_QWORD *)(v12 + 8));
      }
      ndisCleanUpForProtocol(a2, v6);
      ndisMKillOpen(a2);
      goto LABEL_15;
    }
    *(_BYTE *)(a2 + 65) = 0;
    if ( *(struct _KTHREAD **)(v9 + 416) == KeGetCurrentThread() )
      goto LABEL_13;
    *a1 = -1073741823;
  }
  else
  {
    *a1 = 0;
  }
LABEL_16:
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a2, *a1);
}
