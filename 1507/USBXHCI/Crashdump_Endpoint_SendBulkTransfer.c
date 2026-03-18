/*
 * XREFs of Crashdump_Endpoint_SendBulkTransfer @ 0x1C00366B8
 * Callers:
 *     Crashdump_DoBulkTransfer @ 0x1C0033A70 (Crashdump_DoBulkTransfer.c)
 * Callees:
 *     Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x1C0036B0C (Crashdump_Endpoint_SendTransferAndPollForCompletion.c)
 */

__int64 __fastcall Crashdump_Endpoint_SendBulkTransfer(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v5; // r14
  __int64 v8; // rbp
  _QWORD *v9; // r12
  unsigned int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // edi
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // r8
  int v21; // r10d
  unsigned int v22; // ebx
  unsigned int v23; // eax
  signed __int32 v25[8]; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-30h]

  v5 = a3;
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: Crashdump_Endpoint_SendBulkTransfer: begin: length: 0x%X TransferPA: 0x%I64X\n",
    *(_DWORD *)(a2 + 36),
    *a3);
  if ( *(_DWORD *)(a1 + 192) )
  {
    v8 = *(_QWORD *)(a1 + 144);
    v9 = (_QWORD *)(a1 + 112);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 120);
    v9 = (_QWORD *)(a1 + 136);
  }
  v10 = *(_DWORD *)(a2 + 36);
  v11 = 0;
  for ( *(_QWORD *)(a1 + 208) = a2; v10; v10 -= v12 )
  {
    v12 = 4096;
    if ( (*(_DWORD *)v5 & 0xFFFLL) != 0 )
      v12 = 4096 - (*(_DWORD *)v5 & 0xFFF);
    if ( v10 < v12 )
      v12 = v10;
    v13 = v8 + 16LL * v11;
    v26 = v12;
    *(_QWORD *)v13 = 0LL;
    *(_QWORD *)(v13 + 8) = 0LL;
    v14 = *(_DWORD *)(v13 + 12) & 0xFFFF03EF | 0x410;
    *(_DWORD *)(v13 + 12) = v14;
    *(_QWORD *)v13 = *v5;
    *(_DWORD *)(v13 + 8) ^= (v12 ^ *(_DWORD *)(v13 + 8)) & 0x1FFFF;
    *(_DWORD *)(v13 + 12) = v14 ^ ((v11 != 0) ^ (unsigned __int8)v14) & 1;
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Normal TRB %u: PA: 0x%I64X, length: 0x%X\n", v11++, *v5++, v26);
  }
  v15 = v8 + 16LL * v11;
  *(_DWORD *)(v8 + 16LL * (v11 - 1) + 12) |= 2u;
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)(v15 + 8) = 0LL;
  v16 = *(_DWORD *)(v15 + 12) & 0xFFFF03FF | 0x1C00;
  *(_DWORD *)(v15 + 12) = v16;
  v17 = *(_QWORD *)(a1 + 200);
  *(_DWORD *)(v15 + 8) &= 0x3FFFFFu;
  *(_DWORD *)(v15 + 12) = v16 | 0x21;
  *(_QWORD *)v15 = v17;
  v18 = v8 + 16LL * (v11 + 1);
  *(_QWORD *)v18 = 0LL;
  *(_QWORD *)(v18 + 8) = 0LL;
  v19 = *(_DWORD *)(v18 + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(v18 + 12) = v19;
  *(_QWORD *)v18 = *v9;
  *(_DWORD *)(v18 + 12) = v19 & 0xFFFFFFFC | 1;
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 192) == 0;
  *(_BYTE *)(v8 + 12) ^= 1u;
  _InterlockedOr(v25, 0);
  if ( a4 )
  {
    v20 = *(_QWORD *)(a1 + 24);
    v21 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 8) + 48LL) + 4LL * *(unsigned __int8 *)(v20 + 56)) = ((*(_BYTE *)(a1 + 160) != 0) << 16) | (unsigned __int8)v21;
    _InterlockedOr(v25, 0);
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: Ringing doorbell: SlotId: %u, EndpointDCI: %u\n",
      *(unsigned __int8 *)(v20 + 56),
      v21);
    v22 = 259;
  }
  else
  {
    v23 = Crashdump_Endpoint_SendTransferAndPollForCompletion(a1);
    *(_DWORD *)(v8 + 12) &= ~1u;
    v22 = v23;
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendBulkTransfer: end 0x%X\n", v22);
  return v22;
}
