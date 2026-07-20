/*
 * XREFs of PathReplaceGreedy @ 0x140013D18
 * Callers:
 *     CreateRegistryLinksForMachine @ 0x140005C50 (CreateRegistryLinksForMachine.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 */

__int64 __fastcall PathReplaceGreedy(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v3; // edi
  unsigned __int16 v6; // r8
  unsigned __int16 *v7; // r13
  unsigned __int16 v8; // r15
  unsigned __int16 v9; // r14
  int v10; // ecx
  WCHAR v11; // bx
  int v12; // edx
  unsigned __int16 *v13; // r11
  int v15; // r9d
  int v16; // r8d
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int16 v28; // ax
  _WORD v29[4]; // [rsp+10h] [rbp-10h] BYREF
  unsigned __int16 *v30; // [rsp+18h] [rbp-8h]
  unsigned __int16 v31; // [rsp+20h] [rbp+0h]
  unsigned __int16 *v32; // [rsp+28h] [rbp+8h]

  v3 = 0;
  v32 = a2;
  v31 = 0;
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
        if ( (*a1 & 0xFFFE) != 0 )
        {
          do
          {
            v10 = v8 + v9;
            if ( v10 >= *a3 >> 1 )
              break;
            v11 = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * v10));
            if ( v11 != RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v9)) )
              break;
            ++v9;
          }
          while ( v9 < (unsigned __int16)(*a1 >> 1) );
          v6 = v31;
          v3 = 0;
        }
        if ( v9 == *a1 >> 1 )
        {
          v12 = v8 + v9;
          if ( v12 == *a3 >> 1 || *(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * v12) == 92 )
          {
            v30 = v7;
            ++v6;
            v29[0] = v8;
            v31 = v6;
            v7 = v29;
            v29[1] = v8 + v9;
          }
        }
        ++v8;
      }
      while ( v8 < (unsigned __int16)(*a3 >> 1) );
      if ( v7 )
      {
        v13 = v32;
        if ( *v32 > *a1 && *a3 + v6 * (*v32 - (unsigned int)*a1) > a3[1] )
          return 2147483653LL;
        v15 = (a3[1] >> 1) - 1;
        v16 = (*a3 >> 1) - 1;
        while ( v16 >= 0 )
        {
          if ( v7 && v16 < v7[1] )
          {
            v17 = *v13;
            v18 = 0;
            if ( (*v13 & 0xFFFE) != 0 )
            {
              do
              {
                v19 = v18++;
                v20 = v15--;
                *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v20) = *(_WORD *)(*((_QWORD *)v13 + 1)
                                                                     + 2 * (((unsigned __int64)v17 >> 1) - v19)
                                                                     - 2);
                v17 = *v13;
              }
              while ( v18 < (unsigned __int16)(*v13 >> 1) );
            }
            v21 = *v7;
            v7 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
            v16 = v21 - 1;
          }
          else
          {
            v22 = v16--;
            v23 = v15--;
            *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v23) = *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v22);
          }
        }
        v24 = v15 + 1;
        if ( v24 < a3[1] >> 1 )
        {
          v25 = 2LL * v24;
          do
          {
            v26 = *((_QWORD *)a3 + 1);
            ++v24;
            v27 = v3++;
            v28 = *(_WORD *)(v25 + v26);
            v25 += 2LL;
            *(_WORD *)(v26 + 2 * v27) = v28;
          }
          while ( v24 < a3[1] >> 1 );
        }
        *a3 = 2 * v3;
      }
    }
  }
  return 0LL;
}
