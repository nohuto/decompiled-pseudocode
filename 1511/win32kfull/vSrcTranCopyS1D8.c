/*
 * XREFs of vSrcTranCopyS1D8 @ 0x1C0283F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D8(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int8 a9)
{
  int v9; // ebp
  __int64 v10; // r15
  int v11; // r11d
  int v12; // r13d
  int v13; // ebx
  __int64 v14; // rsi
  int v15; // r12d
  char *v16; // r8
  unsigned int v17; // edx
  _BYTE *v18; // r14
  _BYTE *v19; // r9
  int v20; // edi
  unsigned __int64 v21; // rax
  __int64 v22; // r11
  char *v23; // r14
  __int64 v24; // r13
  __int64 v25; // rbp
  char *v26; // r15
  unsigned __int64 v27; // rax
  char v28; // cl
  char *v29; // r8
  _BYTE *v30; // r9
  __int64 v31; // rdi
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // rax
  int v34; // ecx
  int v35; // ecx
  int v36; // r11d
  __int64 v37; // rbx
  _BYTE *v38; // r8
  char v39; // dl
  _BYTE *v40; // rcx
  char v41; // r9
  _BYTE *v42; // r10
  __int64 v43; // r8
  char *v44; // rdx
  __int64 v45; // r11
  char v46; // cl
  _BYTE *v47; // r9
  int v49; // [rsp+0h] [rbp-88h]
  _BYTE v50[12]; // [rsp+4h] [rbp-84h]
  char *v51; // [rsp+18h] [rbp-70h]
  __int64 v52; // [rsp+20h] [rbp-68h]
  _BYTE *v53; // [rsp+30h] [rbp-58h]

  v9 = a5;
  v10 = a4;
  v11 = a7;
  v12 = a3;
  v13 = a6;
  *(_DWORD *)&v50[8] = 0;
  v14 = a2;
  v15 = a5 & 7;
  *(_QWORD *)v50 = a5 & 7;
  v16 = (char *)(a4 + (a5 & 0xFFFFFFF8));
  v17 = (a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8);
  v18 = (_BYTE *)(a1 + (v14 >> 3));
  v19 = v18;
  v52 = a8 * a7;
  v51 = &v16[v52];
  v20 = v12 - (v17 >> 3);
  v53 = v18;
  LODWORD(v21) = a7 - v17;
  if ( (a6 & 0xFFFFFFF8) != (a5 & 0xFFFFFFF8) )
  {
    v22 = 0x101010101010101LL * a9;
    v49 = 255 >> (a5 & 7);
    v23 = &v16[v52];
    v24 = (int)v21;
    v25 = v20;
    do
    {
      v26 = &v16[v17];
      LOBYTE(v21) = v49 & *v19;
      if ( (_BYTE)v21 )
      {
        v22 = 0x101010101010101LL * a9;
        v27 = dword_1C02ED1C0[(unsigned __int64)(unsigned __int8)v21 >> 4] | ((unsigned __int64)dword_1C02ED1C0[(unsigned __int8)v49 & *v19 & 0xF] << 32);
        v21 = v22 & v27 | *(_QWORD *)v16 & ~v27;
        *(_QWORD *)v16 = v21;
      }
      v28 = v50[4];
      v29 = v16 + 8;
      v30 = v19 + 1;
      v31 = *(_QWORD *)&v50[4];
      v32 = (unsigned __int64)(v26 - v29 + 7) >> 3;
      if ( v29 > v26 )
        v32 = *(_QWORD *)&v50[4];
      if ( v32 != *(_QWORD *)&v50[4] )
      {
        do
        {
          LOBYTE(v21) = *v30;
          if ( *v30 != v28 )
          {
            v28 = v50[4];
            v33 = dword_1C02ED1C0[(unsigned __int64)(unsigned __int8)*v30 >> 4] | ((unsigned __int64)dword_1C02ED1C0[*v30 & 0xF] << 32);
            v21 = v22 & v33 | *(_QWORD *)v29 & ~v33;
            *(_QWORD *)v29 = v21;
          }
          ++v30;
          v29 += 8;
          ++v31;
        }
        while ( v31 != v32 );
        v23 = v51;
      }
      v16 = &v29[v24];
      v19 = &v30[v25];
    }
    while ( v16 != v23 );
    v11 = a7;
    v13 = a6;
    LODWORD(v14) = a2;
    v18 = v53;
    v9 = a5;
    v15 = a5 & 7;
    v10 = a4;
    v12 = a3;
  }
  v34 = v13 & 7;
  if ( (v13 & 7) != 0 )
  {
    LOBYTE(v21) = v13 ^ v9;
    if ( ((v13 ^ v9) & 0xFFFFFFF8) != 0 )
    {
      v41 = v50[4];
      v21 = v10 + (v13 & 0xFFFFFFFFFFFFFFF8uLL);
      v42 = (_BYTE *)(v21 + v52);
      v43 = v13 & 7;
      v44 = (char *)(a1 + ((__int64)(v13 + (int)v14 - v9) >> 3));
      v45 = v11 - v34;
      do
      {
        v46 = *v44;
        if ( *v44 == v41 )
        {
          v21 += v43;
        }
        else
        {
          v47 = (_BYTE *)(v43 + v21);
          do
          {
            if ( v46 < 0 )
              *(_BYTE *)v21 = a9;
            v46 *= 2;
            ++v21;
          }
          while ( (_BYTE *)v21 != v47 );
          v41 = v50[4];
        }
        v21 += v45;
        v44 += v12;
      }
      while ( (_BYTE *)v21 != v42 );
    }
    else
    {
      v35 = v34 - v15;
      if ( v35 > 0 )
      {
        v36 = v11 - v35;
        v21 = v10 + v9;
        v37 = v35;
        v38 = (_BYTE *)(v52 + v21);
        do
        {
          v39 = *v18 << v15;
          v40 = (_BYTE *)(v37 + v21);
          do
          {
            if ( v39 < 0 )
              *(_BYTE *)v21 = a9;
            v39 *= 2;
            ++v21;
          }
          while ( (_BYTE *)v21 != v40 );
          v21 += v36;
          v18 += v12;
        }
        while ( (_BYTE *)v21 != v38 );
      }
    }
  }
  return v21;
}
