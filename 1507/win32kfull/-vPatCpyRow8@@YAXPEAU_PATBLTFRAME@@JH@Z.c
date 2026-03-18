/*
 * XREFs of ?vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C00025C0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndCopy @ 0x1C00D521C (vFetchAndCopy.c)
 *     vFetchShiftAndCopy @ 0x1C02D1EB8 (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  _DWORD *v3; // r13
  int v4; // r15d
  __int64 v6; // r14
  int v7; // r9d
  int v8; // edi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r12
  int v12; // r10d
  int v13; // ecx
  unsigned int v14; // esi
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
  if ( v7 < 0 )
    v8 = *((_DWORD *)a1 + 11) - (unsigned int)(-1 - v7) % *((_DWORD *)a1 + 11) - 1;
  else
    v8 = (unsigned int)v7 % *((_DWORD *)a1 + 11);
  v9 = *((_QWORD *)a1 + 1) + v8 * *((_DWORD *)a1 + 5);
  v18 = v9;
  if ( a3 )
  {
    do
    {
      v10 = (*((_DWORD *)a1 + 12) * *v3) & 0xFFFFFFFC;
      v11 = (*((_DWORD *)a1 + 12) * v3[1]) & 0xFFFFFFFC;
      v24 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v3 + 4)) & 3;
      v12 = aulLeftMask[(*((_BYTE *)a1 + 48) * *(_BYTE *)v3) & 3];
      v13 = v10 - *((_DWORD *)a1 + 8);
      v23 = ~aulLeftMask[(*((_BYTE *)a1 + 48) * *((_BYTE *)v3 + 4)) & 3];
      if ( v13 < 0 )
        v14 = *((_DWORD *)a1 + 10) - (unsigned int)(-1 - v13) % *((_DWORD *)a1 + 10) - 1;
      else
        v14 = (unsigned int)v13 % *((_DWORD *)a1 + 10);
      if ( (_DWORD)v10 == (_DWORD)v11 )
      {
        v19 = v14;
        *(_DWORD *)(v10 + v6) = *(_DWORD *)(v10 + v6) & ~(v23 & v12) | v23 & v12 & *(_DWORD *)(v14 + v9);
      }
      else
      {
        if ( ((*((_BYTE *)a1 + 48) * *(_BYTE *)v3) & 3) != 0 )
        {
          v19 = v14;
          *(_DWORD *)(v10 + v6) = *(_DWORD *)(v10 + v6) & ~v12 | v12 & *(_DWORD *)(v14 + v9);
          LODWORD(v10) = v10 + 4;
          v14 += 4;
        }
        v15 = (unsigned int)(v11 - v10) >> 2;
        v21 = v15;
        if ( v15 )
        {
          v16 = *((_DWORD *)a1 + 10);
          v20 = v16;
          v17 = v6 + (unsigned int)v10;
          v14 %= v16;
          v19 = v14;
          v22 = v16;
          if ( (((unsigned __int8)v14 | (unsigned __int8)v16) & 3) != 0 )
          {
            vFetchShiftAndCopy(&v17);
          }
          else
          {
            v22 = v16 >> 2;
            vFetchAndCopy(&v17);
          }
          v9 = v18;
          v15 = v21;
        }
        if ( v24 )
          *(_DWORD *)(v11 + v6) = *(_DWORD *)(v11 + v6) & ~v23 | v23 & *(_DWORD *)(((int)v14 + 4 * (unsigned __int64)v15)
                                                                                 % *((unsigned int *)a1 + 10)
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
