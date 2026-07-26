/*
 * XREFs of ndisRemoveOpenFromGlobalList @ 0x1C001348C
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C0098740 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1C00E3930 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

char __fastcall ndisRemoveOpenFromGlobalList(struct _NDIS_OPEN_BLOCK *a1)
{
  char v2; // bl
  KIRQL v3; // al
  struct _NDIS_OPEN_BLOCK **p_NextGlobalOpen; // rcx
  KIRQL v5; // dl
  struct _NDIS_OPEN_BLOCK *v6; // rax

  v2 = 0;
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(109LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  p_NextGlobalOpen = &ndisGlobalOpenList;
  v5 = v3;
  if ( ndisGlobalOpenList )
  {
    while ( 1 )
    {
      v6 = *p_NextGlobalOpen;
      if ( *p_NextGlobalOpen == a1 )
        break;
      p_NextGlobalOpen = &v6->NextGlobalOpen;
      if ( !v6->NextGlobalOpen )
        goto LABEL_6;
    }
    v2 = 1;
    *p_NextGlobalOpen = a1->NextGlobalOpen;
  }
LABEL_6:
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v5);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(110LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
  return v2;
}
