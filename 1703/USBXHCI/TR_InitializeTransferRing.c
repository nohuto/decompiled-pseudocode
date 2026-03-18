/*
 * XREFs of TR_InitializeTransferRing @ 0x1C00254E8
 * Callers:
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C001D1E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_InitializeTransferRing @ 0x1C001E68C (Endpoint_InitializeTransferRing.c)
 *     TR_Enable_Internal @ 0x1C00253CC (TR_Enable_Internal.c)
 * Callees:
 *     memset @ 0x1C0010E80 (memset.c)
 */

__int64 __fastcall TR_InitializeTransferRing(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 result; // rax

  memset(*(void **)(*(_QWORD *)(a1 + 168) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(a1 + 168) + 40LL));
  v2 = *(_QWORD *)(a1 + 168);
  v3 = *(_QWORD *)(v2 + 16);
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 176) = v3;
  result = (unsigned int)((*(_DWORD *)(v2 + 40) >> 4) - 1);
  *(_DWORD *)(a1 + 192) = 1;
  *(_DWORD *)(a1 + 188) = result;
  return result;
}
