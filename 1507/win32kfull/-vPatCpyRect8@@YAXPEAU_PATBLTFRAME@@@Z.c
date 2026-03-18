/*
 * XREFs of ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00D5080
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndCopy @ 0x1C00D521C (vFetchAndCopy.c)
 *     vFetchShiftAndCopy @ 0x1C02D1EB8 (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // rsi
  unsigned int v3; // r9d
  __int64 v4; // r11
  unsigned int v5; // r12d
  __int64 v6; // rcx
  int v7; // edi
  int v8; // r13d
  int v9; // ecx
  unsigned int v10; // r14d
  int v11; // r10d
  int v12; // eax
  int v13; // r15d
  unsigned int v14; // r8d
  unsigned int v15; // r10d
  int v16; // eax
  int v17; // edi
  __int64 v18; // rdx
  int v19; // esi
  __int64 v20; // rcx
  int v21; // eax
  int v22; // r11d
  int *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // r11d
  int *v28; // r9
  __int64 v29; // r10
  __int64 v30; // r8
  __int64 v31; // [rsp+20h] [rbp-30h] BYREF
  __int64 v32; // [rsp+28h] [rbp-28h]
  unsigned int v33; // [rsp+30h] [rbp-20h]
  unsigned int v34; // [rsp+34h] [rbp-1Ch]
  unsigned int v35; // [rsp+38h] [rbp-18h]
  unsigned int v36; // [rsp+3Ch] [rbp-14h]
  int v37; // [rsp+90h] [rbp+40h]
  int v38; // [rsp+A0h] [rbp+50h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v37 = 0;
  v3 = (*((_DWORD *)a1 + 12) * *v1) & 0xFFFFFFFC;
  v4 = (*((_BYTE *)a1 + 48) * *(_BYTE *)v1) & 3;
  v5 = (*((_DWORD *)a1 + 12) * v1[2]) & 0xFFFFFFFC;
  v6 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v1 + 8)) & 3;
  v38 = v6;
  v7 = aulLeftMask[v4];
  v8 = ~aulLeftMask[v6];
  v9 = v3 - *((_DWORD *)a1 + 8);
  if ( v9 >= 0 )
    v10 = (unsigned int)v9 % *((_DWORD *)a1 + 10);
  else
    v10 = *((_DWORD *)a1 + 10) - (unsigned int)(-1 - v9) % *((_DWORD *)a1 + 10) - 1;
  v11 = v1[1];
  v12 = v11 - *((_DWORD *)a1 + 9);
  if ( v12 < 0 )
    v13 = *((_DWORD *)a1 + 11) - (unsigned int)(-1 - v12) % *((_DWORD *)a1 + 11) - 1;
  else
    v13 = (unsigned int)v12 % *((_DWORD *)a1 + 11);
  if ( v3 == v5 )
  {
    v7 &= v8;
    v37 = 1;
  }
  else if ( !(_DWORD)v4 )
  {
    goto LABEL_7;
  }
  v33 = v10;
  v22 = v13;
  v23 = (int *)(*(_QWORD *)a1 + v3 + (__int64)(*((_DWORD *)a1 + 4) * v11));
  v24 = *((_QWORD *)a1 + 1) + v13 * *((_DWORD *)a1 + 5);
  if ( v11 < v1[3] )
  {
    do
    {
      ++v22;
      *v23 = *v23 & ~v7 | v7 & *(_DWORD *)(v10 + v24);
      if ( v22 == *((_DWORD *)a1 + 11) )
      {
        v24 = *((_QWORD *)a1 + 1);
        v22 = 0;
      }
      else
      {
        v24 += *((int *)a1 + 5);
      }
      ++v11;
      v23 = (int *)((char *)v23 + *((int *)a1 + 4));
    }
    while ( v11 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
  }
  if ( !v37 )
  {
    v3 += 4;
    v10 += 4;
LABEL_7:
    v14 = (v5 - v3) >> 2;
    v35 = v14;
    if ( v14 )
    {
      v15 = *((_DWORD *)a1 + 10);
      v34 = v15;
      v16 = *((_DWORD *)a1 + 4);
      v17 = v13;
      v10 %= v15;
      v36 = v15;
      v18 = *((_QWORD *)a1 + 3);
      v33 = v10;
      v19 = *(_DWORD *)(v18 + 4);
      v20 = v3 + (__int64)(v19 * v16);
      v21 = v13 * *((_DWORD *)a1 + 5);
      v31 = *(_QWORD *)a1 + v20;
      v32 = *((_QWORD *)a1 + 1) + v21;
      if ( (((unsigned __int8)v10 | (unsigned __int8)v15) & 3) != 0 )
      {
        if ( v19 >= *(_DWORD *)(v18 + 12) )
          goto LABEL_14;
        do
        {
          vFetchShiftAndCopy(&v31);
          if ( ++v17 == *((_DWORD *)a1 + 11) )
          {
            v17 = 0;
            v32 = *((_QWORD *)a1 + 1);
          }
          else
          {
            v32 += *((int *)a1 + 5);
          }
          ++v19;
          v31 += *((int *)a1 + 4);
          v25 = *((_QWORD *)a1 + 3);
          v33 = v10;
        }
        while ( v19 < *(_DWORD *)(v25 + 12) );
        goto LABEL_13;
      }
      v36 = v15 >> 2;
      if ( v19 < *(_DWORD *)(v18 + 12) )
      {
        do
        {
          vFetchAndCopy(&v31);
          if ( ++v17 == *((_DWORD *)a1 + 11) )
          {
            v17 = 0;
            v32 = *((_QWORD *)a1 + 1);
          }
          else
          {
            v32 += *((int *)a1 + 5);
          }
          ++v19;
          v31 += *((int *)a1 + 4);
        }
        while ( v19 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
LABEL_13:
        v14 = v35;
      }
    }
LABEL_14:
    if ( v38 )
    {
      v26 = *((_QWORD *)a1 + 3);
      v27 = *(_DWORD *)(v26 + 4);
      v28 = (int *)(*(_QWORD *)a1 + v5 + (__int64)(*((_DWORD *)a1 + 4) * v27));
      v29 = *((_QWORD *)a1 + 1) + v13 * *((_DWORD *)a1 + 5);
      if ( v27 < *(_DWORD *)(v26 + 12) )
      {
        v30 = (v10 + 4 * v14) % *((_DWORD *)a1 + 10);
        do
        {
          ++v13;
          *v28 = *v28 & ~v8 | v8 & *(_DWORD *)(v30 + v29);
          if ( v13 == *((_DWORD *)a1 + 11) )
          {
            v29 = *((_QWORD *)a1 + 1);
            v13 = 0;
          }
          else
          {
            v29 += *((int *)a1 + 5);
          }
          ++v27;
          v28 = (int *)((char *)v28 + *((int *)a1 + 4));
        }
        while ( v27 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
