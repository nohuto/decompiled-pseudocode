/*
 * XREFs of ?vSrcCopyS4D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02C4B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D24(struct BLTINFO *a1)
{
  unsigned int v1; // ebp
  int v3; // r15d
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r10
  unsigned int v7; // r12d
  unsigned int v8; // ebp
  unsigned int v9; // edi
  int v10; // ebp
  int v11; // r8d
  __int64 v12; // r9
  unsigned __int8 *v13; // rdx
  unsigned int i; // ebx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // ecx
  unsigned int v18; // r13d
  unsigned int v19; // ecx
  __int64 v20; // rax
  int v21; // r15d
  unsigned int v22; // ebx
  unsigned int v23; // edi
  int v24; // ecx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // ebx
  _BYTE *v29; // r9
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  int v32; // ecx
  bool v33; // zf
  int v34; // [rsp+38h] [rbp+8h]
  unsigned int v35; // [rsp+40h] [rbp+10h]

  v1 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = *((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1);
  v5 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v34 = v3;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v7 = (*((_BYTE *)a1 + 16) + 3 * *((_BYTE *)a1 + 56)) & 3;
  if ( v7 > v1 )
    v7 = *((_DWORD *)a1 + 7);
  v8 = v1 - v7;
  v9 = v8 >> 2;
  v35 = v8 >> 2;
  v10 = v8 & 3;
  while ( 1 )
  {
    v11 = *((_DWORD *)a1 + 12);
    v12 = v5;
    v13 = (unsigned __int8 *)v4;
    for ( i = v7; i; --i )
    {
      v15 = *v13;
      if ( (v11 & 1) != 0 )
      {
        v16 = v15 & 0xF;
        ++v13;
      }
      else
      {
        v16 = v15 >> 4;
      }
      v17 = *(_DWORD *)(v6 + 4 * v16);
      LOBYTE(v11) = v11 + 1;
      *(_WORD *)v12 = v17;
      *(_BYTE *)(v12 + 2) = BYTE2(v17);
      v12 += 3LL;
    }
    v18 = v9;
    if ( v9 )
    {
      do
      {
        if ( (v11 & 1) != 0 )
        {
          v19 = v13[1];
          v20 = *v13 & 0xF;
          v13 += 2;
          v21 = *(_DWORD *)(v6 + 4 * v20);
          v22 = *(_DWORD *)(v6 + 4 * ((unsigned __int64)v19 >> 4));
          v23 = *(_DWORD *)(v6 + 4LL * (v19 & 0xF));
          v24 = *(_DWORD *)(v6 + 4 * ((unsigned __int64)*v13 >> 4));
        }
        else
        {
          v25 = *v13;
          v22 = *(_DWORD *)(v6 + 4 * (v25 & 0xF));
          v21 = *(_DWORD *)(v6 + 4 * (v25 >> 4));
          v26 = (unsigned __int64)v13[1] >> 4;
          v27 = v13[1] & 0xF;
          v13 += 2;
          v23 = *(_DWORD *)(v6 + 4 * v26);
          v24 = *(_DWORD *)(v6 + 4 * v27);
        }
        LOBYTE(v11) = v11 + 4;
        *(_DWORD *)v12 = v21 | (v22 << 24);
        *(_DWORD *)(v12 + 4) = (v22 >> 8) | (v23 << 16);
        *(_DWORD *)(v12 + 8) = HIWORD(v23) | (v24 << 8);
        v12 += 12LL;
        --v18;
      }
      while ( v18 );
      v9 = v35;
      v3 = v34;
    }
    v28 = v10;
    if ( v10 )
    {
      v29 = (_BYTE *)(v12 + 2);
      do
      {
        v30 = *v13;
        if ( (v11 & 1) != 0 )
        {
          v31 = v30 & 0xF;
          ++v13;
        }
        else
        {
          v31 = v30 >> 4;
        }
        v32 = *(_DWORD *)(v6 + 4 * v31);
        LOBYTE(v11) = v11 + 1;
        *((_WORD *)v29 - 1) = v32;
        *v29 = BYTE2(v32);
        v29 += 3;
        --v28;
      }
      while ( v28 );
    }
    v33 = v3-- == 1;
    v34 = v3;
    if ( v33 )
      break;
    v4 += *((int *)a1 + 10);
    v5 += *((int *)a1 + 11);
  }
}
