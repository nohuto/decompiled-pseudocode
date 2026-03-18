/*
 * XREFs of Input1BPPToAA24 @ 0x1C0005CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall Input1BPPToAA24(char *a1, _BYTE *a2)
{
  unsigned __int8 *v2; // rsi
  _BYTE *v3; // r9
  unsigned int v4; // r10d
  __int64 v7; // rax
  __int64 v8; // rcx
  char *v9; // rdx
  char v10; // al
  int v11; // ecx
  unsigned int i; // edx
  unsigned __int64 v13; // rax
  int v14; // r10d
  char v15; // cl
  int v16; // eax
  int v17; // eax
  unsigned __int16 v19; // ax
  unsigned int v20; // edx
  unsigned __int16 v21; // ax
  __int16 *v22; // rcx
  char v23; // al
  int v24; // ecx
  unsigned int v25; // edi
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  unsigned int v28; // edi
  _WORD *v29; // r15
  unsigned int v30; // r8d
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  char v33; // al
  unsigned __int64 v34; // rdx
  char v35; // al
  unsigned __int64 v36; // rdx
  char v37; // al
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  char v41; // al
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  int v45; // r10d
  unsigned __int16 v46; // ax
  __int64 v47; // rcx
  __int16 v48; // [rsp+28h] [rbp+28h] BYREF
  char v49; // [rsp+2Ah] [rbp+2Ah]
  __int16 v50; // [rsp+2Bh] [rbp+2Bh]
  char v51; // [rsp+2Dh] [rbp+2Dh]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v3 = a2;
  v4 = *((_DWORD *)a1 + 12);
  if ( (*a1 & 4) != 0 )
  {
    v7 = *((_QWORD *)a1 + 10);
    v8 = 0LL;
    v9 = (char *)(v7 + 3);
    do
    {
      v10 = *v9;
      v9 += 4;
      *((_BYTE *)&v48 + v8++) = v10;
    }
    while ( v8 < 2 );
    v11 = (unsigned __int8)a1[1];
    if ( a1[1] )
    {
      v20 = 8 - v11;
      v21 = *v2++ << v11;
      if ( 8 - v11 > v4 )
        v20 = v4;
      for ( v4 -= v20; v20; --v20 )
      {
        v21 *= 2;
        *v3++ = *((_BYTE *)&v48 + (HIBYTE(v21) & 1LL));
      }
    }
    for ( i = v4 >> 3; i; --i )
    {
      v13 = *v2++;
      *v3 = *((_BYTE *)&v48 + ((v13 >> 7) & 1));
      v3[1] = *((_BYTE *)&v48 + (((unsigned __int64)(unsigned int)v13 >> 6) & 1));
      v3[2] = *((_BYTE *)&v48 + (((unsigned __int64)(unsigned int)v13 >> 5) & 1));
      v3[3] = *((_BYTE *)&v48 + (((unsigned __int64)(unsigned int)v13 >> 4) & 1));
      v3[4] = *((_BYTE *)&v48 + (((unsigned __int64)(unsigned int)v13 >> 3) & 1));
      v3[5] = *((_BYTE *)&v48 + (((unsigned __int64)(unsigned int)v13 >> 2) & 1));
      v3[6] = *((_BYTE *)&v48 + (((unsigned __int64)(unsigned int)v13 >> 1) & 1));
      v3[7] = *((_BYTE *)&v48 + (v13 & 1));
      v3 += 8;
    }
    v14 = v4 & 7;
    if ( v14 )
    {
      v19 = *v2;
      do
      {
        v19 *= 2;
        *v3++ = *((_BYTE *)&v48 + (HIBYTE(v19) & 1LL));
        --v14;
      }
      while ( v14 );
    }
  }
  else
  {
    v22 = (__int16 *)*((_QWORD *)a1 + 10);
    v48 = *v22;
    v49 = *((_BYTE *)v22 + 2);
    v50 = v22[2];
    v23 = *((_BYTE *)v22 + 6);
    v24 = (unsigned __int8)a1[1];
    v51 = v23;
    if ( v24 )
    {
      v25 = 8 - v24;
      v26 = *v2++ << v24;
      if ( 8 - v24 > v4 )
        v25 = v4;
      for ( v4 -= v25; v25; --v25 )
      {
        v26 *= 2;
        v27 = HIBYTE(v26) & 1;
        *(_WORD *)v3 = *(__int16 *)((char *)&v48 + 2 * v27 + (unsigned int)v27);
        v3[2] = *((_BYTE *)&v48 + 2 * (unsigned int)v27 + (unsigned int)v27 + 2);
        v3 += 3;
      }
    }
    v28 = v4 >> 3;
    if ( v4 >> 3 )
    {
      v29 = v3 + 6;
      do
      {
        v30 = *v2;
        v31 = (unsigned __int64)*v2++ >> 7;
        v32 = v31 & 1;
        *(_WORD *)v3 = *(__int16 *)((char *)&v48 + 2 * v32 + v32);
        v33 = *((_BYTE *)&v48 + 2 * v32 + v32 + 2);
        v34 = ((unsigned __int64)v30 >> 6) & 1;
        v3[2] = v33;
        v3 += 24;
        *(_WORD *)((char *)v29 - 3) = *(__int16 *)((char *)&v48 + 2 * v34 + v34);
        v35 = *((_BYTE *)&v48 + 2 * v34 + v34 + 2);
        v36 = ((unsigned __int64)v30 >> 5) & 1;
        *((_BYTE *)v29 - 1) = v35;
        *v29 = *(__int16 *)((char *)&v48 + 2 * v36 + v36);
        v29 += 12;
        v37 = *((_BYTE *)&v48 + 2 * v36 + v36 + 2);
        v38 = ((unsigned __int64)v30 >> 4) & 1;
        *((_BYTE *)v29 - 22) = v37;
        *(_WORD *)((char *)v29 - 21) = *(__int16 *)((char *)&v48 + 2 * v38 + v38);
        *((_BYTE *)v29 - 19) = *((_BYTE *)&v48 + 2 * v38 + v38 + 2);
        v39 = ((unsigned __int64)v30 >> 3) & 1;
        *(v29 - 9) = *(__int16 *)((char *)&v48 + 2 * v39 + v39);
        *((_BYTE *)v29 - 16) = *((_BYTE *)&v48 + 2 * v39 + v39 + 2);
        v40 = ((unsigned __int64)v30 >> 2) & 1;
        *(_WORD *)((char *)v29 - 15) = *(__int16 *)((char *)&v48 + 2 * v40 + v40);
        v41 = *((_BYTE *)&v48 + 2 * v40 + v40 + 2);
        v42 = v30;
        *((_BYTE *)v29 - 13) = v41;
        v43 = v30 & 1;
        v44 = (v42 >> 1) & 1;
        *(v29 - 6) = *(__int16 *)((char *)&v48 + 2 * v44 + v44);
        *((_BYTE *)v29 - 10) = *((_BYTE *)&v48 + 2 * v44 + v44 + 2);
        *(_WORD *)((char *)v29 - 9) = *(__int16 *)((char *)&v48 + 2 * v43 + v43);
        *((_BYTE *)v29 - 7) = *((_BYTE *)&v48 + 2 * v43 + v43 + 2);
        --v28;
      }
      while ( v28 );
    }
    v45 = v4 & 7;
    if ( v45 )
    {
      v46 = *v2;
      do
      {
        v46 *= 2;
        v47 = HIBYTE(v46) & 1;
        *(_WORD *)v3 = *(__int16 *)((char *)&v48 + 2 * v47 + (unsigned int)v47);
        v3 += 3;
        *(v3 - 1) = *((_BYTE *)&v48 + 2 * (unsigned int)v47 + (unsigned int)v47 + 2);
        --v45;
      }
      while ( v45 );
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
