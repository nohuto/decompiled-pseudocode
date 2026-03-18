/*
 * XREFs of Endpoint_SM_ResetControlEndpoint @ 0x1C001FE64
 * Callers:
 *     ESM_ResettingControlEndpoint @ 0x1C0037E70 (ESM_ResettingControlEndpoint.c)
 * Callees:
 *     memset @ 0x1C0010E80 (memset.c)
 */

void __fastcall Endpoint_SM_ResetControlEndpoint(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int v4; // r8d
  unsigned int v5; // r8d

  v1 = a1 + 160;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
  memset((void *)(a1 + 160), 0, 0x50uLL);
  v4 = *(_DWORD *)(v1 + 36);
  *(_QWORD *)(v1 + 48) = Endpoint_ControlEndpointResetCompletion;
  v5 = v4 & 0xFFFF01FF | 0x3800;
  *(_QWORD *)(v1 + 56) = a1;
  *(_DWORD *)(v1 + 36) = v5;
  *(_DWORD *)(v1 + 36) = v5 ^ (v5 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  *(_BYTE *)(v1 + 39) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  Command_SendCommand(v3, v1);
}
