/*
 * XREFs of ComputeInverseMatrix3x3 @ 0x140147B2C
 * Callers:
 *     ComputeColorSpaceXForm @ 0x14014758C (ComputeColorSpaceXForm.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x14017F0FC (HT_CreateDeviceHalftoneInfo.c)
 * Callees:
 *     MulFD6 @ 0x140146A98 (MulFD6.c)
 *     DivFD6 @ 0x140146D00 (DivFD6.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeInverseMatrix3x3(__int128 *a1, __int64 a2)
{
  int *v2; // r12
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int *v5; // r14
  int v6; // r9d
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // r10d
  __int64 v10; // r8
  int v11; // ebx
  __int64 i; // r11
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rax
  int v17; // eax
  int v18; // r14d
  __int64 v19; // rbx
  __int64 v20; // r15
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 j; // r14
  unsigned int v26; // edx
  int v27; // ecx
  __int128 v28; // xmm1
  __int64 v30; // r13
  __int64 v31; // r15
  int v32; // esi
  int v33; // eax
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // r10
  char *v39; // rbx
  char *v40; // r11
  int v41; // ecx
  _DWORD *v42; // rdx
  int v43; // eax
  int v44; // ecx
  int v45; // [rsp+20h] [rbp-89h]
  int v46; // [rsp+28h] [rbp-81h]
  __int64 v47; // [rsp+30h] [rbp-79h]
  int *v48; // [rsp+38h] [rbp-71h]
  __int64 v49; // [rsp+40h] [rbp-69h]
  __int64 v50; // [rsp+48h] [rbp-61h]
  int *v51; // [rsp+50h] [rbp-59h]
  int *v52; // [rsp+58h] [rbp-51h]
  __int64 v53; // [rsp+60h] [rbp-49h]
  __int64 v54; // [rsp+68h] [rbp-41h]
  __int128 v56; // [rsp+78h] [rbp-31h] BYREF
  __int128 v57; // [rsp+88h] [rbp-21h]
  int v58; // [rsp+98h] [rbp-11h]
  _OWORD v59[2]; // [rsp+A0h] [rbp-9h] BYREF
  int v60; // [rsp+C0h] [rbp+17h]

  v2 = (int *)v59;
  v3 = *a1;
  v60 = *((_DWORD *)a1 + 8);
  v4 = a1[1];
  v5 = (int *)v59;
  v58 = 1000000;
  v59[0] = v3;
  v57 = 0xF4240uLL;
  v6 = 0;
  v59[1] = v4;
  v56 = 0xF4240uLL;
  v7 = 0LL;
  v45 = 1;
  v8 = 0LL;
  v50 = 0LL;
  v53 = 0LL;
  v52 = (int *)v59;
  v51 = (int *)v59;
  do
  {
    v9 = v6;
    v46 = v6 + 1;
    v54 = v7 + 1;
    v10 = v7;
    v11 = v6 + 1;
    for ( i = v7 + 1; v11 < 3; v9 = v17 )
    {
      v13 = -*((_DWORD *)v59 + 2 * i + i + v7);
      if ( *((int *)v59 + 2 * i + i + v7) > 0 )
        v13 = *((_DWORD *)v59 + 2 * i + i + v7);
      v14 = *((_DWORD *)v59 + 2 * v10 + v10 + v7);
      v15 = -v14;
      if ( v14 > 0 )
        v15 = v14;
      v16 = i;
      if ( v13 <= v15 )
        v16 = v10;
      v10 = v16;
      v17 = v11;
      if ( v13 <= v15 )
        v17 = v9;
      ++v11;
      ++i;
    }
    if ( *((_DWORD *)v59 + 2 * v10 + v10 + v7) )
    {
      if ( v9 != v6 )
      {
        v35 = v7 - v10;
        v36 = 12 * v10;
        v37 = 3LL;
        v38 = 3 * v35;
        v39 = (char *)&v56 + 12 * v35 - (_QWORD)v59;
        v40 = (char *)v59 + v36;
        do
        {
          v41 = *(_DWORD *)&v40[v38 * 4];
          v42 = (_DWORD *)((char *)v59 + v36);
          v40 += 4;
          v42[v38] = *v42;
          v43 = *(_DWORD *)((char *)&v56 + v36);
          *v42 = v41;
          v44 = *(_DWORD *)&v39[(_QWORD)v59 + v36];
          *(_DWORD *)&v39[(_QWORD)v42] = v43;
          *(_DWORD *)((char *)&v56 + v36) = v44;
          v36 += 4LL;
          --v37;
        }
        while ( v37 );
      }
      v18 = *v5;
      v19 = v8;
      v20 = 3LL;
      do
      {
        v21 = DivFD6(*(_DWORD *)((char *)v59 + v19), v18);
        v22 = *(_DWORD *)((char *)&v56 + v19);
        *(_DWORD *)((char *)v59 + v19) = v21;
        *(_DWORD *)((char *)&v56 + v19) = DivFD6(v22, v18);
        v19 += 4LL;
        --v20;
      }
      while ( v20 );
      v47 = 0LL;
      v23 = v8 - (_QWORD)v59;
      v49 = 0LL;
      v24 = 0LL;
      v48 = v2;
      for ( j = 0LL; j < 36; v49 = j )
      {
        if ( v24 != v7 && *v2 )
        {
          v30 = j;
          v31 = 3LL;
          v32 = *v2;
          do
          {
            v33 = MulFD6(*(_DWORD *)((char *)v59 + v30 + (_QWORD)v59 + v23), v32);
            v34 = *(_DWORD *)((char *)v59 + v30 + (_QWORD)&v56 + v23);
            *(_DWORD *)((char *)v59 + v30) -= v33;
            *(_DWORD *)((char *)&v56 + v30) -= MulFD6(v34, v32);
            v30 += 4LL;
            --v31;
          }
          while ( v31 );
          v7 = v50;
          j = v49;
          v24 = v47;
          v2 = v48;
        }
        ++v24;
        v2 += 3;
        j += 12LL;
        v47 = v24;
        v23 -= 12LL;
        v48 = v2;
      }
      v8 = v53;
      v5 = v51;
      v2 = v52;
      v26 = v45;
    }
    else
    {
      v26 = 0;
      v45 = 0;
    }
    v6 = v46;
    v5 += 4;
    v7 = v54;
    ++v2;
    v8 += 12LL;
    v50 = v54;
    v51 = v5;
    v52 = v2;
    v53 = v8;
  }
  while ( v46 < 3 );
  v27 = v58;
  v28 = v57;
  *(_OWORD *)a2 = v56;
  *(_OWORD *)(a2 + 16) = v28;
  *(_DWORD *)(a2 + 32) = v27;
  return v26;
}
