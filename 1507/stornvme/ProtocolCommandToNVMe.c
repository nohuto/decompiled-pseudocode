/*
 * XREFs of ProtocolCommandToNVMe @ 0x1C000A7CC
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001E50 (NVMeHwBuildIo.c)
 * Callees:
 *     SglToPrp @ 0x1C0005F6C (SglToPrp.c)
 *     FillClippedSGL @ 0x1C0006128 (FillClippedSGL.c)
 *     SrbAssignQueueId @ 0x1C0006344 (SrbAssignQueueId.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C000A3C4 (NVMeValidateProtocolCommandRequest.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

__int64 __fastcall ProtocolCommandToNVMe(_DWORD *a1, __int64 a2)
{
  char v4; // cl
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // r12d
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // r15d
  int v15; // ecx
  int v16; // ecx

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  v6 = 0LL;
  if ( v4 == 40 )
    v7 = *(_QWORD *)(a2 + 64);
  else
    v7 = *(_QWORD *)(a2 + 24);
  v9 = NVMeValidateProtocolCommandRequest((__int64)a1, a2);
  if ( !v9 )
  {
    if ( *(_DWORD *)(v7 + 36) )
    {
      v10 = *(unsigned int *)(v7 + 52);
    }
    else
    {
      if ( !*(_DWORD *)(v7 + 32) )
        goto LABEL_25;
      v10 = *(unsigned int *)(v7 + 48);
    }
    v6 = v7 + v10;
    if ( v7 + v10 )
    {
      v11 = a1[7];
      v12 = a1[34];
      if ( v11 )
      {
        if ( v11 < v12 )
          v12 = a1[7];
      }
      else if ( v12 > 0x80000 )
      {
        v12 = 0x80000;
      }
      v13 = a1[12];
      if ( v13 && v13 < v12 )
        v12 = a1[12];
      StorPortExtendedFunction(0LL, a1, 24 * (((v12 - 1) >> 12) + 2) + 16, 1701672526LL);
      *(_DWORD *)(v7 + 16) = 7;
      *(_BYTE *)(a2 + 3) = 21;
      v9 = -1056964607;
      goto LABEL_32;
    }
LABEL_25:
    if ( *(int *)(v7 + 12) >= 0 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v15 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v15 = *(unsigned __int8 *)(a2 + 7);
      v14 = v15 + 1;
    }
    else
    {
      v14 = *(_DWORD *)(v7 + 84);
    }
    *(_BYTE *)(v5 + 4166) = *(_DWORD *)(v7 + 56) == 1;
    *(_BYTE *)(v5 + 4167) = v6 != 0;
    SrbAssignQueueId((__int64)a1, a2);
    *(_BYTE *)(v5 + 4096) = *(_BYTE *)(v7 + 80);
    v16 = *(_DWORD *)(v5 + 4096) ^ *(_DWORD *)(v7 + 80);
    *(_DWORD *)(v5 + 4100) = v14;
    *(_DWORD *)(v5 + 4096) ^= v16 & 0x300;
    *(_DWORD *)(v5 + 4136) = *(_DWORD *)(v7 + 120);
    *(_DWORD *)(v5 + 4140) = *(_DWORD *)(v7 + 124);
    *(_DWORD *)(v5 + 4144) = *(_DWORD *)(v7 + 128);
    *(_DWORD *)(v5 + 4148) = *(_DWORD *)(v7 + 132);
    *(_DWORD *)(v5 + 4152) = *(_DWORD *)(v7 + 136);
    *(_DWORD *)(v5 + 4156) = *(_DWORD *)(v7 + 140);
    *(_QWORD *)(v5 + 4216) = ProtocolCommandCompletion;
  }
LABEL_32:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    *(_DWORD *)(v7 + 16) = 0;
    SglToPrp((__int64)a1, a2, v8);
  }
  return v9;
}
