/*
 * XREFs of WmipInitializeAllocs @ 0x1407E7FE0
 * Callers:
 *     WMIInitialize @ 0x1407C07E4 (WMIInitialize.c)
 * Callees:
 *     ExInitializePagedLookasideList @ 0x1404F9D70 (ExInitializePagedLookasideList.c)
 */

void WmipInitializeAllocs()
{
  ExInitializePagedLookasideList(&WmipDSChunkInfoLookaside, 0LL, 0LL, 0, 0x78uLL, 0x53446D57u, 0);
  ExInitializePagedLookasideList(&WmipGEChunkInfoLookaside, 0LL, 0LL, 0, 0xA0uLL, 0x45476D57u, 0);
  ExInitializePagedLookasideList(&WmipISChunkInfoLookaside, 0LL, 0LL, 0, 0x60uLL, 0x53496D57u, 0);
  ExInitializePagedLookasideList(&WmipMRChunkInfoLookaside, 0LL, 0LL, 0, 0x38uLL, 0x524D6D57u, 0);
}
