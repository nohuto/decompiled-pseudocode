/*
 * XREFs of ScsiModeSelectRequest @ 0x1C0007544
 * Callers:
 *     ScsiToNVMe @ 0x1C00087C0 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0006344 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C000D36C (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiModeSelectRequest(__int64 a1, __int64 a2, char *a3)
{
  char v3; // r11
  unsigned __int8 *v6; // rdx
  unsigned int *v7; // r9
  char v8; // bl
  char v9; // al
  bool v10; // zf
  __int64 v11; // r8
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  int v15; // eax
  unsigned int v16; // eax
  unsigned __int8 *v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // rbx
  bool v20; // al
  int v21; // eax
  unsigned __int16 v22; // [rsp+48h] [rbp+10h]

  v3 = *(_BYTE *)(a2 + 2);
  if ( v3 == 40 )
  {
    v6 = *(unsigned __int8 **)(a2 + 64);
    v7 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v6 = *(unsigned __int8 **)(a2 + 24);
    v7 = (unsigned int *)(a2 + 16);
  }
  v8 = *a3;
  v9 = a3[1];
  v10 = *a3 == 21;
  v11 = 8LL;
  if ( v10 )
    v11 = 4LL;
  if ( (v9 & 0x10) == 0 )
    goto LABEL_10;
  if ( !v6 )
  {
    v12 = -1056964605;
LABEL_11:
    LOBYTE(v7) = 36;
    LOBYTE(v6) = 6;
    NVMeSetSenseData(a2, v6, v11, v7);
    return v12;
  }
  v13 = *v7;
  if ( *v7 < (unsigned int)v11 )
  {
LABEL_10:
    v12 = -1056964601;
    goto LABEL_11;
  }
  if ( v8 == 21 )
  {
    v15 = v6[3];
  }
  else
  {
    HIBYTE(v22) = v6[6];
    LOBYTE(v22) = v6[7];
    v15 = v22;
  }
  v16 = v11 + v15;
  v17 = &v6[v16];
  if ( v13 <= v16 )
    v18 = 0;
  else
    v18 = v13 - v16;
  if ( v18 >= 0xC && (*v17 & 0x3F) == 8 && v17[1] == 10 && (*(_BYTE *)(*(_QWORD *)(a1 + 1072) + 525LL) & 1) != 0 )
  {
    if ( v3 == 40 )
      v19 = *(_QWORD *)(a2 + 104);
    else
      v19 = *(_QWORD *)(a2 + 56);
    if ( (v19 & 0xFFF) != 0 )
      v19 = v19 - (v19 & 0xFFF) + 4096;
    *(_WORD *)(v19 + 4166) = 1;
    SrbAssignQueueId(a1, a2);
    v20 = (v17[2] & 4) != 0;
    *(_BYTE *)(v19 + 4096) = 9;
    v21 = (*(_DWORD *)(v19 + 4140) ^ v20) & 1;
    *(_BYTE *)(v19 + 4136) = 6;
    *(_DWORD *)(v19 + 4140) ^= v21;
    return 0LL;
  }
  else
  {
    LOBYTE(v7) = 36;
    LOBYTE(v6) = 6;
    NVMeSetSenseData(a2, v6, v11, v7);
    return 3238002694LL;
  }
}
