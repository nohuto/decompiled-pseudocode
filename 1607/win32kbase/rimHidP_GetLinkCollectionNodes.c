/*
 * XREFs of rimHidP_GetLinkCollectionNodes @ 0x1C00062C0
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x1C00097F0 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C0009A3C (RIMIsParallelDevice.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C00E1EC4 (RIMDiscoverCustomPTPSettings.c)
 * Callees:
 *     <none>
 */

int __fastcall rimHidP_GetLinkCollectionNodes(
        struct _HIDP_LINK_COLLECTION_NODE *a1,
        unsigned int *a2,
        struct _HIDP_PREPARSED_DATA *a3)
{
  if ( gpfnHidP_GetLinkCollectionNodes )
    return gpfnHidP_GetLinkCollectionNodes(a1, a2, a3);
  else
    return -1073741637;
}
