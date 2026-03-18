/*
 * XREFs of ScsiUnmapRequest @ 0x1C0007F64
 * Callers:
 *     ScsiToNVMe @ 0x1C00088F0 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C000646C (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C000D49C (NVMeSetSenseData.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall ScsiUnmapRequest(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // cl
  __int64 v7; // rbx
  __int64 v8; // rdx
  _DWORD *v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // r14
  unsigned __int16 v12; // si
  __int64 result; // rax
  _BYTE *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r14
  int v17; // eax
  unsigned __int16 v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a2 + 2);
  v18 = 0;
  if ( v4 == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  if ( v4 == 40 )
  {
    v8 = *(_QWORD *)(a2 + 64);
    v9 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 24);
    v9 = (_DWORD *)(a2 + 16);
  }
  if ( (*(_DWORD *)(a1 + 52) & 1) != 0
    || (*(_BYTE *)(*(_QWORD *)(a1 + 1072) + 520LL) & 4) == 0
    || (*(_BYTE *)(a3 + 1) & 1) != 0 )
  {
    LOBYTE(a3) = 36;
    LOBYTE(v8) = 6;
    NVMeSetSenseData(a2, v8, v9, a3);
    return 3238002694LL;
  }
  else
  {
    if ( *v9 < 0x18u )
    {
      v10 = -1056964604;
LABEL_16:
      LOBYTE(a3) = 36;
      LOBYTE(v8) = 21;
      NVMeSetSenseData(a2, v8, v9, a3);
      return v10;
    }
    v11 = v8 + 8;
    HIBYTE(v18) = *(_BYTE *)(v8 + 2);
    LOBYTE(v18) = *(_BYTE *)(v8 + 3);
    v12 = v18 >> 4;
    if ( (unsigned __int16)(v18 >> 4) > 0x100u )
    {
      v10 = -1056964602;
      goto LABEL_16;
    }
    memset((void *)v7, 0, 0x1000uLL);
    if ( v12 )
    {
      v14 = (_BYTE *)(v7 + 14);
      v15 = v12;
      v16 = v11 - v7;
      do
      {
        v14[1] = v14[v16 - 14];
        *v14 = v14[v16 - 13];
        *(v14 - 1) = v14[v16 - 12];
        *(v14 - 2) = v14[v16 - 11];
        *(v14 - 3) = v14[v16 - 10];
        *(v14 - 4) = v14[v16 - 9];
        *(v14 - 5) = v14[v16 - 8];
        *(v14 - 6) = v14[v16 - 7];
        *(v14 - 7) = v14[v16 - 6];
        *(v14 - 8) = v14[v16 - 5];
        *(v14 - 9) = v14[v16 - 4];
        *(v14 - 10) = v14[v16 - 3];
        v14 += 16;
        --v15;
      }
      while ( v15 );
    }
    *(_WORD *)(v7 + 4166) = 256;
    SrbAssignQueueId(a1, a2);
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v17 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v17 = *(unsigned __int8 *)(a2 + 7);
    *(_DWORD *)(v7 + 4140) |= 4u;
    *(_BYTE *)(v7 + 4096) = 9;
    *(_DWORD *)(v7 + 4100) = v17 + 1;
    *(_BYTE *)(v7 + 4136) = v12 - 1;
    *(_QWORD *)(v7 + 4120) = StorPortGetPhysicalAddress(a1, 0LL, v7, &v18);
    result = 0LL;
    *(_BYTE *)(v7 + 4168) = 1;
  }
  return result;
}
