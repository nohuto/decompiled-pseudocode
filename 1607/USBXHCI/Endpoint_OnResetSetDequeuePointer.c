/*
 * XREFs of Endpoint_OnResetSetDequeuePointer @ 0x1C00236E0
 * Callers:
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0023500 (Endpoint_OnResetEndpointResetCompletion.c)
 * Callees:
 *     memset @ 0x1C0010200 (memset.c)
 *     Command_SendCommand @ 0x1C001C18C (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0022364 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_IsTransferRingEmpty @ 0x1C002245C (Endpoint_IsTransferRingEmpty.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C0024528 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 */

void __fastcall Endpoint_OnResetSetDequeuePointer(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  unsigned int v6; // r10d
  int v7; // r10d

  v2 = *a1;
  if ( *(_BYTE *)(*a1 + 37) )
  {
    if ( Endpoint_IsTransferRingEmpty(*a1, a2) )
    {
      Endpoint_StreamsOnResetSetDequeuePointerComplete(a1, a2);
      return;
    }
    v5 = 88LL * (a2 - 1) + *(_QWORD *)(v2 + 136) + 48LL;
  }
  else
  {
    v5 = v2 + 160;
  }
  memset((void *)v5, 0, 0x50uLL);
  v6 = *(_DWORD *)(v5 + 36) & 0xFFFF43FF;
  *(_QWORD *)(v5 + 48) = Endpoint_OnResetSetDequeuePointerCompletion;
  *(_QWORD *)(v5 + 56) = a1;
  *(_DWORD *)(v5 + 36) = v6 | 0x4000;
  *(_QWORD *)(v5 + 24) = Endpoint_GetDequeuePointer(v2, a2);
  *(_DWORD *)(v5 + 36) = v7 ^ (v7 ^ (*(_DWORD *)(v2 + 144) << 16)) & 0x1F0000;
  *(_BYTE *)(v5 + 39) = *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL);
  if ( *(_BYTE *)(v2 + 37) )
    *(_WORD *)(v5 + 34) = a2;
  Command_SendCommand(*(_QWORD *)(*(_QWORD *)v2 + 112LL), v5);
}
