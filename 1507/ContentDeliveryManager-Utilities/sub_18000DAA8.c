/*
 * XREFs of sub_18000DAA8 @ 0x18000DAA8
 * Callers:
 *     sub_18000DDA8 @ 0x18000DDA8 (sub_18000DDA8.c)
 * Callees:
 *     sub_1800120D0 @ 0x1800120D0 (sub_1800120D0.c)
 *     sub_180014944 @ 0x180014944 (sub_180014944.c)
 *     sub_180015FC8 @ 0x180015FC8 (sub_180015FC8.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x1800160BC (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_1.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18000DAA8(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  _WORD *v8; // r11
  _QWORD *v9; // rcx
  unsigned __int64 v10; // r10
  char *v11; // r8
  __int64 v12; // rcx
  _WORD *v13; // rax
  char *v14; // rax
  unsigned __int64 v15; // r8
  _WORD *v16; // r11
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int64 v19; // r9
  _QWORD *v20; // rax
  char *i; // r14
  __int64 v22; // rcx
  _WORD *v23; // rax
  char *v24; // rax
  __int64 v25; // r14
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  int v40; // [rsp+20h] [rbp-68h]
  __int64 v41; // [rsp+28h] [rbp-60h]
  _QWORD *v42; // [rsp+30h] [rbp-58h]
  void *v43[4]; // [rsp+38h] [rbp-50h] BYREF

  v41 = -2LL;
  v42 = a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v40 = 1;
  v6 = a2[2];
  if ( v6 )
  {
    v7 = a3[2];
    if ( a3[3] < 8uLL )
      v8 = a3;
    else
      v8 = (_WORD *)*a3;
    if ( a2[3] < 8uLL )
      v9 = a2;
    else
      v9 = (_QWORD *)*a2;
    v10 = (unsigned __int64)v9 + 2 * v6;
    if ( a2[3] < 8uLL )
      v11 = (char *)a2;
    else
      v11 = (char *)*a2;
    while ( 1 )
    {
      if ( (unsigned __int64)v11 >= v10 )
      {
        v15 = -1LL;
        goto LABEL_24;
      }
      if ( !v7 )
        break;
      v12 = v7;
      v13 = v8;
      while ( *v13 != *(_WORD *)v11 )
      {
        ++v13;
        if ( !--v12 )
        {
          v13 = 0LL;
          break;
        }
      }
      if ( !v13 )
        break;
      v11 += 2;
    }
    if ( a2[3] < 8uLL )
      v14 = (char *)a2;
    else
      v14 = (char *)*a2;
    v15 = (v11 - v14) >> 1;
    do
    {
LABEL_24:
      if ( a3[3] < 8uLL )
        v16 = a3;
      else
        v16 = (_WORD *)*a3;
      if ( a3[2] )
      {
        v17 = a2[2];
        if ( v15 < v17 )
        {
          if ( a2[3] < 8uLL )
            v18 = a2;
          else
            v18 = (_QWORD *)*a2;
          v19 = (unsigned __int64)v18 + 2 * v17;
          if ( a2[3] < 8uLL )
            v20 = a2;
          else
            v20 = (_QWORD *)*a2;
          for ( i = (char *)v20 + 2 * v15; (unsigned __int64)i < v19; i += 2 )
          {
            v22 = a3[2];
            v23 = v16;
            while ( *v23 != *(_WORD *)i )
            {
              ++v23;
              if ( !--v22 )
              {
                v23 = 0LL;
                break;
              }
            }
            if ( v23 )
            {
              if ( a2[3] < 8uLL )
                v24 = (char *)a2;
              else
                v24 = (char *)*a2;
              v25 = (i - v24) >> 1;
              goto LABEL_48;
            }
          }
        }
      }
      v25 = -1LL;
LABEL_48:
      v26 = sub_1800120D0(a2, v43, v15, v25 - v15, v40, v41, v42);
      v27 = v26;
      v28 = a1[1];
      if ( v26 >= v28 || *a1 > v26 )
      {
        v34 = a1[2];
        if ( v28 == v34 && !((__int64)(v34 - v28) >> 5) )
        {
          v35 = (__int64)(v28 - *a1) >> 5;
          if ( v35 == 0x7FFFFFFFFFFFFFFLL )
            std::vector<void *>::_Xlen();
          v36 = (v34 - *a1) >> 5;
          if ( 0x7FFFFFFFFFFFFFFLL - (v36 >> 1) >= v36 )
            v37 = (v36 >> 1) + v36;
          else
            v37 = 0LL;
          if ( v37 < v35 + 1 )
            v37 = v35 + 1;
          sub_180015FC8(a1, v37);
        }
      }
      else
      {
        v29 = v26 - *a1;
        v30 = a1[2];
        if ( v28 == v30 && !((__int64)(v30 - v28) >> 5) )
        {
          v31 = (__int64)(v28 - *a1) >> 5;
          if ( v31 == 0x7FFFFFFFFFFFFFFLL )
            std::vector<void *>::_Xlen();
          v32 = (v30 - *a1) >> 5;
          if ( 0x7FFFFFFFFFFFFFFLL - (v32 >> 1) >= v32 )
            v33 = (v32 >> 1) + v32;
          else
            v33 = 0LL;
          if ( v33 < v31 + 1 )
            v33 = v31 + 1;
          sub_180015FC8(a1, v33);
        }
        v27 = *a1 + (v29 & 0xFFFFFFFFFFFFFFE0uLL);
      }
      v38 = a1[1];
      if ( v38 )
      {
        *(_QWORD *)(v38 + 24) = 7LL;
        *(_QWORD *)(v38 + 16) = 0LL;
        *(_WORD *)v38 = 0;
        sub_180014944(v38, v27);
      }
      a1[1] += 32LL;
      if ( v43[3] >= (void *)8 )
        operator delete(v43[0]);
      v15 = v25 + 1;
    }
    while ( v25 != -1 );
  }
  return a1;
}
