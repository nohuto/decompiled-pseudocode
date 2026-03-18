/*
 * XREFs of ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00F8F80
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1C00F9100 (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x1C02D3088 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // rdi
  int v3; // r13d
  int v4; // r12d
  int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // r11
  int v8; // esi
  unsigned int v9; // r9d
  unsigned int v10; // r12d
  int v11; // ecx
  unsigned int v12; // r14d
  int v13; // r8d
  int v14; // eax
  int v15; // r15d
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  int v18; // eax
  int v19; // edi
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // rcx
  int v23; // eax
  int v24; // r10d
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // r11d
  _DWORD *v30; // r9
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-30h] BYREF
  __int64 v34; // [rsp+28h] [rbp-28h]
  unsigned int v35; // [rsp+30h] [rbp-20h]
  unsigned int v36; // [rsp+34h] [rbp-1Ch]
  unsigned int v37; // [rsp+38h] [rbp-18h]
  unsigned int v38; // [rsp+3Ch] [rbp-14h]
  int v39; // [rsp+90h] [rbp+40h]
  int v40; // [rsp+98h] [rbp+48h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v3 = 0;
  v4 = *((_DWORD *)a1 + 12) * v1[2];
  v5 = *((_DWORD *)a1 + 12) * *v1;
  v6 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v1 + 8)) & 3;
  v40 = v6;
  v7 = v5 & 3;
  v8 = aulLeftMask[v7];
  v39 = ~aulLeftMask[v6];
  v9 = v5 & 0xFFFFFFFC;
  v10 = v4 & 0xFFFFFFFC;
  v11 = v9 - *((_DWORD *)a1 + 8);
  if ( v11 < 0 )
    v12 = *((_DWORD *)a1 + 10) - (unsigned int)(-1 - v11) % *((_DWORD *)a1 + 10) - 1;
  else
    v12 = (unsigned int)v11 % *((_DWORD *)a1 + 10);
  v13 = v1[1];
  v14 = v13 - *((_DWORD *)a1 + 9);
  if ( v14 < 0 )
    v15 = *((_DWORD *)a1 + 11) - (unsigned int)(-1 - v14) % *((_DWORD *)a1 + 11) - 1;
  else
    v15 = (unsigned int)v14 % *((_DWORD *)a1 + 11);
  if ( v9 == v10 )
  {
    v8 &= v39;
    v3 = 1;
  }
  else if ( !(_DWORD)v7 )
  {
    goto LABEL_7;
  }
  v35 = v12;
  v24 = v15;
  v25 = (_DWORD *)(*(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v13));
  v26 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
  if ( v13 < v1[3] )
  {
    do
    {
      ++v24;
      *v25 ^= v8 & *(_DWORD *)(v12 + v26);
      if ( v24 == *((_DWORD *)a1 + 11) )
      {
        v26 = *((_QWORD *)a1 + 1);
        v24 = 0;
      }
      else
      {
        v26 += *((int *)a1 + 5);
      }
      ++v13;
      v25 = (_DWORD *)((char *)v25 + *((int *)a1 + 4));
    }
    while ( v13 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
  }
  if ( !v3 )
  {
    v9 += 4;
    v12 += 4;
LABEL_7:
    v16 = (v10 - v9) >> 2;
    v37 = v16;
    if ( v16 )
    {
      v17 = *((_DWORD *)a1 + 10);
      v36 = v17;
      v18 = *((_DWORD *)a1 + 4);
      v19 = v15;
      v12 %= v17;
      v38 = v17;
      v20 = *((_QWORD *)a1 + 3);
      v35 = v12;
      v21 = *(_DWORD *)(v20 + 4);
      v22 = v9 + (__int64)(v21 * v18);
      v23 = v15 * *((_DWORD *)a1 + 5);
      v33 = *(_QWORD *)a1 + v22;
      v34 = *((_QWORD *)a1 + 1) + v23;
      if ( (((unsigned __int8)v12 | (unsigned __int8)v17) & 3) != 0 )
      {
        if ( v21 >= *(_DWORD *)(v20 + 12) )
          goto LABEL_14;
        do
        {
          vFetchShiftAndMerge(&v33);
          if ( ++v19 == *((_DWORD *)a1 + 11) )
          {
            v19 = 0;
            v34 = *((_QWORD *)a1 + 1);
          }
          else
          {
            v34 += *((int *)a1 + 5);
          }
          ++v21;
          v33 += *((int *)a1 + 4);
          v27 = *((_QWORD *)a1 + 3);
          v35 = v12;
        }
        while ( v21 < *(_DWORD *)(v27 + 12) );
        goto LABEL_13;
      }
      v38 = v17 >> 2;
      if ( v21 < *(_DWORD *)(v20 + 12) )
      {
        do
        {
          vFetchAndMerge(&v33);
          if ( ++v19 == *((_DWORD *)a1 + 11) )
          {
            v19 = 0;
            v34 = *((_QWORD *)a1 + 1);
          }
          else
          {
            v34 += *((int *)a1 + 5);
          }
          ++v21;
          v33 += *((int *)a1 + 4);
        }
        while ( v21 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
LABEL_13:
        v16 = v37;
      }
    }
LABEL_14:
    if ( v40 )
    {
      v28 = *((_QWORD *)a1 + 3);
      v29 = *(_DWORD *)(v28 + 4);
      v30 = (_DWORD *)(*(_QWORD *)a1 + v10 + (__int64)(*((_DWORD *)a1 + 4) * v29));
      v31 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
      if ( v29 < *(_DWORD *)(v28 + 12) )
      {
        v32 = (v12 + 4 * v16) % *((_DWORD *)a1 + 10);
        do
        {
          ++v15;
          *v30 ^= v39 & *(_DWORD *)(v32 + v31);
          if ( v15 == *((_DWORD *)a1 + 11) )
          {
            v31 = *((_QWORD *)a1 + 1);
            v15 = 0;
          }
          else
          {
            v31 += *((int *)a1 + 5);
          }
          ++v29;
          v30 = (_DWORD *)((char *)v30 + *((int *)a1 + 4));
        }
        while ( v29 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
