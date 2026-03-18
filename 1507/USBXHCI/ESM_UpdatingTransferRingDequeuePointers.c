/*
 * XREFs of ESM_UpdatingTransferRingDequeuePointers @ 0x1C0039A50
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0018C78 (Endpoint_OnCancelSetDequeuePointer.c)
 */

__int64 __fastcall ESM_UpdatingTransferRingDequeuePointers(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) )
  {
    v2 = 1;
    for ( *(_DWORD *)(*(_QWORD *)(v1 + 136) + 20LL) = 0; v2 <= *(_DWORD *)(*(_QWORD *)(v1 + 136) + 8LL); ++v2 )
      Endpoint_OnCancelSetDequeuePointer(v1, v2);
  }
  else
  {
    Endpoint_OnCancelSetDequeuePointer(*(_QWORD *)(a1 + 960), 0);
  }
  return 1000LL;
}
