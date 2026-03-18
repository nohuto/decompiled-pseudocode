/*
 * XREFs of ShrinkDIB_CX @ 0x1C0259040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShrinkDIB_CX(__int64 a1, unsigned __int8 *a2, _BYTE *a3, __int64 a4, int a5)
{
  unsigned __int8 *v5; // r11
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // ebx
  __int64 v11; // r10
  _WORD *v12; // r12
  unsigned int v13; // r13d
  __int64 v14; // r14
  __int64 v15; // r10
  int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // ecx
  int v20; // r9d
  int v21; // edx
  int v22; // ecx
  int v23; // esi
  int v24; // eax
  int v25; // ecx
  int v26; // r8d
  unsigned int i; // eax
  __int64 v28; // rdx
  int v29; // eax
  int v30; // r13d
  int v31; // r10d
  int v32; // r14d
  int v33; // esi
  int v34; // eax
  int v35; // edi
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // ecx
  unsigned __int16 v41; // [rsp+0h] [rbp-40h]
  __int64 v42; // [rsp+8h] [rbp-38h]
  _BYTE v43[28]; // [rsp+10h] [rbp-30h]
  __int64 v44; // [rsp+2Ch] [rbp-14h]
  __int64 v45; // [rsp+2Ch] [rbp-14h]
  int v46; // [rsp+88h] [rbp+48h]
  __int64 v47; // [rsp+98h] [rbp+58h]

  v47 = a4;
  v5 = a2;
  if ( a2 )
  {
    v7 = *(unsigned __int16 *)(a1 + 14);
    if ( *(_WORD *)(a1 + 14) )
    {
      v8 = v7 * a2[2];
      v9 = v7 * a2[1];
      v10 = v7 * *a2;
      v5 = &a2[2 * *(unsigned __int16 *)(a1 + 10) + *(unsigned __int16 *)(a1 + 10)];
    }
    else
    {
      v10 = 0;
      v8 = 0;
      v9 = 0;
    }
    v11 = *(_QWORD *)(a1 + 24);
    v12 = *(_WORD **)(a1 + 40);
    v42 = v11;
    v41 = *(_WORD *)(a1 + 12);
    v46 = v41;
    if ( v41 )
    {
      do
      {
        v13 = (unsigned __int16)*v12++;
        v14 = v11 + ((v13 >> 5) & 0x400);
        if ( (v13 & 0x4000) != 0 )
        {
          v15 = v5[2];
          v16 = v13 & 0x3FFF;
          v17 = *v5;
          v18 = v5[1];
          v19 = *v5;
          v20 = v16 * v5[2];
          v21 = v16 * v5[1];
          v5 += 3;
          v22 = v16 * v19;
          *(_DWORD *)&v43[24] = v20 + v8;
          v23 = *(_DWORD *)(v14 + 4 * v15);
          v11 = v42;
          v8 = v23 - v20;
          LODWORD(v44) = v21 + v9;
          HIDWORD(v44) = v22 + v10;
          v9 = *(_DWORD *)(v14 + 4 * v18) - v21;
          v10 = *(_DWORD *)(v14 + 4 * v17) - v22;
          v24 = --v46;
          *(_OWORD *)v43 = *(_OWORD *)&v43[12];
          *(_QWORD *)&v43[16] = v44;
        }
        else
        {
          v8 += *(_DWORD *)(v14 + 4LL * v5[2]);
          v9 += *(_DWORD *)(v14 + 4LL * v5[1]);
          v10 += *(_DWORD *)(v14 + 4LL * *v5);
          v24 = v46;
          v5 += 3;
        }
      }
      while ( v24 );
      a4 = v47;
    }
    v25 = *(_DWORD *)&v43[20];
    if ( v41 == 1 )
    {
      v26 = *(_DWORD *)&v43[20];
      *(_QWORD *)v43 = *(_QWORD *)&v43[12];
    }
    else
    {
      v26 = *(_DWORD *)&v43[8];
    }
    for ( i = (unsigned __int16)*v12; *v12; v5 += 3 )
    {
      ++v12;
      v28 = v11 + ((i >> 5) & 0x400);
      if ( (i & 0x4000) != 0 )
      {
        v29 = i & 0x3FFF;
        v30 = v29 * *v5;
        v31 = v29 * v5[2];
        v32 = v29 * v5[1];
        HIDWORD(v45) = v30 + v10;
        v33 = v31 + v8;
        v34 = (6 * v25 - v26 - (v30 + v10)) >> 15;
        v35 = v32 + v9;
        *(_DWORD *)&v43[24] = v33;
        LODWORD(v45) = v35;
        if ( (v34 & 0xFF00) != 0 )
          LOBYTE(v34) = ~HIBYTE(v34);
        *a3 = v34;
        v36 = (6 * *(_DWORD *)&v43[16] - *(_DWORD *)&v43[4] - v35) >> 15;
        if ( (v36 & 0xFF00) != 0 )
          LOBYTE(v36) = ~HIBYTE(v36);
        a3[1] = v36;
        v37 = (6 * *(_DWORD *)&v43[12] - *(_DWORD *)v43 - v33) >> 15;
        if ( (v37 & 0xFF00) != 0 )
          LOBYTE(v37) = ~HIBYTE(v37);
        a3[2] = v37;
        a3 += a5;
        *(_OWORD *)v43 = *(_OWORD *)&v43[12];
        v26 = *(_DWORD *)&v43[8];
        v8 = *(_DWORD *)(v28 + 4LL * v5[2]) - v31;
        v11 = v42;
        *(_QWORD *)&v43[16] = v45;
        v25 = HIDWORD(v45);
        v9 = *(_DWORD *)(v28 + 4LL * v5[1]) - v32;
        v10 = *(_DWORD *)(v28 + 4LL * *v5) - v30;
      }
      else
      {
        v8 += *(_DWORD *)(v28 + 4LL * v5[2]);
        v9 += *(_DWORD *)(v28 + 4LL * v5[1]);
        v10 += *(_DWORD *)(v28 + 4LL * *v5);
      }
      i = (unsigned __int16)*v12;
    }
    if ( a3 == (_BYTE *)(a4 - a5) )
    {
      v38 = (5 * v25 - v26) >> 15;
      if ( (v38 & 0xFF00) != 0 )
        LOBYTE(v38) = ~HIBYTE(v38);
      *a3 = v38;
      v39 = (5 * *(_DWORD *)&v43[16] - *(_DWORD *)&v43[4]) >> 15;
      if ( (v39 & 0xFF00) != 0 )
        LOBYTE(v39) = ~HIBYTE(v39);
      a3[1] = v39;
      v40 = (5 * *(_DWORD *)&v43[12] - *(_DWORD *)v43) >> 15;
      if ( (v40 & 0xFF00) != 0 )
        LOBYTE(v40) = ~HIBYTE(v40);
      a3[2] = v40;
    }
  }
}
