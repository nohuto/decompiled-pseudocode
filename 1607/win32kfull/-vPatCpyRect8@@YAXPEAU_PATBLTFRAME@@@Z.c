/*
 * XREFs of ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C010C270
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndCopy @ 0x1C010C3F4 (vFetchAndCopy.c)
 *     vFetchShiftAndCopy @ 0x1C02D60DC (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // rsi
  int v3; // r9d
  unsigned int v4; // r12d
  __int64 v5; // rcx
  __int64 v6; // r11
  unsigned int v7; // r9d
  int v8; // r13d
  int v9; // ecx
  int v10; // r13d
  int v11; // edi
  unsigned int v12; // r14d
  int v13; // r10d
  int v14; // eax
  int v15; // r15d
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  int v18; // edi
  __int64 v19; // rdx
  int v20; // esi
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
  v3 = *((_DWORD *)a1 + 12) * *v1;
  v4 = (*((_DWORD *)a1 + 12) * v1[2]) & 0xFFFFFFFC;
  v5 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v1 + 8)) & 3;
  v38 = v5;
  v6 = v3 & 3;
  v7 = v3 & 0xFFFFFFFC;
  v8 = aulLeftMask[v5];
  v9 = v7 - *((_DWORD *)a1 + 8);
  v10 = ~v8;
  v11 = aulLeftMask[v6];
  if ( v9 < 0 )
    v12 = *((_DWORD *)a1 + 10) - (unsigned int)(-1 - v9) % *((_DWORD *)a1 + 10) - 1;
  else
    v12 = (unsigned int)v9 % *((_DWORD *)a1 + 10);
  v13 = v1[1];
  v14 = v13 - *((_DWORD *)a1 + 9);
  if ( v14 < 0 )
    v15 = *((_DWORD *)a1 + 11) - (unsigned int)(-1 - v14) % *((_DWORD *)a1 + 11) - 1;
  else
    v15 = (unsigned int)v14 % *((_DWORD *)a1 + 11);
  if ( v7 == v4 )
  {
    v11 &= v10;
    v37 = 1;
  }
  else if ( !(_DWORD)v6 )
  {
    goto LABEL_7;
  }
  v33 = v12;
  v22 = v15;
  v23 = (int *)(*(_QWORD *)a1 + v7 + (__int64)(*((_DWORD *)a1 + 4) * v13));
  v24 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
  if ( v13 < v1[3] )
  {
    do
    {
      ++v22;
      *v23 = *v23 & ~v11 | v11 & *(_DWORD *)(v24 + v12);
      if ( v22 == *((_DWORD *)a1 + 11) )
      {
        v24 = *((_QWORD *)a1 + 1);
        v22 = 0;
      }
      else
      {
        v24 += *((int *)a1 + 5);
      }
      ++v13;
      v23 = (int *)((char *)v23 + *((int *)a1 + 4));
    }
    while ( v13 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
  }
  if ( !v37 )
  {
    v7 += 4;
    v12 += 4;
LABEL_7:
    v16 = (v4 - v7) >> 2;
    v35 = v16;
    if ( v16 )
    {
      v17 = *((_DWORD *)a1 + 10);
      v34 = v17;
      v18 = v15;
      v36 = v17;
      v12 %= v17;
      v19 = *((_QWORD *)a1 + 3);
      v33 = v12;
      v20 = *(_DWORD *)(v19 + 4);
      v21 = v15 * *((_DWORD *)a1 + 5);
      v31 = *(_QWORD *)a1 + v7 + (__int64)(*((_DWORD *)a1 + 4) * v20);
      v32 = *((_QWORD *)a1 + 1) + v21;
      if ( (((unsigned __int8)v12 | (unsigned __int8)v17) & 3) != 0 )
      {
        if ( v20 >= *(_DWORD *)(v19 + 12) )
          goto LABEL_14;
        do
        {
          vFetchShiftAndCopy(&v31);
          if ( ++v18 == *((_DWORD *)a1 + 11) )
          {
            v18 = 0;
            v32 = *((_QWORD *)a1 + 1);
          }
          else
          {
            v32 += *((int *)a1 + 5);
          }
          ++v20;
          v31 += *((int *)a1 + 4);
          v25 = *((_QWORD *)a1 + 3);
          v33 = v12;
        }
        while ( v20 < *(_DWORD *)(v25 + 12) );
        goto LABEL_13;
      }
      v36 = v17 >> 2;
      if ( v20 < *(_DWORD *)(v19 + 12) )
      {
        do
        {
          vFetchAndCopy(&v31);
          if ( ++v18 == *((_DWORD *)a1 + 11) )
          {
            v18 = 0;
            v32 = *((_QWORD *)a1 + 1);
          }
          else
          {
            v32 += *((int *)a1 + 5);
          }
          ++v20;
          v31 += *((int *)a1 + 4);
        }
        while ( v20 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
LABEL_13:
        v16 = v35;
      }
    }
LABEL_14:
    if ( v38 )
    {
      v26 = *((_QWORD *)a1 + 3);
      v27 = *(_DWORD *)(v26 + 4);
      v28 = (int *)(*(_QWORD *)a1 + v4 + (__int64)(*((_DWORD *)a1 + 4) * v27));
      v29 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
      if ( v27 < *(_DWORD *)(v26 + 12) )
      {
        v30 = (v12 + 4 * v16) % *((_DWORD *)a1 + 10);
        do
        {
          ++v15;
          *v28 = *v28 & ~v10 | v10 & *(_DWORD *)(v30 + v29);
          if ( v15 == *((_DWORD *)a1 + 11) )
          {
            v29 = *((_QWORD *)a1 + 1);
            v15 = 0;
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
