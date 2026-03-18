/*
 * XREFs of Endpoint_InitializeTransferRing @ 0x1C00186D4
 * Callers:
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0018C78 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019248 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0019600 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001ACF0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Endpoint_InitializeTransferRing(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx

  if ( *(_BYTE *)(a1 + 37) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 232LL);
    if ( (v3 & 0x100000000000LL) != 0 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 32LL) + 16LL) + 16LL * a2;
      if ( ((v3 >> 35) & 1) != 0 )
      {
        if ( (v3 & 0x1000000000LL) == 0 )
        {
          *(_DWORD *)(v4 + 8) = (unsigned __int8)*(_DWORD *)(v4 + 8);
          return TR_InitializeTransferRing(*(_QWORD *)(88LL * (a2 - 1) + *(_QWORD *)(a1 + 136) + 40));
        }
      }
      else if ( (v3 & 0x1000000000LL) == 0 )
      {
        *(_DWORD *)(v4 + 8) &= 0xFF000000;
        return TR_InitializeTransferRing(*(_QWORD *)(88LL * (a2 - 1) + *(_QWORD *)(a1 + 136) + 40));
      }
      if ( ((v3 >> 35) & 1) == 0 )
        *(_DWORD *)(v4 + 12) &= 0xFF000000;
    }
    return TR_InitializeTransferRing(*(_QWORD *)(88LL * (a2 - 1) + *(_QWORD *)(a1 + 136) + 40));
  }
  return TR_InitializeTransferRing(*(_QWORD *)(a1 + 88));
}
