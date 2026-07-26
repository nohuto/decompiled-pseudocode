/*
 * XREFs of ndisRemoveOpenFromGlobalList @ 0x1C000EE44
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C009AB90 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1C00E9A60 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

char __fastcall ndisRemoveOpenFromGlobalList(struct _NDIS_OPEN_BLOCK *a1)
{
  char v2; // bl
  KIRQL v3; // al
  struct _NDIS_OPEN_BLOCK **p_NextGlobalOpen; // rcx
  KIRQL v5; // dl
  struct _NDIS_OPEN_BLOCK *v6; // rax

  v2 = 0;
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(106LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(107LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
  return v2;
}
