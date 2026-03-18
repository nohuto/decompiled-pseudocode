/*
 * XREFs of NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0008BA0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C000EF40 (memset.c)
 */

char __fastcall NVMeGetLogPageFirmwareSlotCompletion(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  _BYTE *v7; // r12
  _DWORD *v8; // rsi
  char *v9; // rdi
  bool v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // r8
  __int64 v15; // rcx
  char v16; // al
  char v17; // cl
  char v18; // al
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // cl
  __int64 v23; // r8
  __int64 v24; // r8

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  v5 = v4 & 0xFFF;
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - v5 + 4096;
  v6 = *(_QWORD *)(a1 + 1072);
  v7 = *(_BYTE **)(v4 + 4192);
  if ( v2 == 40 )
    v8 = *(_DWORD **)(a2 + 64);
  else
    v8 = *(_DWORD **)(a2 + 24);
  v9 = (char *)v8 + (unsigned int)v8[11];
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    v8[5] = 1;
    goto LABEL_49;
  }
  v10 = *(_DWORD *)v9 == 2 && *((_DWORD *)v9 + 1) >= 0x18u;
  v11 = v8[12];
  if ( (v11 & 3) != 0 )
  {
    if ( v11 )
      memset((char *)v8 + (unsigned int)v8[11], 0, (unsigned int)v8[12]);
  }
  else
  {
    v12 = v11 >> 2;
    if ( v12 )
      memset((char *)v8 + (unsigned int)v8[11], 0, 4LL * v12);
  }
  if ( v10 )
  {
    *(_DWORD *)v9 = 2;
    *((_DWORD *)v9 + 1) = 24;
    v9[8] = (*(_BYTE *)(v6 + 256) & 4) != 0;
    v9[9] = (*(_BYTE *)(v6 + 260) >> 1) & 7;
    v9[10] = *v7 & 7;
    v16 = (*v7 >> 4) & 7;
    v9[12] = 1;
    v17 = v16;
    v18 = -1;
    *((_DWORD *)v9 + 4) = 4;
    if ( v17 )
      v18 = v17;
    v9[11] = v18;
    v19 = *(_DWORD *)(a1 + 28);
    LODWORD(v5) = *(_DWORD *)(a1 + 136);
    if ( v19 )
    {
      if ( v19 < (unsigned int)v5 )
        LODWORD(v5) = *(_DWORD *)(a1 + 28);
    }
    else if ( (unsigned int)v5 > 0x80000 )
    {
      LODWORD(v5) = 0x80000;
    }
    v20 = *(_DWORD *)(a1 + 48);
    if ( v20 && v20 < (unsigned int)v5 )
      LODWORD(v5) = *(_DWORD *)(a1 + 48);
    v21 = 0;
    *((_DWORD *)v9 + 5) = v5;
    if ( (*(_BYTE *)(v6 + 260) & 0xE) != 0 )
    {
      while ( (unsigned int)v8[12] >= (unsigned __int64)(16 * (v21 + 1 + 1LL)) )
      {
        v22 = v21 + 1;
        v23 = 3LL * v21;
        v9[24 * v21 + 24] = v21 + 1;
        if ( v21 )
          v9[24 * v21 + 25] = 0;
        else
          v9[25] = *(_BYTE *)(v6 + 260) & 1;
        v5 = *(_QWORD *)&v7[8 * v21++ + 8];
        *(_QWORD *)&v9[8 * v23 + 32] = v5;
        LOBYTE(v5) = (*(_BYTE *)(v6 + 260) >> 1) & 7;
        if ( v22 >= (unsigned __int8)v5 )
          goto LABEL_48;
      }
      goto LABEL_30;
    }
  }
  else
  {
    *(_DWORD *)v9 = 1;
    *((_DWORD *)v9 + 1) = 16;
    v9[8] = (*(_BYTE *)(v6 + 256) & 4) != 0;
    v9[9] = (*(_BYTE *)(v6 + 260) >> 1) & 7;
    v9[10] = *v7 & 7;
    LOBYTE(v5) = -1;
    if ( ((*v7 >> 4) & 7) != 0 )
      LOBYTE(v5) = (*v7 >> 4) & 7;
    v13 = 0;
    v9[11] = v5;
    if ( (*(_BYTE *)(v6 + 260) & 0xE) != 0 )
    {
      while ( (unsigned int)v8[12] >= (unsigned __int64)(16 * (v13 + 1 + 1LL)) )
      {
        v14 = v13 + 1;
        v15 = 2LL * v13;
        v9[16 * v13 + 16] = v13 + 1;
        if ( v13 )
          v9[16 * v13 + 17] = 0;
        else
          v9[17] = *(_BYTE *)(v6 + 260) & 1;
        v5 = *(_QWORD *)&v7[8 * v13++ + 8];
        *(_QWORD *)&v9[8 * v15 + 24] = v5;
        LOBYTE(v5) = (*(_BYTE *)(v6 + 260) >> 1) & 7;
        if ( v14 >= (unsigned __int8)v5 )
          goto LABEL_48;
      }
LABEL_30:
      LODWORD(v5) = 16 * (((*(unsigned __int8 *)(v6 + 260) >> 1) & 7) + 1);
      v8[12] = v5;
      v8[5] = 5;
      goto LABEL_49;
    }
  }
LABEL_48:
  v8[5] = 0;
LABEL_49:
  v24 = *(_QWORD *)(v4 + 4192);
  if ( v24 )
    LOBYTE(v5) = StorPortExtendedFunction(25LL, a1, v24, *(unsigned int *)(v4 + 4200));
  *(_QWORD *)(v4 + 4192) = 0LL;
  *(_DWORD *)(v4 + 4200) = 0;
  *(_BYTE *)(v4 + 4186) = 1;
  return v5;
}
