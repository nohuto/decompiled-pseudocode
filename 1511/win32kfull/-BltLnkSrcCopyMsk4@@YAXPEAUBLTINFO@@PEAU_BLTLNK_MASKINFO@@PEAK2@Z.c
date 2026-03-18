/*
 * XREFs of ?BltLnkSrcCopyMsk4@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02D3D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk4(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // r13
  struct BLTINFO *v5; // r14
  __int64 v6; // rcx
  int v8; // ebp
  __int64 v9; // rdi
  int v10; // r12d
  unsigned int v11; // r10d
  int v12; // esi
  unsigned int v13; // r15d
  char *v14; // r8
  unsigned __int8 *v15; // rbx
  char v16; // r9
  unsigned __int8 v17; // al
  char v18; // cl
  int v19; // esi
  unsigned __int64 v20; // r13
  int v21; // edx
  unsigned int v22; // r10d
  char v23; // r12
  char v24; // r9
  unsigned __int8 v25; // al
  char v26; // cl
  char v27; // cl
  char v28; // al
  char v29; // cl
  char v30; // cl
  unsigned __int8 v31; // al
  char v32; // cl
  char v33; // cl
  __int64 v34; // [rsp+0h] [rbp-48h]
  __int64 v35; // [rsp+8h] [rbp-40h]
  int v37; // [rsp+58h] [rbp+10h]

  v4 = *((_QWORD *)a1 + 1);
  v5 = a1;
  v6 = *((_QWORD *)a1 + 2);
  v8 = *((_DWORD *)a2 + 5);
  v9 = *(_QWORD *)a2;
  v10 = *((_DWORD *)v5 + 8);
  v35 = v4;
  v34 = v6;
  while ( v10 )
  {
    --v10;
    v11 = *((_DWORD *)a2 + 7);
    v12 = *((_DWORD *)v5 + 12);
    v13 = *((_DWORD *)v5 + 7);
    v14 = (char *)(v6 + ((__int64)*((int *)v5 + 14) >> 1));
    v37 = v10;
    v15 = (unsigned __int8 *)(v4 + ((__int64)v12 >> 1));
    v16 = (*((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v11 >> 3) + v9)) << (*((_BYTE *)a2 + 28) & 7);
    if ( (*((_DWORD *)v5 + 14) & 1) != 0 )
    {
      if ( v16 < 0 )
      {
        v17 = *v15;
        v18 = *v14;
        if ( (v12 & 1) != 0 )
          *v14 ^= (v17 ^ v18) & 0xF;
        else
          *v14 = (v17 >> 4) | v18 & 0xF0;
      }
      ++v14;
      LOBYTE(v12) = v12 + 1;
      if ( (v12 & 1) == 0 )
        ++v15;
      v16 *= 2;
      ++v11;
      --v13;
    }
    v19 = v12 & 1;
    if ( v13 >= 2 )
    {
      v20 = (unsigned __int64)v13 >> 1;
      while ( 1 )
      {
        v21 = *((_DWORD *)a2 + 6);
        if ( v11 == v21 )
          v11 = 0;
        if ( (v11 & 7) == 0 )
          v16 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v11 >> 3) + v9);
        v22 = v11 + 1;
        v23 = v16;
        v24 = 2 * v16;
        if ( v22 == v21 )
          v22 = 0;
        if ( (v22 & 7) == 0 )
          v24 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v22 >> 3) + v9);
        if ( v23 >= 0 )
        {
          if ( v24 < 0 )
          {
            v30 = *v14;
            v31 = *v15;
            if ( !v19 )
            {
              *v14 ^= (v31 ^ v30) & 0xF;
              goto LABEL_35;
            }
            v26 = v30 & 0xF0;
            v28 = v31 >> 4;
LABEL_32:
            v29 = v28 | v26;
LABEL_33:
            *v14 = v29;
          }
        }
        else
        {
          v25 = *v15;
          if ( v24 >= 0 )
          {
            v27 = *v14;
            if ( !v19 )
            {
              v29 = v25 ^ (v25 ^ v27) & 0xF;
              goto LABEL_33;
            }
            v26 = v27 & 0xF;
LABEL_27:
            v28 = 16 * v25;
            goto LABEL_32;
          }
          if ( v19 )
          {
            v26 = v15[1] >> 4;
            goto LABEL_27;
          }
          *v14 = v25;
        }
LABEL_35:
        v16 = 2 * v24;
        v11 = v22 + 1;
        ++v14;
        ++v15;
        v13 -= 2;
        if ( !--v20 )
        {
          v5 = a1;
          v10 = v37;
          v4 = v35;
          break;
        }
      }
    }
    if ( v13 )
    {
      if ( v11 == *((_DWORD *)a2 + 6) )
        v11 = 0;
      if ( (v11 & 7) == 0 )
        v16 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v11 >> 3) + v9);
      if ( v16 < 0 )
      {
        v32 = *v14;
        if ( v19 )
          v33 = (16 * *v15) | v32 & 0xF;
        else
          v33 = *v15 ^ (*v15 ^ v32) & 0xF;
        *v14 = v33;
      }
    }
    v6 = *((int *)v5 + 11) + v34;
    v4 += *((int *)v5 + 10);
    v34 = v6;
    v35 = v4;
    if ( *((int *)v5 + 9) <= 0 )
    {
      if ( v8 )
      {
        --v8;
        v9 += *((int *)a2 + 8);
      }
      else
      {
        v8 = *((_DWORD *)a2 + 4) - 1;
        v9 = *((_QWORD *)a2 + 1) + *((_DWORD *)a2 + 8) * v8;
      }
    }
    else
    {
      ++v8;
      v9 += *((int *)a2 + 8);
      if ( v8 >= *((_DWORD *)a2 + 4) )
      {
        v9 = *((_QWORD *)a2 + 1);
        v8 = 0;
      }
    }
  }
}
