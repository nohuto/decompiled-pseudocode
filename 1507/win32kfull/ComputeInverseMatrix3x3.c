/*
 * XREFs of ComputeInverseMatrix3x3 @ 0x1C00A6D50
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00A61B0 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeColorSpaceXForm @ 0x1C00A69E8 (ComputeColorSpaceXForm.c)
 * Callees:
 *     MulFD6 @ 0x1C00A7520 (MulFD6.c)
 *     DivFD6 @ 0x1C00A7640 (DivFD6.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall ComputeInverseMatrix3x3(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int128 v3; // xmm1
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned int *v9; // r15
  int v10; // esi
  __int64 v11; // r9
  int v12; // r11d
  __int64 v13; // rbx
  __int64 v14; // r10
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // esi
  __int64 v18; // rbx
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  _DWORD *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // r14
  unsigned int v28; // r13d
  __int64 v29; // rdi
  __int64 v30; // r15
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // r12d
  int v34; // ecx
  __int128 v35; // xmm1
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r10
  _BYTE *v40; // r11
  _DWORD *v41; // rdx
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // [rsp+20h] [rbp-89h]
  int v46; // [rsp+24h] [rbp-85h]
  unsigned int *v47; // [rsp+28h] [rbp-81h]
  __int64 v48; // [rsp+30h] [rbp-79h]
  __int64 v49; // [rsp+38h] [rbp-71h]
  __int64 v50; // [rsp+40h] [rbp-69h]
  __int64 v51; // [rsp+48h] [rbp-61h]
  __int64 v52; // [rsp+50h] [rbp-59h]
  _DWORD *v53; // [rsp+58h] [rbp-51h]
  __int64 v54; // [rsp+60h] [rbp-49h]
  _OWORD v56[2]; // [rsp+70h] [rbp-39h] BYREF
  int v57; // [rsp+90h] [rbp-19h]
  _BYTE v58[36]; // [rsp+98h] [rbp-11h] BYREF

  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_OWORD *)(a1 + 16);
  v45 = 1;
  v56[0] = *(_OWORD *)a1;
  v57 = v2;
  v56[1] = v3;
  memset(v58, 0, sizeof(v58));
  v4 = 0LL;
  v49 = 0LL;
  v5 = 0LL;
  *(_DWORD *)&v58[32] = 1000000;
  v6 = 0LL;
  *(_DWORD *)&v58[16] = 1000000;
  v7 = 12LL;
  *(_DWORD *)v58 = 1000000;
  v8 = -(__int64)v56;
  v51 = 12LL;
  v9 = (unsigned int *)v56;
  v48 = 0LL;
  v50 = -(__int64)v56;
  v47 = (unsigned int *)v56;
  do
  {
    v10 = v6;
    v46 = v6 + 1;
    v54 = v4 + 1;
    v11 = v4;
    v12 = v6 + 1;
    v13 = v4 + 1;
    if ( (int)v6 + 1 < 3 )
    {
      v14 = v7;
      do
      {
        v15 = *(_DWORD *)((char *)v56 + 4 * v4 + v14);
        if ( v15 < 0 )
          v15 = -v15;
        v16 = *(_DWORD *)((char *)v56 + 4 * v4 + v5);
        if ( v16 < 0 )
          v16 = -v16;
        if ( v15 > v16 )
        {
          v10 = v12;
          v11 = v13;
          v5 = v14;
        }
        ++v12;
        ++v13;
        v14 += 12LL;
      }
      while ( v12 < 3 );
      v5 = v48;
      v9 = v47;
    }
    if ( *((_DWORD *)v56 + 2 * v11 + v11 + v4) )
    {
      if ( v10 != (_DWORD)v6 )
      {
        v37 = 3 * v11;
        v38 = v4 - v11;
        v11 = 3LL;
        v39 = 3 * v38;
        v40 = &v58[12 * v38 - (_QWORD)v56];
        v6 = 4 * v37;
        do
        {
          v41 = (_DWORD *)((char *)v56 + v6);
          v42 = *(_DWORD *)((char *)v56 + v6 + v39 * 4);
          v41[v39] = *v41;
          v43 = *(_DWORD *)&v58[v6];
          *v41 = v42;
          v44 = *(_DWORD *)((char *)v56 + v6 + (_QWORD)v40);
          *(_DWORD *)((char *)v41 + (_QWORD)v40) = v43;
          *(_DWORD *)&v58[v6] = v44;
          v6 += 4LL;
          --v11;
        }
        while ( v11 );
      }
      v17 = *v9;
      v18 = v5;
      v19 = 3LL;
      do
      {
        v20 = DivFD6(*(unsigned int *)((char *)v56 + v18), v17, v6, v11);
        v21 = *(unsigned int *)&v58[v18];
        *(_DWORD *)((char *)v56 + v18) = v20;
        *(_DWORD *)&v58[v18] = DivFD6(v21, v17, v22, v23);
        v18 += 4LL;
        --v19;
      }
      while ( v19 );
      v24 = 0LL;
      v25 = (_DWORD *)v56 + v4;
      v52 = 0LL;
      v53 = v25;
      v26 = 0LL;
      v27 = v8;
      do
      {
        if ( v24 != v4 )
        {
          v28 = *v25;
          if ( *v25 )
          {
            v29 = v26;
            v30 = 3LL;
            do
            {
              v31 = MulFD6(*(unsigned int *)((char *)v56 + (_QWORD)v56 + v29 + v27), v28);
              v32 = *(unsigned int *)&v58[v27 + (_QWORD)v56 + v29];
              *(_DWORD *)((char *)v56 + v29) -= v31;
              *(_DWORD *)&v58[v29] -= MulFD6(v32, v28);
              v29 += 4LL;
              --v30;
            }
            while ( v30 );
            v4 = v49;
            v24 = v52;
            v25 = v53;
          }
        }
        ++v24;
        v25 += 3;
        v27 -= 12LL;
        v52 = v24;
        v26 += 12LL;
        v53 = v25;
      }
      while ( v26 < 36 );
      v8 = v50;
      v5 = v48;
      v9 = v47;
      v33 = v45;
    }
    else
    {
      v33 = 0;
      v45 = 0;
    }
    v9 += 4;
    v6 = (unsigned int)v46;
    v7 = v51 + 12;
    v4 = v54;
    v5 += 12LL;
    v8 += 12LL;
    v49 = v54;
    v47 = v9;
    v48 = v5;
    v51 += 12LL;
    v50 = v8;
  }
  while ( v46 < 3 );
  v34 = *(_DWORD *)&v58[32];
  v35 = *(_OWORD *)&v58[16];
  *(_OWORD *)a2 = *(_OWORD *)v58;
  *(_OWORD *)(a2 + 16) = v35;
  *(_DWORD *)(a2 + 32) = v34;
  return v33;
}
