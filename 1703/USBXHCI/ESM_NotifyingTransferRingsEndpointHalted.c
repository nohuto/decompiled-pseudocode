/*
 * XREFs of ESM_NotifyingTransferRingsEndpointHalted @ 0x1C00379C0
 * Callers:
 *     <none>
 * Callees:
 *     TR_EndpointHalted @ 0x1C0025454 (TR_EndpointHalted.c)
 */

__int64 __fastcall ESM_NotifyingTransferRingsEndpointHalted(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned int v3; // esi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) )
  {
    v2 = *(_QWORD *)(v1 + 136);
    v3 = 1;
    for ( *(_DWORD *)(v2 + 20) = 0; v3 <= *(_DWORD *)(v2 + 8); ++v3 )
      TR_EndpointHalted(*(_QWORD *)(88LL * (v3 - 1) + *(_QWORD *)(v1 + 136) + 40));
  }
  else
  {
    TR_EndpointHalted(*(_QWORD *)(v1 + 88));
  }
  return 29LL;
}
