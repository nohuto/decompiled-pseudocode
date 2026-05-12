/*
 * XREFs of _TlgCreateSz @ 0x1C003C064
 * Callers:
 *     StorpLogPhysicalTopologyInfo @ 0x1C0039458 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C003AC14 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v3; // r8

  LODWORD(v2) = 0;
  v3 = (LPCSTR)qword_1C00162C0;
  if ( psz )
  {
    v3 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Reserved = 0;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (unsigned __int64)v3;
}
