/*
 * XREFs of Input1BPPToAA24 @ 0x1401B6C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall Input1BPPToAA24(char *a1, _BYTE *a2)
{
  unsigned __int8 *v2; // rdi
  unsigned int v3; // r10d
  __int16 *v5; // rcx
  _BYTE *v6; // r9
  __int64 v8; // rdx
  char *v9; // rcx
  char v10; // al
  int v11; // edx
  unsigned int i; // edx
  unsigned int v13; // ecx
  int v14; // r10d
  char v15; // cl
  int v16; // eax
  int v17; // eax
  unsigned __int16 v19; // ax
  char v20; // al
  int v21; // ecx
  unsigned int v22; // esi
  _WORD *v23; // r15
  unsigned int v24; // r8d
  unsigned __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rdx
  char v32; // al
  __int64 v33; // rdx
  char v34; // al
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // r10d
  unsigned __int16 v39; // ax
  unsigned __int64 v40; // r8
  unsigned __int16 v41; // ax
  unsigned int v42; // ecx
  unsigned int v43; // edx
  unsigned int v44; // esi
  unsigned __int16 v45; // ax
  unsigned __int64 v46; // r8
  __int16 v47; // [rsp+20h] [rbp+20h] BYREF
  char v48; // [rsp+22h] [rbp+22h]
  __int16 v49; // [rsp+23h] [rbp+23h]
  char v50; // [rsp+25h] [rbp+25h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 12);
  v5 = (__int16 *)*((_QWORD *)a1 + 10);
  v6 = a2;
  if ( (*a1 & 4) != 0 )
  {
    v8 = 0LL;
    v9 = (char *)v5 + 3;
    do
    {
      v10 = *v9;
      v9 += 4;
      *((_BYTE *)&v47 + v8++) = v10;
    }
    while ( v8 < 2 );
    v11 = (unsigned __int8)a1[1];
    if ( a1[1] )
    {
      v41 = *v2++ << v11;
      v42 = 8 - v11;
      v43 = v3;
      if ( v42 <= v3 )
        v43 = v42;
      for ( v3 -= v43; v43; --v43 )
      {
        v41 *= 2;
        *v6++ = *((_BYTE *)&v47 + (((unsigned __int64)v41 >> 8) & 1));
      }
    }
    for ( i = v3 >> 3; i; --i )
    {
      v13 = *v2++;
      *v6 = *((_BYTE *)&v47 + ((unsigned __int64)v13 >> 7));
      v6[1] = *((_BYTE *)&v47 + ((v13 >> 6) & 1));
      v6[2] = *((_BYTE *)&v47 + ((v13 >> 5) & 1));
      v6[3] = *((_BYTE *)&v47 + ((v13 >> 4) & 1));
      v6[4] = *((_BYTE *)&v47 + ((v13 >> 3) & 1));
      v6[5] = *((_BYTE *)&v47 + ((v13 >> 2) & 1));
      v6[6] = *((_BYTE *)&v47 + ((v13 >> 1) & 1));
      v6[7] = *((_BYTE *)&v47 + (v13 & 1));
      v6 += 8;
    }
    v14 = v3 & 7;
    if ( v14 )
    {
      v19 = *v2;
      do
      {
        v19 *= 2;
        *v6++ = *((_BYTE *)&v47 + (((unsigned __int64)v19 >> 8) & 1));
        --v14;
      }
      while ( v14 );
    }
  }
  else
  {
    v47 = *v5;
    v48 = *((_BYTE *)v5 + 2);
    v49 = v5[2];
    v20 = *((_BYTE *)v5 + 6);
    v21 = (unsigned __int8)a1[1];
    v50 = v20;
    if ( v21 )
    {
      v44 = v3;
      v45 = *v2++ << v21;
      if ( 8 - v21 <= v3 )
        v44 = 8 - v21;
      for ( v3 -= v44; v44; --v44 )
      {
        v45 *= 2;
        v46 = ((unsigned __int64)v45 >> 8) & 1;
        *(_WORD *)v6 = *(__int16 *)((char *)&v47 + 2 * v46 + v46);
        v6[2] = *((_BYTE *)&v47 + 2 * v46 + v46 + 2);
        v6 += 3;
      }
    }
    v22 = v3 >> 3;
    if ( v3 >> 3 )
    {
      v23 = v6 + 6;
      do
      {
        v24 = *v2;
        v25 = *v2++;
        v25 >>= 7;
        *(_WORD *)v6 = *(__int16 *)((char *)&v47 + 2 * v25 + v25);
        v26 = *((_BYTE *)&v47 + 2 * v25 + v25 + 2);
        v27 = (v24 >> 6) & 1;
        v6[2] = v26;
        v6 += 24;
        *(_WORD *)((char *)v23 - 3) = *(__int16 *)((char *)&v47 + 2 * v27 + v27);
        v28 = *((_BYTE *)&v47 + 2 * v27 + v27 + 2);
        v29 = (v24 >> 5) & 1;
        *((_BYTE *)v23 - 1) = v28;
        *v23 = *(__int16 *)((char *)&v47 + 2 * v29 + v29);
        v23 += 12;
        v30 = *((_BYTE *)&v47 + 2 * v29 + v29 + 2);
        v31 = (v24 >> 4) & 1;
        *((_BYTE *)v23 - 22) = v30;
        *(_WORD *)((char *)v23 - 21) = *(__int16 *)((char *)&v47 + 2 * v31 + v31);
        v32 = *((_BYTE *)&v47 + 2 * v31 + v31 + 2);
        v33 = (v24 >> 3) & 1;
        *((_BYTE *)v23 - 19) = v32;
        *(v23 - 9) = *(__int16 *)((char *)&v47 + 2 * v33 + v33);
        v34 = *((_BYTE *)&v47 + 2 * v33 + v33 + 2);
        v35 = (v24 >> 2) & 1;
        *((_BYTE *)v23 - 16) = v34;
        *(_WORD *)((char *)v23 - 15) = *(__int16 *)((char *)&v47 + 2 * v35 + v35);
        *((_BYTE *)v23 - 13) = *((_BYTE *)&v47 + 2 * v35 + v35 + 2);
        v36 = (v24 >> 1) & 1;
        v37 = v24 & 1;
        *(v23 - 6) = *(__int16 *)((char *)&v47 + 2 * v36 + v36);
        *((_BYTE *)v23 - 10) = *((_BYTE *)&v47 + 2 * v36 + v36 + 2);
        *(_WORD *)((char *)v23 - 9) = *(__int16 *)((char *)&v47 + 2 * v37 + v37);
        *((_BYTE *)v23 - 7) = *((_BYTE *)&v47 + 2 * v37 + v37 + 2);
        --v22;
      }
      while ( v22 );
    }
    v38 = v3 & 7;
    if ( v38 )
    {
      v39 = *v2;
      do
      {
        v39 *= 2;
        v40 = ((unsigned __int64)v39 >> 8) & 1;
        *(_WORD *)v6 = *(__int16 *)((char *)&v47 + 2 * v40 + v40);
        v6 += 3;
        *(v6 - 1) = *((_BYTE *)&v47 + 2 * v40 + v40 + 2);
        --v38;
      }
      while ( v38 );
    }
  }
  v15 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v16 = *((_DWORD *)a1 + 13);
    if ( v16 && (v17 = v16 - 1, (*((_DWORD *)a1 + 13) = v17) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v15 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v15 & 0xFD;
    }
  }
  return a2;
}
