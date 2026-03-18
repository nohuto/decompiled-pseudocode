/*
 * XREFs of rimHidP_GetLinkCollectionNodes @ 0x1C00730F4
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x1C0074AFC (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C0074D48 (RIMIsParallelDevice.c)
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
