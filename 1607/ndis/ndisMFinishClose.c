/*
 * XREFs of ndisMFinishClose @ 0x1C00EB318
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017670 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0018BCC (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisUpdateLoopbackOpens @ 0x1C0019C74 (ndisUpdateLoopbackOpens.c)
 *     ndisQueueWorkItem @ 0x1C001B848 (ndisQueueWorkItem.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BBF8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C00EB410 (ndisDeQueueOpenOnMiniport.c)
 *     ndisDeQueueOpenOnProtocol @ 0x1C00EB574 (ndisDeQueueOpenOnProtocol.c)
 *     ndisMCoFreeResources @ 0x1C00F9DF0 (ndisMCoFreeResources.c)
 */

void __fastcall ndisMFinishClose(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0xCu, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, a1);
  ndisReferenceMiniportNoCheck(v1, 0x32u);
  if ( (*(_DWORD *)(v1 + 120) & 0x20000) != 0 )
    ndisMCoFreeResources(a1);
  while ( *(_QWORD *)(a1 + 496) )
  {
    v3 = *(_QWORD **)(a1 + 496);
    if ( v3 )
      *(_QWORD *)(a1 + 496) = *v3;
    ExFreePoolWithTag(v3, 0);
  }
  while ( *(_QWORD *)(a1 + 504) )
  {
    v4 = *(_QWORD **)(a1 + 504);
    if ( v4 )
      *(_QWORD *)(a1 + 504) = *v4;
    ExFreePoolWithTag(v4, 0);
  }
  while ( *(_QWORD *)(a1 + 512) )
  {
    v5 = *(_QWORD **)(a1 + 512);
    if ( v5 )
      *(_QWORD *)(a1 + 512) = *v5;
    ExFreePoolWithTag(v5, 0);
  }
  ndisDeQueueOpenOnProtocol(a1, *(_QWORD *)(a1 + 24));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
  if ( (*(_DWORD *)(a1 + 224) & 4) != 0 )
  {
    --*(_BYTE *)(v1 + 90);
    *(_DWORD *)(a1 + 224) &= ~4u;
    ndisUpdateCheckForLoopbackFlag(v1);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
  ndisDeQueueOpenOnMiniport(a1, v1);
  ndisUpdateLoopbackOpens(v1);
  *(_DWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 360) = ndisMQueuedFinishClose;
  *(_QWORD *)(a1 + 368) = a1;
  ndisQueueWorkItem((PLIST_ENTRY)(a1 + 344));
  ndisDereferenceMiniport(v1);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0xDu, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, a1);
}
