/*
 * XREFs of ?vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02C26E0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1C010C220 (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x1C02D613C (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  _DWORD *v3; // r13
  int v4; // r15d
  __int64 v6; // rsi
  int v7; // r9d
  int v8; // edi
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // r8
  int v12; // ecx
  int v13; // r11d
  unsigned int v14; // r14d
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h]
  unsigned int v19; // [rsp+30h] [rbp-20h]
  unsigned int v20; // [rsp+34h] [rbp-1Ch]
  unsigned int v21; // [rsp+38h] [rbp-18h]
  unsigned int v22; // [rsp+3Ch] [rbp-14h]
  int v23; // [rsp+98h] [rbp+48h]
  int v24; // [rsp+A0h] [rbp+50h]

  v3 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = a3;
  v6 = *(_QWORD *)a1 + a2 * *((_DWORD *)a1 + 4);
  v7 = a2 - *((_DWORD *)a1 + 9);
  if ( v7 >= 0 )
    v8 = (unsigned int)v7 % *((_DWORD *)a1 + 11);
  else
    v8 = *((_DWORD *)a1 + 11) - (unsigned int)(-1 - v7) % *((_DWORD *)a1 + 11) - 1;
  v9 = *((_QWORD *)a1 + 1) + v8 * *((_DWORD *)a1 + 5);
  v18 = v9;
  if ( a3 )
  {
    do
    {
      v10 = (*((_DWORD *)a1 + 12) * v3[1]) & 0xFFFFFFFC;
      v24 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v3 + 4)) & 3;
      v11 = (*((_DWORD *)a1 + 12) * *v3) & 0xFFFFFFFC;
      v12 = v11 - *((_DWORD *)a1 + 8);
      v13 = aulLeftMask[(*((_BYTE *)a1 + 48) * *(_BYTE *)v3) & 3];
      v23 = ~aulLeftMask[(*((_BYTE *)a1 + 48) * *((_BYTE *)v3 + 4)) & 3];
      if ( v12 >= 0 )
        v14 = (unsigned int)v12 % *((_DWORD *)a1 + 10);
      else
        v14 = *((_DWORD *)a1 + 10) - (unsigned int)(-1 - v12) % *((_DWORD *)a1 + 10) - 1;
      if ( (_DWORD)v11 == (_DWORD)v10 )
      {
        v19 = v14;
        *(_DWORD *)(v11 + v6) ^= v13 & v23 & *(_DWORD *)(v14 + v9);
      }
      else
      {
        if ( ((*((_BYTE *)a1 + 48) * *(_BYTE *)v3) & 3) != 0 )
        {
          v19 = v14;
          *(_DWORD *)(v11 + v6) ^= v13 & *(_DWORD *)(v14 + v9);
          LODWORD(v11) = v11 + 4;
          v14 += 4;
        }
        v15 = (unsigned int)(v10 - v11) >> 2;
        v21 = v15;
        if ( v15 )
        {
          v16 = *((_DWORD *)a1 + 10);
          v20 = v16;
          v17 = v6 + (unsigned int)v11;
          v14 %= v16;
          v19 = v14;
          v22 = v16;
          if ( (((unsigned __int8)v14 | (unsigned __int8)v16) & 3) != 0 )
          {
            vFetchShiftAndMerge(&v17);
          }
          else
          {
            v22 = v16 >> 2;
            vFetchAndMerge((__int64)&v17);
          }
          v9 = v18;
          v15 = v21;
        }
        if ( v24 )
          *(_DWORD *)(v10 + v6) ^= v23 & *(_DWORD *)(((int)v14 + 4 * (unsigned __int64)v15) % *((unsigned int *)a1 + 10)
                                                   + v9);
      }
      if ( ++v8 == *((_DWORD *)a1 + 11) )
      {
        v9 = *((_QWORD *)a1 + 1);
        v8 = 0;
      }
      else
      {
        v9 += *((int *)a1 + 5);
      }
      v6 += *((int *)a1 + 4);
      v18 = v9;
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
}
