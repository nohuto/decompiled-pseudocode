/*
 * XREFs of sub_140013170 @ 0x140013170
 * Callers:
 *     sub_140005900 @ 0x140005900 (sub_140005900.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140013170(_WORD *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v3; // esi
  unsigned __int16 *v5; // rdx
  unsigned __int16 v6; // r8
  unsigned __int16 *v7; // r13
  unsigned __int16 v8; // r12
  unsigned __int16 v9; // r15
  WCHAR v10; // bx
  WCHAR v11; // ax
  unsigned __int16 *v12; // r11
  int v14; // r9d
  int v15; // r8d
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r9d
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int16 v27; // ax
  _WORD v28[4]; // [rsp+10h] [rbp-10h] BYREF
  unsigned __int16 *v29; // [rsp+18h] [rbp-8h]
  unsigned __int16 v30; // [rsp+20h] [rbp+0h]
  _WORD *v31; // [rsp+28h] [rbp+8h]
  unsigned __int16 *v32; // [rsp+30h] [rbp+10h]

  v3 = 0;
  v32 = a2;
  v31 = a1;
  v5 = a1;
  v30 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( *a3 >= *a1 )
  {
    v8 = 0;
    if ( (*a3 & 0xFFFE) != 0 )
    {
      do
      {
        v9 = 0;
        if ( (*v5 & 0xFFFE) != 0 )
        {
          do
          {
            if ( v8 + v9 >= *a3 >> 1 )
              break;
            v10 = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a3 + 1) + 2 * (v9 + (unsigned __int64)v8)));
            v11 = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)v31 + 1) + 2LL * v9));
            v5 = v31;
            if ( v10 != v11 )
              break;
            ++v9;
          }
          while ( v9 < (unsigned __int16)(*v31 >> 1) );
          v6 = v30;
          v3 = 0;
        }
        if ( v9 == *v5 >> 1
          && (v8 + v9 == *a3 >> 1 || *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * (v8 + (unsigned __int64)v9)) == 92) )
        {
          v29 = v7;
          ++v6;
          v28[0] = v8;
          v30 = v6;
          v7 = v28;
          v28[1] = v8 + v9;
        }
        ++v8;
      }
      while ( v8 < (unsigned __int16)(*a3 >> 1) );
      if ( v7 )
      {
        v12 = v32;
        if ( *v32 > *v5 && *a3 + v6 * (*v32 - (unsigned int)*v5) > a3[1] )
          return 2147483653LL;
        v14 = (a3[1] >> 1) - 1;
        v15 = (*a3 >> 1) - 1;
        while ( v15 >= 0 )
        {
          if ( v7 && v15 < v7[1] )
          {
            v16 = *v12;
            v17 = 0;
            if ( (*v12 & 0xFFFE) != 0 )
            {
              do
              {
                v18 = v17++;
                v19 = v14--;
                *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v19) = *(_WORD *)(*((_QWORD *)v12 + 1)
                                                                     + 2 * (((unsigned __int64)v16 >> 1) - v18)
                                                                     - 2);
                v16 = *v12;
              }
              while ( v17 < (unsigned __int16)(*v12 >> 1) );
            }
            v20 = *v7;
            v7 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
            v15 = v20 - 1;
          }
          else
          {
            v21 = v15--;
            v22 = v14--;
            *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v22) = *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v21);
          }
        }
        v23 = v14 + 1;
        if ( v23 < a3[1] >> 1 )
        {
          v24 = 2LL * v23;
          do
          {
            v25 = *((_QWORD *)a3 + 1);
            ++v23;
            v26 = v3++;
            v27 = *(_WORD *)(v24 + v25);
            v24 += 2LL;
            *(_WORD *)(v25 + 2 * v26) = v27;
          }
          while ( v23 < a3[1] >> 1 );
        }
        *a3 = 2 * v3;
      }
    }
  }
  return 0LL;
}
