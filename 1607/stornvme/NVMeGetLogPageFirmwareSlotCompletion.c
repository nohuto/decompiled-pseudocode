/*
 * XREFs of NVMeGetLogPageFirmwareSlotCompletion @ 0x1C000A460
 * Callers:
 *     <none>
 * Callees:
 *     GetControllerMaxTransferSize @ 0x1C0004744 (GetControllerMaxTransferSize.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0007514 (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall NVMeGetLogPageFirmwareSlotCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 SrbExtension; // rsi
  __int64 v5; // rbp
  _BYTE *v6; // r15
  _DWORD *v7; // rdi
  char *v8; // rbx
  bool v9; // r14
  int v10; // r10d
  unsigned __int8 v11; // dl
  char v12; // al
  unsigned __int8 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // al
  char v17; // cl
  char v18; // al
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // cl
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_QWORD *)(a1 + 1080);
  v6 = *(_BYTE **)(SrbExtension + 4200);
  if ( *(_BYTE *)(v3 + 2) == 40 )
    v7 = *(_DWORD **)(v3 + 64);
  else
    v7 = *(_DWORD **)(v3 + 24);
  v8 = (char *)v7 + (unsigned int)v7[11];
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    v9 = *(_DWORD *)v8 == 2 && *((_DWORD *)v8 + 1) >= 0x18u;
    NVMeZeroMemory((char *)v7 + (unsigned int)v7[11], v7[12]);
    v10 = 0;
    if ( v9 )
    {
      *(_DWORD *)v8 = 2;
      *((_DWORD *)v8 + 1) = 24;
      v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
      v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
      v8[10] = *v6 & 7;
      v16 = (*v6 >> 4) & 7;
      v8[12] = 1;
      v17 = v16;
      v18 = -1;
      *((_DWORD *)v8 + 4) = 4;
      if ( v17 )
        v18 = v17;
      v8[11] = v18;
      *((_DWORD *)v8 + 5) = GetControllerMaxTransferSize((_DWORD *)a1);
      v19 = v10;
      if ( (*(_BYTE *)(v5 + 260) & 0xE) != 0 )
      {
        while ( (unsigned int)v7[12] >= (unsigned __int64)(16 * (v19 + 1 + 1LL)) )
        {
          v20 = v19 + 1;
          v21 = 3LL * v19;
          v8[24 * v19 + 24] = v19 + 1;
          if ( v19 )
            v8[24 * v19 + 25] = v10;
          else
            v8[25] = *(_BYTE *)(v5 + 260) & 1;
          v22 = *(_QWORD *)&v6[8 * v19++ + 8];
          *(_QWORD *)&v8[8 * v21 + 32] = v22;
          if ( v20 >= (unsigned __int8)((*(_BYTE *)(v5 + 260) >> 1) & 7) )
            goto LABEL_29;
        }
        goto LABEL_20;
      }
    }
    else
    {
      *(_DWORD *)v8 = 1;
      v11 = 0;
      *((_DWORD *)v8 + 1) = 16;
      v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
      v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
      v8[10] = *v6 & 7;
      v12 = -1;
      if ( ((*v6 >> 4) & 7) != 0 )
        v12 = (*v6 >> 4) & 7;
      v8[11] = v12;
      if ( (*(_BYTE *)(v5 + 260) & 0xE) != 0 )
      {
        while ( (unsigned int)v7[12] >= (unsigned __int64)(16 * (v11 + 1 + 1LL)) )
        {
          v13 = v11 + 1;
          v14 = 2LL * v11;
          v8[16 * v11 + 16] = v11 + 1;
          if ( v11 )
            v8[16 * v11 + 17] = 0;
          else
            v8[17] = *(_BYTE *)(v5 + 260) & 1;
          v15 = *(_QWORD *)&v6[8 * v11++ + 8];
          *(_QWORD *)&v8[8 * v14 + 24] = v15;
          if ( v13 >= (unsigned __int8)((*(_BYTE *)(v5 + 260) >> 1) & 7) )
            goto LABEL_29;
        }
LABEL_20:
        v7[12] = 16 * (((*(unsigned __int8 *)(v5 + 260) >> 1) & 7) + 1);
        v7[5] = 5;
        goto LABEL_30;
      }
    }
LABEL_29:
    v7[5] = v10;
    goto LABEL_30;
  }
  v7[5] = 1;
LABEL_30:
  result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(SrbExtension + 4232), *(_QWORD *)(SrbExtension + 4200));
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  *(_DWORD *)(SrbExtension + 4232) = 0;
  *(_BYTE *)(SrbExtension + 4245) |= 8u;
  return result;
}
