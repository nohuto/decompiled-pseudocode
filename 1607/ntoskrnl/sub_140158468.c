/*
 * XREFs of sub_140158468 @ 0x140158468
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_140158468(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(_QWORD, __int64, __int64, __int64),
        _BYTE *a5)
{
  unsigned __int8 *v5; // r14
  __int64 v6; // r8
  __int64 (__fastcall *v7)(_QWORD, __int64, __int64, __int64); // r11
  unsigned __int8 v9; // bp
  _BYTE *v10; // rsi
  unsigned __int8 v11; // r12
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  unsigned int v15; // edi
  unsigned __int64 v16; // r15
  _BYTE *v17; // r8
  _BYTE *v18; // r13
  __int64 v19; // r9
  unsigned __int8 v20; // r11
  unsigned __int64 v21; // rbp
  int v22; // r12d
  unsigned __int64 v23; // rax
  unsigned __int8 *v24; // rcx
  __int64 v25; // rdx
  bool v26; // zf
  unsigned __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  char v30; // r8
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v34; // [rsp+78h] [rbp+10h]
  __int64 v35; // [rsp+80h] [rbp+18h]
  __int64 (__fastcall *v36)(_QWORD, __int64, __int64, __int64); // [rsp+88h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v5 = a5;
  v6 = 2LL;
  v7 = a4;
  v9 = *a5;
  v10 = a5 + 258;
  v11 = a5[1];
  v12 = a5 + 2;
  v34 = *a5;
  LOBYTE(a5) = v11;
  v13 = v10;
  do
  {
    *v13 = *v12;
    v13[1] = v12[1];
    v13[2] = v12[2];
    v13[3] = v12[3];
    v13[4] = v12[4];
    v13[5] = v12[5];
    v13[6] = v12[6];
    v13 += 8;
    v14 = v12[7];
    v12 += 8;
    *(v13 - 1) = v14;
    --v6;
  }
  while ( v6 );
  v15 = 0;
  v16 = 0LL;
  if ( (v5[2] & 1) != 0 )
  {
    v16 = a1 ^ retaddr;
    retaddr = 0LL;
  }
  v17 = (_BYTE *)a1;
  v18 = (_BYTE *)(a1 + a2);
  v19 = 0LL;
  if ( (_BYTE *)a1 != v18 )
  {
    do
    {
      v11 += v5[++v9 + 2];
      v20 = v5[v11 + 2];
      v5[v11 + 2] = v5[v9 + 2];
      v5[v9 + 2] = v20;
      if ( (unsigned int)v19 < 0x400 )
        v19 = (unsigned int)(v19 + 1);
      else
        *v17++ ^= v5[(unsigned __int8)(v20 + v5[v11 + 2]) + 2] ^ 0xC7;
    }
    while ( v17 != v18 );
    v7 = v36;
  }
  *v5 = v9;
  v5[1] = v11;
  v21 = (unsigned __int64)&v33 ^ a1;
  v22 = 64;
  v23 = (unsigned __int64)&v33 ^ a1;
  v24 = v5;
  LODWORD(v25) = 64;
  do
  {
    *(_QWORD *)v24 ^= v23;
    v24 += 8;
    v23 = __ROR8__(v23, 3);
    v26 = (_DWORD)v25 == 1;
    v25 = (unsigned int)(v25 - 1);
  }
  while ( !v26 );
  v33 = v23;
  LOBYTE(v27) = v7(0LL, v25, v35, v19);
  do
  {
    *(_QWORD *)v5 ^= v21;
    v5 += 8;
    v21 = __ROR8__(v21, 3);
    --v22;
  }
  while ( v22 );
  v26 = (*v10 & 1) == 0;
  v33 = v21;
  if ( !v26 )
  {
    v27 = &retaddr;
    retaddr = a1 ^ v16;
  }
  while ( (_BYTE *)a1 != v18 )
  {
    v28 = ++v34;
    LOBYTE(a5) = v10[v34] + (_BYTE)a5;
    v29 = (unsigned __int8)a5;
    LOBYTE(v27) = v10[v34];
    v30 = v10[(unsigned __int8)a5];
    v10[(unsigned __int8)a5] = (_BYTE)v27;
    v10[v28] = v30;
    if ( v15 < 0x400 )
    {
      ++v15;
    }
    else
    {
      LOBYTE(v27) = v30 + v10[v29];
      *(_BYTE *)a1++ ^= v10[(unsigned __int8)v27] ^ 0xC7;
    }
  }
  return (char)v27;
}
