/*
 * XREFs of ?vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C02BFC20
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x1C02D1E44 (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1C02D1F78 (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // rsi
  int v3; // r13d
  int v4; // r12d
  int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // r11
  int v8; // edi
  unsigned int v9; // r9d
  unsigned int v10; // r12d
  int v11; // ecx
  unsigned int v12; // r14d
  int v13; // r10d
  int v14; // eax
  int v15; // r15d
  int v16; // r11d
  int *v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // r8d
  unsigned int v20; // r10d
  int v21; // eax
  int v22; // edi
  __int64 v23; // rdx
  int v24; // esi
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // r11d
  int *v30; // r9
  __int64 v31; // r10
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // [rsp+20h] [rbp-30h] BYREF
  __int64 v35; // [rsp+28h] [rbp-28h]
  unsigned int v36; // [rsp+30h] [rbp-20h]
  unsigned int v37; // [rsp+34h] [rbp-1Ch]
  unsigned int v38; // [rsp+38h] [rbp-18h]
  unsigned int v39; // [rsp+3Ch] [rbp-14h]
  int v40; // [rsp+90h] [rbp+40h]
  int v41; // [rsp+A0h] [rbp+50h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v3 = 0;
  v4 = *((_DWORD *)a1 + 12) * v1[2];
  v5 = *((_DWORD *)a1 + 12) * *v1;
  v6 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v1 + 8)) & 3;
  v41 = v6;
  v7 = v5 & 3;
  v8 = aulLeftMask[v7];
  v40 = ~aulLeftMask[v6];
  v9 = v5 & 0xFFFFFFFC;
  v10 = v4 & 0xFFFFFFFC;
  v11 = v9 - *((_DWORD *)a1 + 8);
  if ( v11 >= 0 )
    v12 = (unsigned int)v11 % *((_DWORD *)a1 + 10);
  else
    v12 = *((_DWORD *)a1 + 10) - (unsigned int)(-1 - v11) % *((_DWORD *)a1 + 10) - 1;
  v13 = v1[1];
  v14 = v13 - *((_DWORD *)a1 + 9);
  if ( v14 >= 0 )
    v15 = (unsigned int)v14 % *((_DWORD *)a1 + 11);
  else
    v15 = *((_DWORD *)a1 + 11) - (unsigned int)(-1 - v14) % *((_DWORD *)a1 + 11) - 1;
  if ( v9 == v10 )
  {
    v8 &= v40;
    v3 = 1;
  }
  else if ( !(_DWORD)v7 )
  {
    goto LABEL_17;
  }
  v36 = v12;
  v16 = v15;
  v17 = (int *)(*(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v13));
  v18 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
  if ( v13 < v1[3] )
  {
    do
    {
      ++v16;
      *v17 = *v17 & ~v8 | v8 & ~*(_DWORD *)(v12 + v18);
      if ( v16 == *((_DWORD *)a1 + 11) )
      {
        v18 = *((_QWORD *)a1 + 1);
        v16 = 0;
      }
      else
      {
        v18 += *((int *)a1 + 5);
      }
      ++v13;
      v17 = (int *)((char *)v17 + *((int *)a1 + 4));
    }
    while ( v13 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
  }
  if ( !v3 )
  {
    v9 += 4;
    v12 += 4;
LABEL_17:
    v19 = (v10 - v9) >> 2;
    v38 = v19;
    if ( v19 )
    {
      v20 = *((_DWORD *)a1 + 10);
      v37 = v20;
      v21 = *((_DWORD *)a1 + 4);
      v22 = v15;
      v12 %= v20;
      v39 = v20;
      v23 = *((_QWORD *)a1 + 3);
      v36 = v12;
      v24 = *(_DWORD *)(v23 + 4);
      v25 = v9 + (__int64)(v24 * v21);
      v26 = v15 * *((_DWORD *)a1 + 5);
      v34 = *(_QWORD *)a1 + v25;
      v35 = *((_QWORD *)a1 + 1) + v26;
      if ( (((unsigned __int8)v12 | (unsigned __int8)v20) & 3) != 0 )
      {
        if ( v24 < *(_DWORD *)(v23 + 12) )
        {
          do
          {
            vFetchShiftNotAndCopy(&v34);
            if ( ++v22 == *((_DWORD *)a1 + 11) )
            {
              v22 = 0;
              v35 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v35 += *((int *)a1 + 5);
            }
            ++v24;
            v34 += *((int *)a1 + 4);
            v27 = *((_QWORD *)a1 + 3);
            v36 = v12;
          }
          while ( v24 < *(_DWORD *)(v27 + 12) );
          goto LABEL_30;
        }
      }
      else
      {
        v39 = v20 >> 2;
        if ( v24 < *(_DWORD *)(v23 + 12) )
        {
          do
          {
            vFetchNotAndCopy(&v34);
            if ( ++v22 == *((_DWORD *)a1 + 11) )
            {
              v22 = 0;
              v35 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v35 += *((int *)a1 + 5);
            }
            ++v24;
            v34 += *((int *)a1 + 4);
          }
          while ( v24 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
LABEL_30:
          v19 = v38;
        }
      }
    }
    if ( v41 )
    {
      v28 = *((_QWORD *)a1 + 3);
      v29 = *(_DWORD *)(v28 + 4);
      v30 = (int *)(*(_QWORD *)a1 + v10 + (__int64)(*((_DWORD *)a1 + 4) * v29));
      v31 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
      if ( v29 < *(_DWORD *)(v28 + 12) )
      {
        v32 = v40;
        v33 = (v12 + 4 * v19) % *((_DWORD *)a1 + 10);
        do
        {
          ++v15;
          *v30 = *v30 & ~v40 | v32 & ~*(_DWORD *)(v33 + v31);
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
          v30 = (int *)((char *)v30 + *((int *)a1 + 4));
          v32 = v40;
        }
        while ( v29 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
