/*
 * XREFs of Endpoint_SM_SendStopEndpointCommand @ 0x1C0019FC8
 * Callers:
 *     ESM_StoppingEndpoint @ 0x1C00399C0 (ESM_StoppingEndpoint.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

void __fastcall Endpoint_SM_SendStopEndpointCommand(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int v4; // edx
  unsigned int v5; // edx
  int v6; // r9d
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v1 = a1 + 160;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
  memset((void *)(a1 + 160), 0, 0x50uLL);
  v4 = *(_DWORD *)(v1 + 36);
  *(_QWORD *)(v1 + 48) = Endpoint_OnCancelStopCompletion;
  v5 = v4 & 0xFFFF03FF | 0x3C00;
  *(_QWORD *)(v1 + 56) = a1;
  *(_DWORD *)(v1 + 36) = v5;
  *(_DWORD *)(v1 + 36) = v5 ^ (v5 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
  *(_BYTE *)(v1 + 39) = v6;
  v8 = *(_WORD *)(v1 + 38) & 0x1F;
  v7 = v6;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(a1 + 80),
    4u,
    0xCu,
    0x70u,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    v7,
    v8);
  Command_SendCommand(v3, v1);
}
