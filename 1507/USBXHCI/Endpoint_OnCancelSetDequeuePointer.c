/*
 * XREFs of Endpoint_OnCancelSetDequeuePointer @ 0x1C0018C78
 * Callers:
 *     ESM_UpdatingTransferRingDequeuePointers @ 0x1C0039A50 (ESM_UpdatingTransferRingDequeuePointers.c)
 * Callees:
 *     memset @ 0x1C0007F80 (memset.c)
 *     Command_SendCommand @ 0x1C001278C (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0018664 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C00186D4 (Endpoint_InitializeTransferRing.c)
 *     Endpoint_IsTransferRingEmpty @ 0x1C0018770 (Endpoint_IsTransferRingEmpty.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C001A79C (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     WPP_RECORDER_SF_dddx @ 0x1C001C4CC (WPP_RECORDER_SF_dddx.c)
 */

void __fastcall Endpoint_OnCancelSetDequeuePointer(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rdi
  unsigned int v7; // r10d
  int v8; // r9d
  int v9; // r10d
  int v10; // edx

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
  if ( *(_BYTE *)(a1 + 37) )
  {
    if ( Endpoint_IsTransferRingEmpty(a1, a2) && (*(_QWORD *)(v5 + 232) & 0x200000LL) == 0 )
    {
      Endpoint_StreamsOnCancelSetDequeuePointerComplete(a1, a2);
      return;
    }
    v6 = 88LL * (a2 - 1) + *(_QWORD *)(a1 + 136) + 48LL;
  }
  else
  {
    v6 = a1 + 160;
  }
  Endpoint_InitializeTransferRing(a1, a2);
  memset((void *)v6, 0, 0x50uLL);
  v7 = *(_DWORD *)(v6 + 36) & 0xFFFF43FF;
  *(_QWORD *)(v6 + 48) = Endpoint_OnCancelSetDequeuePointerCompletion;
  *(_QWORD *)(v6 + 56) = a1;
  *(_DWORD *)(v6 + 36) = v7 | 0x4000;
  *(_QWORD *)(v6 + 24) = Endpoint_GetDequeuePointer(a1, a2);
  *(_DWORD *)(v6 + 36) = v9 ^ (v9 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  LOBYTE(v10) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  *(_BYTE *)(v6 + 39) = v10;
  if ( *(_BYTE *)(a1 + 37) )
    *(_WORD *)(v6 + 34) = a2;
  WPP_RECORDER_SF_dddx(*(_QWORD *)(a1 + 80), v10, *(_WORD *)(v6 + 38) & 0x1F, v8);
  Command_SendCommand(v4, v6);
}
