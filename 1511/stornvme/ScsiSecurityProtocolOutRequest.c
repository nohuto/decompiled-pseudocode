/*
 * XREFs of ScsiSecurityProtocolOutRequest @ 0x1C0008334
 * Callers:
 *     ScsiToNVMe @ 0x1C00088F0 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C000646C (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C000D49C (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSecurityProtocolOutRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r10
  char v5; // dl
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 result; // rax
  unsigned int v9; // edi
  unsigned int *v10; // rax
  unsigned int v11; // ecx
  unsigned __int16 v12; // [rsp+40h] [rbp+8h]
  unsigned int v13; // [rsp+48h] [rbp+10h]

  v3 = a2;
  v5 = *(_BYTE *)(a2 + 2);
  if ( v5 == 40 )
    v6 = *(_QWORD *)(v3 + 104);
  else
    v6 = *(_QWORD *)(v3 + 56);
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  v7 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1072) + 256LL) & 1) == 0 )
    goto LABEL_7;
  HIBYTE(v13) = a3[6];
  BYTE2(v13) = a3[7];
  BYTE1(v13) = a3[8];
  LOBYTE(v13) = a3[9];
  v9 = v13;
  if ( (char)a3[4] < 0 )
    v9 = v13 << 9;
  HIBYTE(v12) = a3[2];
  LOBYTE(v12) = a3[3];
  v10 = (unsigned int *)(v3 + 60);
  if ( v5 != 40 )
    v10 = (unsigned int *)(v3 + 16);
  if ( *v10 >= v9 )
  {
    *(_BYTE *)(v6 + 4166) = 1;
    *(_BYTE *)(v6 + 4167) = v9 != 0;
    SrbAssignQueueId(a1, v3);
    *(_BYTE *)(v6 + 4139) = a3[1];
    v11 = *(_DWORD *)(v6 + 4136) & 0xFF0000FF | (v12 << 8);
    *(_BYTE *)(v6 + 4096) = -127;
    *(_DWORD *)(v6 + 4136) = v11;
    result = 0LL;
    *(_DWORD *)(v6 + 4140) = v9;
  }
  else
  {
LABEL_7:
    LOBYTE(v7) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v3, a2, a3, v7);
    return 3238002694LL;
  }
  return result;
}
