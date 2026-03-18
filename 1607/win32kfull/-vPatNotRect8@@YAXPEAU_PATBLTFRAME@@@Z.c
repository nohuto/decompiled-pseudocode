/*
 * XREFs of ?vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C02C21E0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x1C02D6074 (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1C02D619C (vFetchShiftNotAndCopy.c)
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
  int v21; // edi
  __int64 v22; // rdx
  int v23; // esi
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // r11d
  int *v28; // r9
  __int64 v29; // r10
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // [rsp+20h] [rbp-30h] BYREF
  __int64 v33; // [rsp+28h] [rbp-28h]
  unsigned int v34; // [rsp+30h] [rbp-20h]
  unsigned int v35; // [rsp+34h] [rbp-1Ch]
  unsigned int v36; // [rsp+38h] [rbp-18h]
  unsigned int v37; // [rsp+3Ch] [rbp-14h]
  int v38; // [rsp+90h] [rbp+40h]
  int v39; // [rsp+A0h] [rbp+50h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v3 = 0;
  v4 = *((_DWORD *)a1 + 12) * v1[2];
  v5 = *((_DWORD *)a1 + 12) * *v1;
  v6 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v1 + 8)) & 3;
  v39 = v6;
  v7 = v5 & 3;
  v8 = aulLeftMask[v7];
  v38 = ~aulLeftMask[v6];
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
    v8 &= v38;
    v3 = 1;
  }
  else if ( !(_DWORD)v7 )
  {
    goto LABEL_17;
  }
  v34 = v12;
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
    v36 = v19;
    if ( v19 )
    {
      v20 = *((_DWORD *)a1 + 10);
      v35 = v20;
      v21 = v15;
      v37 = v20;
      v12 %= v20;
      v22 = *((_QWORD *)a1 + 3);
      v34 = v12;
      v23 = *(_DWORD *)(v22 + 4);
      v24 = v15 * *((_DWORD *)a1 + 5);
      v32 = *(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v23);
      v33 = *((_QWORD *)a1 + 1) + v24;
      if ( (((unsigned __int8)v12 | (unsigned __int8)v20) & 3) != 0 )
      {
        if ( v23 < *(_DWORD *)(v22 + 12) )
        {
          do
          {
            vFetchShiftNotAndCopy(&v32);
            if ( ++v21 == *((_DWORD *)a1 + 11) )
            {
              v21 = 0;
              v33 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v33 += *((int *)a1 + 5);
            }
            ++v23;
            v32 += *((int *)a1 + 4);
            v25 = *((_QWORD *)a1 + 3);
            v34 = v12;
          }
          while ( v23 < *(_DWORD *)(v25 + 12) );
          goto LABEL_30;
        }
      }
      else
      {
        v37 = v20 >> 2;
        if ( v23 < *(_DWORD *)(v22 + 12) )
        {
          do
          {
            vFetchNotAndCopy(&v32);
            if ( ++v21 == *((_DWORD *)a1 + 11) )
            {
              v21 = 0;
              v33 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v33 += *((int *)a1 + 5);
            }
            ++v23;
            v32 += *((int *)a1 + 4);
          }
          while ( v23 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
LABEL_30:
          v19 = v36;
        }
      }
    }
    if ( v39 )
    {
      v26 = *((_QWORD *)a1 + 3);
      v27 = *(_DWORD *)(v26 + 4);
      v28 = (int *)(*(_QWORD *)a1 + v10 + (__int64)(*((_DWORD *)a1 + 4) * v27));
      v29 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
      if ( v27 < *(_DWORD *)(v26 + 12) )
      {
        v30 = v38;
        v31 = (v12 + 4 * v19) % *((_DWORD *)a1 + 10);
        do
        {
          ++v15;
          *v28 = *v28 & ~v38 | v30 & ~*(_DWORD *)(v31 + v29);
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
          v30 = v38;
        }
        while ( v27 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
